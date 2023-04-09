//
// Created by Chris Kjellqvist on 11/9/22.
//

#include <cstdlib>
#include <cstring>
#include <cassert>
#include <random>
#include <chrono>
#include <iostream>
#include <blas/gemm.hh>
#include "gemm_cpu.h"

//#define UNIT

#ifdef UNIT
int mat_dim = 32;
#else
int mat_dim = 512;
#endif

inline volatile void flush_line(void *ptr) {
  asm volatile ("clflush (%0)" :: "r" (ptr));
}

void flush_segment(char *ptr, size_t length) {
  assert((length & 0x3F) == 0);
  for (int i = 0; i < length >> 6; ++i) {
    flush_line(ptr);
    ptr += 64;
  }
}

#define GEMM_TYPE int

int n_cores = 2;
pthread_mutex_t time_lock = PTHREAD_MUTEX_INITIALIZER;
unsigned long long cpytime = 0, addrtime = 0, exectime = 0, cpybacktime = 0;
pthread_t *threads;

unsigned long long sum = 0;
int main() {
  int max_mag = 100;
  // initialize c++ random number generator
  std::random_device rd;
  std::mt19937 gen(177);
  size_t mat_size = mat_dim * mat_dim * sizeof(GEMM_TYPE);
  auto a = (GEMM_TYPE *) malloc(mat_size);
  auto b = (GEMM_TYPE *) malloc(mat_size);
  auto c = (GEMM_TYPE *) malloc(mat_size);

  memset(c, 0, sizeof(GEMM_TYPE) * mat_dim * mat_dim);
  std::uniform_int_distribution<> dis(0, max_mag);

  // allocate two mat_dimxmat_dim matrices of signed ints
  // randomly initialize these matrices
  for (int i = 0; i < mat_dim * mat_dim; ++i) {
    a[i] = dis(gen);
    b[i] = dis(gen);
  }

//  print_matrix(a, "%x ");
//
//  printf("\n\n");
//
//  print_matrix(b, "%x ");
  // compute gemm
  int times = 1000;
  unsigned long long ttime = 0;
  for (int i = 0; i < times; ++i) {
    memset(c, 0, mat_size);
    // clear cache
    flush_segment((char*)a, mat_size);
    flush_segment((char*)b, mat_size);
    flush_segment((char*)c, mat_size);

    auto start = std::chrono::system_clock::now();
    /*
    blas::gemm<GEMM_TYPE, GEMM_TYPE, GEMM_TYPE>(
            blas::Layout::RowMajor, // layout
            blas::Op::NoTrans, // translate A
            blas::Op::NoTrans, // translate B
            mat_dim, // m
            mat_dim, // n
            mat_dim, // k
            1, // alpha
            a, // A
            mat_dim, // lda
            b, // B
            mat_dim, // ldb
            1, // beta
            c, // c
            mat_dim);// ldc
		     */
    gemm_cpu<GEMM_TYPE, 8>(a, b, c, mat_dim);
    auto end = std::chrono::system_clock::now();
    ttime += std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
  }

  std::cout << "CPU GeMM - Took " << ttime << "us. Avg: " << (ttime / times) << "us." << std::endl;
  std::cout << sum << std::endl;
}
