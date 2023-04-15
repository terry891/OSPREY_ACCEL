// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCOMPOSER__SYMS_H_
#define VERILATED_VCOMPOSER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcomposer.h"

// INCLUDE MODULE CLASSES
#include "Vcomposer___024root.h"

// SYMS CLASS (contains all model state)
class Vcomposer__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcomposer* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcomposer___024root            TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_ComposerTop__acc__acc__EnergyCalc__cores__myWriters_WriteChannel_1;
    VerilatedScope __Vscope_ComposerTop__acc__acc__cmdRouter;
    VerilatedScope __Vscope_ComposerTop__acc__crossbarModule;
    VerilatedScope __Vscope_ComposerTop__axi4xbar;
    VerilatedScope __Vscope_ComposerTop__axi4xbar_1;
    VerilatedScope __Vscope_ComposerTop__axi4yank;
    VerilatedScope __Vscope_ComposerTop__cmd_resp_axilhub__axil_widget__axi42tl;
    VerilatedScope __Vscope_ComposerTop__cmd_resp_axilhub__axil_widget__axi4frag;
    VerilatedScope __Vscope_ComposerTop__cmd_resp_axilhub__axil_widget__axi4yank;
    VerilatedScope __Vscope_ComposerTop__tl2axi4;

    // CONSTRUCTORS
    Vcomposer__Syms(VerilatedContext* contextp, const char* namep, Vcomposer* modelp);
    ~Vcomposer__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
