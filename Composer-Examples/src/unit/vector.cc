//
// Created by Chris Kjellqvist on 10/13/22.
//

#include <composer/fpga_handle.h>
#include <iostream>
#include <composer_allocator_declaration.h>

using namespace composer;
using dtype = uint16_t;

int main() {
  fpga_handle_t fpga;
  int n_numbers = 1024;
  // allocate space on the fpga
  auto fpga_read = fpga.malloc(sizeof(dtype) * n_numbers);
  auto fpga_write = fpga.malloc(sizeof(dtype) * n_numbers);
  printf("read addr: %llx-%llx\n", fpga_read.getFpgaAddr(), fpga_read.getFpgaAddr()+fpga_read.getLen());
  printf("write addr: %llx-%llx\n", fpga_write.getFpgaAddr(), fpga_write.getFpgaAddr()+fpga_write.getLen());
  auto my_array = (dtype*)fpga_read.getHostAddr();
  for (int i = 0; i < n_numbers; ++i) {
    my_array[i] = i;
  }
  // copy data to fpga
  printf("Sending addresses %16llx and %16llx to fpga\n", fpga_read.getFpgaAddr(), fpga_write.getFpgaAddr());
  fflush(stdout);
  fpga.copy_to_fpga(fpga_read);
  printf("Sent data\n"); fflush(stdout);

  // this interface could use some work...
  // though some notable improvements: attempting to wait for these commands will issue an error
  auto cmd = rocc_cmd::addr_cmd(getChannelSubIdx(VectorSystem_ID, 0, ComposerChannels::ReadChannel, 0),
                                fpga_read);
  cmd.send();
  printf("Sent read address\n");
//  auto p1 = cmd.pack(pack_cfg);
//  printf("addr_read: ");
//  for (int i = 0; i < 5; ++i) {
//    printf("%x\t", p1[i]);
//  }
//  printf("\n");
  auto cmd2 = rocc_cmd::addr_cmd(getChannelSubIdx(VectorSystem_ID, 0, ComposerChannels::WriteChannel, 0),
                                 fpga_write);
  cmd2.send();
  printf("Sent write address\n");
//  p1 = cmd2.pack(pack_cfg);
//  printf("addr_write: ");
//  for (int i = 0; i < 5; ++i) {
//    printf("%x\t", p1[i]);
//  }
//  printf("\n");

  // send command and wait for response
  auto cmd3 = rocc_cmd::start_cmd(VectorSystem_ID, 0, 0, true,
                      composer::RD::R0, 0, 0, 0, n_numbers, 15);
//  p1 = cmd3.pack(pack_cfg);
//  printf("start_cmd: ");
//  for (int i = 0; i < 5; ++i) {
//    printf("%x\t", p1[i]);
//  }
//  printf("\n");

  cmd3.send().get();

  // check result
  fpga.copy_from_fpga(fpga_write);
  my_array = (dtype*) fpga_write.getHostAddr();
  for (int i = 0; i < n_numbers; ++i) {
    printf("Was: %d\tExpect: %d\tGot: %d\n", i, i + 15, my_array[i]);
  }

  rocc_cmd::addr_cmd(getChannelSubIdx(VectorSystem_ID, 0, ComposerChannels::ReadChannel, 0), fpga_read).send();
  rocc_cmd::addr_cmd(getChannelSubIdx(VectorSystem_ID, 0, ComposerChannels::WriteChannel, 0), fpga_write).send();
  rocc_cmd::start_cmd(VectorSystem_ID, 0, 0, true,
                                  composer::RD::R0, 0, 0, 0, n_numbers, 15).send().get();

//  rocc_cmd::flush_cmd().send();
//  fpga.copy_from_fpga(fpga_read);
//  for (int i = 0; i < n_numbers; ++i) {
//    printf("Was: %d\tExpect: %d\tGot: %d\n", i, i, my_array[i]);
//  }


//  fpga.shutdown();
}
