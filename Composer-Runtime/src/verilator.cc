#include <iostream>

#include <verilated.h>
#include "Vcomposer.h"
#include <cinttypes>
#include <queue>
#include <pthread.h>
#include <csignal>
#include "../include/data_server.h"
#include "../include/cmd_server.h"

#include <composer_allocator_declaration.h>
#include "verilated_fst_c.h"
#include "../include/verilator.h"
#include "../include/ddr_macros.h"
#include "util.h"

#ifdef USE_DRAMSIM
// dramsim3
#include "dram_system.h"

using namespace dramsim3;
#endif

uint64_t main_time = 0;

extern pthread_mutex_t cmdserverlock;
extern std::queue<composer::rocc_cmd> cmds;
extern std::unordered_map<system_core_pair, std::queue<int> *> in_flight;

pthread_mutex_t main_lock = PTHREAD_MUTEX_INITIALIZER;
bool kill_sig = false;

#ifdef USE_DRAMSIM
Config dramsim3config("../DRAMsim3/configs/DDR4_8Gb_x16_2666.ini", "./");
#endif

void sig_handle(int sig) {
#ifdef TRACE
  tfp->close();

  std::cerr << "FST written" << std::endl;
#endif
  exit(sig);
}

void enqueue_transaction(v_address_channel<ComposerMemIDDtype> &chan, std::queue<memory_transaction *> &lst) {
  if (chan.getValid() && chan.getReady()) {
    try {
      char *addr = (char *) at.translate(chan.getAddr());
      int sz = 1 << chan.getSize();
      int len = 1 + chan.getLen(); // per axi
      bool is_fixed = chan.getBurst() == 0;
      int id = chan.getId();
      uint64_t fpga_addr = chan.getAddr();
      auto tx = new memory_transaction(addr, sz, len, 0, is_fixed, id, fpga_addr);
      lst.push(tx);
    } catch (std::exception &e) {
      tfp->dump(main_time);
      tfp->close();
      throw e;
    }
  }
}

enum cmd_transfer_state {
  CMD_INACTIVE,
  CMD_BITS_WRITE_ADDR,
  CMD_BITS_WRITE_DAT,
  CMD_BITS_WRITE_B,
  CMD_VALID_ADDR,
  CMD_VALID_DAT,
  CMD_VALID_WRITE_B,
  CMD_RECHECK_READY_ADDR,
  CMD_RECHECK_READY_DAT,

};

enum resp_transfer_state {
  RESPT_INACTIVE,
  RESPT_BITS_ADDR,
  RESPT_BITS_READ,
  RESPT_READY_ADDR,
  RESPT_READY_WRITE,
  RESPT_READY_WRITE_B,
  RESPT_RECHECK_VALID_ADDR,
  RESPT_RECHECK_VALID_READ,
};

enum update_state {
  UPDATE_IDLE_RESP,
  UPDATE_IDLE_CMD,
  UPDATE_CMD_ADDR,
  UPDATE_CMD_WAIT,
  UPDATE_RESP_ADDR,
  UPDATE_RESP_WAIT
};

struct command_transaction {
  uint32_t *cmdbuf = nullptr;
  int8_t progress = 0;
  int id = 0;
  cmd_transfer_state state = CMD_INACTIVE;
  bool ready_for_command = false;

  static const int payload_length = 5;
};

struct response_transaction {
  static const int payload_length = 3;
  uint32_t resbuf[payload_length]{};
  uint8_t progress = 0;

  resp_transfer_state state = RESPT_INACTIVE;
};

static uint64_t get_dimm_address(uint64_t addr) {
  uint64_t acc = 0;
  uint64_t cursor = 1;
  int real = 0;
  for (int i = 0; i < 64; ++i) {
    if (addrMask & cursor) {
      if (addr & cursor) {
        acc |= 1 << real;
      }
      ++real;
    }
    cursor <<= 1;
  }
  return acc;
}

#ifdef TRACE
VerilatedFstC *tfp;
#endif

void tick(Vcomposer *top) {
  try {
    top->eval();
  } catch (std::exception &e) {
    tfp->dump(main_time);
    tfp->close();
    std::cerr << "Emergency dump!" << std::endl;
    throw e;
  }
}

//#define TRACE

