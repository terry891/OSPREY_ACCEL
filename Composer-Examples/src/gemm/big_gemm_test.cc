//
// Created by Chris Kjellqvist on 11/9/22.
//

#include <cstdlib>
#include <cstring>
#include <cassert>
#include <random>
#include <composer/fpga_handle.h>
#include <composer/rocc_cmd.h>
#include <composer_allocator_declaration.h>
#include <chrono>
#include <iostream>
//#include <blas/gemm.hh>
#include "gemm_cpu.h"

#ifdef FPGA
#include <fpga_mgmt.h>
#endif

using namespace composer;

#define UNIT

#ifdef UNIT
int mat_dim = 32;
int fpga_gemm_dim = 16;
#else
int mat_dim = 512;
int fpga_gemm_dim = 256;
#endif

int n_cores = 2;
pthread_mutex_t time_lock = PTHREAD_MUTEX_INITIALIZER;
unsigned long long cpytime = 0, addrtime = 0, exectime = 0, cpybacktime = 0;
pthread_t *threads;

void
fpga_gemm(remote_ptr &fpga_a, remote_ptr &fpga_b, remote_ptr &fpga_c, int A_r, int A_c, int B_r, int B_c, int core_id) {
  auto t2 = std::chrono::system_clock::now();
  // send the addresses of a and b to the fpga via manually managed channel interface (inside core)
  // send a row that we want to compute for

  int off_a = A_r * mat_dim * sizeof(int) + A_c * sizeof(int);
  int off_b = B_r * mat_dim * sizeof(int) + B_c * sizeof(int);
  int off_c = A_r * mat_dim * sizeof(int) + B_c * sizeof(int);
  auto addr_a = fpga_a.getFpgaAddr() + off_a;
  auto addr_b = fpga_b.getFpgaAddr() + off_b;
  auto addr_c = fpga_c.getFpgaAddr() + off_c;
  rocc_cmd::start_cmd(GemmCore_ID, GemmCoreCommands::A, 0,
                      false, RD::R0, 0, 0, core_id, 0, addr_a).send();
  // send b
  rocc_cmd::start_cmd(GemmCore_ID, GemmCoreCommands::B, 0, false,
                      RD::R0, 0, 0, core_id, 0, addr_b).send();

  rocc_cmd::start_cmd(GemmCore_ID, GemmCoreCommands::C, 0, false, RD::R0,
                      0, 0, core_id, 0, addr_c).send();
  // printf("%d %d %d %d\n"
  //       "\t%08x %08x %08x\n", A_r, A_c, B_r, B_c, addr_a, addr_b, addr_c);
  // fflush(stdout);
  auto t3 = std::chrono::system_clock::now();

  rocc_cmd::start_cmd(GemmCore_ID, GemmCoreCommands::rowAndGo, 0, true, RD::R0,
                      0, 0, core_id, 0, mat_dim).send().get();

  auto t5 = std::chrono::system_clock::now();
  pthread_mutex_lock(&time_lock);
  addrtime += std::chrono::duration_cast<std::chrono::microseconds>(t3 - t2).count();
  exectime += std::chrono::duration_cast<std::chrono::microseconds>(t5 - t3).count();
  pthread_mutex_unlock(&time_lock);
}

int n_divs = 0;
int *row_occupied;
int *col_occupied;
int *complete_matrix;
pthread_mutex_t mut = PTHREAD_MUTEX_INITIALIZER;

struct sched_info {
  remote_ptr a = remote_ptr(0, 0), b = remote_ptr(0, 0), c = remote_ptr(0, 0);
  int core_id = 0;
};

void *scheduling_thread(void *schinfo) {
  auto inf = (sched_info *) schinfo;
  int r, c;

  bool is_completed = false;

  // we want to avoid row/col read conflicts as much as possible. We prefer working on sections that have NO row/col
  // conflicts with the current execution state. If we relax these requirements, then we allow executing on work that
  // only has one conflict. This should be generous enough. Otherwise, we may be oversaturated.
  bool relaxed = false;

  while (!is_completed) {
    is_completed = true;
    bool have_chosen = false;
    pthread_mutex_lock(&mut);
    for (int i = 0; i < n_divs and not have_chosen; ++i) {
      for (int j = 0; j < n_divs and not have_chosen; ++j) {
        int lin_id = i * n_divs + j;
        if (!complete_matrix[lin_id]) is_completed = false;

        if (!relaxed) { if (row_occupied[i] || col_occupied[j] || complete_matrix[lin_id]) continue; }
        else if ((row_occupied[i] && col_occupied[j]) || complete_matrix[lin_id]) continue;

        row_occupied[i] += 1;
        col_occupied[j] += 1;
        r = i;
        c = j;
        complete_matrix[i * n_divs + j] = 1;
        have_chosen = true;
      }
    }
    if (!have_chosen) {
      relaxed = true;
      pthread_mutex_unlock(&mut);
      continue;
    } else relaxed = false;

    pthread_mutex_unlock(&mut);
    for (int i = 0; i < n_divs; ++i) {
      // printf("issued %d %d %d/%d\n", r, c, i, n_divs);
      fpga_gemm(inf->a, inf->b, inf->c, r * fpga_gemm_dim,
                i * fpga_gemm_dim,
                i * fpga_gemm_dim,
                c * fpga_gemm_dim,
                inf->core_id);
      // printf("complete %d %d %d/%d\n", r, c, i, n_divs);
    }
    pthread_mutex_lock(&mut);
    row_occupied[r] -= 1;
    col_occupied[c] -= 1;

    pthread_mutex_unlock(&mut);
  }
  return nullptr;
}

