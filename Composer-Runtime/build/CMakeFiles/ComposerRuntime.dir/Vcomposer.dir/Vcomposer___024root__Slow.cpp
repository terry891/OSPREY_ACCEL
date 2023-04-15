// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcomposer.h for the primary calling header

#include "verilated.h"

#include "Vcomposer__Syms.h"
#include "Vcomposer___024root.h"

void Vcomposer___024root___ctor_var_reset(Vcomposer___024root* vlSelf);

Vcomposer___024root::Vcomposer___024root(Vcomposer__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcomposer___024root___ctor_var_reset(this);
}

void Vcomposer___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcomposer___024root::~Vcomposer___024root() {
}
