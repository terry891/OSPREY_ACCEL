//
// Created by Chris Kjellqvist on 9/27/22.
//

#include <cstring>
#include <sys/mman.h>
#include <unistd.h>
#include <vector>
#include <string>

#include <composer_allocator_declaration.h>
#include <composer/verilator_server.h>

#include "../include/data_server.h"

#include <fcntl.h>

#ifdef SIM
#ifdef COMPOSER_HAS_DMA
pthread_mutex_t dma_lock = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t dma_wait_lock = PTHREAD_MUTEX_INITIALIZER;
bool dma_in_progress = false;
uint64_t dma_fpga_addr;
bool dma_valid = false;
char *dma_ptr;
size_t dma_len;
bool dma_write;

#endif
extern bool kill_sig;

#include "verilator.h"
#include "verilated_fst_c.h"

#endif

#ifdef FPGA

#include "fpga_utils.h"

#endif

using namespace composer;

static composer::data_server_file *cf;
address_translator at;

#ifdef F1
uint64_t f1_hack_addr(uint64_t addr) {
  // 1 2 0 3
  // 0 1 2 3
  uint64_t dimm = addr >> 34;
  switch (dimm) {
    case 0:
      return 0x800000000 | (addr & 0x3ffffffff);
    case 1:
      return addr & 0x3ffffffff;
    case 2:
      return 0x100000000 | (addr & 0x3ffffffff);
    default:
      return addr;
  }
}
#endif

