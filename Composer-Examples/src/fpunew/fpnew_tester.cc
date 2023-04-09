//
// Created by Chris Kjellqvist on 1/26/23.
//

#include <composer_allocator_declaration.h>
#include <composer/rocc_cmd.h>
#include <composer/rocc_response.h>
#include <composer/fpga_handle.h>

using namespace composer;

void set_rounding_mode(FPRoundingMode rm) {
  rocc_cmd::start_cmd(FPUNew_ID, FPStartCommands::roundingMode, 0, false, RD::R0, 0, 0, 0, 0, rm).send();
}

void set_operation(FPOperation op, bool modifier) {
  rocc_cmd::start_cmd(FPUNew_ID, FPStartCommands::OpTy, 0, false, RD::R0, 0, 0, 0, 0, op).send();
  rocc_cmd::start_cmd(FPUNew_ID, FPStartCommands::OpMod, 0, false, RD::R0, 0, 0, 0, 0, modifier).send();
}

void set_src_dest_int_format(FPFloatFormat src, FPFloatFormat dst, FPIntFormat intF) {
  rocc_cmd::start_cmd(FPUNew_ID, FPStartCommands::srcFormat, 0, false, RD::R0, 0, 0, 0, 0, src).send();
  rocc_cmd::start_cmd(FPUNew_ID, FPStartCommands::dstFormat, 0, false, RD::R0, 0, 0, 0, 0, dst).send();
  rocc_cmd::start_cmd(FPUNew_ID, FPStartCommands::intFormat, 0, false, RD::R0, 0, 0, 0, 0, intF).send();
}

template<typename t>
void set_into_hex(t val, uint64_t &dest) {
  dest = 0;
  t *ptr = (t*)&dest;
  *ptr = val;
  if (sizeof(t) == 4) {
    std::cout << val << " is integer " << *(int*)&val << " | " << dest << std::endl;
  }
}

template<typename t>
void set_opA(t A, int lane) {
  uint64_t p2;
  set_into_hex(A, p2);
  rocc_cmd::start_cmd(FPUNew_ID, FPStartCommands::OpA, lane, false, RD::R0, 0, 0, 0, 0, p2).send();
}

template<typename t>
void set_opB(t A, int lane) {
  uint64_t p2;
  set_into_hex(A, p2);
  rocc_cmd::start_cmd(FPUNew_ID, FPStartCommands::OpB, lane, false, RD::R0, 0, 0, 0, 0, p2).send();
}

template<typename t>
void set_opC(t A, int lane) {
  uint64_t p2;
  set_into_hex(A, p2);
  rocc_cmd::start_cmd(FPUNew_ID, FPStartCommands::OpC, lane, false, RD::R0, 0, 0, 0, 0, p2).send();
}

template<typename t= float>
t get_result() {
  auto resp = rocc_cmd::start_cmd(FPUNew_ID, FPStartCommands::GO, 0, true, RD::R0, 0, 0, 0, 0, 0).send().get();
  std::cout << "result is " << resp.data << std::endl;
  t *ptr = (t *)&resp.data;
  if (sizeof(t) > 4) {
    std::cerr << "This may not work because payload is not a full 64 bits!" << std::endl;
  }
  std::cout << resp.data << std::endl;
  return *ptr;
}

int main() {
  fpga_handle_t handle;

  set_rounding_mode(FPRoundingMode::RDN); // round nearest
  set_operation(FPOperation::ADD, false); // +
  set_src_dest_int_format(Fp32, Fp32, FPIntFormat::Int32);
  set_opA<float>(0.0, 0);
  set_opB<float>(3.0, 0);
  set_opC<float>(1.0, 0);
  float res = get_result<float>();
  std::cout << "1.0 + 3.0 is " << res << std::endl;

  rocc_cmd::flush_cmd().send();

}