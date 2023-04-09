//
// Created by Chris Kjellqvist on 11/9/22.
//

#include <cstdlib>
#include <cstring>
#include <random>
#include <composer/fpga_handle.h>
#include <composer/rocc_cmd.h>
#include <composer_allocator_declaration.h>
#include <chrono>
#include <iostream>
#include "gemm_cpu.h"

#ifdef FPGA
#include <fpga_mgmt.h>
#endif

using namespace composer;

const int mat_dim = FPGA_RC_DIM;
int times = 1;

using gemm_type = float;

// print out mat_dimxmat_dim matrix to stdout
void print_matrix(gemm_type *a, const char *format = "%d ") {
  for (int i = 0; i < mat_dim; i++) {
    for (int j = 0; j < mat_dim; j++) {
      printf(format, a[i * mat_dim + j]);
    }
    printf("\n");
  }
}

int * ar1;
int * ar2;
size_t sz;
bool swi = false;
int try_to_clear () {
  if (swi) memcpy(ar2, ar1, sz);
  else memcpy(ar1, ar2, sz);
  swi = !swi;
  return ar2[14];
}

int main() {
  sz = 1024 * 1024 * 256;
  ar1 = (int*)malloc(sz);
  ar2 = (int*)malloc(sz);
  int max_mag = 100;
  // initialize c++ random number generator
  std::random_device rd;
  std::mt19937 gen(177); // NOLINT(cert-msc51-cpp)
  size_t mat_size = mat_dim * mat_dim * sizeof(gemm_type);
  composer::fpga_handle_t fpga;
  auto fpga_a = fpga.malloc(mat_size);
  auto fpga_b = fpga.malloc(mat_size);
  auto fpga_c = fpga.malloc(mat_size);
  memset(fpga_a.getHostAddr(), 0, mat_size);
  memset(fpga_b.getHostAddr(), 0, mat_size);
  memset(fpga_c.getHostAddr(), 0, mat_size);


  auto c = (gemm_type *) fpga_c.getHostAddr();
//  std::uniform_int_distribution<> dis(-max_mag, max_mag);


  // allocate two mat_dimxmat_dim matrices of signed ints
  auto a = (gemm_type *) fpga_a.getHostAddr();
  auto b = (gemm_type *) fpga_b.getHostAddr();
  auto c_correct = (gemm_type *) malloc(mat_size);
  memset(c_correct, 0, mat_size);
  if (typeid(gemm_type) == typeid(int)) {
    std::uniform_int_distribution<> dis(0, max_mag);

    // randomly initialize these matrices
    for (int i = 0; i < mat_dim; ++i) {
      for (int j = 0; j < mat_dim; ++j) {
        auto off = i * mat_dim + j;
        a[off] = dis(gen);
        b[off] = dis(gen);
      }
    }
  } else if (typeid(gemm_type) == typeid(float)) {
    std::uniform_real_distribution<float> dis(0, (gemm_type)max_mag);
    for (int i = 0; i < mat_dim; ++i) {
      for (int j = 0; j < mat_dim; ++j) {
        auto off = i * mat_dim + j;
        a[off] = dis(gen);
        b[off] = dis(gen);
      }
    }
  }

  print_matrix(a, "%f ");

  printf("\n\n");

  print_matrix(b, "%f ");
//  print_matrix(a, "%02x ");
//  print_matrix(c, "%x ");
//  printf("\n\n");
  // compute gemm
  unsigned long long ttime = 0;
  for (int i = 0; i < times; ++i) {
    memset(c_correct, 0, mat_size);
    try_to_clear();
    auto start = std::chrono::system_clock::now();
    gemm_cpu<gemm_type, 8>(a, b, c_correct, mat_dim);
    auto end = std::chrono::system_clock::now();
    ttime += std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
  }


  std::cout << "CPU GeMM - Took " << ttime << "us. Avg: " << (ttime / times) << "us." << std::endl;
  // allocate space for a, b, result on the fpga
//  printf("fpga A %llx\n", fpga_a.getFpgaAddr());
//  printf("fpga B %llx\n", fpga_b.getFpgaAddr());
//  printf("fpga C %llx\n", fpga_c.getFpgaAddr());
  // move a and b to the fpga

#ifdef FPGA
  fpga_mgmt_init();
#endif
  unsigned long long cpytime = 0, addrtime = 0, exectime = 0, cpybacktime = 0;
  auto gstart = std::chrono::system_clock::now();
  auto gend = std::chrono::system_clock::now();
  for (int i = 0; i < times; ++i) {
    memset(c, 0, mat_size);
    auto t0 = std::chrono::system_clock::now();
    fpga.copy_to_fpga(fpga_a);
    fpga.copy_to_fpga(fpga_b);
    fpga.copy_to_fpga(fpga_c);
    auto t2 = std::chrono::system_clock::now();

    // send the addresses of a and b to the fpga via manually managed channel interface (inside core)
    // send a row that we want to compute for
    int core_id = 0;
    rocc_cmd::start_cmd(GemmCore_ID, GemmCoreCommands::A, 0,
                        false, RD::R0, 0, 0, core_id, 0, fpga_a.getFpgaAddr()).send();
    // send b
    rocc_cmd::start_cmd(GemmCore_ID, GemmCoreCommands::B, 0, false,
                        RD::R0, 0, 0, core_id, 0, fpga_b.getFpgaAddr()).send();

    rocc_cmd::start_cmd(GemmCore_ID, GemmCoreCommands::C, 0, false, RD::R0,
                        0, 0, core_id, 0, fpga_c.getFpgaAddr()).send();
    auto t3 = std::chrono::system_clock::now();

    rocc_cmd::start_cmd(GemmCore_ID, GemmCoreCommands::rowAndGo , 0, true, RD::R0,
                        0, 0, core_id, 0, mat_dim).send().get();
    // printf("Row size is %d\n", total_row_size);

    auto t4 = std::chrono::system_clock::now();
    // copy results from FPGA
    fpga.copy_from_fpga(fpga_c);
    auto t5 = std::chrono::system_clock::now();
    cpytime += std::chrono::duration_cast<std::chrono::microseconds>(t2 - t0).count();
    addrtime += std::chrono::duration_cast<std::chrono::microseconds>(t3 - t2).count();
    exectime += std::chrono::duration_cast<std::chrono::microseconds>(t4 - t3).count();
    cpybacktime += std::chrono::duration_cast<std::chrono::microseconds>(t5 - t4).count();
    // run at least 5 times and for at least 2 minutes
    gend = std::chrono::system_clock::now();
  }

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
  printf("AddrCopy time: %.02f%%\n", 100 * float(addrtime) / float(total));
  printf("CopyTO time: %.02f%%\n", 100 * float(cpytime) / float(total));
  printf("CopyFROM time: %.02f%%\n", 100 * float(cpybacktime) / float(total));
  bool equal = true;
  for (int i = 0; i < mat_dim * mat_dim; ++i) {
    if (abs(float(c_correct[i]-c[i])/float(c[i])) > 0.01) {
      equal = false;
      printf("%f: %f not equal %f\n", i, c[i], c_correct[i]);
    }
  }


  print_matrix(c_correct, "%.02f ");
  printf("\n\n");
  print_matrix(c, "%.02f ");



  composer::rocc_cmd::flush_cmd().send();

  printf("Correct: %d\n", equal);
}