// print out mat_dimxmat_dim matrix to stdout
void print_matrix(int *a, const char *format = "%d ") {
  for (int i = 0; i < mat_dim; i++) {
    for (int j = 0; j < mat_dim; j++) {
      printf(format, a[i * mat_dim + j]);
    }
    printf("\n");
  }
}

int main() {
  int max_mag = 100;
  // initialize c++ random number generator
  std::random_device rd;
  std::mt19937 gen(177);
  size_t mat_size = mat_dim * mat_dim * sizeof(int);
  composer::fpga_handle_t fpga;
  auto fpga_a = fpga.malloc(mat_size);
  auto fpga_b = fpga.malloc(mat_size);
  auto fpga_c = fpga.malloc(mat_size);

  auto c = (int *) fpga_c.getHostAddr();
  memset(c, 0, sizeof(int) * mat_dim * mat_dim);
  std::uniform_int_distribution<> dis(0, max_mag);

  // allocate two mat_dimxmat_dim matrices of signed ints
  auto a = (int *) fpga_a.getHostAddr();
  auto b = (int *) fpga_b.getHostAddr();
  auto c_correct = (int *) malloc(mat_size);

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
  int times = 100;
  unsigned long long ttime = 0;
  for (int i = 0; i < times; ++i) {
    memset(c_correct, 0, mat_size);
    auto start = std::chrono::system_clock::now();
//    blas::gemm<int, int, int>(blas::Layout::RowMajor,
//               blas::Op::NoTrans,
//               blas::Op::NoTrans,
//               mat_dim,
//               mat_dim,
//               mat_dim,
//               1,
//               a,
//               1,
//               b,
//               1,
//               1,
//               c,
//               1);
    gemm_cpu<int, 8>(a, b, c, mat_dim);
    auto end = std::chrono::system_clock::now();
    ttime += std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
  }


//  printf("\n\n");
//
//  print_matrix(c_correct, "%x ");

  n_divs = mat_dim / fpga_gemm_dim;
  assert(mat_dim % fpga_gemm_dim == 0);
  row_occupied = new int[n_divs];
  col_occupied = new int[n_divs];
  complete_matrix = new int[n_divs * n_divs];
  memset(row_occupied, 0, sizeof(int) * n_divs);
  memset(col_occupied, 0, sizeof(int) * n_divs);
  memset(complete_matrix, 0, sizeof(int) * n_divs * n_divs);
  auto schinfo = new sched_info[n_cores];
  for (int i = 0; i < n_cores; ++i) {
    schinfo[i].a = fpga_a;
    schinfo[i].b = fpga_b;
    schinfo[i].c = fpga_c;
    schinfo[i].core_id = i;
  }


  std::cout << "CPU GeMM - Took " << ttime << "us. Avg: " << (ttime / times) << "us." << std::endl;
  // allocate space for a, b, result on the fpga
//  printf("fpga A %llx\n", fpga_a.getFpgaAddr());
//  printf("fpga B %llx\n", fpga_b.getFpgaAddr());
//  printf("fpga C %llx\n", fpga_c.getFpgaAddr());

#ifdef FPGA
  fpga_mgmt_init();
#endif
  auto gstart = std::chrono::system_clock::now();
  for (int i = 0; i < times; ++i) {
    threads = new pthread_t[n_cores];
    memset(c, 0, mat_size);
    memset(complete_matrix, 0, sizeof(int) * n_divs * n_divs);
    auto t0 = std::chrono::system_clock::now();
    fpga.copy_to_fpga(fpga_a);
    fpga.copy_to_fpga(fpga_b);
    fpga.copy_to_fpga(fpga_c);
    auto t1 = std::chrono::system_clock::now();
    cpytime += std::chrono::duration_cast<std::chrono::microseconds>(t1 - t0).count();
    for (int j = 0; j < n_cores; ++j) {
      if (pthread_create(&threads[j], nullptr, scheduling_thread, &schinfo[j]))
        printf("Failed to create thread!\n");
    }
    for (int j = 0; j < n_cores; ++j) {
      pthread_join(threads[j], nullptr);
    }
    auto t2 = std::chrono::system_clock::now();
    fpga.copy_from_fpga(fpga_c);
    auto t3 = std::chrono::system_clock::now();
    cpybacktime += std::chrono::duration_cast<std::chrono::microseconds>(t3 - t2).count();
  }
  auto gend = std::chrono::system_clock::now();


#ifdef FPGA
  struct fpga_mgmt_image_info info = {0};

  /* get local image description, contains status, vendor id, and device id. */
  fpga_mgmt_describe_local_image(0, &info, 0);
  auto p1 = info.metrics.power;

  std::cout << "FPGA Statistics: " << std::endl;
  std::cout << "Average power draw " << p1 << "W" << std::endl;
#endif
  std::cout << "Avg Time per Kernel Exec: "
            << std::chrono::duration_cast<std::chrono::microseconds>(gend - gstart).count() / times << "us."
            << std::endl;
  auto total = std::chrono::duration_cast<std::chrono::microseconds>(gend - gstart).count();
  printf("Exec time: %.02f%%\n", 100 * float(exectime) / float(total));
  printf("CopyTO time: %.02f%%\n", 100 * float(cpytime) / float(total));
  printf("CopyFROM time: %.02f%%\n", 100 * float(cpybacktime) / float(total));

  // print_matrix(c_correct, "%x ");
  // printf("\n\n");
  // print_matrix(c, "%x ");
  bool equal = true;
  for (int i = 0; i < mat_dim * mat_dim; ++i) {
    if (c_correct[i] != c[i]) {
      equal = false;
//      printf("%d: %d not equal %d\n", i, c[i], fpga_c_res[i]);
    }
  }
//
//
//  printf("\n\n");
//
//  print_matrix(c, "%x ");



  composer::rocc_cmd::flush_cmd().send();

  printf("Correct: %d\n", equal);
}
