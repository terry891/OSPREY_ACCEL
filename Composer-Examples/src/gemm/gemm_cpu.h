//
// Created by Chris Kjellqvist on 1/12/23.
//

#ifndef LFSRTEST_GEMM_CPU_H
#define LFSRTEST_GEMM_CPU_H

#include <pthread.h>

struct gemm_struct {
  void *a, *b, *c;
  size_t start, end, dim;
};

template<typename arith_ty>
void gemm_cpu_parallel(arith_ty *a, arith_ty *b, arith_ty *c, size_t matrix_dim, size_t row_start, size_t row_end) {
  for (size_t i = row_start; i < row_end; ++i) {
    for (size_t j = 0; j < matrix_dim; ++j) {
      for (size_t k = 0; k < matrix_dim; ++k) {
        c[i * matrix_dim + j] += a[i * matrix_dim + k] * b[k * matrix_dim + j];
      }
    }
  }
}

template<typename arith_ty>
void* dispatch_cpu_parallel(void *st) {
  auto my_st = (gemm_struct*)st;
  gemm_cpu_parallel<arith_ty>((arith_ty*)my_st->a, (arith_ty*)my_st->b, (arith_ty*)my_st->c,
                              my_st->dim, my_st->start, my_st->end);
  return nullptr;
}


template<typename arith_ty, unsigned int nThreads>
void gemm_cpu(arith_ty *a, arith_ty *b, arith_ty *c, size_t matrix_dim) {
  if (nThreads == 0) {
    return;
  } else if (nThreads == 1) {
    gemm_cpu_parallel<arith_ty>(a, b, c, matrix_dim, 0, matrix_dim);
    return;
  }
  // else we're parallel
  pthread_t threads[nThreads];
  gemm_struct sts[nThreads];
  auto div = matrix_dim / nThreads;
  for (int i = 0; i < nThreads; ++i) {
    sts[i].a = a;
    sts[i].b = b;
    sts[i].c = c;
    sts[i].dim = matrix_dim;
    sts[i].start = i * div;
    if (i == nThreads - 1)
      sts[i].end = matrix_dim;
    else
      sts[i].end = (i+1) * div;
    pthread_create(&threads[i], nullptr, dispatch_cpu_parallel<arith_ty>, &sts[i]);
  }
  for (int i = 0; i < nThreads; ++i) {
    pthread_join(threads[i], nullptr);
  }
}

#endif //LFSRTEST_GEMM_CPU_H
