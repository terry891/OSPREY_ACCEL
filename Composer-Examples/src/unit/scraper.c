//
// Created by Chris Kjellqvist on 11/28/22.
//

#include <string.h>
#include <stdlib.h>
#include <fpga_mgmt.h>
#include <fpga_dma.h>
#include <stdio.h>

int main() {
	unsigned long alloc_sz = 1024*1024*4;
	long long *ar = (long long*) malloc(alloc_sz);
	long long *reader = (long long*) malloc(alloc_sz);
	int sz = alloc_sz / sizeof(long long);
	srand(8675309);
	for(int i = 0; i < alloc_sz / sizeof(long long); ++i)
		ar[i] = rand();
	fpga_mgmt_init();
	int fd = fpga_dma_open_queue(FPGA_DMA_XDMA, 0, 0, true);
	if (fd < 0) {
		printf("File descriptor bad\n");
		exit(0);
	} else {
		printf("fd: %d\n", fd);
	}
	for (uint64_t i = 0; i < (1 << 30) / alloc_sz; ++i) {
		// for each gig
		int rc = fpga_dma_burst_read(fd, (uint8_t*)reader, alloc_sz, i * alloc_sz);
		if (rc) {
			printf("%d\n", rc); fflush(stdout);
			exit(0);
		} else {
			for(int j = 0; j < alloc_sz / sizeof(long long); ++j) {
				if( ar[j] != reader[j]) {
					printf("failed at %d with %d =/= %d\n", j, ar[j], reader[j]);
				}
			}
		}
	}
	fpga_mgmt_close();
}
