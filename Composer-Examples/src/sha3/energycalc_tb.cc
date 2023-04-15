#include <composer/fpga_handle.h>
#include <composer_allocator_declaration.h>
#include <iostream>

using namespace composer;
int main() {
    fpga_handle_t fpga;

    // allocate space on the fpga
    int data_size = 256;
    int halfnonbonded_size = 128;
    int nonbonded_size = 4096;
    int solvation_size = 512;

    auto fpga_data_read = fpga.malloc(sizeof(int) * data_size);
    auto fpga_halfnonbonded_read = fpga.malloc(sizeof(int) * halfnonbonded_size);
    auto fpga_nonbonded_read = fpga.malloc(sizeof(int) * nonbonded_size);
    auto fpga_solvation_read = fpga.malloc(sizeof(int) * solvation_size);
    auto fpga_write = fpga.malloc(sizeof(int) * 1);
    printf("read addr: %llx-%llx\n", fpga_data_read.getFpgaAddr(), fpga_data_read.getFpgaAddr()+fpga_data_read.getLen());
    printf("read addr: %llx-%llx\n", fpga_halfnonbonded_read.getFpgaAddr(), fpga_halfnonbonded_read.getFpgaAddr()+fpga_halfnonbonded_read.getLen());
    printf("read addr: %llx-%llx\n", fpga_nonbonded_read.getFpgaAddr(), fpga_nonbonded_read.getFpgaAddr()+fpga_nonbonded_read.getLen());
    printf("read addr: %llx-%llx\n", fpga_solvation_read.getFpgaAddr(), fpga_solvation_read.getFpgaAddr()+fpga_solvation_read.getLen());

    printf("write addr: %llx-%llx\n", fpga_write.getFpgaAddr(), fpga_write.getFpgaAddr()+fpga_write.getLen());
    
    auto data_output_arr = (int*)fpga_data_read.getHostAddr();
    int dataCount = 0;
    for (int x = 0; x < data_size; x++) {
        if (x >= sizeof(dataTermsInput)) {
            data_output_arr[x] = 0;
        } else {
            data_output_arr[x] = dataTermsInput[dataCount];
            dataCount++;
        }
    }

    auto halfnonbonded_output_arr = (int*)fpga_halfnonbonded_read.getHostAddr();
    int halfNonBondedCount = 0;
    for (int x = 0; x < halfnonbonded_size; x++) {
        if (x >= sizeof(halfNonBondedTermsInput) || x%8 > 4) {
            halfnonbonded_output_arr[x] = 0;
        } else {
            halfnonbonded_output_arr[x] = halfNonBondedTermsInput[halfNonBondedCount];
            halfNonBondedCount++;
        }
    }

    auto nonbonded_output_arr = (int*)fpga_nonbonded_read.getHostAddr();
    int nonBondedCount = 0;
    for (int x = 0; x < nonbonded_size; x++) {
        if (x >= sizeof(nonBondedTermsInput) || x%8 > 4) {
            nonbonded_output_arr[x] = 0;
        } else {
            nonbonded_output_arr[x] = nonBondedTermsInput[nonBondedCount];
            nonBondedCount++;
        }
    }

    auto solvation_output_arr = (int*)fpga_solvation_read.getHostAddr();
    int solvationCount = 0;
    for (int x = 0; x < solvation_size; x++) {
        if (x >= sizeof(solvationTermsInput)) {
            solvation_output_arr[x] = 0;
        } else {
            solvation_output_arr[x] = solvationTermsInput[solvationCount];
            solvationCount++
        }
    }
    // copy data to fpga
    //printf("Sending addresses %16llx and %16llx to fpga\n", fpga_read.getFpgaAddr(), fpga_write.getFpgaAddr());
    fflush(stdout);
    fpga.copy_to_fpga(fpga_data_read);
    fpga.copy_to_fpga(fpga_halfnonbonded_read);
    fpga.copy_to_fpga(fpga_nonbonded_read);
    fpga.copy_to_fpga(fpga_solvation_read);
    printf("Sent data\n"); fflush(stdout);

    // this interface could use some work...
    // though some notable improvements: attempting to wait for these commands will issue an error
    // auto cmd = rocc_cmd::addr_cmd(getChannelSubIdx(Sha3System_ID, 0, ComposerChannels::ReadChannel, 0),
    //                                 fpga_read);
    // cmd.send();
    // printf("Sent read address\n");

    auto write_cmd = rocc_cmd::addr_cmd(getChannelSubIdx(EnergyCalc_ID, 0, ComposerChannels::WriteChannel, 0),
                                    fpga_write);
    write_cmd.send();
    printf("Sent write address\n");


    // send command and wait for response
    auto read_cmd1 = rocc_cmd::start_cmd(EnergyCalc_ID, EnergyCalcCommands::addrs_data_HNBT, 0, false,
                        composer::RD::R0, 0, 0, 0, fpga_data_read.getFpgaAddr(), fpga_halfnonbonded_read.getFpgaAddr());

    auto read_cmd2 = rocc_cmd::start_cmd(EnergyCalc_ID, EnergyCalcCommands::addrs_NBT_ST, 0, true,
                        composer::RD::R0, 0, 0, 0, fpga_nonbonded_read.getFpgaAddr(), fpga_solvation_read.getFpgaAddr());

    read_cmd1.send();
    read_cmd2.send().get();

    // check result
    fpga.copy_from_fpga(fpga_write);
    auto result_arr = (int*) fpga_write.getHostAddr();
    printf("Expected Output: %d\tReal Output: %d\n", 1, result_arr[0]);
    // printf("Hash num: %d\tExpected Hash: %lu\tOutput Hash: %lu\n", 1, (long*)(0x84D5CCF933C0478A), output_arr[1]);
    // printf("Hash num: %d\tExpected Hash: %lu\tOutput Hash: %lu\n", 2, (long*)(0xD598261EA65AA9EE), output_arr[2]);
    // printf("Hash num: %d\tExpected Hash: %lu\tOutput Hash: %lu\n", 3, (long*)(0xBD1547306F80494D), output_arr[3]);

}