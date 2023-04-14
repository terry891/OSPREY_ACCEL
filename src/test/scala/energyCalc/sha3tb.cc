include <composer/fpga_handle.h>
#include <composer_allocator_declaration.h>
#include <iostream>

using namespace composer;
int main() {
  fpga_handle_t fpga;
  int W = 64;
  int r = 2 * 256;
  int c = 25 * W - r;
  int round_size_words = c / W;

  // allocate space on the fpga
  auto fpga_read = fpga.malloc(sizeof(long) * 512);
  auto fpga_write = fpga.malloc(sizeof(long) * 64);
  printf("read addr: %llx-%llx\n", fpga_read.getFpgaAddr(), fpga_read.getFpgaAddr()+fpga_read.getLen());
  printf("write addr: %llx-%llx\n", fpga_write.getFpgaAddr(), fpga_write.getFpgaAddr()+fpga_write.getLen());
  auto output_arr = (long*)fpga_read.getHostAddr();
  for (int x = 0; x < round_size_words; x++) {
    output_arr[x] = 0;
  }
  // copy data to fpga
  printf("Sending addresses %16llx and %16llx to fpga\n", fpga_read.getFpgaAddr(), fpga_write.getFpgaAddr());
  fflush(stdout);
  fpga.copy_to_fpga(fpga_read);
  printf("Sent data\n"); fflush(stdout);

  // this interface could use some work...
  // though some notable improvements: attempting to wait for these commands will issue an error
  auto cmd = rocc_cmd::addr_cmd(getChannelSubIdx(Sha3System_ID, 0, ComposerChannels::ReadChannel, 0),
                                fpga_read);
  cmd.send();
  printf("Sent read address\n");

  auto cmd2 = rocc_cmd::addr_cmd(getChannelSubIdx(Sha3System_ID, 0, ComposerChannels::WriteChannel, 0),
                                 fpga_write);
  cmd2.send();
  printf("Sent write address\n");


  // send command and wait for response
  auto cmd3 = rocc_cmd::start_cmd(Sha3System_ID, 0, 0, true,
                      composer::RD::R0, 0, 0, 0, round_size_words, 0);

  cmd3.send().get();

  // check result
  fpga.copy_from_fpga(fpga_write);
  output_arr = (long*) fpga_write.getHostAddr();
  printf("Hash num: %d\tExpected Hash: %lu\tOutput Hash: %lu\n", 0, (long*)(0xF1258F7940E1DDE7), output_arr[0]);
  printf("Hash num: %d\tExpected Hash: %lu\tOutput Hash: %lu\n", 1, (long*)(0x84D5CCF933C0478A), output_arr[1]);
  printf("Hash num: %d\tExpected Hash: %lu\tOutput Hash: %lu\n", 2, (long*)(0xD598261EA65AA9EE), output_arr[2]);
  printf("Hash num: %d\tExpected Hash: %lu\tOutput Hash: %lu\n", 3, (long*)(0xBD1547306F80494D), output_arr[3]);

}