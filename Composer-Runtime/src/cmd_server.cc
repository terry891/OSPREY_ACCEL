//
// Created by Chris Kjellqvist on 9/27/22.
//

#include <composer/verilator_server.h>
#include <composer_allocator_declaration.h>
#include "../include/cmd_server.h"
#include "../include/data_server.h"
#include "fpga_utils.h"
#include "mmio.h"
#include <sys/stat.h>

#include <cstdio>
#include <sys/mman.h>
#include <unistd.h>
#include <tuple>
#include <cassert>
#include <cerrno>
#include <cstring>

#include "response_poller.h"

// for shared memory
#include <fcntl.h>
#include <cmath>
#include "util.h"

#ifdef FPGA

#include "fpga_utils.h"
#include <composer_allocator_declaration.h>

#endif
#ifdef SIM
extern bool kill_sig;
#endif

#include <ctime>

system_core_pair::system_core_pair(int system, int core) {
  this->system = system;
  this->core = core;
}

using namespace composer;

cmd_server_file *csf;

pthread_mutex_t cmdserverlock = PTHREAD_MUTEX_INITIALIZER;
std::queue<composer::rocc_cmd> cmds;
std::unordered_map<system_core_pair, std::queue<int> *> in_flight;

constexpr int num_cmd_beats = (int) roundUp((float) (32 * 5) / AXIL_BUS_WIDTH);

static void *cmd_server_f(void *_) {
  setup_mmio();
  // map in the shared file
  int fd_composer = shm_open(cmd_server_file_name.c_str(), O_CREAT | O_RDWR, file_access_flags);
  if (fd_composer < 0) {
    printf("Failed to initialize cmd_file\n%s\n", strerror(errno));
    exit(errno);
  } else {
#ifdef VERBOSE
    printf("Successfully intialized cmd_file at %s\n", cmd_server_file_name.c_str());
#endif
  }
  // check the file size. It might already exist in which case we don't need to truncate it again
  struct stat shm_stats{};
  fstat(fd_composer, &shm_stats);
  if (shm_stats.st_size < sizeof(cmd_server_file)) {
    int tr_rc = ftruncate(fd_composer, sizeof(cmd_server_file));
    if (tr_rc) {
      std::cerr << "Failed to truncate cmd_server file" << std::endl;
      throw std::exception();
    }
  }
  auto &addr = *(cmd_server_file *) mmap(nullptr, sizeof(cmd_server_file), file_access_prots,
                                         MAP_SHARED, fd_composer, 0);
  csf = &addr;
  // we need to initialize it! This used to be a race condition, where the cmd_server thread was racing against the
  // poller thread to get to the file. The poller often won, found old dat anad mucked everything up :(
  cmd_server_file::init(addr);
#ifndef SIM
  response_poller::start_poller();
#endif

  std::vector<std::pair<int, FILE *>> alloc;
  pthread_mutex_lock(&addr.server_mut);
  pthread_mutex_lock(&addr.server_mut);
  while (true) {
#ifdef VERBOSE
    std::cerr << "Got Command in Server" << std::endl;
#endif
    // allocate space for response
    int id;
    if (addr.cmd.getXd()) {
      pthread_mutex_lock(&addr.free_list_lock);
      id = addr.free_list[addr.free_list_idx];
      addr.free_list_idx--;
      pthread_mutex_unlock(&addr.free_list_lock);

      // return response handle to client
      addr.pthread_wait_id = id;
      // end return response handle to client

      // enqueue command for main simulation thread to handle
      addr.pthread_wait_id = id;
    } else {
      addr.pthread_wait_id = id = 0xffff;
    }
    pthread_mutex_lock(&cmdserverlock);
    if (addr.quit) {
      pthread_mutex_unlock(&main_lock);
#ifdef SIM
      kill_sig = true;
#endif
      return nullptr;
    }
#if defined(FPGA) || defined(VSIM)
    #if defined(F1) or defined(Kria)
    pthread_mutex_lock(&bus_lock);
#endif
    auto *pack = addr.cmd.pack(pack_cfg);
    if (sizeof(pack[0]) > 64) {
      printf("FAILURE - cannot use peek-poke give the current ");
      exit(1);
    }
    for (int i = 0; i < num_cmd_beats; ++i) { // command is 5 32-bit payloads
      while(!peek_mmio(CMD_READY)){}
      poke_mmio(CMD_BITS, pack[i]);
      poke_mmio(CMD_VALID, 1);
    }
    free(pack);

#endif
#ifdef VERBOSE
    std::cerr << "Successfully delivered command\n" << std::endl;
#endif
#if defined(F1) or defined(Kria)
    pthread_mutex_unlock(&bus_lock);
#else
    // sim only
    cmds.push(addr.cmd);
#endif
    // let main thread know how to return result
    if (addr.cmd.getXd()) {
      const auto key = system_core_pair(addr.cmd.getSystemId(), addr.cmd.getCoreId());
      auto &m = in_flight;
      std::queue<int> *q;
      auto iterator = m.find(key);
      if (iterator == m.end()) {
        q = new std::queue<int>;
        m[key] = q;
      } else
        q = iterator->second;
      assert(id != 0xffff);
      q->push(id);
    }
    pthread_mutex_unlock(&addr.cmd_recieve_server_resp_lock);
    pthread_mutex_unlock(&cmdserverlock);
    // re-lock self to stall
    pthread_mutex_lock(&addr.server_mut);
  }
//  munmap(&addr, sizeof(cmd_server_file));
//  shm_unlink(cmd_server_file_name.c_str());
//  return nullptr;
}

void cmd_server::start() {
  pthread_t thread;
  pthread_create(&thread, nullptr, cmd_server_f, nullptr);
}

void register_reponse(uint32_t *r_buffer) {
  composer::rocc_response r(r_buffer, pack_cfg);
  system_core_pair pr(r.system_id, r.core_id);
  pthread_mutex_lock(&cmdserverlock);
  auto it = in_flight.find(pr);
  if (it == in_flight.end()) {
    std::cerr << "Error: Got bad response from HW: " << r_buffer[0] << " " << r_buffer[1] << " " << r_buffer[2]
              << std::endl;
    pthread_mutex_unlock(&cmdserverlock);
    pthread_mutex_unlock(&main_lock);
  } else {
    int id = in_flight[pr]->front();
    csf->responses[id] = r;
    // allow client thread to access response
    pthread_mutex_unlock(&csf->wait_for_response[id]);
    in_flight[pr]->pop();
    pthread_mutex_unlock(&cmdserverlock);
  }
}