[[noreturn]] static void *data_server_f(void *server) {
  auto *ds = (data_server *) server;

  int fd_composer = shm_open(data_server_file_name.c_str(), O_CREAT | O_RDWR, file_access_flags);
  if (fd_composer < 0) {
    std::cerr << "Failed to open data_server file" << std::endl;
    throw std::exception();
  }

  struct stat shm_stats{};
  fstat(fd_composer, &shm_stats);
#ifdef VERBOSE
  std::cerr << shm_stats.st_size << std::endl;
  std::cerr << sizeof(data_server_file) << std::endl;
#endif
  if (shm_stats.st_size < sizeof(data_server_file)) {
    int tr_rc = ftruncate(fd_composer, sizeof(data_server_file));
    if (tr_rc) {
      std::cerr << "Failed to truncate data_server file" << std::endl;
      throw std::exception();
    }
  }

  auto &addr = *(data_server_file *) mmap(nullptr, sizeof(data_server_file), file_access_prots,
                                          MAP_SHARED, fd_composer, 0);
  cf = &addr;

#ifdef COMPOSER_USE_CUSTOM_ALLOC
#ifdef VERBOSE
  std::cerr << "Constructing allocator" << std::endl;
#endif
  auto allocator = new composer_allocator();
#ifdef VERBOSE
  std::cerr << "Allocator constructed - data server ready" << std::endl;
#endif
#endif
  data_server_file::init(addr);

#if defined(FPGA) && defined(F1)
  std::cerr << "Running FPGA MemCpy Sanity Checks..." << std::endl;
  auto sanity_alloc = (uint8_t*)malloc(1024);
  auto sanity_int = (uint32_t*)sanity_alloc;
  unsigned long sanity_address = 0xDEAD0000L;
  for (int i = 0; i < 1024 / 4; ++i) {
    sanity_int[i] = 0xCAFEBEEF;
  }
  std::cerr << "Trying to write 1024B to FPGA." << std::endl;

  int sanity_rc = wrapper_fpga_dma_burst_write(xdma_write_fd, sanity_alloc, 1024, sanity_address);
  if (sanity_rc) {
    std::cerr << "Failed to DMA write to FPGA. Error code: " << sanity_rc << std::endl;
    throw std::exception();
  } else {
    std::cerr << "Success 1/3" << std::endl;
  }
  memset(sanity_alloc, 0, 1024);
  sanity_rc = wrapper_fpga_dma_burst_read(xdma_read_fd, sanity_alloc, 1024, sanity_address);
  if (sanity_rc) {
    std::cerr << "Failed to DMA read from FPGA. Error code: " << sanity_rc << std::endl;
    throw std::exception();
  } else {
    std::cerr << "Success 2/3" << std::endl;
  }

  for (int i = 0; i < 1024 / 4; ++i) {
    if (sanity_int[i] != 0xCAFEBEEF) {
      sanity_rc = 1;
    }
  }

  if (sanity_rc) {
    std::cerr << "While the DMA read operation succeeded, the data we read back was faulty (not 0xCAFEBEEF)." << std::endl;
    throw std::exception();
  } else {
    std::cerr << "Success 3/3" << std::endl;
  }

#endif

  srand(time(0));
  pthread_mutex_lock(&addr.server_mut);
  pthread_mutex_lock(&addr.server_mut);
#if defined(SIM) && defined(COMPOSER_HAS_DMA)
  pthread_mutex_lock(&dma_wait_lock);
#endif
#ifdef VERBOSE
  std::cerr << "server ready to make allocations" << std::endl;
#endif
  while (true) {
//    printf("data server got cmd\n"); fflush(stdout);
    // get file name, descriptor, expand the file, and map it to address space
    switch (addr.operation) {
      case data_server_op::ALLOC: {
        auto fname = "/composer_file_" + std::to_string(rand());
        int nfd = shm_open(fname.c_str(), O_CREAT | O_RDWR, file_access_flags);
        if (nfd < 0) {
          std::cerr << "Failed to open shared memory segment: " << std::string(strerror(errno)) << std::endl;
          throw std::exception();
        }
        int rc = ftruncate(nfd, (off_t) addr.op_argument);
        if (rc) {
          std::cerr << "Failed to truncate!" << std::endl;
//          printf("Failed to truncate! - %d, %d, %llu\t %s\n", rc, nfd, (off_t) addr.op_argument, strerror(errno));
          throw std::exception();
        }
        void *naddr = mmap(nullptr, addr.op_argument, file_access_prots, MAP_SHARED, nfd, 0);


        if (naddr == nullptr) {
          std::cerr << "Failed to mmap address: " << std::string(strerror(errno)) << std::endl;
          throw std::exception();
        }

        memset(naddr, 0, addr.op_argument);
        //write response
        // copy file name to response field
        strcpy(addr.fname, fname.c_str());
        // allocate memory
#ifdef COMPOSER_USE_CUSTOM_ALLOC
        auto fpga_addr = allocator->malloc(addr.op_argument);
        at.add_mapping(fpga_addr.getFpgaAddr(), addr.op_argument, naddr);
        // return fpga address
        addr.op_argument = fpga_addr.getFpgaAddr();
#else
        auto fpga_addr = (uint64_t) naddr;
        at.add_mapping(fpga_addr, addr.op_argument, naddr);
        addr.op_argument = fpga_addr;
#endif
        // add mapping in server
        break;
      }
      case data_server_op::FREE:
#ifdef COMPOSER_USE_CUSTOM_ALLOC
        allocator->free(composer::remote_ptr(addr.op_argument, 0));
#endif
        at.remove_mapping(addr.op_argument);
        free((void *) addr.op_argument);
        break;
#if defined(SIM) or defined(Kria)
      case data_server_op::MOVE_TO_FPGA: {
        std::cerr << at.get_mapping(addr.op_argument).first << std::endl;
#if defined(COMPOSER_HAS_DMA) and defined(SIM)
        //        for (int i = 0; i < addr.op3_argument; i += 256*64) {
        //          pthread_mutex_lock(&dma_lock);
        //          auto remaining = addr.op3_argument - i;
        //          if (remaining >= 256 * 64) {
        //            dma_len = 256 * 64;
        //          } else {
        //            dma_len = remaining;
        //          }
        //          dma_ptr = ((char *) at.translate(addr.op_argument)) + i;
        //          dma_fpga_addr = addr.op_argument + i;
        //          dma_valid = true;
        //          dma_write = true;
        //          dma_in_progress = false;
        //          pthread_mutex_unlock(&dma_lock);
        //          pthread_mutex_lock(&dma_wait_lock);
        //        }
#endif
//        std::cerr << "finish DMA " << std::endl;
        break;
      }
      case data_server_op::MOVE_FROM_FPGA: {
        std::cerr << at.get_mapping(addr.op2_argument).first << std::endl;
#if defined(COMPOSER_HAS_DMA) and defined(SIM)
        //        auto info = at.get_mapping(addr.op2_argument);
        //        if (addr.op3_argument != info.second) {
        //          throw std::exception();
        //        }
        //        for (int i = 0; i < addr.op3_argument; i += 256 * 64) {
        //          pthread_mutex_lock(&dma_lock);
        //          auto remaining = addr.op3_argument - i;
        //          if (remaining >= 256 * 64) {
        //            dma_len = 256 * 64;
        //          } else {
        //            dma_len = remaining;
        //          }
        //          dma_ptr = ((char *)std::get<0>(info)) + i;
        //          dma_fpga_addr = addr.op2_argument + i;
        //          dma_valid = true;
        //          dma_write = true;
        //          dma_in_progress = false;
        //
        //
        //          pthread_mutex_unlock(&dma_lock);
        //          pthread_mutex_lock(&dma_wait_lock);
        //        }
#endif
        break;
      }
#elif defined (FPGA)
        case data_server_op::MOVE_FROM_FPGA: {
          auto shaddr = at.translate(addr.op2_argument);
    //        std::cout << "from fpga addr: " << addr.op2_argument << std::endl;
          auto *mem = (uint8_t*)malloc(addr.op3_argument);
          int rc = wrapper_fpga_dma_burst_read(xdma_read_fd, (uint8_t *) mem, addr.op3_argument, addr.op2_argument);\
          memcpy(shaddr, mem, addr.op3_argument);
          free(mem);
    //        for (int i = 0; i < addr.op3_argument / sizeof(int); ++i)
    //          printf("%d ", ((int *) shaddr)[i]);
    //        fflush(stdout);
          if (rc) {
            fprintf(stderr, "Something failed inside MOVE_FROM_FPGA - %d %p %d %x\n", xdma_read_fd, shaddr,
                    addr.op3_argument, addr.op2_argument);
            exit(1);
          }
          break;
        }
        case data_server_op::MOVE_TO_FPGA: {
          auto shaddr = at.translate(addr.op_argument);
    //        printf("trying to transfer\n"); fflush(stdout);
    //        std::cout << "to fpga addr: " << addr.op_argument << std::endl;
    //        for (int i = 0; i < addr.op3_argument / sizeof(int); ++i)
    //          printf("%d ", ((int *) shaddr)[i]);
    //        fflush(stdout);
          auto *mem = (uint8_t*)malloc(addr.op3_argument);
          memcpy(mem, shaddr, addr.op3_argument);
          int rc = wrapper_fpga_dma_burst_write(xdma_write_fd, (uint8_t *) shaddr, addr.op3_argument, addr.op_argument);
          if (rc) {
            fprintf(stderr, "Something failed inside MOVE_TO_FPGA - %d %p %d %x\n", xdma_write_fd, shaddr,
                    addr.op3_argument, addr.op2_argument);
            exit(1);
          }
    //        printf("finished transfering\n"); fflush(stdout);
          break;
        }
#else
#error("Doesn't appear that we're covering all cases inside data server")
#endif
    }
    // un-lock client to read response
    pthread_mutex_unlock(&addr.data_cmd_recieve_resp_lock);
    // re-lock self to stall
    pthread_mutex_lock(&addr.server_mut);
  }

}

