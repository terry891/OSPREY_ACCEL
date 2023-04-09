//
// Created by Chris Kjellqvist on 11/9/22.
//

#include <cstdlib>
#include <cstring>
#include <cassert>
#include <random>
#include <chrono>
#include <iostream>
#include "gemm_cpu.h"
#include <cuda_runtime.h>
#include "cublas_v2.h"


//#define UNIT

#ifdef UNIT
int mat_dim = 32;
#else
int mat_dim = 1 << 14;
#endif

inline volatile void flush_line(void *ptr) {
  asm volatile ("clflush (%0)"::"r" (ptr));
}

void flush_segment(char *ptr, size_t length) {
  assert((length & 0x3F) == 0);
  for (int i = 0; i < length >> 6; ++i) {
    flush_line(ptr);
    ptr += 64;
  }
}


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
  size_t mat_size = mat_dim * mat_dim * sizeof(float);
  auto a = (float *) malloc(mat_size);
  auto b = (float *) malloc(mat_size);
  auto c = (float *) malloc(mat_size);
  auto correct = (float *) malloc(mat_size);

  memset(c, 0, sizeof(float) * mat_dim * mat_dim);
  std::uniform_int_distribution<> dis(0, max_mag);

  // allocate two mat_dimxmat_dim matrices of signed ints
  // randomly initialize these matrices
  for (int i = 0; i < mat_dim * mat_dim; ++i) {
    a[i] = dis(gen);
    b[i] = dis(gen);
  }

  cudaError_t cudaStat;
  cublasStatus_t stat;
  cublasHandle_t handle;
  float constant1 = 1;

  float *devPtrA, *devPtrB, *devPtrC;
  cudaStat = cudaMalloc((void **) &devPtrA, mat_dim * mat_dim * sizeof(*a));
  if (cudaStat != cudaSuccess) {
    printf("device memory allocation failed");
    return EXIT_FAILURE;
  }

  cudaStat = cudaMalloc((void **) &devPtrB, mat_dim * mat_dim * sizeof(*a));
  if (cudaStat != cudaSuccess) {
    printf("device memory allocation failed");
    cudaFree(devPtrA);
    return EXIT_FAILURE;
  }

  cudaStat = cudaMalloc((void **) &devPtrC, mat_dim * mat_dim * sizeof(*a));
  if (cudaStat != cudaSuccess) {
    printf("device memory allocation failed");
    cudaFree(devPtrA);
    cudaFree(devPtrB);
    return EXIT_FAILURE;
  }

  stat = cublasCreate(&handle);
  if (stat != CUBLAS_STATUS_SUCCESS) {
    printf("CUBLAS initialization failed\n");
    cudaFree(devPtrA);
    cudaFree(devPtrB);
    cudaFree(devPtrC);
    return EXIT_FAILURE;
  }

  stat = cublasSetMatrix(mat_dim, mat_dim, sizeof(*a), b, mat_dim, devPtrB, mat_dim);
  if (stat != CUBLAS_STATUS_SUCCESS) {
    printf("data download failed");
    cudaFree(devPtrA);
    cudaFree(devPtrB);
    cudaFree(devPtrC);
    cublasDestroy(handle);
    return EXIT_FAILURE;
  }

  stat = cublasSetMatrix(mat_dim, mat_dim, sizeof(*a), c, mat_dim, devPtrC, mat_dim);
  if (stat != CUBLAS_STATUS_SUCCESS) {
    printf("data download failed");
    cudaFree(devPtrA);
    cudaFree(devPtrB);
    cudaFree(devPtrC);
    cublasDestroy(handle);
    return EXIT_FAILURE;
  }

  stat = cublasSetMatrix(mat_dim, mat_dim, sizeof(*a), a, mat_dim, devPtrA, mat_dim);
  if (stat != CUBLAS_STATUS_SUCCESS) {
    printf("data download failed");
    cudaFree(devPtrA);
    cudaFree(devPtrB);
    cudaFree(devPtrC);
    cublasDestroy(handle);
    return EXIT_FAILURE;
  }

  // cublasStatus_t cublasSgemm(cublasHandle_t handle,
  //                           cublasOperation_t transa, cublasOperation_t transb,
  //                           int m, int n, int k,
  //                           const float           *alpha,
  //                           const float           *A, int lda,
  //                           const float           *B, int ldb,
  //                           const float           *beta,
  //                           float           *C, int ldc)


  // compute gemm
  int times = 1;
  gemm_cpu<float, 8>(a, b, correct, mat_dim);
  for (int i = 0; i < mat_dim * mat_dim; ++i) {
    correct[i] *= times;
  }
  unsigned long long ttime = 0;
  for (int i = 0; i < times; ++i) {
    auto start = std::chrono::system_clock::now();
    stat = cublasSgemm(handle,
                       CUBLAS_OP_N,
                       CUBLAS_OP_N,
                       mat_dim,
                       mat_dim,
                       mat_dim,
                       &constant1,
                       devPtrA, mat_dim,
                       devPtrB, mat_dim,
                       &constant1,
                       devPtrC, mat_dim);
    if (stat != CUBLAS_STATUS_SUCCESS) {
      printf("data download failed");
      cudaFree(devPtrA);
      cudaFree(devPtrB);
      cudaFree(devPtrC);
      cublasDestroy(handle);
      return EXIT_FAILURE;
    }

    auto end = std::chrono::system_clock::now();
    ttime += std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
  }


  stat = cublasGetMatrix(mat_dim, mat_dim, sizeof(*a), devPtrC, mat_dim, c, mat_dim);
  if (stat != CUBLAS_STATUS_SUCCESS) {
    printf("data upload failed");
    cudaFree(devPtrA);
    cudaFree(devPtrB);
    cudaFree(devPtrC);
    cublasDestroy(handle);
    return EXIT_FAILURE;
  }

  cudaFree(devPtrA);
  cudaFree(devPtrB);
  cudaFree(devPtrC);
  cublasDestroy(handle);

  std::cout << "GPU GeMM - Took " << ttime << "us. Avg: " << (ttime / times) << "us." << std::endl;
  std::cout << sum << std::endl;


  for (int i = 0; i < mat_dim * mat_dim; ++i) {
    auto pdiff = abs(correct[i] - c[i]) / abs(correct[i]);
    if (pdiff > 0.01) {
      std::cerr << "Incorrect result: " << i << " " << pdiff << " " << correct[i] << " " << c[i] << std::endl;
      return EXIT_FAILURE;
    }
  }





}
