//
// Created by Chris Kjellqvist on 11/17/22.
//
#include <composer/fpga_handle.h>
#include <ctime>
using namespace composer;
int main() {
  const int n = 1024;
  fpga_handle_t handle;
  auto alloc = handle.malloc(sizeof(int)*n);
  auto *host_mem = (unsigned int*)alloc.getHostAddr();
  for (int i = 0; i < n; ++i) {
    host_mem[i] = i;
  }
  handle.copy_to_fpga(alloc);
  std::cerr << "copied" << std::endl;
#ifdef FPGA
  for (int i = 0; i < n; ++i) {
    host_mem[i] = 15;
  }
#endif

  handle.copy_from_fpga(alloc);

  for (int i = 0; i < n; ++i) {
    if (host_mem[i] != i) {
      std::cerr << "Got a bad number: " << i << std::endl;
    }
  }
  composer::rocc_cmd::flush_cmd().send();

}