#ifdef USE_DRAMSIM
#define RLOCK pthread_mutex_lock(&axi4_mem.read_queue_lock);
#define WLOCK pthread_mutex_lock(&axi4_mem.write_queue_lock);
#define RUNLOCK pthread_mutex_unlock(&axi4_mem.read_queue_lock);
#define WUNLOCK pthread_mutex_unlock(&axi4_mem.write_queue_lock);
#else
#define RLOCK
#define WLOCK
#define RUNLOCK
#define WUNLOCK
#endif


void run_verilator() {
  // start servers to communicate with user programs
  const char *v[3] = {"", "+verilator+seed+14934534", "+verilator+rand+reset+2"};

  Verilated::commandArgs(3, v);

  Vcomposer top;

  Verilated::traceEverOn(true);
#if defined(TRACE)
  tfp = new VerilatedFstC;
  top.trace(tfp, 30);
  tfp->open("trace.fst");
#endif

  mem_interface<ComposerMemIDDtype> axi4_mems[NUM_DDR_CHANNELS];
  for (int i = 0; i < NUM_DDR_CHANNELS; ++i) {
    axi4_mems[i].id = i;
  }

#if defined(COMPOSER_HAS_DMA)
  mem_interface<ComposerDMAIDtype> dma;
  int dma_txprogress = 0;
  int dma_txlength = 0;
  dma.aw = new v_address_channel<ComposerDMAIDtype>(top.dma_awready, top.dma_awvalid, top.dma_awid,
                                                    top.dma_awsize, top.dma_awburst,
                                                    top.dma_awaddr, top.dma_awlen);
  dma.ar = new v_address_channel<ComposerDMAIDtype>(top.dma_arready, top.dma_arvalid, top.dma_arid,
                                                    top.dma_arsize, top.dma_arburst,
                                                    top.dma_araddr, top.dma_arlen);
  dma.w = new data_channel<ComposerDMAIDtype>(top.dma_wready, top.dma_wvalid,
                                              &top.dma_wstrb, top.dma_wlast, nullptr);
  dma.r = new data_channel<ComposerDMAIDtype>(top.dma_rready, top.dma_rvalid,
                                              nullptr, top.dma_rlast, &top.dma_rid);
  dma.w->setData((char *) top.dma_rdata.m_storage);
  dma.r->setData((char *) top.dma_wdata.m_storage);
  dma.b = new response_channel<ComposerDMAIDtype>(top.dma_bready, top.dma_bvalid, top.dma_bid);
#endif
#ifdef USE_DRAMSIM
  for (auto &axi4_mem: axi4_mems) {
    axi4_mem.mem_sys = new JedecDRAMSystem(
            dramsim3config,
            "",
            [&axi4_mem](uint64_t addr) {
              RLOCK
              auto tx = axi4_mem.in_flight_reads[addr]->front();
              tx->dram_tx_load_progress++;
              int hold_idx = int(addr - tx->fpga_addr) / 8;
              tx->holds[hold_idx] = true;
              int bytes_loaded = tx->dram_tx_load_progress * 8;
              int total_tx_size = tx->size * tx->len;
              bool done = bytes_loaded >= total_tx_size;
              if (tx->dramsim_hasBeatReady()) {
                tx->can_be_last = done;
                auto intermediate_tx = new memory_transaction(tx->addr, tx->size, 1, 0, false, tx->id, 0);
                tx->addr += tx->size;
                intermediate_tx->fpga_addr = tx->fpga_addr;
                intermediate_tx->can_be_last = done;
                tx->progress += (DATA_BUS_WIDTH / 64);
                axi4_mem.read_transactions.push(intermediate_tx);
              }
              axi4_mem.in_flight_reads[addr]->pop();
              if (done)
                delete tx;
              RUNLOCK
            },
            [&axi4_mem](uint64_t addr) {
              WLOCK
              auto tx = axi4_mem.in_flight_writes[addr]->front();
              tx->progress--;
              if (tx->progress == 0) {
                axi4_mem.b->to_enqueue.push(tx->id);
                delete tx;
              }
              axi4_mem.in_flight_writes[addr]->pop();
              WUNLOCK
            });

  }
#endif
#ifdef VERBOSE
  printf("There are %d DDR Channels\n", NUM_DDR_CHANNELS);
#endif
  // _(.[a-z]?)(_bits)?_
#if NUM_DDR_CHANNELS >= 1
  init_ddr_interface(0)
  axi4_mems[0].w->setData((char *) &top.M00_AXI_wdata.at(0));
  axi4_mems[0].r->setData((char *) &top.M00_AXI_rdata.at(0));
#if NUM_DDR_CHANNELS >= 2
  init_ddr_interface(1)
#if NUM_DDR_CHANNELS >= 4
  init_ddr_interface(2)
  init_ddr_interface(3)
#endif
#endif
#endif
  // reset circuit
  top.reset = 1;
  for (auto &mem: axi4_mems) {
#ifndef USE_DRAMSIM
    mem.ar->setReady(1);
    mem.w->setReady(0);
#endif
    mem.r->setValid(0);
    mem.b->setValid(0);
    mem.aw->setReady(1);
  }
#ifdef COMPOSER_HAS_DMA
  dma.b->setReady(0);
  dma.ar->setValid(0);
  dma.aw->setValid(0);
  dma.w->setValid(0);
  dma.r->setReady(0);
#endif

  std::map<std::tuple<int, int>, unsigned long long> start_times;

  for (int i = 0; i < 50; ++i) {
    top.clock = 0;
    tick(&top);
#ifdef TRACE
    tfp->dump(main_time);
#endif
    main_time += 4;
    top.clock = 1;
    tick(&top);
#ifdef TRACE
    tfp->dump(main_time);
#endif
    main_time += 4;
  }
  top.reset = 0;
  top.clock = 0;

  command_transaction ongoing_cmd;
  response_transaction ongoing_rsp;
  update_state ongoing_update = UPDATE_IDLE_CMD;
  int cmds_inflight = 0;
  bool bus_occupied = false;
  int check_freq = 50;
#ifdef VERBOSE
  printf("main time %lld\n", main_time);
#endif
  while (not kill_sig) {
    // clock is high after posedge - changes now are taking place after posedge,
    // and will take effect on negedge
    if (main_time % 1000000 <= 1) {
#ifdef VERBOSE
      printf("main time: %lld\n", main_time);
#endif
    }

    // ------------ HANDLE COMMAND INTERFACE ----------------


    // start queueing up a new command if one is available
    top.S00_AXI_awvalid = top.S00_AXI_wvalid = top.S00_AXI_rready = top.S00_AXI_arvalid = top.S00_AXI_bready = 0;
    switch (ongoing_cmd.state) {
      // tell the composer that we're going to send 32-bits of a command over the PCIE bus
      case CMD_BITS_WRITE_ADDR:
        ongoing_cmd.ready_for_command = false;
        top.S00_AXI_awvalid = 1;
        top.S00_AXI_awlen = 0;
        top.S00_AXI_awid = 0;
        top.S00_AXI_awaddr = CMD_BITS;
        if (top.S00_AXI_awready) {
          ongoing_cmd.state = CMD_BITS_WRITE_DAT;
//          printf("to write dat\n");
        }
        break;
        // send the command over the PCIE bus
      case CMD_BITS_WRITE_DAT:
        top.S00_AXI_wvalid = 1;
#if AXIL_BUS_WIDTH <= 64
        top.S00_AXI_wdata = ongoing_cmd.cmdbuf[ongoing_cmd.progress];
#else
        top.S00_AXI_wdata.at(0) = ongoing_cmd.cmdbuf[ongoing_cmd.progress];
#endif
        if (top.S00_AXI_wready) {
          ongoing_cmd.state = CMD_BITS_WRITE_B;
//          printf("wrote %d, going to bits write response. BITS: %08x\n", ongoing_cmd.progress,
//                 ongoing_cmd.cmdbuf[ongoing_cmd.progress]);
        }
        break;
      case CMD_BITS_WRITE_B:
        top.S00_AXI_bready = 1;
        if (top.S00_AXI_bvalid) {
          if (top.S00_AXI_bresp == 0) {
            ongoing_cmd.state = CMD_VALID_ADDR;
//            printf("to valid addr\n");
          } else {
            fprintf(stderr, "Recieved error from write response!");
            sig_handle(1);
          }
        }
        break;
        // We just send the 32-bits, now "simulate" the decoupled interface by toggling to the CMD_VALID bit to 1
        // This bit is visible from the CMD_VALID bit, so we need to perform an AXI transaction
      case CMD_VALID_ADDR:
        top.S00_AXI_awvalid = 1;
        top.S00_AXI_awaddr = CMD_VALID;
        top.S00_AXI_awlen = 0; // length is actually one - see AXI spec
        top.S00_AXI_awid = 0;
        if (top.S00_AXI_awready) {
//          printf("to valid dat\n");
          ongoing_cmd.state = CMD_VALID_DAT;
        }
        break;
        // send the CMD_VALID bit
      case CMD_VALID_DAT:
        top.S00_AXI_wvalid = 1;
#if AXIL_BUS_WIDTH <= 64
        top.S00_AXI_wdata = 1;
#else
        top.S00_AXI_wdata.at(0) = 1;
#endif
        if (top.S00_AXI_wready) {
//          printf("to valid b\n");
          ongoing_cmd.state = CMD_VALID_WRITE_B;
        }
        break;
      case CMD_VALID_WRITE_B:
        top.S00_AXI_bready = 1;
        if (top.S00_AXI_bvalid) {
          if (top.S00_AXI_bresp == 0) {
            ongoing_cmd.progress++;
            // send last thing, yield bus
            if (ongoing_cmd.progress == command_transaction::payload_length) {
              ongoing_cmd.state = CMD_INACTIVE;
              bus_occupied = false;
            } else {
              // else, need to send the next 32-bit chunk and see that the channel is "ready"
              ongoing_cmd.state = CMD_RECHECK_READY_ADDR;
            }
          } else {
            fprintf(stderr, "Recieved error from write response!");
            sig_handle(1);
          }
        }
        break;
        // We just send 32-bits over the interface, check if it's ready for another 32b by requesting ready from the
        // CMD_READY bit
      case CMD_RECHECK_READY_ADDR:
        top.S00_AXI_arvalid = 1;
        top.S00_AXI_araddr = CMD_READY;
        top.S00_AXI_arlen = 0;
        top.S00_AXI_arid = 0;
        if (top.S00_AXI_arready) {
          ongoing_cmd.state = CMD_RECHECK_READY_DAT;
        }
        break;
        // read the CMD_READY bit
      case CMD_RECHECK_READY_DAT:
        top.S00_AXI_rready = 1;
        if (top.S00_AXI_rvalid) {
          // if it's ready for another command
          if (top.S00_AXI_rdata) {
            ongoing_cmd.state = CMD_BITS_WRITE_ADDR;
          } else {
            ongoing_cmd.state = CMD_RECHECK_READY_ADDR;
          }
        }
        break;
      case CMD_INACTIVE:
        if (ongoing_cmd.ready_for_command &&
            !bus_occupied &&
            (ongoing_update == UPDATE_IDLE_CMD || ongoing_update == UPDATE_IDLE_RESP)) {
          pthread_mutex_lock(&cmdserverlock);
          if (not cmds.empty()) {
            bus_occupied = true;
            ongoing_cmd.state = CMD_BITS_WRITE_ADDR;
            if (cmds.front().getXd()) {
              auto id = std::tuple<int, int>(cmds.front().getSystemId(), cmds.front().getCoreId());
              start_times[id] = main_time;
            }
            ongoing_cmd.cmdbuf = cmds.front().pack(pack_cfg);
            kill_sig = cmds.front().getOpcode() == ROCC_OP_FLUSH;
            ongoing_cmd.progress = 0;
            if (cmds.front().getXd() == 1)
              cmds_inflight++;
            cmds.pop();
          }
          pthread_mutex_unlock(&cmdserverlock);
        }
        break;
    }
    switch (ongoing_rsp.state) {
      case RESPT_INACTIVE:
        break;
      case RESPT_BITS_ADDR:
        top.S00_AXI_araddr = RESP_BITS;
        top.S00_AXI_arlen = 0;
        top.S00_AXI_arvalid = 1;
        top.S00_AXI_arid = 0;
        if (top.S00_AXI_arready) {
          ongoing_rsp.state = RESPT_BITS_READ;
        }
      case RESPT_BITS_READ:
        top.S00_AXI_rready = 1;
        if (top.S00_AXI_rvalid) {
#if AXIL_BUS_WIDTH <= 64
          ongoing_rsp.resbuf[ongoing_rsp.progress++] = top.S00_AXI_rdata;
#else
          ongoing_rsp.resbuf[ongoing_rsp.progress++] = top.S00_AXI_rdata.at(0);
#endif
          ongoing_rsp.state = RESPT_READY_ADDR;
        }
        break;
      case RESPT_READY_ADDR:
        top.S00_AXI_awvalid = 1;
        top.S00_AXI_awlen = 0;
        top.S00_AXI_awaddr = RESP_READY;
        top.S00_AXI_awid = 0;
        if (top.S00_AXI_awready) {
          ongoing_rsp.state = RESPT_READY_WRITE;
        }
        break;
      case RESPT_READY_WRITE:
        top.S00_AXI_wvalid = 1;
#if AXIL_BUS_WIDTH <= 64
        top.S00_AXI_wdata = 1;
#else
        top.S00_AXI_wdata.at(0) = 1;
#endif
        if (top.S00_AXI_wready) {
          ongoing_rsp.state = RESPT_READY_WRITE_B;
        }
      case RESPT_READY_WRITE_B:
        top.S00_AXI_bready = 1;
        if (top.S00_AXI_bvalid) {
          if (top.S00_AXI_bresp == 0) {
            if (ongoing_rsp.progress == response_transaction::payload_length) {
              composer::rocc_response r(ongoing_rsp.resbuf, pack_cfg);
              auto id = std::tuple<int, int>(r.system_id, r.core_id);
              auto start = start_times[id];
#ifdef VERBOSE
              printf("Command took %f us\n", float((main_time - start)) / 1000);
#endif
              register_reponse(ongoing_rsp.resbuf);
              cmds_inflight--;
              bus_occupied = false;
//              printf("respt-ready-b -> respt-inactive\n");
              ongoing_rsp.state = RESPT_INACTIVE;
            } else {
//              printf("Not done yet %d/%d. respt-ready-b -> respt-recheck-valid-address\n", ongoing_rsp.progress,
//                     response_transaction::payload_length);
              ongoing_rsp.state = RESPT_RECHECK_VALID_ADDR;
            }
          } else {
            fprintf(stderr, "Received error from write response!");
            sig_handle(1);
          }
        }
        break;
      case RESPT_RECHECK_VALID_ADDR:
        top.S00_AXI_arvalid = 1;
        top.S00_AXI_araddr = RESP_VALID;
        top.S00_AXI_arlen = 0;
        top.S00_AXI_arid = 0;
        if (top.S00_AXI_arready) {
          ongoing_rsp.state = RESPT_RECHECK_VALID_READ;
        }
        break;
      case RESPT_RECHECK_VALID_READ:
        top.S00_AXI_rready = 1;
        if (top.S00_AXI_rvalid) {
          if (top.S00_AXI_rdata) {
            ongoing_rsp.state = RESPT_BITS_ADDR;
          } else {
            ongoing_rsp.state = RESPT_RECHECK_VALID_ADDR;
          }
        }
        break;
    }
    switch (ongoing_update) {
      case UPDATE_IDLE_RESP:
        if (!bus_occupied && (main_time % check_freq == 0)) {
          bus_occupied = true;
          ongoing_update = UPDATE_RESP_ADDR;
        }
        break;
      case UPDATE_RESP_ADDR:
        top.S00_AXI_arvalid = 1;
        top.S00_AXI_arlen = 0;
        top.S00_AXI_arid = 0;
        top.S00_AXI_araddr = RESP_VALID;
        if (top.S00_AXI_arready) {
          ongoing_update = UPDATE_RESP_WAIT;
        }
        break;
      case UPDATE_RESP_WAIT:
        top.S00_AXI_rready = 1;
        if (top.S00_AXI_rvalid) {
          ongoing_rsp.progress = 0;
          if (
#if AXIL_BUS_WIDTH <= 64
top.S00_AXI_rdata == 1
#else
            top.S00_AXI_rdata.at(0) == 1
#endif
                  ) {
#ifdef VERBOSE
            printf("Found valid response on cycle %lu!!! %d %d\n", main_time, top.S00_AXI_rvalid, top.S00_AXI_rdata);
#endif
            ongoing_rsp.state = RESPT_BITS_ADDR;
          } else {
            bus_occupied = false;
          }
          ongoing_update = UPDATE_IDLE_CMD;
        }
        break;
      case UPDATE_IDLE_CMD:
        if (!bus_occupied && (main_time % check_freq == 0)) {
          bus_occupied = true;
          ongoing_update = UPDATE_CMD_ADDR;
        }
        break;
      case UPDATE_CMD_ADDR:
        top.S00_AXI_arvalid = 1;
        top.S00_AXI_arid = 0;
        top.S00_AXI_araddr = CMD_READY;
        top.S00_AXI_arlen = 0;
        if (top.S00_AXI_arready) {
          ongoing_update = UPDATE_CMD_WAIT;
        }
        break;
      case UPDATE_CMD_WAIT:
        top.S00_AXI_rready = 1;
        if (top.S00_AXI_rvalid) {
          ongoing_cmd.ready_for_command = top.S00_AXI_rdata;
          if (cmds_inflight > 0) {
            ongoing_update = UPDATE_IDLE_RESP;
          } else {
            ongoing_update = UPDATE_IDLE_CMD;
          }
        }
        bus_occupied = false;
        break;
    }

#ifdef USE_DRAMSIM
    // approx clock diff
    for (int i = 0; i < 13; ++i) {
      for (auto &mem: axi4_mems) {
        mem.mem_sys->ClockTick();
      }
    }
#endif
    for (auto &axi4_mem: axi4_mems) {
      if (axi4_mem.r->getValid() && axi4_mem.r->getReady()) {
        RLOCK
        auto tx = axi4_mem.read_transactions.front();
        tx->progress++;
        if (not tx->fixed) {
          tx->addr += tx->size;
        }
        if (axi4_mem.r->getLast() || !tx->can_be_last) {
          axi4_mem.read_transactions.pop();
          delete tx;
        }
        RUNLOCK
      }

#ifdef USE_DRAMSIM
      if (axi4_mem.ar->getReady() && axi4_mem.ar->getValid()) {
        uint64_t addr = axi4_mem.ar->getAddr();
        char *ad = (char *) at.translate(addr);
        auto txsize = (int) 1 << axi4_mem.ar->getSize();
        auto txlen = axi4_mem.ar->getLen() + 1;
        auto tx = new memory_transaction(ad, txsize, txlen, 0, false,
                                         axi4_mem.ar->getId(), addr);
        // 64b per DRAM transaction
        RLOCK
        axi4_mem.to_enqueue_read = tx;
        RUNLOCK
      }
#endif
    }

    top.clock = 1; // posedge
    main_time += 4;
    tick(&top);
#ifdef TRACE
    tfp->dump(main_time);
#endif

    // ------------ HANDLE MEMORY INTERFACES ----------------
    for (mem_interface<ComposerMemIDDtype> &axi4_mem: axi4_mems) {
      if (axi4_mem.b->getReady() && axi4_mem.b->getValid()) {
        axi4_mem.b->send_ids.pop();
      }

      RLOCK
      if (not axi4_mem.read_transactions.empty() && not axi4_mem.r->getValid()) {
        auto tx = axi4_mem.read_transactions.front();
        int start = (tx->progress * tx->size) % (DATA_BUS_WIDTH / 8);
        char *dest = (char *) axi4_mem.r->getData() + start;
        memcpy(dest, tx->addr, tx->size);
        bool am_done = tx->len == (tx->progress + 1);
        axi4_mem.r->setValid(1);
        axi4_mem.r->setLast(am_done && tx->can_be_last);
        axi4_mem.r->setId(tx->id);
      } else {
        axi4_mem.r->setValid(0);
      }
      RUNLOCK

      // update all channels with new information now that we've updated states
      if (not axi4_mem.b->send_ids.empty()) {
        axi4_mem.b->setValid(1);
        axi4_mem.b->setId(axi4_mem.b->send_ids.front());
      } else {
        axi4_mem.b->setValid(0);
      }

      WLOCK
      if (!axi4_mem.b->to_enqueue.empty()) {
        axi4_mem.b->send_ids.push(axi4_mem.b->to_enqueue.front());
        axi4_mem.b->to_enqueue.pop();
      }
      WUNLOCK
      // slave response to valid transaction and write valid
      // write can respond before write address so just ahve to wait for address
      // to be recieved. ready and valid have to be high at the same time for this
      // to work
      WLOCK
      if (not axi4_mem.write_transactions.empty() and not axi4_mem.w->getReady()) {
#ifdef USE_DRAMSIM
        axi4_mem.w->setReady(axi4_mem.to_enqueue_write == nullptr);
#else
        axi4_mem.w->setReady(1);
#endif
        if (axi4_mem.w->getValid() && axi4_mem.w->getReady()) {
          auto trans = axi4_mem.write_transactions.front();
          // refer to https://developer.arm.com/documentation/ihi0022/e/AMBA-AXI3-and-AXI4-Protocol-Specification/Single-Interface-Requirements/Transaction-structure/Data-read-and-write-structure?lang=en#CIHIJFAF
          char *src = axi4_mem.w->getData();
          ComposerStrobeSimDtype strobe = axi4_mem.w->getStrobe();
          uint32_t off = 0;
          // for writes, we need to account for alignment and strobe,so we're re-aligning address here
          // align to 64B - zero out bottom 6b
          auto addr = trans->addr;
          while (strobe != 0) {
            if (strobe & 1) {
#ifdef COMPOSER_HAS_DMA
              auto curr_ptr = uintptr_t(addr + off);
              auto base_ptr = uintptr_t(dma_ptr);
              auto end_ptr = uintptr_t(dma_ptr + dma_len);
              if (dma_in_progress and dma_write and curr_ptr < end_ptr and curr_ptr >= base_ptr) {
                // we're performing a DMA into the same address space so just make sure that the values match up...
                if (addr[off] != src[off]) {
                  std::cerr << "DMA write was not a no-op. " << off << " " << int(addr[off]) << " " << int(src[off])
                            << std::endl;
                  tfp->close();
                  throw std::exception();
                }
              } else {
                addr[off] = src[off];
              }
#else
              addr[off] = src[off];
#endif
            }
            off += 1;
            strobe >>= 1;
          }
          trans->progress++;

          if (not trans->fixed) {
            trans->addr += trans->size;
          }

          if (axi4_mem.w->getLast()) {
            axi4_mem.write_transactions.pop();

#ifdef USE_DRAMSIM
            trans->dram_tx_enqueue_progress = 0;
            trans->dram_tx_len = trans->len * trans->size >> 3;
            trans->progress = trans->dram_tx_len;
            axi4_mem.to_enqueue_write = trans;
#else
            axi4_mem.b->to_enqueue.push(trans->id);
            delete trans;
#endif
          }
        }
      } else {
        axi4_mem.w->setReady(0);
      }
      enqueue_transaction(*axi4_mem.aw, axi4_mem.write_transactions);
      WUNLOCK

#ifdef USE_DRAMSIM
      RLOCK
      if (axi4_mem.to_enqueue_read != nullptr) {
        auto &r = *axi4_mem.to_enqueue_read;
        auto dimm_base = get_dimm_address(r.fpga_addr);
        auto dimm_addr = dimm_base + 8 * r.dram_tx_enqueue_progress;
        if (axi4_mem.mem_sys->WillAcceptTransaction(dimm_addr, false)) {
          axi4_mem.mem_sys->AddTransaction(dimm_addr, false);
          if (axi4_mem.in_flight_reads.find(dimm_addr) == axi4_mem.in_flight_reads.end())
            axi4_mem.in_flight_reads[dimm_addr] = new std::queue<memory_transaction *>();
          auto &q = *axi4_mem.in_flight_reads[dimm_addr];
          q.push(&r);
          r.dram_tx_enqueue_progress++;
        }
        if (r.dram_tx_len == r.dram_tx_enqueue_progress) {
          axi4_mem.to_enqueue_read = nullptr;
        }
      }
      RUNLOCK

      WLOCK
      if (axi4_mem.to_enqueue_write != nullptr) {
        auto &w = *axi4_mem.to_enqueue_write;
        auto dimm_addr = get_dimm_address(w.fpga_addr) + w.dram_tx_enqueue_progress * 8;
        if (axi4_mem.mem_sys->WillAcceptTransaction(dimm_addr, true)) {
          w.dram_tx_enqueue_progress++;
          axi4_mem.mem_sys->AddTransaction(dimm_addr, true);
          if (axi4_mem.in_flight_writes.find(dimm_addr) == axi4_mem.in_flight_writes.end())
            axi4_mem.in_flight_writes[dimm_addr] = new std::queue<memory_transaction *>;
          axi4_mem.in_flight_writes[dimm_addr]->push(&w);
        }
        if (w.dram_tx_enqueue_progress == w.dram_tx_len) {
          axi4_mem.to_enqueue_write = nullptr;
        }
      }
      WUNLOCK

      RLOCK
      // to signify that the AXI4 DDR Controller is busy enqueueing another transaction in the DRAM
      axi4_mem.ar->setReady(axi4_mem.to_enqueue_read == nullptr);
      RUNLOCK
#else
      enqueue_transaction(*axi4_mem.ar, axi4_mem.read_transactions);
#endif

    }

#ifdef COMPOSER_HAS_DMA
    pthread_mutex_lock(&dma_lock);
    // enqueue dma transaction into dma axi interface
    dma.aw->setValid(0);
    dma.ar->setValid(0);
    dma.b->setReady(0);
    dma.w->setValid(0);
    dma.r->setReady(0);
    if (dma_valid && not dma_in_progress) {
      dma_txprogress = 0;
      dma_txlength = dma_len >> 6;
      if (dma_write) {
        dma.aw->setValid(1);
        dma.aw->setAddr(dma_fpga_addr);
        dma.aw->setId(0);
        dma.aw->setSize(6);
        dma.aw->setLen((dma_len / 64) - 1);
        dma.aw->setBurst(1);
        if (dma.aw->fire()) {
          dma_in_progress = true;
        }
      } else {
        dma.ar->setValid(1);
        dma.ar->setAddr(dma_fpga_addr);
        dma.ar->setId(0);
        dma.ar->setSize(6);
        dma.ar->setLen((dma_len / 64) - 1);
        dma.ar->setBurst(1);
        if (dma.ar->fire()) {
          dma_in_progress = true;
        }
      }
    }

    if (dma_in_progress) {
      if (dma_write) {
        if (dma_txprogress < dma_txlength) {
          dma.w->setValid(1);
          memcpy(dma.w->getData(), dma_ptr + 64 * dma_txprogress, 64);
          dma.w->setLast(dma_txprogress + 1 == dma_txlength);
          dma.w->setStrobe(0xFFFFFFFFFFFFFFFFL);
          if (dma.w->getReady()) {
            dma_txprogress++;
          }
        } else {
          dma.b->setReady(1);
          if (dma.b->fire()) {
            dma_valid = false;
            dma_in_progress = false;
            pthread_mutex_unlock(&dma_wait_lock);
          }
        }
      } else {
        dma.r->setReady(1);
        if (dma.r->fire()) {
          char *rval = dma.r->getData();
          char *src_val = dma_ptr + 64 * dma_txprogress;
          for (int i = 0; i < 64; ++i) {
            if (rval[i] != src_val[i]) {
              std::cerr << "Got an unexpected value from the DMA... " << i << " " << dma_txprogress << " " << rval[i]
                        << " " << src_val[i] << std::endl;
              throw std::exception();
            }
          }
          dma_txprogress++;
          if (dma_txprogress == dma_txlength) {
            dma_valid = false;
            dma_in_progress = false;
            pthread_mutex_unlock(&dma_wait_lock);
          }
        }
      }
    }
    pthread_mutex_unlock(&dma_lock);
#endif
    top.clock = 0; // negedge
    tick(&top);
    main_time += 4;
#ifdef TRACE
    tfp->dump(main_time);
#endif
  }
#ifdef TRACE
#ifdef VERBOSE
  printf("printing traces\n");
#endif
  fflush(stdout);
  tfp->close();
#endif
  sig_handle(0);
}


int main() {
  signal(SIGTERM, sig_handle);
  signal(SIGABRT, sig_handle);
  data_server::start();
  cmd_server::start();
#ifdef VERBOSE
  printf("Entering verilator\n");
#endif
  try {
    run_verilator();
    pthread_mutex_lock(&main_lock);
    pthread_mutex_lock(&main_lock);
#ifdef VERBOSE
    printf("Main thread exiting\n");
#endif
  } catch (std::exception &e) {
    sig_handle(1);
  }
  sig_handle(0);
}
