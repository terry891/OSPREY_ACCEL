// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcomposer__Syms.h"
#include "Vcomposer.h"
#include "Vcomposer___024root.h"

// FUNCTIONS
Vcomposer__Syms::~Vcomposer__Syms()
{
}

Vcomposer__Syms::Vcomposer__Syms(VerilatedContext* contextp, const char* namep, Vcomposer* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-9);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_ComposerTop__acc__acc__EnergyCalc__cores__myWriters_WriteChannel_1.configure(this, name(), "ComposerTop.acc.acc.EnergyCalc.cores.myWriters_WriteChannel_1", "myWriters_WriteChannel_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ComposerTop__acc__acc__cmdRouter.configure(this, name(), "ComposerTop.acc.acc.cmdRouter", "cmdRouter", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ComposerTop__acc__crossbarModule.configure(this, name(), "ComposerTop.acc.crossbarModule", "crossbarModule", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ComposerTop__axi4xbar.configure(this, name(), "ComposerTop.axi4xbar", "axi4xbar", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ComposerTop__axi4xbar_1.configure(this, name(), "ComposerTop.axi4xbar_1", "axi4xbar_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ComposerTop__axi4yank.configure(this, name(), "ComposerTop.axi4yank", "axi4yank", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ComposerTop__cmd_resp_axilhub__axil_widget__axi42tl.configure(this, name(), "ComposerTop.cmd_resp_axilhub.axil_widget.axi42tl", "axi42tl", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ComposerTop__cmd_resp_axilhub__axil_widget__axi4frag.configure(this, name(), "ComposerTop.cmd_resp_axilhub.axil_widget.axi4frag", "axi4frag", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ComposerTop__cmd_resp_axilhub__axil_widget__axi4yank.configure(this, name(), "ComposerTop.cmd_resp_axilhub.axil_widget.axi4yank", "axi4yank", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ComposerTop__tl2axi4.configure(this, name(), "ComposerTop.tl2axi4", "tl2axi4", -9, VerilatedScope::SCOPE_OTHER);
}