void data_server::start() {
  pthread_t thread;
  pthread_create(&thread, nullptr, data_server_f, nullptr);
}

void *address_translator::translate(uint64_t fp_addr) {
  auto it = mappings.begin();
  while (it != mappings.end()) {
    if (it->fpga_addr <= fp_addr and it->fpga_addr + it->mapping_length > fp_addr) {
      break;
    }
    it++;
  }
  if (it == mappings.end()) {
    std::cerr << "BAD ADDRESS IN TRANSLATION FROM FPGA -> CPU: " << std::hex << fp_addr <<". You might be running outside of your allocated segment... "<< std::endl;
#if defined(SIM) && defined(TRACE)

    tfp->close();
#endif
    throw std::exception();
  }
  if (it->fpga_addr + it->mapping_length <= fp_addr) {
    std::cerr << "ADDRESS IS OUT OF BOUNDS FROM FPGA -> CPU\n" << std::endl;
    throw std::exception();
  }
  return (char *) it->cpu_addr + (fp_addr - it->fpga_addr);
}

void address_translator::add_mapping(uint64_t fpga_addr, uint64_t mapping_length, void *cpu_addr) {
  mappings.emplace(fpga_addr, cpu_addr, mapping_length);
}

void address_translator::remove_mapping(uint64_t fpga_addr) {
  addr_pair a(fpga_addr, nullptr, 0);
  auto it = mappings.find(a);
  if (it == mappings.end()) {
    std::cerr << "ERROR - could not remove mapping in data server because could not find address...\n" << std::endl;
    throw std::exception();
  }
  mappings.erase(it);
}

std::pair<void *, uint64_t> address_translator::get_mapping(uint64_t fpga_addr) {
  auto it = mappings.begin();
  while (it != mappings.end()) {
    if (it->fpga_addr == fpga_addr) {
      return std::make_pair(it->cpu_addr, it->mapping_length);
    }
    it++;
  }
  std::cerr << "Mapping not found!" << std::endl;
  throw std::exception();
}
