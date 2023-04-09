#include "stdio.h"
#include "stdint.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"    // time()

void help_message(char *argv[]) {
    printf("Golden Model for BFloat16 MAC Unit\n");
    printf("Usage: %s mode <a:16-bit hex> <b: 16-bit hex> <c: 16-bit hex> [-v]\n", argv[0]);
    printf("mode: bf16 - BFloat16 MAC\n");
    printf("mode: bf32 - BFloat16 MAC with iEEE FP32 Accumulation \n");
    printf("mode: fp16 - iEEE 754 FP16 MAC\n\n");

    printf("Output: 16-bit BFloat16 result in hex\n");
}

uint16_t bf16_mac(uint16_t a, uint16_t b, uint16_t c, int verbose) {
    uint32_t ai = a << 16;
    uint32_t bi = b << 16;
    uint32_t ci = c << 16;
    
    float af, bf, cf;
    memcpy(&af, &ai, sizeof(ai));
    memcpy(&bf, &bi, sizeof(bi));
    memcpy(&cf, &ci, sizeof(ci));

    float of = af * bf + cf;
    if (verbose) {
        printf("o = a * b + c\n");
        printf("o = %f * %f + %f = %f\n", af, bf, cf, of);
    }
    
    uint32_t oi;
    memcpy(&oi, &of, sizeof(of));

    uint16_t oh = oi >> 16;
    return oh;
}


uint32_t bf32_mac(uint16_t a, uint16_t b, uint16_t c, int verbose) {
    uint32_t ai = a << 16;
    uint32_t bi = b << 16;
    uint32_t ci = c << 16;
    
    float af, bf, cf;
    memcpy(&af, &ai, sizeof(ai));
    memcpy(&bf, &bi, sizeof(bi));
    memcpy(&cf, &ci, sizeof(ci));

    float of = af * bf + cf;
    if (verbose) {
        printf("o = a * b + c\n");
        printf("o = %f * %f + %f = %f\n", af, bf, cf, of);
    }
    
    uint32_t oi;
    memcpy(&oi, &of, sizeof(of));

    return oi;
}

uint16_t fp16_mac(uint16_t a, uint16_t b, uint16_t c, int verbose) {
    printf("Error: FP16 MAC not implemented yet\n");
    return 0;
}

void randomInput(int lower, int upper, int n, int *arr) {
	int i;
	for(i=0; i<n; i++){
		arr[i] = (rand() % (upper - lower + 1)) + lower;
    }
    //return num;
}

int main(int argc, char *argv[]) {
    int verbose = 0;
    if (argc != 2 && argc != 3) {
        help_message(argv);
        return 1;
    } else if (argc == 3 && strcmp(argv[2], "-v") != 0) {
        help_message(argv);
        return 1;
    } else if (argc == 3 && strcmp(argv[2], "-v") == 0) {
        verbose = 1;
    }
    
    int lower = 14208; //16256 //128 minimum 
    int upper = 17536; //18176 //32639 maximum positive value
    int n = 10;
    int arrA[n];
    int arrB[n];
    int arrC[n]; 
    

    FILE *fp, *afp, *bfp, *cfp;

    fp = fopen("src/main/resources/fpvals.txt", "w+");
    //fprintf(fp,"%s\n", argv[1]);
    afp = fopen("src/main/resources/avals.txt", "w+");
    bfp = fopen("src/main/resources/bvals.txt", "w+");
    cfp = fopen("src/main/resources/cvals.txt", "w+");

    char* mode = argv[1];
    /*
    char* a_raw = argv[2];
    char* b_raw = argv[3];
    char* c_raw = argv[4];

    uint16_t ah  = strtol(a_raw, NULL, 16);
    uint16_t bh  = strtol(b_raw, NULL, 16);
    uint16_t ch  = strtol(c_raw, NULL, 16);
    */
    

	srand(time(0));
	randomInput(lower, upper, n, arrA);
	randomInput(lower, upper, n, arrB);
	randomInput(lower, upper, n, arrC);    

    

    //fprintf(fp,"h%04x\nh%04x\nh%04x\n", ah, bh, ch);
	
    //for(int i = 16350; i < 16451; i++){
    	//ah = (uint16_t) i; //16256;
    	//bh = (uint16_t) i;
	//ch = (uint16_t) i;
	for(int i = 0; i < n; i++){
	
		int inA = arrA[i];
		int inB = arrB[i];
		int inC = arrC[i];

		
		uint16_t ah = inA;
		uint16_t bh = inB;
		uint16_t ch = inC;
		
		fprintf(afp,"h%04x\n", ah);
		fprintf(bfp,"h%04x\n", bh);
		fprintf(cfp,"h%04x\n", ch);
		
		if (strcmp(mode, "bf16") == 0) {
		    uint16_t oh = bf16_mac(ah, bh, ch, verbose);
		fprintf(fp,"h%04x\n", oh);
		printf("0x%04x\n", ch);
		    printf("0x%04x\n", oh);
		} else if (strcmp(mode, "bf32") == 0) {
		    uint32_t oi = bf32_mac(ah, bh, ch, verbose);
		fprintf(fp,"h%08x\n", oi);
		    printf("0x%08x\n", oi);
		} else if (strcmp(mode, "fp16") == 0) {
		    uint16_t oh = fp16_mac(ah, bh, ch, verbose);
		fprintf(fp,"h%04x\n", oh);
		    printf("0x%04x\n", oh);
		} else {
		    printf("Error: Unknown mode %s\n", mode);
		    help_message(argv);
		    return 1;
		}
    }

    fclose(fp);


    return 0;
}

