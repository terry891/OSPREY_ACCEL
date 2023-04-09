//
// Created by Chris Kjellqvist on 2/13/23.
//

#include <composer/fpga_handle.h>
#include <composer/rocc_cmd.h>
#include <composer_allocator_declaration.h>
#include <composer/alloc.h>

using namespace composer;

int main() {
  fpga_handle_t handle;
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < (1 << (30 - 21)); ++j) {
      handle.malloc(1 << 21);
    }
  }
  std::cout << "Made allocations" << std::endl;
  auto payload = rocc_cmd::start_cmd(TDisp_ID, 0, 0, true, RD::R0, 0, 0, 0, 0, 0).send().get();
  auto cycles = payload.data;
  auto seconds = (float)(cycles) / (125 << 20);
  auto rate = 2.0 / seconds;
  std::cout << "Reading 2GB took " << cycles << "cycles. Throughput: " << rate << "GB/s" << std::endl;

  rocc_cmd::flush_cmd().send();
}