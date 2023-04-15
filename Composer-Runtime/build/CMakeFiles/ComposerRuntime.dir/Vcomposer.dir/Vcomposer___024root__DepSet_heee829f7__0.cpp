// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcomposer.h for the primary calling header

#include "verilated.h"

#include "Vcomposer__Syms.h"
#include "Vcomposer___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcomposer___024root___dump_triggers__ico(Vcomposer___024root* vlSelf);
#endif  // VL_DEBUG

void Vcomposer___024root___eval_triggers__ico(Vcomposer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomposer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomposer___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcomposer___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcomposer___024root___dump_triggers__act(Vcomposer___024root* vlSelf);
#endif  // VL_DEBUG

void Vcomposer___024root___eval_triggers__act(Vcomposer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomposer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomposer___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcomposer___024root___dump_triggers__act(vlSelf);
    }
#endif
}

extern const VlWide<16>/*511:0*/ Vcomposer__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT void Vcomposer___024root___nba_sequent__TOP__0(Vcomposer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomposer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomposer___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__ComposerTop__DOT__acc__DOT__crossbarModule__DOT__beatsLeft;
    __Vdly__ComposerTop__DOT__acc__DOT__crossbarModule__DOT__beatsLeft = 0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__0;
    VlWide<4>/*127:0*/ __Vtemp_h8468f6cf__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__1;
    VlWide<4>/*127:0*/ __Vtemp_h588a8dde__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__2;
    VlWide<4>/*127:0*/ __Vtemp_h38f09b4d__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__3;
    VlWide<4>/*127:0*/ __Vtemp_h00d8e1cb__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__4;
    VlWide<4>/*127:0*/ __Vtemp_h1c7e2084__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__5;
    VlWide<4>/*127:0*/ __Vtemp_h14cd7665__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__6;
    VlWide<4>/*127:0*/ __Vtemp_ha8d0cd25__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__7;
    VlWide<4>/*127:0*/ __Vtemp_h127ca22f__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__8;
    VlWide<4>/*127:0*/ __Vtemp_h5e238579__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__9;
    VlWide<4>/*127:0*/ __Vtemp_h8553db2c__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__10;
    VlWide<4>/*127:0*/ __Vtemp_h36e0fd1d__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__11;
    VlWide<4>/*127:0*/ __Vtemp_h1a5002a9__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__12;
    VlWide<4>/*127:0*/ __Vtemp_h188c5d29__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__13;
    VlWide<4>/*127:0*/ __Vtemp_hc31387d8__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__14;
    VlWide<4>/*127:0*/ __Vtemp_h960910d8__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__15;
    VlWide<4>/*127:0*/ __Vtemp_he040b0fa__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__16;
    VlWide<4>/*127:0*/ __Vtemp_hae4979f1__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__17;
    VlWide<4>/*127:0*/ __Vtemp_ha46bd445__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__18;
    VlWide<4>/*127:0*/ __Vtemp_h8adc7b6d__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__19;
    VlWide<4>/*127:0*/ __Vtemp_h45a9a630__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__20;
    VlWide<4>/*127:0*/ __Vtemp_hdc68e021__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__21;
    VlWide<4>/*127:0*/ __Vtemp_h6140eefe__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__22;
    VlWide<4>/*127:0*/ __Vtemp_hfb56c413__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__23;
    VlWide<4>/*127:0*/ __Vtemp_h449816ef__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__24;
    VlWide<4>/*127:0*/ __Vtemp_hcd4f36c8__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__25;
    VlWide<4>/*127:0*/ __Vtemp_h1d4551e8__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__26;
    VlWide<4>/*127:0*/ __Vtemp_haf3c5f1a__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__27;
    VlWide<4>/*127:0*/ __Vtemp_hcb53fa89__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__28;
    VlWide<4>/*127:0*/ __Vtemp_h030a4441__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__29;
    VlWide<4>/*127:0*/ __Vtemp_hfdb78070__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__30;
    VlWide<4>/*127:0*/ __Vtemp_hefcaae1a__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__31;
    VlWide<4>/*127:0*/ __Vtemp_h36c51038__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__32;
    VlWide<4>/*127:0*/ __Vtemp_h2a48df4c__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__33;
    VlWide<4>/*127:0*/ __Vtemp_h866fda1b__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__34;
    VlWide<4>/*127:0*/ __Vtemp_h59c6dbe8__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__35;
    VlWide<4>/*127:0*/ __Vtemp_hbafa417c__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__36;
    VlWide<4>/*127:0*/ __Vtemp_hfb5dee29__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__37;
    VlWide<4>/*127:0*/ __Vtemp_h81342760__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__38;
    VlWide<4>/*127:0*/ __Vtemp_hc1f1ecca__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__39;
    VlWide<4>/*127:0*/ __Vtemp_h8699e225__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__40;
    VlWide<4>/*127:0*/ __Vtemp_hf4c31a13__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__41;
    VlWide<4>/*127:0*/ __Vtemp_h43cc02d4__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__42;
    VlWide<4>/*127:0*/ __Vtemp_h611effbc__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__43;
    VlWide<4>/*127:0*/ __Vtemp_h54248795__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__44;
    VlWide<4>/*127:0*/ __Vtemp_h26125596__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__45;
    VlWide<4>/*127:0*/ __Vtemp_hab0a9451__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__46;
    VlWide<4>/*127:0*/ __Vtemp_h6aeaa05c__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__47;
    VlWide<4>/*127:0*/ __Vtemp_hc2279870__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__48;
    VlWide<4>/*127:0*/ __Vtemp_hda237ea7__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__49;
    VlWide<4>/*127:0*/ __Vtemp_h63196f5e__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__50;
    VlWide<4>/*127:0*/ __Vtemp_h56dc1ac5__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__51;
    VlWide<4>/*127:0*/ __Vtemp_h574097e0__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__52;
    VlWide<4>/*127:0*/ __Vtemp_h9e54d7ca__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__53;
    VlWide<4>/*127:0*/ __Vtemp_h0cc3f3fb__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__54;
    VlWide<4>/*127:0*/ __Vtemp_h371ad274__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__55;
    VlWide<4>/*127:0*/ __Vtemp_h1a2d1032__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__56;
    VlWide<4>/*127:0*/ __Vtemp_h4b5050b3__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__57;
    VlWide<4>/*127:0*/ __Vtemp_hf2adc3f6__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__58;
    VlWide<4>/*127:0*/ __Vtemp_ha21fd949__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__59;
    VlWide<4>/*127:0*/ __Vtemp_h34d79755__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__60;
    VlWide<4>/*127:0*/ __Vtemp_h13c23363__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__61;
    VlWide<4>/*127:0*/ __Vtemp_heb56ae48__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__62;
    VlWide<4>/*127:0*/ __Vtemp_h0278d47e__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__63;
    VlWide<4>/*127:0*/ __Vtemp_h4c2fceef__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__64;
    VlWide<4>/*127:0*/ __Vtemp_h6f902f18__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__65;
    VlWide<4>/*127:0*/ __Vtemp_he4637a92__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__66;
    VlWide<4>/*127:0*/ __Vtemp_h9e8e3e5e__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__67;
    VlWide<4>/*127:0*/ __Vtemp_h04f4eba4__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__68;
    VlWide<4>/*127:0*/ __Vtemp_hb6027c85__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__69;
    VlWide<4>/*127:0*/ __Vtemp_h732ccad9__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__70;
    VlWide<4>/*127:0*/ __Vtemp_h1add0867__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__71;
    VlWide<4>/*127:0*/ __Vtemp_h1b97278a__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__72;
    VlWide<4>/*127:0*/ __Vtemp_hbd6c3252__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__73;
    VlWide<4>/*127:0*/ __Vtemp_h396bfc6a__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__74;
    VlWide<4>/*127:0*/ __Vtemp_hddbc176e__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__75;
    VlWide<4>/*127:0*/ __Vtemp_h609d055b__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__76;
    VlWide<4>/*127:0*/ __Vtemp_h1fb21490__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__77;
    VlWide<4>/*127:0*/ __Vtemp_h34aa3bb6__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__78;
    VlWide<4>/*127:0*/ __Vtemp_hf8d681b7__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__79;
    VlWide<4>/*127:0*/ __Vtemp_hf231cbfb__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__80;
    VlWide<4>/*127:0*/ __Vtemp_h23dc8611__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__81;
    VlWide<4>/*127:0*/ __Vtemp_h15be12d2__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__82;
    VlWide<4>/*127:0*/ __Vtemp_h4d4c7746__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__83;
    VlWide<4>/*127:0*/ __Vtemp_hec617044__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__84;
    VlWide<4>/*127:0*/ __Vtemp_h8823209b__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__85;
    VlWide<4>/*127:0*/ __Vtemp_hbc472d40__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__86;
    VlWide<4>/*127:0*/ __Vtemp_hb73f5f38__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__87;
    VlWide<4>/*127:0*/ __Vtemp_h9548cb0c__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__88;
    VlWide<4>/*127:0*/ __Vtemp_h086bb850__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__89;
    VlWide<4>/*127:0*/ __Vtemp_h3684e5d4__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__90;
    VlWide<4>/*127:0*/ __Vtemp_hf938a727__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__91;
    VlWide<4>/*127:0*/ __Vtemp_h0ef8f2c1__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__92;
    VlWide<4>/*127:0*/ __Vtemp_hcc78362f__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__93;
    VlWide<4>/*127:0*/ __Vtemp_h7a98ab75__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__94;
    VlWide<4>/*127:0*/ __Vtemp_h4ac64e52__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__95;
    VlWide<4>/*127:0*/ __Vtemp_h1c5054a5__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__96;
    VlWide<4>/*127:0*/ __Vtemp_hded6bb53__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__97;
    VlWide<4>/*127:0*/ __Vtemp_ha33e964e__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__98;
    VlWide<4>/*127:0*/ __Vtemp_hd61961e9__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__99;
    VlWide<4>/*127:0*/ __Vtemp_h915c5ff0__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__100;
    VlWide<4>/*127:0*/ __Vtemp_h7e8e8383__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__101;
    VlWide<4>/*127:0*/ __Vtemp_h837d55cc__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__102;
    VlWide<4>/*127:0*/ __Vtemp_h1bf236dd__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__103;
    VlWide<4>/*127:0*/ __Vtemp_hf66ab717__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__104;
    VlWide<4>/*127:0*/ __Vtemp_h4f5636bc__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__105;
    VlWide<4>/*127:0*/ __Vtemp_h06f144b4__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__106;
    VlWide<4>/*127:0*/ __Vtemp_ha1a95304__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__107;
    VlWide<4>/*127:0*/ __Vtemp_hfe2aea39__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__108;
    VlWide<4>/*127:0*/ __Vtemp_hfd40303b__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__109;
    VlWide<4>/*127:0*/ __Vtemp_ha85fdc59__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__110;
    VlWide<4>/*127:0*/ __Vtemp_h1cc13451__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__111;
    VlWide<4>/*127:0*/ __Vtemp_h3a26e2b0__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__112;
    VlWide<4>/*127:0*/ __Vtemp_h7aa9f2c5__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__113;
    VlWide<4>/*127:0*/ __Vtemp_ha55562e4__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__114;
    VlWide<4>/*127:0*/ __Vtemp_ha232a86a__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__115;
    VlWide<4>/*127:0*/ __Vtemp_hce8c01d6__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__116;
    VlWide<4>/*127:0*/ __Vtemp_ha94990d3__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__117;
    VlWide<4>/*127:0*/ __Vtemp_he6cd2efe__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__118;
    VlWide<4>/*127:0*/ __Vtemp_h7e8b567a__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__119;
    VlWide<4>/*127:0*/ __Vtemp_h0dc58061__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__120;
    VlWide<4>/*127:0*/ __Vtemp_h018a1be5__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__121;
    VlWide<4>/*127:0*/ __Vtemp_hbef0f887__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__122;
    VlWide<4>/*127:0*/ __Vtemp_h64ea2d04__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__123;
    VlWide<4>/*127:0*/ __Vtemp_h90c9d7e9__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__124;
    VlWide<4>/*127:0*/ __Vtemp_h85db7249__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__125;
    VlWide<4>/*127:0*/ __Vtemp_h335ea3b3__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__126;
    VlWide<4>/*127:0*/ __Vtemp_h709b90c3__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__127;
    VlWide<4>/*127:0*/ __Vtemp_h700fe55b__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__128;
    VlWide<4>/*127:0*/ __Vtemp_hbde53012__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__129;
    VlWide<4>/*127:0*/ __Vtemp_hd6d7d968__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__130;
    VlWide<4>/*127:0*/ __Vtemp_h4f23135b__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__131;
    VlWide<4>/*127:0*/ __Vtemp_hc45e7093__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__132;
    VlWide<4>/*127:0*/ __Vtemp_hb3188072__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__133;
    VlWide<4>/*127:0*/ __Vtemp_hc4a210ca__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__134;
    VlWide<4>/*127:0*/ __Vtemp_h264acc80__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__135;
    VlWide<4>/*127:0*/ __Vtemp_hb99f6cfb__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__136;
    VlWide<4>/*127:0*/ __Vtemp_he7de96df__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__137;
    VlWide<4>/*127:0*/ __Vtemp_he40b69bd__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__138;
    VlWide<4>/*127:0*/ __Vtemp_h58769aa6__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__139;
    VlWide<4>/*127:0*/ __Vtemp_ha1cf5f97__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__140;
    VlWide<4>/*127:0*/ __Vtemp_h5c01e76c__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__141;
    VlWide<4>/*127:0*/ __Vtemp_ha075dcbb__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__142;
    VlWide<4>/*127:0*/ __Vtemp_ha57f0d4a__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__143;
    VlWide<4>/*127:0*/ __Vtemp_hbe9d6d9d__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__144;
    VlWide<4>/*127:0*/ __Vtemp_hd74ac65a__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__145;
    VlWide<4>/*127:0*/ __Vtemp_h69d0c93f__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__146;
    VlWide<4>/*127:0*/ __Vtemp_h35db6d02__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__147;
    VlWide<4>/*127:0*/ __Vtemp_hb96c1164__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__148;
    VlWide<4>/*127:0*/ __Vtemp_hf4be076b__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__149;
    VlWide<4>/*127:0*/ __Vtemp_hcb3d49a7__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__150;
    VlWide<4>/*127:0*/ __Vtemp_hf7ec29ba__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__151;
    VlWide<4>/*127:0*/ __Vtemp_h40701b71__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__152;
    VlWide<4>/*127:0*/ __Vtemp_hd1a4657d__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__153;
    VlWide<4>/*127:0*/ __Vtemp_h6cee4404__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__154;
    VlWide<4>/*127:0*/ __Vtemp_hb695882e__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__155;
    VlWide<4>/*127:0*/ __Vtemp_h34c29422__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__156;
    VlWide<4>/*127:0*/ __Vtemp_h7077ec4c__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__157;
    VlWide<4>/*127:0*/ __Vtemp_h565ee6ab__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__158;
    VlWide<4>/*127:0*/ __Vtemp_hcd496e07__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__159;
    VlWide<4>/*127:0*/ __Vtemp_h43ea2ba6__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__160;
    VlWide<4>/*127:0*/ __Vtemp_h555e0a4d__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__161;
    VlWide<4>/*127:0*/ __Vtemp_h42786c55__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__162;
    VlWide<4>/*127:0*/ __Vtemp_h5e33cf2a__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__163;
    VlWide<4>/*127:0*/ __Vtemp_ha1ca5702__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__164;
    VlWide<4>/*127:0*/ __Vtemp_h02dddc7e__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__165;
    VlWide<4>/*127:0*/ __Vtemp_h0d9ff01a__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__166;
    VlWide<4>/*127:0*/ __Vtemp_hae7fd2d6__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__167;
    VlWide<4>/*127:0*/ __Vtemp_habcfb717__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__168;
    VlWide<4>/*127:0*/ __Vtemp_he4a99a21__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__169;
    VlWide<4>/*127:0*/ __Vtemp_h86e3cd33__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__170;
    VlWide<4>/*127:0*/ __Vtemp_hcc70432d__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__171;
    VlWide<4>/*127:0*/ __Vtemp_h7b3e0e9f__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__172;
    VlWide<4>/*127:0*/ __Vtemp_h66d68266__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__173;
    VlWide<4>/*127:0*/ __Vtemp_h7ac89e4a__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__174;
    VlWide<4>/*127:0*/ __Vtemp_haf999cd6__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__175;
    VlWide<4>/*127:0*/ __Vtemp_h922d38b0__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__176;
    VlWide<4>/*127:0*/ __Vtemp_h33ebeab4__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__177;
    VlWide<4>/*127:0*/ __Vtemp_h89a5d318__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__178;
    VlWide<4>/*127:0*/ __Vtemp_hd060cb87__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__179;
    VlWide<4>/*127:0*/ __Vtemp_hc4f288e4__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__180;
    VlWide<4>/*127:0*/ __Vtemp_hedb62d64__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__181;
    VlWide<4>/*127:0*/ __Vtemp_h21d784cd__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__182;
    VlWide<4>/*127:0*/ __Vtemp_h9de3b4eb__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__183;
    VlWide<4>/*127:0*/ __Vtemp_h3683eb49__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__184;
    VlWide<4>/*127:0*/ __Vtemp_h63317651__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__185;
    VlWide<4>/*127:0*/ __Vtemp_h139f6c40__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__186;
    VlWide<4>/*127:0*/ __Vtemp_h65bc1ea4__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__187;
    VlWide<4>/*127:0*/ __Vtemp_h7f4174ab__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__188;
    VlWide<4>/*127:0*/ __Vtemp_h744764a9__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__189;
    VlWide<4>/*127:0*/ __Vtemp_hbcd131d0__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__190;
    VlWide<4>/*127:0*/ __Vtemp_hf433362e__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__191;
    VlWide<4>/*127:0*/ __Vtemp_hc694d32b__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__192;
    VlWide<4>/*127:0*/ __Vtemp_hcfe7a2f8__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__193;
    VlWide<4>/*127:0*/ __Vtemp_h11a950ee__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__194;
    VlWide<4>/*127:0*/ __Vtemp_h899d4c27__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__195;
    VlWide<4>/*127:0*/ __Vtemp_h5f2c2be3__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__196;
    VlWide<4>/*127:0*/ __Vtemp_ha9445a2f__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__197;
    VlWide<4>/*127:0*/ __Vtemp_h7fc77022__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__198;
    VlWide<4>/*127:0*/ __Vtemp_h7e995496__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__199;
    VlWide<4>/*127:0*/ __Vtemp_h34fe5747__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__200;
    VlWide<4>/*127:0*/ __Vtemp_hac6d531c__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__201;
    VlWide<4>/*127:0*/ __Vtemp_h51da7b55__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__202;
    VlWide<4>/*127:0*/ __Vtemp_h9b1f3843__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__203;
    VlWide<4>/*127:0*/ __Vtemp_h043adf7d__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__204;
    VlWide<4>/*127:0*/ __Vtemp_hc2007deb__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__205;
    VlWide<4>/*127:0*/ __Vtemp_hc94bf0fb__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__206;
    VlWide<4>/*127:0*/ __Vtemp_h0da122de__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__207;
    VlWide<4>/*127:0*/ __Vtemp_h13a5c6a2__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__208;
    VlWide<4>/*127:0*/ __Vtemp_h125f1bfd__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__209;
    VlWide<4>/*127:0*/ __Vtemp_h8055cf40__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__210;
    VlWide<4>/*127:0*/ __Vtemp_h13b64a69__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__211;
    VlWide<4>/*127:0*/ __Vtemp_h254a9471__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__212;
    VlWide<4>/*127:0*/ __Vtemp_h588177e1__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__213;
    VlWide<4>/*127:0*/ __Vtemp_h57eb519b__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__214;
    VlWide<4>/*127:0*/ __Vtemp_hcf7646bf__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__215;
    VlWide<4>/*127:0*/ __Vtemp_h2e57ff03__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__216;
    VlWide<4>/*127:0*/ __Vtemp_h0dc5984b__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__217;
    VlWide<4>/*127:0*/ __Vtemp_hf82156da__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__218;
    VlWide<4>/*127:0*/ __Vtemp_hf47ba2e5__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__219;
    VlWide<4>/*127:0*/ __Vtemp_h213bc835__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__220;
    VlWide<4>/*127:0*/ __Vtemp_h13d60eec__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__221;
    VlWide<4>/*127:0*/ __Vtemp_h32d9611e__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__222;
    VlWide<4>/*127:0*/ __Vtemp_h1dd8541b__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__223;
    VlWide<4>/*127:0*/ __Vtemp_hfb57bbec__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__224;
    VlWide<4>/*127:0*/ __Vtemp_hfcd24766__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__225;
    VlWide<4>/*127:0*/ __Vtemp_haabef2ba__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__226;
    VlWide<4>/*127:0*/ __Vtemp_haef013c3__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__227;
    VlWide<4>/*127:0*/ __Vtemp_hf432a186__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__228;
    VlWide<4>/*127:0*/ __Vtemp_hea91c3a7__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__229;
    VlWide<4>/*127:0*/ __Vtemp_heca09fa6__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__230;
    VlWide<4>/*127:0*/ __Vtemp_h5feb104e__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__231;
    VlWide<4>/*127:0*/ __Vtemp_h56e8cca6__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__232;
    VlWide<4>/*127:0*/ __Vtemp_h74ddc065__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__233;
    VlWide<4>/*127:0*/ __Vtemp_hd12b7770__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__234;
    VlWide<4>/*127:0*/ __Vtemp_h2b2ff6b3__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__235;
    VlWide<4>/*127:0*/ __Vtemp_h00143dc8__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__236;
    VlWide<4>/*127:0*/ __Vtemp_h3e612f79__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__237;
    VlWide<4>/*127:0*/ __Vtemp_h9a312a96__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__238;
    VlWide<4>/*127:0*/ __Vtemp_hda851399__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__239;
    VlWide<4>/*127:0*/ __Vtemp_hb7ba120f__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__240;
    VlWide<4>/*127:0*/ __Vtemp_haecec5ef__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__241;
    VlWide<4>/*127:0*/ __Vtemp_h4313f093__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__242;
    VlWide<4>/*127:0*/ __Vtemp_h1f59abbe__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__243;
    VlWide<4>/*127:0*/ __Vtemp_h635255e2__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__244;
    VlWide<4>/*127:0*/ __Vtemp_h2b16ebcd__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__245;
    VlWide<4>/*127:0*/ __Vtemp_hf8200915__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__246;
    VlWide<4>/*127:0*/ __Vtemp_he12ff7fe__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__247;
    VlWide<4>/*127:0*/ __Vtemp_h86ff5f3d__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__248;
    VlWide<4>/*127:0*/ __Vtemp_hd3cf8f08__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__249;
    VlWide<4>/*127:0*/ __Vtemp_h7247f592__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__250;
    VlWide<4>/*127:0*/ __Vtemp_h3f1d0161__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__251;
    VlWide<4>/*127:0*/ __Vtemp_h4bb6f4aa__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__252;
    VlWide<4>/*127:0*/ __Vtemp_h85d5b92c__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__253;
    VlWide<4>/*127:0*/ __Vtemp_h17160250__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__254;
    VlWide<4>/*127:0*/ __Vtemp_h77151b2a__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__255;
    VlWide<4>/*127:0*/ __Vtemp_h19e2a759__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__256;
    VlWide<4>/*127:0*/ __Vtemp_h84b645ac__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__257;
    VlWide<4>/*127:0*/ __Vtemp_h8be265bf__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__258;
    VlWide<4>/*127:0*/ __Vtemp_h5c1e68ec__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__259;
    VlWide<4>/*127:0*/ __Vtemp_h97800426__0;
    // Body
    vlSelf->__Vdlyvset__ComposerTop__DOT__tl2axi4__DOT__deq__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__deq__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_w_deq__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_w_deq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__deq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__q_b_deq__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_qos__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_lock__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_burst__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_prot__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_cache__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__ram_burst__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__ram_burst__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__ram_core_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__ram_system_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_len__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__deq__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__ram_addr__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__ram_addr__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_strb__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__tl2axi4__DOT__deq__DOT__ram_strb__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_payload1__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_core_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_inst_funct__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_qos__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_prot__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_cache__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_lock__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_burst__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_qos__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_prot__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_cache__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_lock__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_burst__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_addr__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_len__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_addr__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_len__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_strb__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_strb__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_strb__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_rs2__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_inst_rs2__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_inst_rs1__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_rs1__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_payload2__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_payload1__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_core_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__ram_len__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_inst_rs2__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_inst_rs1__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_qos__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_prot__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_cache__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_addr__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_lock__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_burst__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_len__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_payload2__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_inst_rs2__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_inst_rs1__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_inst_funct__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_inst_funct__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_qos__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_prot__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_cache__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_lock__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_addr__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_burst__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_len__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_inst_opcode__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_strb__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__ram_len__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__ram_echo_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__ram_echo_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_echo_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_echo_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__x1_w_deq__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__x1_w_deq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__ram_burst__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_qos__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_prot__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_cache__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_lock__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_addr__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_burst__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_len__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_qos__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_prot__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_cache__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_addr__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_lock__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_burst__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_len__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__ram_addr__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_qos__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_prot__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_cache__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_lock__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_addr__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_burst__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_len__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_qos__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_prot__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_cache__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_lock__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_addr__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_burst__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_len__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_qos__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_prot__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_cache__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_lock__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_addr__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_burst__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_len__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__ram_len__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__ram_burst__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__ram_addr__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_qos__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_prot__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_cache__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_lock__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_addr__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_burst__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_len__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_b_deq__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__ram_len__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_qos__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_prot__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_cache__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_addr__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_lock__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_burst__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_len__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_qos__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_prot__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_cache__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_addr__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_lock__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_burst__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_len__v0 = 0U;
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmdReadys_0) 
                                                       + (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmdReadys_1))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: Custom opcode matched for more than one accelerator\n    at LazyRoCC.scala:419 assert(PopCount(cmdReadys) <= 1.U,\n");
    }
    if (VL_UNLIKELY(((1U < (3U & ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmdReadys_0) 
                                  + (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmdReadys_1)))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:5928: Assertion failed in %NComposerTop.acc.acc.cmdRouter\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 5928, "");
    }
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
    vlSelf->__Vdlyvset__ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_wen__v0 = 0U;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__cmd_resp_axilhub__DOT__rocc_to_axil__DOT__state 
        = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__rocc_to_axil__DOT__state;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__coreResps_rq__DOT__ram_rd__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__coreResps_rq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__enq_ptr_value;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__ram_inst_rs2__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__ram_inst_opcode__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__ram_inst_rs1__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__ram_inst_funct__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__ram_rd__v0 = 0U;
    vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__loader__DOT__state 
        = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__loader__DOT__state;
    vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__loader__DOT__state 
        = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__loader__DOT__state;
    vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__loader__DOT__state 
        = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__loader__DOT__state;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_127__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_127__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_126__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_126__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_63__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_63__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_62__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_62__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_125__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_125__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_124__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_124__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_123__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_123__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_122__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_122__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_121__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_121__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_120__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_120__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_119__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_119__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_61__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_61__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_60__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_60__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_59__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_59__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_58__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_58__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_57__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_57__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_56__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_56__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_55__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_55__DOT__ram_tl_state_source__v0 = 0U;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_winner_0)) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_winner_1)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:276 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
    }
    if (VL_UNLIKELY((1U & ((~ ((~ (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_winner_0)) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_winner_1)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:13188: Assertion failed in %NComposerTop.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 13188, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_anyValid)) 
                                 | ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_winner_0) 
                                    | (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_winner_1)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:278 assert (!anyValid || winner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & ((~ ((~ (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_anyValid)) 
                               | ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_winner_0) 
                                  | (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_winner_1)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:13210: Assertion failed in %NComposerTop.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 13210, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__winner___05F0)) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__winner___05F1)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:276 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
    }
    if (VL_UNLIKELY((1U & ((~ ((~ (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__winner___05F0)) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__winner___05F1)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:13234: Assertion failed in %NComposerTop.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 13234, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__anyValid)) 
                                 | ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__winner___05F0) 
                                    | (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__winner___05F1)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:278 assert (!anyValid || winner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & ((~ ((~ (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__anyValid)) 
                               | ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__winner___05F0) 
                                  | (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__winner___05F1)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:13256: Assertion failed in %NComposerTop.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 13256, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((~ ((IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data) 
                                         >> 7U)) & 
                                     (~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__empty)))) 
                                 | ((~ ((IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data) 
                                        >> 7U)) & (~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__empty))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:278 assert (!anyValid || winner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & ((~ ((~ ((~ ((IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data) 
                                       >> 7U)) & (~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__empty)))) 
                               | ((~ ((IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data) 
                                      >> 7U)) & (~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__empty))))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:13278: Assertion failed in %NComposerTop.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 13278, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((~ ((IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data) 
                                         >> 7U)) & 
                                     (~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__empty)))) 
                                 | ((~ ((IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data) 
                                        >> 7U)) & (~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__empty))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:278 assert (!anyValid || winner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & ((~ ((~ ((~ ((IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data) 
                                       >> 7U)) & (~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__empty)))) 
                               | ((~ ((IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data) 
                                      >> 7U)) & (~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__empty))))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:13300: Assertion failed in %NComposerTop.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 13300, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__empty)) 
                                     & (0x80U == (0xc0U 
                                                  & (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))))) 
                                 | ((~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__empty)) 
                                    & (0x80U == (0xc0U 
                                                 & (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data)))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:278 assert (!anyValid || winner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & ((~ ((~ ((~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__empty)) 
                                   & (0x80U == (0xc0U 
                                                & (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))))) 
                               | ((~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__empty)) 
                                  & (0x80U == (0xc0U 
                                               & (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data)))))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:13322: Assertion failed in %NComposerTop.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 13322, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__empty)) 
                                     & (0x80U == (0xc0U 
                                                  & (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))))) 
                                 | ((~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__empty)) 
                                    & (0x80U == (0xc0U 
                                                 & (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:278 assert (!anyValid || winner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & ((~ ((~ ((~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__empty)) 
                                   & (0x80U == (0xc0U 
                                                & (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))))) 
                               | ((~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__empty)) 
                                  & (0x80U == (0xc0U 
                                               & (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)))))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:13344: Assertion failed in %NComposerTop.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 13344, "");
    }
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__enq_ptr_value;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_118__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_118__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_117__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_117__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_116__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_116__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_54__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_54__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_53__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_53__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_52__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_52__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdly__ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT__enq_ptr_value;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_115__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_115__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_114__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_114__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_113__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_113__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_112__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_112__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_111__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_111__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_110__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_110__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_51__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_51__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_50__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_50__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_49__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_49__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_48__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_48__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_47__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_47__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_46__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_46__DOT__ram_tl_state_source__v0 = 0U;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__empty)) 
                                     & (0x80U == (0xc0U 
                                                  & (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))))) 
                                 | ((~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__empty)) 
                                    & (0x80U == (0xc0U 
                                                 & (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data)))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:278 assert (!anyValid || winner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & ((~ ((~ ((~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__empty)) 
                                   & (0x80U == (0xc0U 
                                                & (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))))) 
                               | ((~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__empty)) 
                                  & (0x80U == (0xc0U 
                                               & (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data)))))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:13533: Assertion failed in %NComposerTop.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 13533, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__empty)) 
                                     & (0x80U == (0xc0U 
                                                  & (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))))) 
                                 | ((~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__empty)) 
                                    & (0x80U == (0xc0U 
                                                 & (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:278 assert (!anyValid || winner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & ((~ ((~ ((~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__empty)) 
                                   & (0x80U == (0xc0U 
                                                & (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))))) 
                               | ((~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__empty)) 
                                  & (0x80U == (0xc0U 
                                               & (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)))))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:13555: Assertion failed in %NComposerTop.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 13555, "");
    }
    vlSelf->__Vdly__ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT__deq_ptr_value;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_r_deq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_109__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_109__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_108__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_108__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_107__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_107__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_106__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_106__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_105__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_105__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_104__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_104__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_103__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_103__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_102__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_102__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_101__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_101__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_45__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_45__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_44__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_44__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_43__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_43__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_42__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_42__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_41__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_41__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_40__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_40__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_39__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_39__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_38__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_38__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_37__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_37__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_100__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_100__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_99__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_99__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_36__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_36__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_35__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_35__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_98__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_98__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_97__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_97__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_96__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_96__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_95__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_95__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_94__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_94__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_93__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_93__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_92__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_92__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_34__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_34__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_33__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_33__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_32__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_32__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_31__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_31__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_30__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_30__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_29__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_29__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_28__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_28__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 = 0U;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl_auto_in_ar_valid)) 
                                 | ((0x7fffU & (((IData)(0xffU) 
                                                 << (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_io_deq_bits_size)) 
                                                >> 8U)) 
                                    == (0x7fffU & (~ 
                                                   ((IData)(0x7fffU) 
                                                    << 
                                                    (((IData)(
                                                              (0U 
                                                               != 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___r_size_T_4) 
                                                                   >> 8U)))) 
                                                      << 3U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xfU 
                                                                   & ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___r_size_T_6) 
                                                                      >> 4U)))) 
                                                         << 2U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (3U 
                                                                      & ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___r_size_T_8) 
                                                                         >> 2U)))) 
                                                            << 1U) 
                                                           | (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0xaU 
                                                                       & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___r_size_T_8))))))))))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToTL.scala:109 assert (!in.ar.valid || r_size1 === UIntToOH1(r_size, beatCountBits)) // because aligned\n");
    }
    if (VL_UNLIKELY((1U & ((~ ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl_auto_in_ar_valid)) 
                               | ((0x7fffU & (((IData)(0xffU) 
                                               << (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_io_deq_bits_size)) 
                                              >> 8U)) 
                                  == (0x7fffU & (~ 
                                                 ((IData)(0x7fffU) 
                                                  << 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xffU 
                                                              & ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___r_size_T_4) 
                                                                 >> 8U)))) 
                                                    << 3U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xfU 
                                                                 & ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___r_size_T_6) 
                                                                    >> 4U)))) 
                                                       << 2U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (3U 
                                                                    & ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___r_size_T_8) 
                                                                       >> 2U)))) 
                                                          << 1U) 
                                                         | (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xaU 
                                                                     & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___r_size_T_8))))))))))))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:22211: Assertion failed in %NComposerTop.cmd_resp_axilhub.axil_widget.axi42tl\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 22211, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl_auto_in_aw_valid)) 
                                 | ((0x7fffU & (((IData)(0xffU) 
                                                 << (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)) 
                                                >> 8U)) 
                                    == (0x7fffU & (~ 
                                                   ((IData)(0x7fffU) 
                                                    << 
                                                    (((IData)(
                                                              (0U 
                                                               != 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___w_size_T_4) 
                                                                   >> 8U)))) 
                                                      << 3U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xfU 
                                                                   & ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___w_size_T_6) 
                                                                      >> 4U)))) 
                                                         << 2U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (3U 
                                                                      & ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___w_size_T_8) 
                                                                         >> 2U)))) 
                                                            << 1U) 
                                                           | (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0xaU 
                                                                       & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___w_size_T_8))))))))))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToTL.scala:142 assert (!in.aw.valid || w_size1 === UIntToOH1(w_size, beatCountBits)) // because aligned\n");
    }
    if (VL_UNLIKELY((1U & ((~ ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl_auto_in_aw_valid)) 
                               | ((0x7fffU & (((IData)(0xffU) 
                                               << (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)) 
                                              >> 8U)) 
                                  == (0x7fffU & (~ 
                                                 ((IData)(0x7fffU) 
                                                  << 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xffU 
                                                              & ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___w_size_T_4) 
                                                                 >> 8U)))) 
                                                    << 3U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xfU 
                                                                 & ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___w_size_T_6) 
                                                                    >> 4U)))) 
                                                       << 2U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (3U 
                                                                    & ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___w_size_T_8) 
                                                                       >> 2U)))) 
                                                          << 1U) 
                                                         | (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xaU 
                                                                     & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___w_size_T_8))))))))))))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:22235: Assertion failed in %NComposerTop.cmd_resp_axilhub.axil_widget.axi42tl\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 22235, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__earlyWinner_0)) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__earlyWinner_1)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:106 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
    }
    if (VL_UNLIKELY((1U & ((~ ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__earlyWinner_0)) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__earlyWinner_1)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:22259: Assertion failed in %NComposerTop.cmd_resp_axilhub.axil_widget.axi42tl\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 22259, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl_auto_in_ar_valid) 
                                     | (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__w_out_valid))) 
                                 | ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__earlyWinner_0) 
                                    | (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__earlyWinner_1)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & ((~ ((~ ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl_auto_in_ar_valid) 
                                   | (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__w_out_valid))) 
                               | ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__earlyWinner_0) 
                                  | (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__earlyWinner_1)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:22283: Assertion failed in %NComposerTop.cmd_resp_axilhub.axil_widget.axi42tl\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 22283, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl_auto_in_ar_valid) 
                                     | (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__w_out_valid))) 
                                 | ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl_auto_in_ar_valid) 
                                    | (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__w_out_valid)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:109 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & ((~ ((~ ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl_auto_in_ar_valid) 
                                   | (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__w_out_valid))) 
                               | ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl_auto_in_ar_valid) 
                                  | (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__w_out_valid)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:22307: Assertion failed in %NComposerTop.cmd_resp_axilhub.axil_widget.axi42tl\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 22307, "");
    }
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__enq_ptr_value;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_91__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_91__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_90__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_90__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_89__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_89__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_88__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_88__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_87__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_87__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_86__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_86__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_85__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_85__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_84__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_84__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_83__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_83__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_27__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_27__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_26__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_26__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_25__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_25__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_24__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_24__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_23__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_23__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_22__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_22__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_21__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_21__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_20__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_20__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_19__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_19__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__deq_ptr_value;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__enq_ptr_value;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1__DOT__ram_real_last__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue__DOT__ram_real_last__v0 = 0U;
    vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__loader__DOT__state 
        = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__loader__DOT__state;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_82__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_82__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_18__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_18__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_6__DOT__x1_w_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_6__DOT__x1_w_deq__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_6__DOT__x1_w_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_6__DOT__x1_w_deq__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__enq_ptr_value;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_81__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_81__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_80__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_80__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_79__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_79__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_78__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_78__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_77__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_77__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_76__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_76__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_75__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_75__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_74__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_74__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_17__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_17__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_16__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_16__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_15__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_15__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_14__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_14__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_13__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_13__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_12__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_12__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_11__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_11__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_10__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_10__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_3__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_65__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_65__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_73__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_73__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_72__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_72__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_71__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_71__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_70__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_70__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_69__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_69__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_68__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_68__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_67__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_67__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_66__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_66__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_9__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_9__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_8__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_8__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_7__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_7__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_6__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_6__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_5__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_5__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_4__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_4__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_3__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_3__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_2__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_2__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_3__DOT__ram_real_last__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2__DOT__ram_real_last__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__ram_rs2__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__ram_rs1__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__deq_io_enq_valid) 
                                     | (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__deq__DOT__maybe_full))) 
                                 | ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__deq_io_deq_bits_id)
                                     ? (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1_io_deq_valid)
                                     : (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_io_deq_valid)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at UserYanker.scala:66 assert (!out.r.valid || r_valid) // Q must be ready faster than the response\n");
    }
    if (VL_UNLIKELY((1U & ((~ ((~ ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__deq_io_enq_valid) 
                                   | (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__deq__DOT__maybe_full))) 
                               | ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__deq_io_deq_bits_id)
                                   ? (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1_io_deq_valid)
                                   : (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_io_deq_valid)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:22658: Assertion failed in %NComposerTop.cmd_resp_axilhub.axil_widget.axi4yank\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 22658, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__bundleIn_0_b_valid)) 
                                 | ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__q_b_deq_io_deq_bits_id)
                                     ? (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_3_io_deq_valid)
                                     : (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2_io_deq_valid)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at UserYanker.scala:87 assert (!out.b.valid || b_valid) // Q must be ready faster than the response\n");
    }
    if (VL_UNLIKELY((1U & ((~ ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__bundleIn_0_b_valid)) 
                               | ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__q_b_deq_io_deq_bits_id)
                                   ? (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_3_io_deq_valid)
                                   : (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2_io_deq_valid)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:22682: Assertion failed in %NComposerTop.cmd_resp_axilhub.axil_widget.axi4yank\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 22682, "");
    }
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__enq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__enq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__deq_ptr_value;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl_auto_in_w_ready) 
                                     & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__x1_w_valid))) 
                                 | (0U != (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__w_todo)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:174 assert (!out.w.fire || w_todo =/= 0.U) // underflow impossible\n");
    }
    if (VL_UNLIKELY((1U & ((~ ((~ ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl_auto_in_w_ready) 
                                   & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__x1_w_valid))) 
                               | (0U != (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__w_todo)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:23319: Assertion failed in %NComposerTop.cmd_resp_axilhub.axil_widget.axi4frag\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 23319, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__x1_w_valid)) 
                                  | (~ ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full)
                                         ? vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_w_deq__DOT__ram_last
                                        [0U] : (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_w_deq__DOT__ram_last_MPORT_data)))) 
                                 | (1U == (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__w_todo)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:183 assert (!out.w.valid || !in_w.bits.last || w_last)\n");
    }
    if (VL_UNLIKELY((1U & ((~ (((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__x1_w_valid)) 
                                | (~ ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full)
                                       ? vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_w_deq__DOT__ram_last
                                      [0U] : (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_w_deq__DOT__ram_last_MPORT_data)))) 
                               | (1U == (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__w_todo)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:23342: Assertion failed in %NComposerTop.cmd_resp_axilhub.axil_widget.axi4frag\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 23342, "");
    }
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__mem__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__deq_ptr_value;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__ram_strb__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__roccCmdFifo__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value;
    vlSelf->__Vdly__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value 
        = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__q_b_deq__DOT__ram_id__v0 = 0U;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__empty) 
                                 | ((0x3fU == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                     ? (~ ((~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_63__DOT__maybe_full)) 
                                           & (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_63__DOT__ptr_match)))
                                     : ((0x3eU == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                         ? (~ ((~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_62__DOT__maybe_full)) 
                                               & (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_62__DOT__ptr_match)))
                                         : ((0x3dU 
                                             == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                             ? (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_61__DOT__empty))
                                             : ((0x3cU 
                                                 == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                 ? 
                                                (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_60__DOT__empty))
                                                 : 
                                                ((0x3bU 
                                                  == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                  ? 
                                                 (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_59__DOT__empty))
                                                  : 
                                                 ((0x3aU 
                                                   == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                   ? 
                                                  (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_58__DOT__empty))
                                                   : 
                                                  ((0x39U 
                                                    == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? 
                                                   (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_57__DOT__empty))
                                                    : 
                                                   ((0x38U 
                                                     == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? 
                                                    (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_56__DOT__empty))
                                                     : 
                                                    ((0x37U 
                                                      == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? 
                                                     (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_55__DOT__empty))
                                                      : 
                                                     ((0x36U 
                                                       == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? 
                                                      (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_54__DOT__empty))
                                                       : 
                                                      ((0x35U 
                                                        == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_53__DOT__empty))
                                                        : 
                                                       ((0x34U 
                                                         == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_52__DOT__empty))
                                                         : (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT___GEN_115))))))))))))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at UserYanker.scala:66 assert (!out.r.valid || r_valid) // Q must be ready faster than the response\n");
    }
    if (VL_UNLIKELY((1U & ((~ ((IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__empty) 
                               | ((0x3fU == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                   ? (~ ((~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_63__DOT__maybe_full)) 
                                         & (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_63__DOT__ptr_match)))
                                   : ((0x3eU == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                       ? (~ ((~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_62__DOT__maybe_full)) 
                                             & (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_62__DOT__ptr_match)))
                                       : ((0x3dU == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                           ? (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_61__DOT__empty))
                                           : ((0x3cU 
                                               == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                               ? (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_60__DOT__empty))
                                               : ((0x3bU 
                                                   == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                   ? 
                                                  (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_59__DOT__empty))
                                                   : 
                                                  ((0x3aU 
                                                    == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? 
                                                   (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_58__DOT__empty))
                                                    : 
                                                   ((0x39U 
                                                     == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? 
                                                    (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_57__DOT__empty))
                                                     : 
                                                    ((0x38U 
                                                      == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? 
                                                     (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_56__DOT__empty))
                                                      : 
                                                     ((0x37U 
                                                       == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? 
                                                      (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_55__DOT__empty))
                                                       : 
                                                      ((0x36U 
                                                        == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_54__DOT__empty))
                                                        : 
                                                       ((0x35U 
                                                         == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_53__DOT__empty))
                                                         : 
                                                        ((0x34U 
                                                          == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_52__DOT__empty))
                                                          : (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT___GEN_115))))))))))))))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:19559: Assertion failed in %NComposerTop.axi4yank\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 19559, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__empty) 
                                 | ((0x3fU == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                     ? (~ ((~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_127__DOT__maybe_full)) 
                                           & (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_127__DOT__ptr_match)))
                                     : ((0x3eU == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                         ? (~ ((~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_126__DOT__maybe_full)) 
                                               & (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_126__DOT__ptr_match)))
                                         : ((0x3dU 
                                             == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                             ? (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_125__DOT__empty))
                                             : ((0x3cU 
                                                 == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                 ? 
                                                (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_124__DOT__empty))
                                                 : 
                                                ((0x3bU 
                                                  == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                  ? 
                                                 (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_123__DOT__empty))
                                                  : 
                                                 ((0x3aU 
                                                   == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                   ? 
                                                  (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_122__DOT__empty))
                                                   : 
                                                  ((0x39U 
                                                    == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? 
                                                   (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_121__DOT__empty))
                                                    : 
                                                   ((0x38U 
                                                     == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? 
                                                    (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_120__DOT__empty))
                                                     : 
                                                    ((0x37U 
                                                      == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? 
                                                     (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_119__DOT__empty))
                                                      : 
                                                     ((0x36U 
                                                       == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? 
                                                      (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_118__DOT__empty))
                                                       : 
                                                      ((0x35U 
                                                        == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_117__DOT__empty))
                                                        : 
                                                       ((0x34U 
                                                         == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_116__DOT__empty))
                                                         : (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT___GEN_435))))))))))))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at UserYanker.scala:87 assert (!out.b.valid || b_valid) // Q must be ready faster than the response\n");
    }
    if (VL_UNLIKELY((1U & ((~ ((IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__empty) 
                               | ((0x3fU == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                   ? (~ ((~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_127__DOT__maybe_full)) 
                                         & (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_127__DOT__ptr_match)))
                                   : ((0x3eU == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                       ? (~ ((~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_126__DOT__maybe_full)) 
                                             & (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_126__DOT__ptr_match)))
                                       : ((0x3dU == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                           ? (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_125__DOT__empty))
                                           : ((0x3cU 
                                               == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                               ? (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_124__DOT__empty))
                                               : ((0x3bU 
                                                   == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                   ? 
                                                  (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_123__DOT__empty))
                                                   : 
                                                  ((0x3aU 
                                                    == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? 
                                                   (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_122__DOT__empty))
                                                    : 
                                                   ((0x39U 
                                                     == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? 
                                                    (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_121__DOT__empty))
                                                     : 
                                                    ((0x38U 
                                                      == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? 
                                                     (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_120__DOT__empty))
                                                      : 
                                                     ((0x37U 
                                                       == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? 
                                                      (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_119__DOT__empty))
                                                       : 
                                                      ((0x36U 
                                                        == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_118__DOT__empty))
                                                        : 
                                                       ((0x35U 
                                                         == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_117__DOT__empty))
                                                         : 
                                                        ((0x34U 
                                                          == (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         (~ (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_116__DOT__empty))
                                                          : (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT___GEN_435))))))))))))))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:19583: Assertion failed in %NComposerTop.axi4yank\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 19583, "");
    }
    vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__roccRespFifo__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__ram_echo_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_echo_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdly__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__crFile__DOT__state 
        = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__crFile__DOT__state;
    if (VL_UNLIKELY(((((0U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__state)) 
                       & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___T_2)) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (3U & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__tx_addr_start)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: FixedSequentialWriteChannel: Unaligned request\n    at Writers.scala:98 assert(io.req.bits.addr(log2Ceil(nBytes) - 1, 0) === 0.U,\n");
    }
    if (VL_UNLIKELY(((0U != (3U & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__tx_addr_start))) 
                     & (((0U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__state)) 
                         & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___T_2)) 
                        & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:4083: Assertion failed in %NComposerTop.acc.acc.EnergyCalc.cores.myWriters_WriteChannel_1\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 4083, "");
    }
    vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state 
        = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state;
    __Vdly__ComposerTop__DOT__acc__DOT__crossbarModule__DOT__beatsLeft 
        = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__beatsLeft;
    vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__state 
        = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__state;
    vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__mem_tx_state 
        = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__mem_tx_state;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_0)) 
                                    | (~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_1))) 
                                   & ((~ ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_0) 
                                          | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_1))) 
                                      | (~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_2)))) 
                                  & ((~ (((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_0) 
                                          | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_1)) 
                                         | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_2))) 
                                     | (~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_3)))) 
                                 & ((~ ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_0) 
                                          | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_1)) 
                                         | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_2)) 
                                        | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_3))) 
                                    | (~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_4))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:106 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
    }
    if (VL_UNLIKELY((1U & ((~ (((((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_0)) 
                                  | (~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_1))) 
                                 & ((~ ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_0) 
                                        | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_1))) 
                                    | (~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_2)))) 
                                & ((~ (((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_0) 
                                        | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_1)) 
                                       | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_2))) 
                                   | (~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_3)))) 
                               & ((~ ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_0) 
                                        | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_1)) 
                                       | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_2)) 
                                      | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_3))) 
                                  | (~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_4))))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:6847: Assertion failed in %NComposerTop.acc.crossbarModule\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 6847, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1_tl_out_a_valid) 
                                        | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__mem_out_a_valid)) 
                                       | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__mem_out_a_valid)) 
                                      | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__mem_out_a_valid)) 
                                     | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__mem_out_a_valid))) 
                                 | (((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_0) 
                                       | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_1)) 
                                      | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_2)) 
                                     | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_3)) 
                                    | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_4)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & ((~ ((~ (((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1_tl_out_a_valid) 
                                      | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__mem_out_a_valid)) 
                                     | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__mem_out_a_valid)) 
                                    | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__mem_out_a_valid)) 
                                   | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__mem_out_a_valid))) 
                               | (((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_0) 
                                     | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_1)) 
                                    | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_2)) 
                                   | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_3)) 
                                  | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_4)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:6873: Assertion failed in %NComposerTop.acc.crossbarModule\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 6873, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1_tl_out_a_valid) 
                                     | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__mem_out_a_valid) 
                                        | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__mem_out_a_valid) 
                                           | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__mem_out_a_valid) 
                                              | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__mem_out_a_valid)))))) 
                                 | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1_tl_out_a_valid) 
                                    | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__mem_out_a_valid) 
                                       | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__mem_out_a_valid) 
                                          | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__mem_out_a_valid) 
                                             | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__mem_out_a_valid))))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:109 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & ((~ ((~ ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1_tl_out_a_valid) 
                                   | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__mem_out_a_valid) 
                                      | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__mem_out_a_valid) 
                                         | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__mem_out_a_valid) 
                                            | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__mem_out_a_valid)))))) 
                               | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1_tl_out_a_valid) 
                                  | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__mem_out_a_valid) 
                                     | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__mem_out_a_valid) 
                                        | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__mem_out_a_valid) 
                                           | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__mem_out_a_valid))))))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:6897: Assertion failed in %NComposerTop.acc.crossbarModule\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 6897, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (((0U >= (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount))
                                       ? ((IData)(1U) 
                                          << (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount))
                                       : 0U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_1))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    if (VL_UNLIKELY((1U & ((~ ((~ (((0U >= (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount))
                                     ? ((IData)(1U) 
                                        << (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount))
                                     : 0U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_1))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:9704: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 9704, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (((0U >= (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data))
                                       ? ((IData)(1U) 
                                          << (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data))
                                       : 0U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_1)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    if (VL_UNLIKELY((1U & ((~ ((~ (((0U >= (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data))
                                     ? ((IData)(1U) 
                                        << (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data))
                                     : 0U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_1)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:9727: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 9727, "");
    }
    __Vtemp_hd2b6a71a__0[0U] = 1U;
    __Vtemp_hd2b6a71a__0[1U] = 0U;
    __Vtemp_hd2b6a71a__0[2U] = 0U;
    __Vtemp_hd2b6a71a__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8468f6cf__0, __Vtemp_hd2b6a71a__0, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h8468f6cf__0[0U] 
                                      >> 1U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_2))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__1[0U] = 1U;
    __Vtemp_hd2b6a71a__1[1U] = 0U;
    __Vtemp_hd2b6a71a__1[2U] = 0U;
    __Vtemp_hd2b6a71a__1[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h588a8dde__0, __Vtemp_hd2b6a71a__1, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h588a8dde__0[0U] 
                                    >> 1U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_2))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:9750: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 9750, "");
    }
    __Vtemp_hd2b6a71a__2[0U] = 1U;
    __Vtemp_hd2b6a71a__2[1U] = 0U;
    __Vtemp_hd2b6a71a__2[2U] = 0U;
    __Vtemp_hd2b6a71a__2[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h38f09b4d__0, __Vtemp_hd2b6a71a__2, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h38f09b4d__0[0U] 
                                      >> 1U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_2)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__3[0U] = 1U;
    __Vtemp_hd2b6a71a__3[1U] = 0U;
    __Vtemp_hd2b6a71a__3[2U] = 0U;
    __Vtemp_hd2b6a71a__3[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h00d8e1cb__0, __Vtemp_hd2b6a71a__3, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h00d8e1cb__0[0U] 
                                    >> 1U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_2)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:9773: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 9773, "");
    }
    __Vtemp_hd2b6a71a__4[0U] = 1U;
    __Vtemp_hd2b6a71a__4[1U] = 0U;
    __Vtemp_hd2b6a71a__4[2U] = 0U;
    __Vtemp_hd2b6a71a__4[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1c7e2084__0, __Vtemp_hd2b6a71a__4, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h1c7e2084__0[0U] 
                                      >> 2U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_3))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__5[0U] = 1U;
    __Vtemp_hd2b6a71a__5[1U] = 0U;
    __Vtemp_hd2b6a71a__5[2U] = 0U;
    __Vtemp_hd2b6a71a__5[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h14cd7665__0, __Vtemp_hd2b6a71a__5, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h14cd7665__0[0U] 
                                    >> 2U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_3))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:9796: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 9796, "");
    }
    __Vtemp_hd2b6a71a__6[0U] = 1U;
    __Vtemp_hd2b6a71a__6[1U] = 0U;
    __Vtemp_hd2b6a71a__6[2U] = 0U;
    __Vtemp_hd2b6a71a__6[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha8d0cd25__0, __Vtemp_hd2b6a71a__6, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_ha8d0cd25__0[0U] 
                                      >> 2U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_3)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__7[0U] = 1U;
    __Vtemp_hd2b6a71a__7[1U] = 0U;
    __Vtemp_hd2b6a71a__7[2U] = 0U;
    __Vtemp_hd2b6a71a__7[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h127ca22f__0, __Vtemp_hd2b6a71a__7, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h127ca22f__0[0U] 
                                    >> 2U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_3)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:9819: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 9819, "");
    }
    __Vtemp_hd2b6a71a__8[0U] = 1U;
    __Vtemp_hd2b6a71a__8[1U] = 0U;
    __Vtemp_hd2b6a71a__8[2U] = 0U;
    __Vtemp_hd2b6a71a__8[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h5e238579__0, __Vtemp_hd2b6a71a__8, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h5e238579__0[0U] 
                                      >> 3U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_4))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__9[0U] = 1U;
    __Vtemp_hd2b6a71a__9[1U] = 0U;
    __Vtemp_hd2b6a71a__9[2U] = 0U;
    __Vtemp_hd2b6a71a__9[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8553db2c__0, __Vtemp_hd2b6a71a__9, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h8553db2c__0[0U] 
                                    >> 3U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_4))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:9842: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 9842, "");
    }
    __Vtemp_hd2b6a71a__10[0U] = 1U;
    __Vtemp_hd2b6a71a__10[1U] = 0U;
    __Vtemp_hd2b6a71a__10[2U] = 0U;
    __Vtemp_hd2b6a71a__10[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h36e0fd1d__0, __Vtemp_hd2b6a71a__10, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h36e0fd1d__0[0U] 
                                      >> 3U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_4)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__11[0U] = 1U;
    __Vtemp_hd2b6a71a__11[1U] = 0U;
    __Vtemp_hd2b6a71a__11[2U] = 0U;
    __Vtemp_hd2b6a71a__11[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1a5002a9__0, __Vtemp_hd2b6a71a__11, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h1a5002a9__0[0U] 
                                    >> 3U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_4)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:9865: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 9865, "");
    }
    __Vtemp_hd2b6a71a__12[0U] = 1U;
    __Vtemp_hd2b6a71a__12[1U] = 0U;
    __Vtemp_hd2b6a71a__12[2U] = 0U;
    __Vtemp_hd2b6a71a__12[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h188c5d29__0, __Vtemp_hd2b6a71a__12, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h188c5d29__0[0U] 
                                      >> 4U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_5))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__13[0U] = 1U;
    __Vtemp_hd2b6a71a__13[1U] = 0U;
    __Vtemp_hd2b6a71a__13[2U] = 0U;
    __Vtemp_hd2b6a71a__13[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc31387d8__0, __Vtemp_hd2b6a71a__13, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hc31387d8__0[0U] 
                                    >> 4U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_5))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:9888: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 9888, "");
    }
    __Vtemp_hd2b6a71a__14[0U] = 1U;
    __Vtemp_hd2b6a71a__14[1U] = 0U;
    __Vtemp_hd2b6a71a__14[2U] = 0U;
    __Vtemp_hd2b6a71a__14[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h960910d8__0, __Vtemp_hd2b6a71a__14, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h960910d8__0[0U] 
                                      >> 4U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_5)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__15[0U] = 1U;
    __Vtemp_hd2b6a71a__15[1U] = 0U;
    __Vtemp_hd2b6a71a__15[2U] = 0U;
    __Vtemp_hd2b6a71a__15[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_he040b0fa__0, __Vtemp_hd2b6a71a__15, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_he040b0fa__0[0U] 
                                    >> 4U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_5)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:9911: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 9911, "");
    }
    __Vtemp_hd2b6a71a__16[0U] = 1U;
    __Vtemp_hd2b6a71a__16[1U] = 0U;
    __Vtemp_hd2b6a71a__16[2U] = 0U;
    __Vtemp_hd2b6a71a__16[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hae4979f1__0, __Vtemp_hd2b6a71a__16, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hae4979f1__0[0U] 
                                      >> 5U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_6))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__17[0U] = 1U;
    __Vtemp_hd2b6a71a__17[1U] = 0U;
    __Vtemp_hd2b6a71a__17[2U] = 0U;
    __Vtemp_hd2b6a71a__17[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha46bd445__0, __Vtemp_hd2b6a71a__17, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_ha46bd445__0[0U] 
                                    >> 5U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_6))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:9934: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 9934, "");
    }
    __Vtemp_hd2b6a71a__18[0U] = 1U;
    __Vtemp_hd2b6a71a__18[1U] = 0U;
    __Vtemp_hd2b6a71a__18[2U] = 0U;
    __Vtemp_hd2b6a71a__18[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8adc7b6d__0, __Vtemp_hd2b6a71a__18, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h8adc7b6d__0[0U] 
                                      >> 5U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_6)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__19[0U] = 1U;
    __Vtemp_hd2b6a71a__19[1U] = 0U;
    __Vtemp_hd2b6a71a__19[2U] = 0U;
    __Vtemp_hd2b6a71a__19[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h45a9a630__0, __Vtemp_hd2b6a71a__19, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h45a9a630__0[0U] 
                                    >> 5U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_6)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:9957: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 9957, "");
    }
    __Vtemp_hd2b6a71a__20[0U] = 1U;
    __Vtemp_hd2b6a71a__20[1U] = 0U;
    __Vtemp_hd2b6a71a__20[2U] = 0U;
    __Vtemp_hd2b6a71a__20[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hdc68e021__0, __Vtemp_hd2b6a71a__20, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hdc68e021__0[0U] 
                                      >> 6U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_7))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__21[0U] = 1U;
    __Vtemp_hd2b6a71a__21[1U] = 0U;
    __Vtemp_hd2b6a71a__21[2U] = 0U;
    __Vtemp_hd2b6a71a__21[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6140eefe__0, __Vtemp_hd2b6a71a__21, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h6140eefe__0[0U] 
                                    >> 6U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_7))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:9980: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 9980, "");
    }
    __Vtemp_hd2b6a71a__22[0U] = 1U;
    __Vtemp_hd2b6a71a__22[1U] = 0U;
    __Vtemp_hd2b6a71a__22[2U] = 0U;
    __Vtemp_hd2b6a71a__22[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfb56c413__0, __Vtemp_hd2b6a71a__22, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hfb56c413__0[0U] 
                                      >> 6U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_7)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__23[0U] = 1U;
    __Vtemp_hd2b6a71a__23[1U] = 0U;
    __Vtemp_hd2b6a71a__23[2U] = 0U;
    __Vtemp_hd2b6a71a__23[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h449816ef__0, __Vtemp_hd2b6a71a__23, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h449816ef__0[0U] 
                                    >> 6U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_7)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10003: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10003, "");
    }
    __Vtemp_hd2b6a71a__24[0U] = 1U;
    __Vtemp_hd2b6a71a__24[1U] = 0U;
    __Vtemp_hd2b6a71a__24[2U] = 0U;
    __Vtemp_hd2b6a71a__24[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcd4f36c8__0, __Vtemp_hd2b6a71a__24, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hcd4f36c8__0[0U] 
                                      >> 7U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_8))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__25[0U] = 1U;
    __Vtemp_hd2b6a71a__25[1U] = 0U;
    __Vtemp_hd2b6a71a__25[2U] = 0U;
    __Vtemp_hd2b6a71a__25[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1d4551e8__0, __Vtemp_hd2b6a71a__25, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h1d4551e8__0[0U] 
                                    >> 7U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_8))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10026: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10026, "");
    }
    __Vtemp_hd2b6a71a__26[0U] = 1U;
    __Vtemp_hd2b6a71a__26[1U] = 0U;
    __Vtemp_hd2b6a71a__26[2U] = 0U;
    __Vtemp_hd2b6a71a__26[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_haf3c5f1a__0, __Vtemp_hd2b6a71a__26, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_haf3c5f1a__0[0U] 
                                      >> 7U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_8)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__27[0U] = 1U;
    __Vtemp_hd2b6a71a__27[1U] = 0U;
    __Vtemp_hd2b6a71a__27[2U] = 0U;
    __Vtemp_hd2b6a71a__27[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcb53fa89__0, __Vtemp_hd2b6a71a__27, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hcb53fa89__0[0U] 
                                    >> 7U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_8)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10049: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10049, "");
    }
    __Vtemp_hd2b6a71a__28[0U] = 1U;
    __Vtemp_hd2b6a71a__28[1U] = 0U;
    __Vtemp_hd2b6a71a__28[2U] = 0U;
    __Vtemp_hd2b6a71a__28[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h030a4441__0, __Vtemp_hd2b6a71a__28, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h030a4441__0[0U] 
                                      >> 8U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_9))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__29[0U] = 1U;
    __Vtemp_hd2b6a71a__29[1U] = 0U;
    __Vtemp_hd2b6a71a__29[2U] = 0U;
    __Vtemp_hd2b6a71a__29[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfdb78070__0, __Vtemp_hd2b6a71a__29, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hfdb78070__0[0U] 
                                    >> 8U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_9))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10072: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10072, "");
    }
    __Vtemp_hd2b6a71a__30[0U] = 1U;
    __Vtemp_hd2b6a71a__30[1U] = 0U;
    __Vtemp_hd2b6a71a__30[2U] = 0U;
    __Vtemp_hd2b6a71a__30[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hefcaae1a__0, __Vtemp_hd2b6a71a__30, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hefcaae1a__0[0U] 
                                      >> 8U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_9)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__31[0U] = 1U;
    __Vtemp_hd2b6a71a__31[1U] = 0U;
    __Vtemp_hd2b6a71a__31[2U] = 0U;
    __Vtemp_hd2b6a71a__31[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h36c51038__0, __Vtemp_hd2b6a71a__31, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h36c51038__0[0U] 
                                    >> 8U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_9)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10095: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10095, "");
    }
    __Vtemp_hd2b6a71a__32[0U] = 1U;
    __Vtemp_hd2b6a71a__32[1U] = 0U;
    __Vtemp_hd2b6a71a__32[2U] = 0U;
    __Vtemp_hd2b6a71a__32[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h2a48df4c__0, __Vtemp_hd2b6a71a__32, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h2a48df4c__0[0U] 
                                      >> 9U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_10))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__33[0U] = 1U;
    __Vtemp_hd2b6a71a__33[1U] = 0U;
    __Vtemp_hd2b6a71a__33[2U] = 0U;
    __Vtemp_hd2b6a71a__33[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h866fda1b__0, __Vtemp_hd2b6a71a__33, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h866fda1b__0[0U] 
                                    >> 9U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_10))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10118: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10118, "");
    }
    __Vtemp_hd2b6a71a__34[0U] = 1U;
    __Vtemp_hd2b6a71a__34[1U] = 0U;
    __Vtemp_hd2b6a71a__34[2U] = 0U;
    __Vtemp_hd2b6a71a__34[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h59c6dbe8__0, __Vtemp_hd2b6a71a__34, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h59c6dbe8__0[0U] 
                                      >> 9U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_10)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__35[0U] = 1U;
    __Vtemp_hd2b6a71a__35[1U] = 0U;
    __Vtemp_hd2b6a71a__35[2U] = 0U;
    __Vtemp_hd2b6a71a__35[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hbafa417c__0, __Vtemp_hd2b6a71a__35, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hbafa417c__0[0U] 
                                    >> 9U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_10)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10141: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10141, "");
    }
    __Vtemp_hd2b6a71a__36[0U] = 1U;
    __Vtemp_hd2b6a71a__36[1U] = 0U;
    __Vtemp_hd2b6a71a__36[2U] = 0U;
    __Vtemp_hd2b6a71a__36[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfb5dee29__0, __Vtemp_hd2b6a71a__36, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hfb5dee29__0[0U] 
                                      >> 0xaU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_11))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__37[0U] = 1U;
    __Vtemp_hd2b6a71a__37[1U] = 0U;
    __Vtemp_hd2b6a71a__37[2U] = 0U;
    __Vtemp_hd2b6a71a__37[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h81342760__0, __Vtemp_hd2b6a71a__37, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h81342760__0[0U] 
                                    >> 0xaU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_11))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10164: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10164, "");
    }
    __Vtemp_hd2b6a71a__38[0U] = 1U;
    __Vtemp_hd2b6a71a__38[1U] = 0U;
    __Vtemp_hd2b6a71a__38[2U] = 0U;
    __Vtemp_hd2b6a71a__38[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc1f1ecca__0, __Vtemp_hd2b6a71a__38, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hc1f1ecca__0[0U] 
                                      >> 0xaU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_11)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__39[0U] = 1U;
    __Vtemp_hd2b6a71a__39[1U] = 0U;
    __Vtemp_hd2b6a71a__39[2U] = 0U;
    __Vtemp_hd2b6a71a__39[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8699e225__0, __Vtemp_hd2b6a71a__39, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h8699e225__0[0U] 
                                    >> 0xaU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_11)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10187: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10187, "");
    }
    __Vtemp_hd2b6a71a__40[0U] = 1U;
    __Vtemp_hd2b6a71a__40[1U] = 0U;
    __Vtemp_hd2b6a71a__40[2U] = 0U;
    __Vtemp_hd2b6a71a__40[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf4c31a13__0, __Vtemp_hd2b6a71a__40, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hf4c31a13__0[0U] 
                                      >> 0xbU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_12))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__41[0U] = 1U;
    __Vtemp_hd2b6a71a__41[1U] = 0U;
    __Vtemp_hd2b6a71a__41[2U] = 0U;
    __Vtemp_hd2b6a71a__41[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h43cc02d4__0, __Vtemp_hd2b6a71a__41, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h43cc02d4__0[0U] 
                                    >> 0xbU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_12))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10210: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10210, "");
    }
    __Vtemp_hd2b6a71a__42[0U] = 1U;
    __Vtemp_hd2b6a71a__42[1U] = 0U;
    __Vtemp_hd2b6a71a__42[2U] = 0U;
    __Vtemp_hd2b6a71a__42[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h611effbc__0, __Vtemp_hd2b6a71a__42, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h611effbc__0[0U] 
                                      >> 0xbU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_12)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__43[0U] = 1U;
    __Vtemp_hd2b6a71a__43[1U] = 0U;
    __Vtemp_hd2b6a71a__43[2U] = 0U;
    __Vtemp_hd2b6a71a__43[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h54248795__0, __Vtemp_hd2b6a71a__43, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h54248795__0[0U] 
                                    >> 0xbU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_12)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10233: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10233, "");
    }
    __Vtemp_hd2b6a71a__44[0U] = 1U;
    __Vtemp_hd2b6a71a__44[1U] = 0U;
    __Vtemp_hd2b6a71a__44[2U] = 0U;
    __Vtemp_hd2b6a71a__44[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h26125596__0, __Vtemp_hd2b6a71a__44, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h26125596__0[0U] 
                                      >> 0xcU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_13))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__45[0U] = 1U;
    __Vtemp_hd2b6a71a__45[1U] = 0U;
    __Vtemp_hd2b6a71a__45[2U] = 0U;
    __Vtemp_hd2b6a71a__45[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hab0a9451__0, __Vtemp_hd2b6a71a__45, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hab0a9451__0[0U] 
                                    >> 0xcU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_13))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10256: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10256, "");
    }
    __Vtemp_hd2b6a71a__46[0U] = 1U;
    __Vtemp_hd2b6a71a__46[1U] = 0U;
    __Vtemp_hd2b6a71a__46[2U] = 0U;
    __Vtemp_hd2b6a71a__46[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6aeaa05c__0, __Vtemp_hd2b6a71a__46, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h6aeaa05c__0[0U] 
                                      >> 0xcU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_13)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__47[0U] = 1U;
    __Vtemp_hd2b6a71a__47[1U] = 0U;
    __Vtemp_hd2b6a71a__47[2U] = 0U;
    __Vtemp_hd2b6a71a__47[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc2279870__0, __Vtemp_hd2b6a71a__47, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hc2279870__0[0U] 
                                    >> 0xcU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_13)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10279: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10279, "");
    }
    __Vtemp_hd2b6a71a__48[0U] = 1U;
    __Vtemp_hd2b6a71a__48[1U] = 0U;
    __Vtemp_hd2b6a71a__48[2U] = 0U;
    __Vtemp_hd2b6a71a__48[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hda237ea7__0, __Vtemp_hd2b6a71a__48, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hda237ea7__0[0U] 
                                      >> 0xdU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_14))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__49[0U] = 1U;
    __Vtemp_hd2b6a71a__49[1U] = 0U;
    __Vtemp_hd2b6a71a__49[2U] = 0U;
    __Vtemp_hd2b6a71a__49[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h63196f5e__0, __Vtemp_hd2b6a71a__49, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h63196f5e__0[0U] 
                                    >> 0xdU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_14))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10302: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10302, "");
    }
    __Vtemp_hd2b6a71a__50[0U] = 1U;
    __Vtemp_hd2b6a71a__50[1U] = 0U;
    __Vtemp_hd2b6a71a__50[2U] = 0U;
    __Vtemp_hd2b6a71a__50[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h56dc1ac5__0, __Vtemp_hd2b6a71a__50, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h56dc1ac5__0[0U] 
                                      >> 0xdU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_14)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__51[0U] = 1U;
    __Vtemp_hd2b6a71a__51[1U] = 0U;
    __Vtemp_hd2b6a71a__51[2U] = 0U;
    __Vtemp_hd2b6a71a__51[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h574097e0__0, __Vtemp_hd2b6a71a__51, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h574097e0__0[0U] 
                                    >> 0xdU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_14)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10325: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10325, "");
    }
    __Vtemp_hd2b6a71a__52[0U] = 1U;
    __Vtemp_hd2b6a71a__52[1U] = 0U;
    __Vtemp_hd2b6a71a__52[2U] = 0U;
    __Vtemp_hd2b6a71a__52[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9e54d7ca__0, __Vtemp_hd2b6a71a__52, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h9e54d7ca__0[0U] 
                                      >> 0xeU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_15))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__53[0U] = 1U;
    __Vtemp_hd2b6a71a__53[1U] = 0U;
    __Vtemp_hd2b6a71a__53[2U] = 0U;
    __Vtemp_hd2b6a71a__53[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0cc3f3fb__0, __Vtemp_hd2b6a71a__53, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h0cc3f3fb__0[0U] 
                                    >> 0xeU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_15))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10348: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10348, "");
    }
    __Vtemp_hd2b6a71a__54[0U] = 1U;
    __Vtemp_hd2b6a71a__54[1U] = 0U;
    __Vtemp_hd2b6a71a__54[2U] = 0U;
    __Vtemp_hd2b6a71a__54[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h371ad274__0, __Vtemp_hd2b6a71a__54, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h371ad274__0[0U] 
                                      >> 0xeU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_15)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__55[0U] = 1U;
    __Vtemp_hd2b6a71a__55[1U] = 0U;
    __Vtemp_hd2b6a71a__55[2U] = 0U;
    __Vtemp_hd2b6a71a__55[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1a2d1032__0, __Vtemp_hd2b6a71a__55, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h1a2d1032__0[0U] 
                                    >> 0xeU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_15)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10371: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10371, "");
    }
    __Vtemp_hd2b6a71a__56[0U] = 1U;
    __Vtemp_hd2b6a71a__56[1U] = 0U;
    __Vtemp_hd2b6a71a__56[2U] = 0U;
    __Vtemp_hd2b6a71a__56[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h4b5050b3__0, __Vtemp_hd2b6a71a__56, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h4b5050b3__0[0U] 
                                      >> 0xfU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_16))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__57[0U] = 1U;
    __Vtemp_hd2b6a71a__57[1U] = 0U;
    __Vtemp_hd2b6a71a__57[2U] = 0U;
    __Vtemp_hd2b6a71a__57[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf2adc3f6__0, __Vtemp_hd2b6a71a__57, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hf2adc3f6__0[0U] 
                                    >> 0xfU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_16))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10394: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10394, "");
    }
    __Vtemp_hd2b6a71a__58[0U] = 1U;
    __Vtemp_hd2b6a71a__58[1U] = 0U;
    __Vtemp_hd2b6a71a__58[2U] = 0U;
    __Vtemp_hd2b6a71a__58[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha21fd949__0, __Vtemp_hd2b6a71a__58, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_ha21fd949__0[0U] 
                                      >> 0xfU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_16)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__59[0U] = 1U;
    __Vtemp_hd2b6a71a__59[1U] = 0U;
    __Vtemp_hd2b6a71a__59[2U] = 0U;
    __Vtemp_hd2b6a71a__59[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h34d79755__0, __Vtemp_hd2b6a71a__59, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h34d79755__0[0U] 
                                    >> 0xfU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_16)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10417: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10417, "");
    }
    __Vtemp_hd2b6a71a__60[0U] = 1U;
    __Vtemp_hd2b6a71a__60[1U] = 0U;
    __Vtemp_hd2b6a71a__60[2U] = 0U;
    __Vtemp_hd2b6a71a__60[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h13c23363__0, __Vtemp_hd2b6a71a__60, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h13c23363__0[0U] 
                                      >> 0x10U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_17))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__61[0U] = 1U;
    __Vtemp_hd2b6a71a__61[1U] = 0U;
    __Vtemp_hd2b6a71a__61[2U] = 0U;
    __Vtemp_hd2b6a71a__61[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_heb56ae48__0, __Vtemp_hd2b6a71a__61, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_heb56ae48__0[0U] 
                                    >> 0x10U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_17))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10440: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10440, "");
    }
    __Vtemp_hd2b6a71a__62[0U] = 1U;
    __Vtemp_hd2b6a71a__62[1U] = 0U;
    __Vtemp_hd2b6a71a__62[2U] = 0U;
    __Vtemp_hd2b6a71a__62[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0278d47e__0, __Vtemp_hd2b6a71a__62, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h0278d47e__0[0U] 
                                      >> 0x10U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_17)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__63[0U] = 1U;
    __Vtemp_hd2b6a71a__63[1U] = 0U;
    __Vtemp_hd2b6a71a__63[2U] = 0U;
    __Vtemp_hd2b6a71a__63[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h4c2fceef__0, __Vtemp_hd2b6a71a__63, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h4c2fceef__0[0U] 
                                    >> 0x10U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_17)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10463: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10463, "");
    }
    __Vtemp_hd2b6a71a__64[0U] = 1U;
    __Vtemp_hd2b6a71a__64[1U] = 0U;
    __Vtemp_hd2b6a71a__64[2U] = 0U;
    __Vtemp_hd2b6a71a__64[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6f902f18__0, __Vtemp_hd2b6a71a__64, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h6f902f18__0[0U] 
                                      >> 0x11U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_18))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__65[0U] = 1U;
    __Vtemp_hd2b6a71a__65[1U] = 0U;
    __Vtemp_hd2b6a71a__65[2U] = 0U;
    __Vtemp_hd2b6a71a__65[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_he4637a92__0, __Vtemp_hd2b6a71a__65, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_he4637a92__0[0U] 
                                    >> 0x11U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_18))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10486: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10486, "");
    }
    __Vtemp_hd2b6a71a__66[0U] = 1U;
    __Vtemp_hd2b6a71a__66[1U] = 0U;
    __Vtemp_hd2b6a71a__66[2U] = 0U;
    __Vtemp_hd2b6a71a__66[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9e8e3e5e__0, __Vtemp_hd2b6a71a__66, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h9e8e3e5e__0[0U] 
                                      >> 0x11U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_18)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__67[0U] = 1U;
    __Vtemp_hd2b6a71a__67[1U] = 0U;
    __Vtemp_hd2b6a71a__67[2U] = 0U;
    __Vtemp_hd2b6a71a__67[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h04f4eba4__0, __Vtemp_hd2b6a71a__67, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h04f4eba4__0[0U] 
                                    >> 0x11U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_18)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10509: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10509, "");
    }
    __Vtemp_hd2b6a71a__68[0U] = 1U;
    __Vtemp_hd2b6a71a__68[1U] = 0U;
    __Vtemp_hd2b6a71a__68[2U] = 0U;
    __Vtemp_hd2b6a71a__68[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hb6027c85__0, __Vtemp_hd2b6a71a__68, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hb6027c85__0[0U] 
                                      >> 0x12U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_19))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__69[0U] = 1U;
    __Vtemp_hd2b6a71a__69[1U] = 0U;
    __Vtemp_hd2b6a71a__69[2U] = 0U;
    __Vtemp_hd2b6a71a__69[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h732ccad9__0, __Vtemp_hd2b6a71a__69, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h732ccad9__0[0U] 
                                    >> 0x12U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_19))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10532: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10532, "");
    }
    __Vtemp_hd2b6a71a__70[0U] = 1U;
    __Vtemp_hd2b6a71a__70[1U] = 0U;
    __Vtemp_hd2b6a71a__70[2U] = 0U;
    __Vtemp_hd2b6a71a__70[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1add0867__0, __Vtemp_hd2b6a71a__70, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h1add0867__0[0U] 
                                      >> 0x12U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_19)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__71[0U] = 1U;
    __Vtemp_hd2b6a71a__71[1U] = 0U;
    __Vtemp_hd2b6a71a__71[2U] = 0U;
    __Vtemp_hd2b6a71a__71[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1b97278a__0, __Vtemp_hd2b6a71a__71, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h1b97278a__0[0U] 
                                    >> 0x12U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_19)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10555: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10555, "");
    }
    __Vtemp_hd2b6a71a__72[0U] = 1U;
    __Vtemp_hd2b6a71a__72[1U] = 0U;
    __Vtemp_hd2b6a71a__72[2U] = 0U;
    __Vtemp_hd2b6a71a__72[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hbd6c3252__0, __Vtemp_hd2b6a71a__72, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hbd6c3252__0[0U] 
                                      >> 0x13U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_20))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__73[0U] = 1U;
    __Vtemp_hd2b6a71a__73[1U] = 0U;
    __Vtemp_hd2b6a71a__73[2U] = 0U;
    __Vtemp_hd2b6a71a__73[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h396bfc6a__0, __Vtemp_hd2b6a71a__73, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h396bfc6a__0[0U] 
                                    >> 0x13U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_20))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10578: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10578, "");
    }
    __Vtemp_hd2b6a71a__74[0U] = 1U;
    __Vtemp_hd2b6a71a__74[1U] = 0U;
    __Vtemp_hd2b6a71a__74[2U] = 0U;
    __Vtemp_hd2b6a71a__74[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hddbc176e__0, __Vtemp_hd2b6a71a__74, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hddbc176e__0[0U] 
                                      >> 0x13U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_20)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__75[0U] = 1U;
    __Vtemp_hd2b6a71a__75[1U] = 0U;
    __Vtemp_hd2b6a71a__75[2U] = 0U;
    __Vtemp_hd2b6a71a__75[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h609d055b__0, __Vtemp_hd2b6a71a__75, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h609d055b__0[0U] 
                                    >> 0x13U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_20)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10601: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10601, "");
    }
    __Vtemp_hd2b6a71a__76[0U] = 1U;
    __Vtemp_hd2b6a71a__76[1U] = 0U;
    __Vtemp_hd2b6a71a__76[2U] = 0U;
    __Vtemp_hd2b6a71a__76[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1fb21490__0, __Vtemp_hd2b6a71a__76, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h1fb21490__0[0U] 
                                      >> 0x14U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_21))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__77[0U] = 1U;
    __Vtemp_hd2b6a71a__77[1U] = 0U;
    __Vtemp_hd2b6a71a__77[2U] = 0U;
    __Vtemp_hd2b6a71a__77[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h34aa3bb6__0, __Vtemp_hd2b6a71a__77, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h34aa3bb6__0[0U] 
                                    >> 0x14U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_21))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10624: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10624, "");
    }
    __Vtemp_hd2b6a71a__78[0U] = 1U;
    __Vtemp_hd2b6a71a__78[1U] = 0U;
    __Vtemp_hd2b6a71a__78[2U] = 0U;
    __Vtemp_hd2b6a71a__78[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf8d681b7__0, __Vtemp_hd2b6a71a__78, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hf8d681b7__0[0U] 
                                      >> 0x14U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_21)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__79[0U] = 1U;
    __Vtemp_hd2b6a71a__79[1U] = 0U;
    __Vtemp_hd2b6a71a__79[2U] = 0U;
    __Vtemp_hd2b6a71a__79[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf231cbfb__0, __Vtemp_hd2b6a71a__79, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hf231cbfb__0[0U] 
                                    >> 0x14U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_21)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10647: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10647, "");
    }
    __Vtemp_hd2b6a71a__80[0U] = 1U;
    __Vtemp_hd2b6a71a__80[1U] = 0U;
    __Vtemp_hd2b6a71a__80[2U] = 0U;
    __Vtemp_hd2b6a71a__80[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h23dc8611__0, __Vtemp_hd2b6a71a__80, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h23dc8611__0[0U] 
                                      >> 0x15U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_22))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__81[0U] = 1U;
    __Vtemp_hd2b6a71a__81[1U] = 0U;
    __Vtemp_hd2b6a71a__81[2U] = 0U;
    __Vtemp_hd2b6a71a__81[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h15be12d2__0, __Vtemp_hd2b6a71a__81, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h15be12d2__0[0U] 
                                    >> 0x15U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_22))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10670: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10670, "");
    }
    __Vtemp_hd2b6a71a__82[0U] = 1U;
    __Vtemp_hd2b6a71a__82[1U] = 0U;
    __Vtemp_hd2b6a71a__82[2U] = 0U;
    __Vtemp_hd2b6a71a__82[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h4d4c7746__0, __Vtemp_hd2b6a71a__82, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h4d4c7746__0[0U] 
                                      >> 0x15U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_22)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__83[0U] = 1U;
    __Vtemp_hd2b6a71a__83[1U] = 0U;
    __Vtemp_hd2b6a71a__83[2U] = 0U;
    __Vtemp_hd2b6a71a__83[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hec617044__0, __Vtemp_hd2b6a71a__83, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hec617044__0[0U] 
                                    >> 0x15U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_22)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10693: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10693, "");
    }
    __Vtemp_hd2b6a71a__84[0U] = 1U;
    __Vtemp_hd2b6a71a__84[1U] = 0U;
    __Vtemp_hd2b6a71a__84[2U] = 0U;
    __Vtemp_hd2b6a71a__84[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8823209b__0, __Vtemp_hd2b6a71a__84, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h8823209b__0[0U] 
                                      >> 0x16U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_23))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__85[0U] = 1U;
    __Vtemp_hd2b6a71a__85[1U] = 0U;
    __Vtemp_hd2b6a71a__85[2U] = 0U;
    __Vtemp_hd2b6a71a__85[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hbc472d40__0, __Vtemp_hd2b6a71a__85, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hbc472d40__0[0U] 
                                    >> 0x16U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_23))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10716: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10716, "");
    }
    __Vtemp_hd2b6a71a__86[0U] = 1U;
    __Vtemp_hd2b6a71a__86[1U] = 0U;
    __Vtemp_hd2b6a71a__86[2U] = 0U;
    __Vtemp_hd2b6a71a__86[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hb73f5f38__0, __Vtemp_hd2b6a71a__86, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hb73f5f38__0[0U] 
                                      >> 0x16U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_23)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__87[0U] = 1U;
    __Vtemp_hd2b6a71a__87[1U] = 0U;
    __Vtemp_hd2b6a71a__87[2U] = 0U;
    __Vtemp_hd2b6a71a__87[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9548cb0c__0, __Vtemp_hd2b6a71a__87, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h9548cb0c__0[0U] 
                                    >> 0x16U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_23)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10739: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10739, "");
    }
    __Vtemp_hd2b6a71a__88[0U] = 1U;
    __Vtemp_hd2b6a71a__88[1U] = 0U;
    __Vtemp_hd2b6a71a__88[2U] = 0U;
    __Vtemp_hd2b6a71a__88[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h086bb850__0, __Vtemp_hd2b6a71a__88, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h086bb850__0[0U] 
                                      >> 0x17U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_24))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__89[0U] = 1U;
    __Vtemp_hd2b6a71a__89[1U] = 0U;
    __Vtemp_hd2b6a71a__89[2U] = 0U;
    __Vtemp_hd2b6a71a__89[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h3684e5d4__0, __Vtemp_hd2b6a71a__89, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h3684e5d4__0[0U] 
                                    >> 0x17U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_24))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10762: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10762, "");
    }
    __Vtemp_hd2b6a71a__90[0U] = 1U;
    __Vtemp_hd2b6a71a__90[1U] = 0U;
    __Vtemp_hd2b6a71a__90[2U] = 0U;
    __Vtemp_hd2b6a71a__90[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf938a727__0, __Vtemp_hd2b6a71a__90, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hf938a727__0[0U] 
                                      >> 0x17U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_24)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__91[0U] = 1U;
    __Vtemp_hd2b6a71a__91[1U] = 0U;
    __Vtemp_hd2b6a71a__91[2U] = 0U;
    __Vtemp_hd2b6a71a__91[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0ef8f2c1__0, __Vtemp_hd2b6a71a__91, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h0ef8f2c1__0[0U] 
                                    >> 0x17U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_24)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10785: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10785, "");
    }
    __Vtemp_hd2b6a71a__92[0U] = 1U;
    __Vtemp_hd2b6a71a__92[1U] = 0U;
    __Vtemp_hd2b6a71a__92[2U] = 0U;
    __Vtemp_hd2b6a71a__92[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcc78362f__0, __Vtemp_hd2b6a71a__92, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hcc78362f__0[0U] 
                                      >> 0x18U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_25))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__93[0U] = 1U;
    __Vtemp_hd2b6a71a__93[1U] = 0U;
    __Vtemp_hd2b6a71a__93[2U] = 0U;
    __Vtemp_hd2b6a71a__93[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7a98ab75__0, __Vtemp_hd2b6a71a__93, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h7a98ab75__0[0U] 
                                    >> 0x18U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_25))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10808: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10808, "");
    }
    __Vtemp_hd2b6a71a__94[0U] = 1U;
    __Vtemp_hd2b6a71a__94[1U] = 0U;
    __Vtemp_hd2b6a71a__94[2U] = 0U;
    __Vtemp_hd2b6a71a__94[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h4ac64e52__0, __Vtemp_hd2b6a71a__94, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h4ac64e52__0[0U] 
                                      >> 0x18U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_25)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__95[0U] = 1U;
    __Vtemp_hd2b6a71a__95[1U] = 0U;
    __Vtemp_hd2b6a71a__95[2U] = 0U;
    __Vtemp_hd2b6a71a__95[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1c5054a5__0, __Vtemp_hd2b6a71a__95, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h1c5054a5__0[0U] 
                                    >> 0x18U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_25)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10831: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10831, "");
    }
    __Vtemp_hd2b6a71a__96[0U] = 1U;
    __Vtemp_hd2b6a71a__96[1U] = 0U;
    __Vtemp_hd2b6a71a__96[2U] = 0U;
    __Vtemp_hd2b6a71a__96[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hded6bb53__0, __Vtemp_hd2b6a71a__96, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hded6bb53__0[0U] 
                                      >> 0x19U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_26))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__97[0U] = 1U;
    __Vtemp_hd2b6a71a__97[1U] = 0U;
    __Vtemp_hd2b6a71a__97[2U] = 0U;
    __Vtemp_hd2b6a71a__97[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha33e964e__0, __Vtemp_hd2b6a71a__97, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_ha33e964e__0[0U] 
                                    >> 0x19U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_26))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10854: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10854, "");
    }
    __Vtemp_hd2b6a71a__98[0U] = 1U;
    __Vtemp_hd2b6a71a__98[1U] = 0U;
    __Vtemp_hd2b6a71a__98[2U] = 0U;
    __Vtemp_hd2b6a71a__98[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd61961e9__0, __Vtemp_hd2b6a71a__98, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hd61961e9__0[0U] 
                                      >> 0x19U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_26)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__99[0U] = 1U;
    __Vtemp_hd2b6a71a__99[1U] = 0U;
    __Vtemp_hd2b6a71a__99[2U] = 0U;
    __Vtemp_hd2b6a71a__99[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h915c5ff0__0, __Vtemp_hd2b6a71a__99, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h915c5ff0__0[0U] 
                                    >> 0x19U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_26)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10877: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10877, "");
    }
    __Vtemp_hd2b6a71a__100[0U] = 1U;
    __Vtemp_hd2b6a71a__100[1U] = 0U;
    __Vtemp_hd2b6a71a__100[2U] = 0U;
    __Vtemp_hd2b6a71a__100[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7e8e8383__0, __Vtemp_hd2b6a71a__100, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h7e8e8383__0[0U] 
                                      >> 0x1aU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_27))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__101[0U] = 1U;
    __Vtemp_hd2b6a71a__101[1U] = 0U;
    __Vtemp_hd2b6a71a__101[2U] = 0U;
    __Vtemp_hd2b6a71a__101[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h837d55cc__0, __Vtemp_hd2b6a71a__101, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h837d55cc__0[0U] 
                                    >> 0x1aU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_27))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10900: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10900, "");
    }
    __Vtemp_hd2b6a71a__102[0U] = 1U;
    __Vtemp_hd2b6a71a__102[1U] = 0U;
    __Vtemp_hd2b6a71a__102[2U] = 0U;
    __Vtemp_hd2b6a71a__102[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1bf236dd__0, __Vtemp_hd2b6a71a__102, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h1bf236dd__0[0U] 
                                      >> 0x1aU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_27)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__103[0U] = 1U;
    __Vtemp_hd2b6a71a__103[1U] = 0U;
    __Vtemp_hd2b6a71a__103[2U] = 0U;
    __Vtemp_hd2b6a71a__103[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf66ab717__0, __Vtemp_hd2b6a71a__103, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hf66ab717__0[0U] 
                                    >> 0x1aU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_27)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10923: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10923, "");
    }
    __Vtemp_hd2b6a71a__104[0U] = 1U;
    __Vtemp_hd2b6a71a__104[1U] = 0U;
    __Vtemp_hd2b6a71a__104[2U] = 0U;
    __Vtemp_hd2b6a71a__104[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h4f5636bc__0, __Vtemp_hd2b6a71a__104, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h4f5636bc__0[0U] 
                                      >> 0x1bU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_28))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__105[0U] = 1U;
    __Vtemp_hd2b6a71a__105[1U] = 0U;
    __Vtemp_hd2b6a71a__105[2U] = 0U;
    __Vtemp_hd2b6a71a__105[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h06f144b4__0, __Vtemp_hd2b6a71a__105, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h06f144b4__0[0U] 
                                    >> 0x1bU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_28))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10946: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10946, "");
    }
    __Vtemp_hd2b6a71a__106[0U] = 1U;
    __Vtemp_hd2b6a71a__106[1U] = 0U;
    __Vtemp_hd2b6a71a__106[2U] = 0U;
    __Vtemp_hd2b6a71a__106[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha1a95304__0, __Vtemp_hd2b6a71a__106, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_ha1a95304__0[0U] 
                                      >> 0x1bU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_28)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__107[0U] = 1U;
    __Vtemp_hd2b6a71a__107[1U] = 0U;
    __Vtemp_hd2b6a71a__107[2U] = 0U;
    __Vtemp_hd2b6a71a__107[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfe2aea39__0, __Vtemp_hd2b6a71a__107, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hfe2aea39__0[0U] 
                                    >> 0x1bU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_28)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10969: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10969, "");
    }
    __Vtemp_hd2b6a71a__108[0U] = 1U;
    __Vtemp_hd2b6a71a__108[1U] = 0U;
    __Vtemp_hd2b6a71a__108[2U] = 0U;
    __Vtemp_hd2b6a71a__108[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfd40303b__0, __Vtemp_hd2b6a71a__108, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hfd40303b__0[0U] 
                                      >> 0x1cU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_29))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__109[0U] = 1U;
    __Vtemp_hd2b6a71a__109[1U] = 0U;
    __Vtemp_hd2b6a71a__109[2U] = 0U;
    __Vtemp_hd2b6a71a__109[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha85fdc59__0, __Vtemp_hd2b6a71a__109, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_ha85fdc59__0[0U] 
                                    >> 0x1cU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_29))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:10992: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 10992, "");
    }
    __Vtemp_hd2b6a71a__110[0U] = 1U;
    __Vtemp_hd2b6a71a__110[1U] = 0U;
    __Vtemp_hd2b6a71a__110[2U] = 0U;
    __Vtemp_hd2b6a71a__110[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1cc13451__0, __Vtemp_hd2b6a71a__110, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h1cc13451__0[0U] 
                                      >> 0x1cU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_29)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__111[0U] = 1U;
    __Vtemp_hd2b6a71a__111[1U] = 0U;
    __Vtemp_hd2b6a71a__111[2U] = 0U;
    __Vtemp_hd2b6a71a__111[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h3a26e2b0__0, __Vtemp_hd2b6a71a__111, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h3a26e2b0__0[0U] 
                                    >> 0x1cU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_29)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11015: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11015, "");
    }
    __Vtemp_hd2b6a71a__112[0U] = 1U;
    __Vtemp_hd2b6a71a__112[1U] = 0U;
    __Vtemp_hd2b6a71a__112[2U] = 0U;
    __Vtemp_hd2b6a71a__112[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7aa9f2c5__0, __Vtemp_hd2b6a71a__112, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h7aa9f2c5__0[0U] 
                                      >> 0x1dU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_30))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__113[0U] = 1U;
    __Vtemp_hd2b6a71a__113[1U] = 0U;
    __Vtemp_hd2b6a71a__113[2U] = 0U;
    __Vtemp_hd2b6a71a__113[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha55562e4__0, __Vtemp_hd2b6a71a__113, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_ha55562e4__0[0U] 
                                    >> 0x1dU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_30))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11038: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11038, "");
    }
    __Vtemp_hd2b6a71a__114[0U] = 1U;
    __Vtemp_hd2b6a71a__114[1U] = 0U;
    __Vtemp_hd2b6a71a__114[2U] = 0U;
    __Vtemp_hd2b6a71a__114[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha232a86a__0, __Vtemp_hd2b6a71a__114, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_ha232a86a__0[0U] 
                                      >> 0x1dU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_30)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__115[0U] = 1U;
    __Vtemp_hd2b6a71a__115[1U] = 0U;
    __Vtemp_hd2b6a71a__115[2U] = 0U;
    __Vtemp_hd2b6a71a__115[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hce8c01d6__0, __Vtemp_hd2b6a71a__115, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hce8c01d6__0[0U] 
                                    >> 0x1dU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_30)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11061: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11061, "");
    }
    __Vtemp_hd2b6a71a__116[0U] = 1U;
    __Vtemp_hd2b6a71a__116[1U] = 0U;
    __Vtemp_hd2b6a71a__116[2U] = 0U;
    __Vtemp_hd2b6a71a__116[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha94990d3__0, __Vtemp_hd2b6a71a__116, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_ha94990d3__0[0U] 
                                      >> 0x1eU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_31))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__117[0U] = 1U;
    __Vtemp_hd2b6a71a__117[1U] = 0U;
    __Vtemp_hd2b6a71a__117[2U] = 0U;
    __Vtemp_hd2b6a71a__117[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_he6cd2efe__0, __Vtemp_hd2b6a71a__117, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_he6cd2efe__0[0U] 
                                    >> 0x1eU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_31))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11084: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11084, "");
    }
    __Vtemp_hd2b6a71a__118[0U] = 1U;
    __Vtemp_hd2b6a71a__118[1U] = 0U;
    __Vtemp_hd2b6a71a__118[2U] = 0U;
    __Vtemp_hd2b6a71a__118[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7e8b567a__0, __Vtemp_hd2b6a71a__118, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h7e8b567a__0[0U] 
                                      >> 0x1eU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_31)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__119[0U] = 1U;
    __Vtemp_hd2b6a71a__119[1U] = 0U;
    __Vtemp_hd2b6a71a__119[2U] = 0U;
    __Vtemp_hd2b6a71a__119[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0dc58061__0, __Vtemp_hd2b6a71a__119, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h0dc58061__0[0U] 
                                    >> 0x1eU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_31)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11107: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11107, "");
    }
    __Vtemp_hd2b6a71a__120[0U] = 1U;
    __Vtemp_hd2b6a71a__120[1U] = 0U;
    __Vtemp_hd2b6a71a__120[2U] = 0U;
    __Vtemp_hd2b6a71a__120[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h018a1be5__0, __Vtemp_hd2b6a71a__120, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h018a1be5__0[0U] 
                                      >> 0x1fU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_32))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__121[0U] = 1U;
    __Vtemp_hd2b6a71a__121[1U] = 0U;
    __Vtemp_hd2b6a71a__121[2U] = 0U;
    __Vtemp_hd2b6a71a__121[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hbef0f887__0, __Vtemp_hd2b6a71a__121, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hbef0f887__0[0U] 
                                    >> 0x1fU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_32))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11130: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11130, "");
    }
    __Vtemp_hd2b6a71a__122[0U] = 1U;
    __Vtemp_hd2b6a71a__122[1U] = 0U;
    __Vtemp_hd2b6a71a__122[2U] = 0U;
    __Vtemp_hd2b6a71a__122[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h64ea2d04__0, __Vtemp_hd2b6a71a__122, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h64ea2d04__0[0U] 
                                      >> 0x1fU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_32)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__123[0U] = 1U;
    __Vtemp_hd2b6a71a__123[1U] = 0U;
    __Vtemp_hd2b6a71a__123[2U] = 0U;
    __Vtemp_hd2b6a71a__123[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h90c9d7e9__0, __Vtemp_hd2b6a71a__123, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h90c9d7e9__0[0U] 
                                    >> 0x1fU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_32)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11153: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11153, "");
    }
    __Vtemp_hd2b6a71a__124[0U] = 1U;
    __Vtemp_hd2b6a71a__124[1U] = 0U;
    __Vtemp_hd2b6a71a__124[2U] = 0U;
    __Vtemp_hd2b6a71a__124[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h85db7249__0, __Vtemp_hd2b6a71a__124, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (__Vtemp_h85db7249__0[1U] 
                                     & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_33))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__125[0U] = 1U;
    __Vtemp_hd2b6a71a__125[1U] = 0U;
    __Vtemp_hd2b6a71a__125[2U] = 0U;
    __Vtemp_hd2b6a71a__125[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h335ea3b3__0, __Vtemp_hd2b6a71a__125, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ (__Vtemp_h335ea3b3__0[1U] 
                                   & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_33))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11176: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11176, "");
    }
    __Vtemp_hd2b6a71a__126[0U] = 1U;
    __Vtemp_hd2b6a71a__126[1U] = 0U;
    __Vtemp_hd2b6a71a__126[2U] = 0U;
    __Vtemp_hd2b6a71a__126[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h709b90c3__0, __Vtemp_hd2b6a71a__126, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (__Vtemp_h709b90c3__0[1U] 
                                     & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_33)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__127[0U] = 1U;
    __Vtemp_hd2b6a71a__127[1U] = 0U;
    __Vtemp_hd2b6a71a__127[2U] = 0U;
    __Vtemp_hd2b6a71a__127[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h700fe55b__0, __Vtemp_hd2b6a71a__127, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ (__Vtemp_h700fe55b__0[1U] 
                                   & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_33)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11199: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11199, "");
    }
    __Vtemp_hd2b6a71a__128[0U] = 1U;
    __Vtemp_hd2b6a71a__128[1U] = 0U;
    __Vtemp_hd2b6a71a__128[2U] = 0U;
    __Vtemp_hd2b6a71a__128[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hbde53012__0, __Vtemp_hd2b6a71a__128, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hbde53012__0[1U] 
                                      >> 1U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_34))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__129[0U] = 1U;
    __Vtemp_hd2b6a71a__129[1U] = 0U;
    __Vtemp_hd2b6a71a__129[2U] = 0U;
    __Vtemp_hd2b6a71a__129[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd6d7d968__0, __Vtemp_hd2b6a71a__129, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hd6d7d968__0[1U] 
                                    >> 1U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_34))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11222: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11222, "");
    }
    __Vtemp_hd2b6a71a__130[0U] = 1U;
    __Vtemp_hd2b6a71a__130[1U] = 0U;
    __Vtemp_hd2b6a71a__130[2U] = 0U;
    __Vtemp_hd2b6a71a__130[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h4f23135b__0, __Vtemp_hd2b6a71a__130, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h4f23135b__0[1U] 
                                      >> 1U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_34)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__131[0U] = 1U;
    __Vtemp_hd2b6a71a__131[1U] = 0U;
    __Vtemp_hd2b6a71a__131[2U] = 0U;
    __Vtemp_hd2b6a71a__131[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc45e7093__0, __Vtemp_hd2b6a71a__131, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hc45e7093__0[1U] 
                                    >> 1U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_34)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11245: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11245, "");
    }
    __Vtemp_hd2b6a71a__132[0U] = 1U;
    __Vtemp_hd2b6a71a__132[1U] = 0U;
    __Vtemp_hd2b6a71a__132[2U] = 0U;
    __Vtemp_hd2b6a71a__132[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hb3188072__0, __Vtemp_hd2b6a71a__132, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hb3188072__0[1U] 
                                      >> 2U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_35))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__133[0U] = 1U;
    __Vtemp_hd2b6a71a__133[1U] = 0U;
    __Vtemp_hd2b6a71a__133[2U] = 0U;
    __Vtemp_hd2b6a71a__133[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc4a210ca__0, __Vtemp_hd2b6a71a__133, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hc4a210ca__0[1U] 
                                    >> 2U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_35))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11268: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11268, "");
    }
    __Vtemp_hd2b6a71a__134[0U] = 1U;
    __Vtemp_hd2b6a71a__134[1U] = 0U;
    __Vtemp_hd2b6a71a__134[2U] = 0U;
    __Vtemp_hd2b6a71a__134[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h264acc80__0, __Vtemp_hd2b6a71a__134, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h264acc80__0[1U] 
                                      >> 2U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_35)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__135[0U] = 1U;
    __Vtemp_hd2b6a71a__135[1U] = 0U;
    __Vtemp_hd2b6a71a__135[2U] = 0U;
    __Vtemp_hd2b6a71a__135[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hb99f6cfb__0, __Vtemp_hd2b6a71a__135, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hb99f6cfb__0[1U] 
                                    >> 2U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_35)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11291: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11291, "");
    }
    __Vtemp_hd2b6a71a__136[0U] = 1U;
    __Vtemp_hd2b6a71a__136[1U] = 0U;
    __Vtemp_hd2b6a71a__136[2U] = 0U;
    __Vtemp_hd2b6a71a__136[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_he7de96df__0, __Vtemp_hd2b6a71a__136, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_he7de96df__0[1U] 
                                      >> 3U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_36))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__137[0U] = 1U;
    __Vtemp_hd2b6a71a__137[1U] = 0U;
    __Vtemp_hd2b6a71a__137[2U] = 0U;
    __Vtemp_hd2b6a71a__137[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_he40b69bd__0, __Vtemp_hd2b6a71a__137, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_he40b69bd__0[1U] 
                                    >> 3U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_36))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11314: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11314, "");
    }
    __Vtemp_hd2b6a71a__138[0U] = 1U;
    __Vtemp_hd2b6a71a__138[1U] = 0U;
    __Vtemp_hd2b6a71a__138[2U] = 0U;
    __Vtemp_hd2b6a71a__138[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h58769aa6__0, __Vtemp_hd2b6a71a__138, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h58769aa6__0[1U] 
                                      >> 3U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_36)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__139[0U] = 1U;
    __Vtemp_hd2b6a71a__139[1U] = 0U;
    __Vtemp_hd2b6a71a__139[2U] = 0U;
    __Vtemp_hd2b6a71a__139[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha1cf5f97__0, __Vtemp_hd2b6a71a__139, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_ha1cf5f97__0[1U] 
                                    >> 3U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_36)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11337: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11337, "");
    }
    __Vtemp_hd2b6a71a__140[0U] = 1U;
    __Vtemp_hd2b6a71a__140[1U] = 0U;
    __Vtemp_hd2b6a71a__140[2U] = 0U;
    __Vtemp_hd2b6a71a__140[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h5c01e76c__0, __Vtemp_hd2b6a71a__140, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h5c01e76c__0[1U] 
                                      >> 4U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_37))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__141[0U] = 1U;
    __Vtemp_hd2b6a71a__141[1U] = 0U;
    __Vtemp_hd2b6a71a__141[2U] = 0U;
    __Vtemp_hd2b6a71a__141[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha075dcbb__0, __Vtemp_hd2b6a71a__141, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_ha075dcbb__0[1U] 
                                    >> 4U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_37))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11360: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11360, "");
    }
    __Vtemp_hd2b6a71a__142[0U] = 1U;
    __Vtemp_hd2b6a71a__142[1U] = 0U;
    __Vtemp_hd2b6a71a__142[2U] = 0U;
    __Vtemp_hd2b6a71a__142[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha57f0d4a__0, __Vtemp_hd2b6a71a__142, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_ha57f0d4a__0[1U] 
                                      >> 4U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_37)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__143[0U] = 1U;
    __Vtemp_hd2b6a71a__143[1U] = 0U;
    __Vtemp_hd2b6a71a__143[2U] = 0U;
    __Vtemp_hd2b6a71a__143[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hbe9d6d9d__0, __Vtemp_hd2b6a71a__143, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hbe9d6d9d__0[1U] 
                                    >> 4U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_37)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11383: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11383, "");
    }
    __Vtemp_hd2b6a71a__144[0U] = 1U;
    __Vtemp_hd2b6a71a__144[1U] = 0U;
    __Vtemp_hd2b6a71a__144[2U] = 0U;
    __Vtemp_hd2b6a71a__144[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd74ac65a__0, __Vtemp_hd2b6a71a__144, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hd74ac65a__0[1U] 
                                      >> 5U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_38))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__145[0U] = 1U;
    __Vtemp_hd2b6a71a__145[1U] = 0U;
    __Vtemp_hd2b6a71a__145[2U] = 0U;
    __Vtemp_hd2b6a71a__145[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h69d0c93f__0, __Vtemp_hd2b6a71a__145, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h69d0c93f__0[1U] 
                                    >> 5U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_38))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11406: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11406, "");
    }
    __Vtemp_hd2b6a71a__146[0U] = 1U;
    __Vtemp_hd2b6a71a__146[1U] = 0U;
    __Vtemp_hd2b6a71a__146[2U] = 0U;
    __Vtemp_hd2b6a71a__146[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h35db6d02__0, __Vtemp_hd2b6a71a__146, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h35db6d02__0[1U] 
                                      >> 5U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_38)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__147[0U] = 1U;
    __Vtemp_hd2b6a71a__147[1U] = 0U;
    __Vtemp_hd2b6a71a__147[2U] = 0U;
    __Vtemp_hd2b6a71a__147[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hb96c1164__0, __Vtemp_hd2b6a71a__147, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hb96c1164__0[1U] 
                                    >> 5U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_38)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11429: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11429, "");
    }
    __Vtemp_hd2b6a71a__148[0U] = 1U;
    __Vtemp_hd2b6a71a__148[1U] = 0U;
    __Vtemp_hd2b6a71a__148[2U] = 0U;
    __Vtemp_hd2b6a71a__148[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf4be076b__0, __Vtemp_hd2b6a71a__148, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hf4be076b__0[1U] 
                                      >> 6U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_39))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__149[0U] = 1U;
    __Vtemp_hd2b6a71a__149[1U] = 0U;
    __Vtemp_hd2b6a71a__149[2U] = 0U;
    __Vtemp_hd2b6a71a__149[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcb3d49a7__0, __Vtemp_hd2b6a71a__149, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hcb3d49a7__0[1U] 
                                    >> 6U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_39))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11452: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11452, "");
    }
    __Vtemp_hd2b6a71a__150[0U] = 1U;
    __Vtemp_hd2b6a71a__150[1U] = 0U;
    __Vtemp_hd2b6a71a__150[2U] = 0U;
    __Vtemp_hd2b6a71a__150[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf7ec29ba__0, __Vtemp_hd2b6a71a__150, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hf7ec29ba__0[1U] 
                                      >> 6U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_39)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__151[0U] = 1U;
    __Vtemp_hd2b6a71a__151[1U] = 0U;
    __Vtemp_hd2b6a71a__151[2U] = 0U;
    __Vtemp_hd2b6a71a__151[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h40701b71__0, __Vtemp_hd2b6a71a__151, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h40701b71__0[1U] 
                                    >> 6U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_39)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11475: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11475, "");
    }
    __Vtemp_hd2b6a71a__152[0U] = 1U;
    __Vtemp_hd2b6a71a__152[1U] = 0U;
    __Vtemp_hd2b6a71a__152[2U] = 0U;
    __Vtemp_hd2b6a71a__152[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd1a4657d__0, __Vtemp_hd2b6a71a__152, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hd1a4657d__0[1U] 
                                      >> 7U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_40))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__153[0U] = 1U;
    __Vtemp_hd2b6a71a__153[1U] = 0U;
    __Vtemp_hd2b6a71a__153[2U] = 0U;
    __Vtemp_hd2b6a71a__153[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6cee4404__0, __Vtemp_hd2b6a71a__153, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h6cee4404__0[1U] 
                                    >> 7U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_40))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11498: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11498, "");
    }
    __Vtemp_hd2b6a71a__154[0U] = 1U;
    __Vtemp_hd2b6a71a__154[1U] = 0U;
    __Vtemp_hd2b6a71a__154[2U] = 0U;
    __Vtemp_hd2b6a71a__154[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hb695882e__0, __Vtemp_hd2b6a71a__154, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hb695882e__0[1U] 
                                      >> 7U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_40)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__155[0U] = 1U;
    __Vtemp_hd2b6a71a__155[1U] = 0U;
    __Vtemp_hd2b6a71a__155[2U] = 0U;
    __Vtemp_hd2b6a71a__155[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h34c29422__0, __Vtemp_hd2b6a71a__155, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h34c29422__0[1U] 
                                    >> 7U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_40)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11521: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11521, "");
    }
    __Vtemp_hd2b6a71a__156[0U] = 1U;
    __Vtemp_hd2b6a71a__156[1U] = 0U;
    __Vtemp_hd2b6a71a__156[2U] = 0U;
    __Vtemp_hd2b6a71a__156[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7077ec4c__0, __Vtemp_hd2b6a71a__156, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h7077ec4c__0[1U] 
                                      >> 8U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_41))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__157[0U] = 1U;
    __Vtemp_hd2b6a71a__157[1U] = 0U;
    __Vtemp_hd2b6a71a__157[2U] = 0U;
    __Vtemp_hd2b6a71a__157[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h565ee6ab__0, __Vtemp_hd2b6a71a__157, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h565ee6ab__0[1U] 
                                    >> 8U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_41))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11544: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11544, "");
    }
    __Vtemp_hd2b6a71a__158[0U] = 1U;
    __Vtemp_hd2b6a71a__158[1U] = 0U;
    __Vtemp_hd2b6a71a__158[2U] = 0U;
    __Vtemp_hd2b6a71a__158[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcd496e07__0, __Vtemp_hd2b6a71a__158, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hcd496e07__0[1U] 
                                      >> 8U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_41)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__159[0U] = 1U;
    __Vtemp_hd2b6a71a__159[1U] = 0U;
    __Vtemp_hd2b6a71a__159[2U] = 0U;
    __Vtemp_hd2b6a71a__159[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h43ea2ba6__0, __Vtemp_hd2b6a71a__159, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h43ea2ba6__0[1U] 
                                    >> 8U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_41)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11567: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11567, "");
    }
    __Vtemp_hd2b6a71a__160[0U] = 1U;
    __Vtemp_hd2b6a71a__160[1U] = 0U;
    __Vtemp_hd2b6a71a__160[2U] = 0U;
    __Vtemp_hd2b6a71a__160[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h555e0a4d__0, __Vtemp_hd2b6a71a__160, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h555e0a4d__0[1U] 
                                      >> 9U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_42))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__161[0U] = 1U;
    __Vtemp_hd2b6a71a__161[1U] = 0U;
    __Vtemp_hd2b6a71a__161[2U] = 0U;
    __Vtemp_hd2b6a71a__161[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h42786c55__0, __Vtemp_hd2b6a71a__161, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h42786c55__0[1U] 
                                    >> 9U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_42))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11590: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11590, "");
    }
    __Vtemp_hd2b6a71a__162[0U] = 1U;
    __Vtemp_hd2b6a71a__162[1U] = 0U;
    __Vtemp_hd2b6a71a__162[2U] = 0U;
    __Vtemp_hd2b6a71a__162[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h5e33cf2a__0, __Vtemp_hd2b6a71a__162, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h5e33cf2a__0[1U] 
                                      >> 9U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_42)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__163[0U] = 1U;
    __Vtemp_hd2b6a71a__163[1U] = 0U;
    __Vtemp_hd2b6a71a__163[2U] = 0U;
    __Vtemp_hd2b6a71a__163[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha1ca5702__0, __Vtemp_hd2b6a71a__163, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_ha1ca5702__0[1U] 
                                    >> 9U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_42)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11613: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11613, "");
    }
    __Vtemp_hd2b6a71a__164[0U] = 1U;
    __Vtemp_hd2b6a71a__164[1U] = 0U;
    __Vtemp_hd2b6a71a__164[2U] = 0U;
    __Vtemp_hd2b6a71a__164[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h02dddc7e__0, __Vtemp_hd2b6a71a__164, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h02dddc7e__0[1U] 
                                      >> 0xaU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_43))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__165[0U] = 1U;
    __Vtemp_hd2b6a71a__165[1U] = 0U;
    __Vtemp_hd2b6a71a__165[2U] = 0U;
    __Vtemp_hd2b6a71a__165[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0d9ff01a__0, __Vtemp_hd2b6a71a__165, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h0d9ff01a__0[1U] 
                                    >> 0xaU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_43))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11636: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11636, "");
    }
    __Vtemp_hd2b6a71a__166[0U] = 1U;
    __Vtemp_hd2b6a71a__166[1U] = 0U;
    __Vtemp_hd2b6a71a__166[2U] = 0U;
    __Vtemp_hd2b6a71a__166[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hae7fd2d6__0, __Vtemp_hd2b6a71a__166, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hae7fd2d6__0[1U] 
                                      >> 0xaU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_43)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__167[0U] = 1U;
    __Vtemp_hd2b6a71a__167[1U] = 0U;
    __Vtemp_hd2b6a71a__167[2U] = 0U;
    __Vtemp_hd2b6a71a__167[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_habcfb717__0, __Vtemp_hd2b6a71a__167, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_habcfb717__0[1U] 
                                    >> 0xaU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_43)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11659: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11659, "");
    }
    __Vtemp_hd2b6a71a__168[0U] = 1U;
    __Vtemp_hd2b6a71a__168[1U] = 0U;
    __Vtemp_hd2b6a71a__168[2U] = 0U;
    __Vtemp_hd2b6a71a__168[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_he4a99a21__0, __Vtemp_hd2b6a71a__168, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_he4a99a21__0[1U] 
                                      >> 0xbU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_44))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__169[0U] = 1U;
    __Vtemp_hd2b6a71a__169[1U] = 0U;
    __Vtemp_hd2b6a71a__169[2U] = 0U;
    __Vtemp_hd2b6a71a__169[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h86e3cd33__0, __Vtemp_hd2b6a71a__169, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h86e3cd33__0[1U] 
                                    >> 0xbU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_44))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11682: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11682, "");
    }
    __Vtemp_hd2b6a71a__170[0U] = 1U;
    __Vtemp_hd2b6a71a__170[1U] = 0U;
    __Vtemp_hd2b6a71a__170[2U] = 0U;
    __Vtemp_hd2b6a71a__170[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcc70432d__0, __Vtemp_hd2b6a71a__170, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hcc70432d__0[1U] 
                                      >> 0xbU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_44)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__171[0U] = 1U;
    __Vtemp_hd2b6a71a__171[1U] = 0U;
    __Vtemp_hd2b6a71a__171[2U] = 0U;
    __Vtemp_hd2b6a71a__171[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7b3e0e9f__0, __Vtemp_hd2b6a71a__171, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h7b3e0e9f__0[1U] 
                                    >> 0xbU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_44)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11705: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11705, "");
    }
    __Vtemp_hd2b6a71a__172[0U] = 1U;
    __Vtemp_hd2b6a71a__172[1U] = 0U;
    __Vtemp_hd2b6a71a__172[2U] = 0U;
    __Vtemp_hd2b6a71a__172[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h66d68266__0, __Vtemp_hd2b6a71a__172, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h66d68266__0[1U] 
                                      >> 0xcU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_45))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__173[0U] = 1U;
    __Vtemp_hd2b6a71a__173[1U] = 0U;
    __Vtemp_hd2b6a71a__173[2U] = 0U;
    __Vtemp_hd2b6a71a__173[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7ac89e4a__0, __Vtemp_hd2b6a71a__173, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h7ac89e4a__0[1U] 
                                    >> 0xcU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_45))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11728: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11728, "");
    }
    __Vtemp_hd2b6a71a__174[0U] = 1U;
    __Vtemp_hd2b6a71a__174[1U] = 0U;
    __Vtemp_hd2b6a71a__174[2U] = 0U;
    __Vtemp_hd2b6a71a__174[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_haf999cd6__0, __Vtemp_hd2b6a71a__174, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_haf999cd6__0[1U] 
                                      >> 0xcU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_45)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__175[0U] = 1U;
    __Vtemp_hd2b6a71a__175[1U] = 0U;
    __Vtemp_hd2b6a71a__175[2U] = 0U;
    __Vtemp_hd2b6a71a__175[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h922d38b0__0, __Vtemp_hd2b6a71a__175, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h922d38b0__0[1U] 
                                    >> 0xcU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_45)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11751: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11751, "");
    }
    __Vtemp_hd2b6a71a__176[0U] = 1U;
    __Vtemp_hd2b6a71a__176[1U] = 0U;
    __Vtemp_hd2b6a71a__176[2U] = 0U;
    __Vtemp_hd2b6a71a__176[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h33ebeab4__0, __Vtemp_hd2b6a71a__176, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h33ebeab4__0[1U] 
                                      >> 0xdU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_46))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__177[0U] = 1U;
    __Vtemp_hd2b6a71a__177[1U] = 0U;
    __Vtemp_hd2b6a71a__177[2U] = 0U;
    __Vtemp_hd2b6a71a__177[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h89a5d318__0, __Vtemp_hd2b6a71a__177, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h89a5d318__0[1U] 
                                    >> 0xdU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_46))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11774: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11774, "");
    }
    __Vtemp_hd2b6a71a__178[0U] = 1U;
    __Vtemp_hd2b6a71a__178[1U] = 0U;
    __Vtemp_hd2b6a71a__178[2U] = 0U;
    __Vtemp_hd2b6a71a__178[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd060cb87__0, __Vtemp_hd2b6a71a__178, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hd060cb87__0[1U] 
                                      >> 0xdU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_46)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__179[0U] = 1U;
    __Vtemp_hd2b6a71a__179[1U] = 0U;
    __Vtemp_hd2b6a71a__179[2U] = 0U;
    __Vtemp_hd2b6a71a__179[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc4f288e4__0, __Vtemp_hd2b6a71a__179, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hc4f288e4__0[1U] 
                                    >> 0xdU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_46)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11797: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11797, "");
    }
    __Vtemp_hd2b6a71a__180[0U] = 1U;
    __Vtemp_hd2b6a71a__180[1U] = 0U;
    __Vtemp_hd2b6a71a__180[2U] = 0U;
    __Vtemp_hd2b6a71a__180[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hedb62d64__0, __Vtemp_hd2b6a71a__180, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hedb62d64__0[1U] 
                                      >> 0xeU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_47))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__181[0U] = 1U;
    __Vtemp_hd2b6a71a__181[1U] = 0U;
    __Vtemp_hd2b6a71a__181[2U] = 0U;
    __Vtemp_hd2b6a71a__181[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h21d784cd__0, __Vtemp_hd2b6a71a__181, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h21d784cd__0[1U] 
                                    >> 0xeU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_47))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11820: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11820, "");
    }
    __Vtemp_hd2b6a71a__182[0U] = 1U;
    __Vtemp_hd2b6a71a__182[1U] = 0U;
    __Vtemp_hd2b6a71a__182[2U] = 0U;
    __Vtemp_hd2b6a71a__182[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9de3b4eb__0, __Vtemp_hd2b6a71a__182, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h9de3b4eb__0[1U] 
                                      >> 0xeU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_47)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__183[0U] = 1U;
    __Vtemp_hd2b6a71a__183[1U] = 0U;
    __Vtemp_hd2b6a71a__183[2U] = 0U;
    __Vtemp_hd2b6a71a__183[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h3683eb49__0, __Vtemp_hd2b6a71a__183, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h3683eb49__0[1U] 
                                    >> 0xeU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_47)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11843: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11843, "");
    }
    __Vtemp_hd2b6a71a__184[0U] = 1U;
    __Vtemp_hd2b6a71a__184[1U] = 0U;
    __Vtemp_hd2b6a71a__184[2U] = 0U;
    __Vtemp_hd2b6a71a__184[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h63317651__0, __Vtemp_hd2b6a71a__184, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h63317651__0[1U] 
                                      >> 0xfU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_48))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__185[0U] = 1U;
    __Vtemp_hd2b6a71a__185[1U] = 0U;
    __Vtemp_hd2b6a71a__185[2U] = 0U;
    __Vtemp_hd2b6a71a__185[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h139f6c40__0, __Vtemp_hd2b6a71a__185, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h139f6c40__0[1U] 
                                    >> 0xfU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_48))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11866: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11866, "");
    }
    __Vtemp_hd2b6a71a__186[0U] = 1U;
    __Vtemp_hd2b6a71a__186[1U] = 0U;
    __Vtemp_hd2b6a71a__186[2U] = 0U;
    __Vtemp_hd2b6a71a__186[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h65bc1ea4__0, __Vtemp_hd2b6a71a__186, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h65bc1ea4__0[1U] 
                                      >> 0xfU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_48)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__187[0U] = 1U;
    __Vtemp_hd2b6a71a__187[1U] = 0U;
    __Vtemp_hd2b6a71a__187[2U] = 0U;
    __Vtemp_hd2b6a71a__187[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7f4174ab__0, __Vtemp_hd2b6a71a__187, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h7f4174ab__0[1U] 
                                    >> 0xfU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_48)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11889: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11889, "");
    }
    __Vtemp_hd2b6a71a__188[0U] = 1U;
    __Vtemp_hd2b6a71a__188[1U] = 0U;
    __Vtemp_hd2b6a71a__188[2U] = 0U;
    __Vtemp_hd2b6a71a__188[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h744764a9__0, __Vtemp_hd2b6a71a__188, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h744764a9__0[1U] 
                                      >> 0x10U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_49))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__189[0U] = 1U;
    __Vtemp_hd2b6a71a__189[1U] = 0U;
    __Vtemp_hd2b6a71a__189[2U] = 0U;
    __Vtemp_hd2b6a71a__189[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hbcd131d0__0, __Vtemp_hd2b6a71a__189, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hbcd131d0__0[1U] 
                                    >> 0x10U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_49))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11912: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11912, "");
    }
    __Vtemp_hd2b6a71a__190[0U] = 1U;
    __Vtemp_hd2b6a71a__190[1U] = 0U;
    __Vtemp_hd2b6a71a__190[2U] = 0U;
    __Vtemp_hd2b6a71a__190[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf433362e__0, __Vtemp_hd2b6a71a__190, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hf433362e__0[1U] 
                                      >> 0x10U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_49)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__191[0U] = 1U;
    __Vtemp_hd2b6a71a__191[1U] = 0U;
    __Vtemp_hd2b6a71a__191[2U] = 0U;
    __Vtemp_hd2b6a71a__191[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc694d32b__0, __Vtemp_hd2b6a71a__191, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hc694d32b__0[1U] 
                                    >> 0x10U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_49)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11935: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11935, "");
    }
    __Vtemp_hd2b6a71a__192[0U] = 1U;
    __Vtemp_hd2b6a71a__192[1U] = 0U;
    __Vtemp_hd2b6a71a__192[2U] = 0U;
    __Vtemp_hd2b6a71a__192[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcfe7a2f8__0, __Vtemp_hd2b6a71a__192, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hcfe7a2f8__0[1U] 
                                      >> 0x11U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_50))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__193[0U] = 1U;
    __Vtemp_hd2b6a71a__193[1U] = 0U;
    __Vtemp_hd2b6a71a__193[2U] = 0U;
    __Vtemp_hd2b6a71a__193[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h11a950ee__0, __Vtemp_hd2b6a71a__193, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h11a950ee__0[1U] 
                                    >> 0x11U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_50))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11958: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11958, "");
    }
    __Vtemp_hd2b6a71a__194[0U] = 1U;
    __Vtemp_hd2b6a71a__194[1U] = 0U;
    __Vtemp_hd2b6a71a__194[2U] = 0U;
    __Vtemp_hd2b6a71a__194[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h899d4c27__0, __Vtemp_hd2b6a71a__194, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h899d4c27__0[1U] 
                                      >> 0x11U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_50)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__195[0U] = 1U;
    __Vtemp_hd2b6a71a__195[1U] = 0U;
    __Vtemp_hd2b6a71a__195[2U] = 0U;
    __Vtemp_hd2b6a71a__195[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h5f2c2be3__0, __Vtemp_hd2b6a71a__195, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h5f2c2be3__0[1U] 
                                    >> 0x11U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_50)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:11981: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 11981, "");
    }
    __Vtemp_hd2b6a71a__196[0U] = 1U;
    __Vtemp_hd2b6a71a__196[1U] = 0U;
    __Vtemp_hd2b6a71a__196[2U] = 0U;
    __Vtemp_hd2b6a71a__196[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha9445a2f__0, __Vtemp_hd2b6a71a__196, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_ha9445a2f__0[1U] 
                                      >> 0x12U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_51))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__197[0U] = 1U;
    __Vtemp_hd2b6a71a__197[1U] = 0U;
    __Vtemp_hd2b6a71a__197[2U] = 0U;
    __Vtemp_hd2b6a71a__197[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7fc77022__0, __Vtemp_hd2b6a71a__197, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h7fc77022__0[1U] 
                                    >> 0x12U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_51))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12004: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12004, "");
    }
    __Vtemp_hd2b6a71a__198[0U] = 1U;
    __Vtemp_hd2b6a71a__198[1U] = 0U;
    __Vtemp_hd2b6a71a__198[2U] = 0U;
    __Vtemp_hd2b6a71a__198[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7e995496__0, __Vtemp_hd2b6a71a__198, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h7e995496__0[1U] 
                                      >> 0x12U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_51)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__199[0U] = 1U;
    __Vtemp_hd2b6a71a__199[1U] = 0U;
    __Vtemp_hd2b6a71a__199[2U] = 0U;
    __Vtemp_hd2b6a71a__199[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h34fe5747__0, __Vtemp_hd2b6a71a__199, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h34fe5747__0[1U] 
                                    >> 0x12U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_51)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12027: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12027, "");
    }
    __Vtemp_hd2b6a71a__200[0U] = 1U;
    __Vtemp_hd2b6a71a__200[1U] = 0U;
    __Vtemp_hd2b6a71a__200[2U] = 0U;
    __Vtemp_hd2b6a71a__200[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hac6d531c__0, __Vtemp_hd2b6a71a__200, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hac6d531c__0[1U] 
                                      >> 0x13U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_52))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__201[0U] = 1U;
    __Vtemp_hd2b6a71a__201[1U] = 0U;
    __Vtemp_hd2b6a71a__201[2U] = 0U;
    __Vtemp_hd2b6a71a__201[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h51da7b55__0, __Vtemp_hd2b6a71a__201, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h51da7b55__0[1U] 
                                    >> 0x13U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_52))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12050: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12050, "");
    }
    __Vtemp_hd2b6a71a__202[0U] = 1U;
    __Vtemp_hd2b6a71a__202[1U] = 0U;
    __Vtemp_hd2b6a71a__202[2U] = 0U;
    __Vtemp_hd2b6a71a__202[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9b1f3843__0, __Vtemp_hd2b6a71a__202, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h9b1f3843__0[1U] 
                                      >> 0x13U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_52)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__203[0U] = 1U;
    __Vtemp_hd2b6a71a__203[1U] = 0U;
    __Vtemp_hd2b6a71a__203[2U] = 0U;
    __Vtemp_hd2b6a71a__203[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h043adf7d__0, __Vtemp_hd2b6a71a__203, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h043adf7d__0[1U] 
                                    >> 0x13U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_52)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12073: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12073, "");
    }
    __Vtemp_hd2b6a71a__204[0U] = 1U;
    __Vtemp_hd2b6a71a__204[1U] = 0U;
    __Vtemp_hd2b6a71a__204[2U] = 0U;
    __Vtemp_hd2b6a71a__204[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc2007deb__0, __Vtemp_hd2b6a71a__204, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hc2007deb__0[1U] 
                                      >> 0x14U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_53))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__205[0U] = 1U;
    __Vtemp_hd2b6a71a__205[1U] = 0U;
    __Vtemp_hd2b6a71a__205[2U] = 0U;
    __Vtemp_hd2b6a71a__205[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc94bf0fb__0, __Vtemp_hd2b6a71a__205, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hc94bf0fb__0[1U] 
                                    >> 0x14U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_53))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12096: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12096, "");
    }
    __Vtemp_hd2b6a71a__206[0U] = 1U;
    __Vtemp_hd2b6a71a__206[1U] = 0U;
    __Vtemp_hd2b6a71a__206[2U] = 0U;
    __Vtemp_hd2b6a71a__206[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0da122de__0, __Vtemp_hd2b6a71a__206, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h0da122de__0[1U] 
                                      >> 0x14U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_53)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__207[0U] = 1U;
    __Vtemp_hd2b6a71a__207[1U] = 0U;
    __Vtemp_hd2b6a71a__207[2U] = 0U;
    __Vtemp_hd2b6a71a__207[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h13a5c6a2__0, __Vtemp_hd2b6a71a__207, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h13a5c6a2__0[1U] 
                                    >> 0x14U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_53)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12119: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12119, "");
    }
    __Vtemp_hd2b6a71a__208[0U] = 1U;
    __Vtemp_hd2b6a71a__208[1U] = 0U;
    __Vtemp_hd2b6a71a__208[2U] = 0U;
    __Vtemp_hd2b6a71a__208[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h125f1bfd__0, __Vtemp_hd2b6a71a__208, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h125f1bfd__0[1U] 
                                      >> 0x15U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_54))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__209[0U] = 1U;
    __Vtemp_hd2b6a71a__209[1U] = 0U;
    __Vtemp_hd2b6a71a__209[2U] = 0U;
    __Vtemp_hd2b6a71a__209[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8055cf40__0, __Vtemp_hd2b6a71a__209, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h8055cf40__0[1U] 
                                    >> 0x15U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_54))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12142: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12142, "");
    }
    __Vtemp_hd2b6a71a__210[0U] = 1U;
    __Vtemp_hd2b6a71a__210[1U] = 0U;
    __Vtemp_hd2b6a71a__210[2U] = 0U;
    __Vtemp_hd2b6a71a__210[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h13b64a69__0, __Vtemp_hd2b6a71a__210, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h13b64a69__0[1U] 
                                      >> 0x15U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_54)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__211[0U] = 1U;
    __Vtemp_hd2b6a71a__211[1U] = 0U;
    __Vtemp_hd2b6a71a__211[2U] = 0U;
    __Vtemp_hd2b6a71a__211[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h254a9471__0, __Vtemp_hd2b6a71a__211, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h254a9471__0[1U] 
                                    >> 0x15U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_54)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12165: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12165, "");
    }
    __Vtemp_hd2b6a71a__212[0U] = 1U;
    __Vtemp_hd2b6a71a__212[1U] = 0U;
    __Vtemp_hd2b6a71a__212[2U] = 0U;
    __Vtemp_hd2b6a71a__212[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h588177e1__0, __Vtemp_hd2b6a71a__212, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h588177e1__0[1U] 
                                      >> 0x16U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_55))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__213[0U] = 1U;
    __Vtemp_hd2b6a71a__213[1U] = 0U;
    __Vtemp_hd2b6a71a__213[2U] = 0U;
    __Vtemp_hd2b6a71a__213[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h57eb519b__0, __Vtemp_hd2b6a71a__213, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h57eb519b__0[1U] 
                                    >> 0x16U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_55))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12188: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12188, "");
    }
    __Vtemp_hd2b6a71a__214[0U] = 1U;
    __Vtemp_hd2b6a71a__214[1U] = 0U;
    __Vtemp_hd2b6a71a__214[2U] = 0U;
    __Vtemp_hd2b6a71a__214[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcf7646bf__0, __Vtemp_hd2b6a71a__214, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hcf7646bf__0[1U] 
                                      >> 0x16U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_55)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__215[0U] = 1U;
    __Vtemp_hd2b6a71a__215[1U] = 0U;
    __Vtemp_hd2b6a71a__215[2U] = 0U;
    __Vtemp_hd2b6a71a__215[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h2e57ff03__0, __Vtemp_hd2b6a71a__215, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h2e57ff03__0[1U] 
                                    >> 0x16U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_55)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12211: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12211, "");
    }
    __Vtemp_hd2b6a71a__216[0U] = 1U;
    __Vtemp_hd2b6a71a__216[1U] = 0U;
    __Vtemp_hd2b6a71a__216[2U] = 0U;
    __Vtemp_hd2b6a71a__216[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0dc5984b__0, __Vtemp_hd2b6a71a__216, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h0dc5984b__0[1U] 
                                      >> 0x17U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_56))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__217[0U] = 1U;
    __Vtemp_hd2b6a71a__217[1U] = 0U;
    __Vtemp_hd2b6a71a__217[2U] = 0U;
    __Vtemp_hd2b6a71a__217[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf82156da__0, __Vtemp_hd2b6a71a__217, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hf82156da__0[1U] 
                                    >> 0x17U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_56))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12234: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12234, "");
    }
    __Vtemp_hd2b6a71a__218[0U] = 1U;
    __Vtemp_hd2b6a71a__218[1U] = 0U;
    __Vtemp_hd2b6a71a__218[2U] = 0U;
    __Vtemp_hd2b6a71a__218[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf47ba2e5__0, __Vtemp_hd2b6a71a__218, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hf47ba2e5__0[1U] 
                                      >> 0x17U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_56)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__219[0U] = 1U;
    __Vtemp_hd2b6a71a__219[1U] = 0U;
    __Vtemp_hd2b6a71a__219[2U] = 0U;
    __Vtemp_hd2b6a71a__219[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h213bc835__0, __Vtemp_hd2b6a71a__219, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h213bc835__0[1U] 
                                    >> 0x17U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_56)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12257: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12257, "");
    }
    __Vtemp_hd2b6a71a__220[0U] = 1U;
    __Vtemp_hd2b6a71a__220[1U] = 0U;
    __Vtemp_hd2b6a71a__220[2U] = 0U;
    __Vtemp_hd2b6a71a__220[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h13d60eec__0, __Vtemp_hd2b6a71a__220, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h13d60eec__0[1U] 
                                      >> 0x18U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_57))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__221[0U] = 1U;
    __Vtemp_hd2b6a71a__221[1U] = 0U;
    __Vtemp_hd2b6a71a__221[2U] = 0U;
    __Vtemp_hd2b6a71a__221[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h32d9611e__0, __Vtemp_hd2b6a71a__221, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h32d9611e__0[1U] 
                                    >> 0x18U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_57))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12280: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12280, "");
    }
    __Vtemp_hd2b6a71a__222[0U] = 1U;
    __Vtemp_hd2b6a71a__222[1U] = 0U;
    __Vtemp_hd2b6a71a__222[2U] = 0U;
    __Vtemp_hd2b6a71a__222[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1dd8541b__0, __Vtemp_hd2b6a71a__222, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h1dd8541b__0[1U] 
                                      >> 0x18U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_57)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__223[0U] = 1U;
    __Vtemp_hd2b6a71a__223[1U] = 0U;
    __Vtemp_hd2b6a71a__223[2U] = 0U;
    __Vtemp_hd2b6a71a__223[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfb57bbec__0, __Vtemp_hd2b6a71a__223, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hfb57bbec__0[1U] 
                                    >> 0x18U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_57)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12303: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12303, "");
    }
    __Vtemp_hd2b6a71a__224[0U] = 1U;
    __Vtemp_hd2b6a71a__224[1U] = 0U;
    __Vtemp_hd2b6a71a__224[2U] = 0U;
    __Vtemp_hd2b6a71a__224[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfcd24766__0, __Vtemp_hd2b6a71a__224, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hfcd24766__0[1U] 
                                      >> 0x19U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_58))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__225[0U] = 1U;
    __Vtemp_hd2b6a71a__225[1U] = 0U;
    __Vtemp_hd2b6a71a__225[2U] = 0U;
    __Vtemp_hd2b6a71a__225[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_haabef2ba__0, __Vtemp_hd2b6a71a__225, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_haabef2ba__0[1U] 
                                    >> 0x19U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_58))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12326: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12326, "");
    }
    __Vtemp_hd2b6a71a__226[0U] = 1U;
    __Vtemp_hd2b6a71a__226[1U] = 0U;
    __Vtemp_hd2b6a71a__226[2U] = 0U;
    __Vtemp_hd2b6a71a__226[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_haef013c3__0, __Vtemp_hd2b6a71a__226, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_haef013c3__0[1U] 
                                      >> 0x19U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_58)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__227[0U] = 1U;
    __Vtemp_hd2b6a71a__227[1U] = 0U;
    __Vtemp_hd2b6a71a__227[2U] = 0U;
    __Vtemp_hd2b6a71a__227[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf432a186__0, __Vtemp_hd2b6a71a__227, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hf432a186__0[1U] 
                                    >> 0x19U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_58)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12349: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12349, "");
    }
    __Vtemp_hd2b6a71a__228[0U] = 1U;
    __Vtemp_hd2b6a71a__228[1U] = 0U;
    __Vtemp_hd2b6a71a__228[2U] = 0U;
    __Vtemp_hd2b6a71a__228[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hea91c3a7__0, __Vtemp_hd2b6a71a__228, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hea91c3a7__0[1U] 
                                      >> 0x1aU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_59))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__229[0U] = 1U;
    __Vtemp_hd2b6a71a__229[1U] = 0U;
    __Vtemp_hd2b6a71a__229[2U] = 0U;
    __Vtemp_hd2b6a71a__229[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_heca09fa6__0, __Vtemp_hd2b6a71a__229, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_heca09fa6__0[1U] 
                                    >> 0x1aU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_59))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12372: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12372, "");
    }
    __Vtemp_hd2b6a71a__230[0U] = 1U;
    __Vtemp_hd2b6a71a__230[1U] = 0U;
    __Vtemp_hd2b6a71a__230[2U] = 0U;
    __Vtemp_hd2b6a71a__230[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h5feb104e__0, __Vtemp_hd2b6a71a__230, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h5feb104e__0[1U] 
                                      >> 0x1aU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_59)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__231[0U] = 1U;
    __Vtemp_hd2b6a71a__231[1U] = 0U;
    __Vtemp_hd2b6a71a__231[2U] = 0U;
    __Vtemp_hd2b6a71a__231[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h56e8cca6__0, __Vtemp_hd2b6a71a__231, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h56e8cca6__0[1U] 
                                    >> 0x1aU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_59)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12395: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12395, "");
    }
    __Vtemp_hd2b6a71a__232[0U] = 1U;
    __Vtemp_hd2b6a71a__232[1U] = 0U;
    __Vtemp_hd2b6a71a__232[2U] = 0U;
    __Vtemp_hd2b6a71a__232[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h74ddc065__0, __Vtemp_hd2b6a71a__232, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h74ddc065__0[1U] 
                                      >> 0x1bU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_60))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__233[0U] = 1U;
    __Vtemp_hd2b6a71a__233[1U] = 0U;
    __Vtemp_hd2b6a71a__233[2U] = 0U;
    __Vtemp_hd2b6a71a__233[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd12b7770__0, __Vtemp_hd2b6a71a__233, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hd12b7770__0[1U] 
                                    >> 0x1bU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_60))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12418: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12418, "");
    }
    __Vtemp_hd2b6a71a__234[0U] = 1U;
    __Vtemp_hd2b6a71a__234[1U] = 0U;
    __Vtemp_hd2b6a71a__234[2U] = 0U;
    __Vtemp_hd2b6a71a__234[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h2b2ff6b3__0, __Vtemp_hd2b6a71a__234, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h2b2ff6b3__0[1U] 
                                      >> 0x1bU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_60)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__235[0U] = 1U;
    __Vtemp_hd2b6a71a__235[1U] = 0U;
    __Vtemp_hd2b6a71a__235[2U] = 0U;
    __Vtemp_hd2b6a71a__235[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h00143dc8__0, __Vtemp_hd2b6a71a__235, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h00143dc8__0[1U] 
                                    >> 0x1bU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_60)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12441: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12441, "");
    }
    __Vtemp_hd2b6a71a__236[0U] = 1U;
    __Vtemp_hd2b6a71a__236[1U] = 0U;
    __Vtemp_hd2b6a71a__236[2U] = 0U;
    __Vtemp_hd2b6a71a__236[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h3e612f79__0, __Vtemp_hd2b6a71a__236, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h3e612f79__0[1U] 
                                      >> 0x1cU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_61))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__237[0U] = 1U;
    __Vtemp_hd2b6a71a__237[1U] = 0U;
    __Vtemp_hd2b6a71a__237[2U] = 0U;
    __Vtemp_hd2b6a71a__237[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9a312a96__0, __Vtemp_hd2b6a71a__237, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h9a312a96__0[1U] 
                                    >> 0x1cU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_61))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12464: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12464, "");
    }
    __Vtemp_hd2b6a71a__238[0U] = 1U;
    __Vtemp_hd2b6a71a__238[1U] = 0U;
    __Vtemp_hd2b6a71a__238[2U] = 0U;
    __Vtemp_hd2b6a71a__238[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hda851399__0, __Vtemp_hd2b6a71a__238, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hda851399__0[1U] 
                                      >> 0x1cU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_61)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__239[0U] = 1U;
    __Vtemp_hd2b6a71a__239[1U] = 0U;
    __Vtemp_hd2b6a71a__239[2U] = 0U;
    __Vtemp_hd2b6a71a__239[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hb7ba120f__0, __Vtemp_hd2b6a71a__239, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hb7ba120f__0[1U] 
                                    >> 0x1cU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_61)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12487: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12487, "");
    }
    __Vtemp_hd2b6a71a__240[0U] = 1U;
    __Vtemp_hd2b6a71a__240[1U] = 0U;
    __Vtemp_hd2b6a71a__240[2U] = 0U;
    __Vtemp_hd2b6a71a__240[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_haecec5ef__0, __Vtemp_hd2b6a71a__240, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_haecec5ef__0[1U] 
                                      >> 0x1dU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_62))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__241[0U] = 1U;
    __Vtemp_hd2b6a71a__241[1U] = 0U;
    __Vtemp_hd2b6a71a__241[2U] = 0U;
    __Vtemp_hd2b6a71a__241[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h4313f093__0, __Vtemp_hd2b6a71a__241, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h4313f093__0[1U] 
                                    >> 0x1dU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_62))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12510: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12510, "");
    }
    __Vtemp_hd2b6a71a__242[0U] = 1U;
    __Vtemp_hd2b6a71a__242[1U] = 0U;
    __Vtemp_hd2b6a71a__242[2U] = 0U;
    __Vtemp_hd2b6a71a__242[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1f59abbe__0, __Vtemp_hd2b6a71a__242, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h1f59abbe__0[1U] 
                                      >> 0x1dU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_62)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__243[0U] = 1U;
    __Vtemp_hd2b6a71a__243[1U] = 0U;
    __Vtemp_hd2b6a71a__243[2U] = 0U;
    __Vtemp_hd2b6a71a__243[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h635255e2__0, __Vtemp_hd2b6a71a__243, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h635255e2__0[1U] 
                                    >> 0x1dU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_62)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12533: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12533, "");
    }
    __Vtemp_hd2b6a71a__244[0U] = 1U;
    __Vtemp_hd2b6a71a__244[1U] = 0U;
    __Vtemp_hd2b6a71a__244[2U] = 0U;
    __Vtemp_hd2b6a71a__244[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h2b16ebcd__0, __Vtemp_hd2b6a71a__244, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h2b16ebcd__0[1U] 
                                      >> 0x1eU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_63))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__245[0U] = 1U;
    __Vtemp_hd2b6a71a__245[1U] = 0U;
    __Vtemp_hd2b6a71a__245[2U] = 0U;
    __Vtemp_hd2b6a71a__245[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf8200915__0, __Vtemp_hd2b6a71a__245, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_hf8200915__0[1U] 
                                    >> 0x1eU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_63))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12556: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12556, "");
    }
    __Vtemp_hd2b6a71a__246[0U] = 1U;
    __Vtemp_hd2b6a71a__246[1U] = 0U;
    __Vtemp_hd2b6a71a__246[2U] = 0U;
    __Vtemp_hd2b6a71a__246[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_he12ff7fe__0, __Vtemp_hd2b6a71a__246, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_he12ff7fe__0[1U] 
                                      >> 0x1eU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_63)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__247[0U] = 1U;
    __Vtemp_hd2b6a71a__247[1U] = 0U;
    __Vtemp_hd2b6a71a__247[2U] = 0U;
    __Vtemp_hd2b6a71a__247[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h86ff5f3d__0, __Vtemp_hd2b6a71a__247, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h86ff5f3d__0[1U] 
                                    >> 0x1eU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_63)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12579: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12579, "");
    }
    __Vtemp_hd2b6a71a__248[0U] = 1U;
    __Vtemp_hd2b6a71a__248[1U] = 0U;
    __Vtemp_hd2b6a71a__248[2U] = 0U;
    __Vtemp_hd2b6a71a__248[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd3cf8f08__0, __Vtemp_hd2b6a71a__248, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_hd3cf8f08__0[1U] 
                                      >> 0x1fU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_64))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__249[0U] = 1U;
    __Vtemp_hd2b6a71a__249[1U] = 0U;
    __Vtemp_hd2b6a71a__249[2U] = 0U;
    __Vtemp_hd2b6a71a__249[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7247f592__0, __Vtemp_hd2b6a71a__249, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h7247f592__0[1U] 
                                    >> 0x1fU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_64))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12602: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12602, "");
    }
    __Vtemp_hd2b6a71a__250[0U] = 1U;
    __Vtemp_hd2b6a71a__250[1U] = 0U;
    __Vtemp_hd2b6a71a__250[2U] = 0U;
    __Vtemp_hd2b6a71a__250[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h3f1d0161__0, __Vtemp_hd2b6a71a__250, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h3f1d0161__0[1U] 
                                      >> 0x1fU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_64)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__251[0U] = 1U;
    __Vtemp_hd2b6a71a__251[1U] = 0U;
    __Vtemp_hd2b6a71a__251[2U] = 0U;
    __Vtemp_hd2b6a71a__251[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h4bb6f4aa__0, __Vtemp_hd2b6a71a__251, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h4bb6f4aa__0[1U] 
                                    >> 0x1fU) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_64)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12625: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12625, "");
    }
    __Vtemp_hd2b6a71a__252[0U] = 1U;
    __Vtemp_hd2b6a71a__252[1U] = 0U;
    __Vtemp_hd2b6a71a__252[2U] = 0U;
    __Vtemp_hd2b6a71a__252[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h85d5b92c__0, __Vtemp_hd2b6a71a__252, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (__Vtemp_h85d5b92c__0[2U] 
                                     & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_65))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__253[0U] = 1U;
    __Vtemp_hd2b6a71a__253[1U] = 0U;
    __Vtemp_hd2b6a71a__253[2U] = 0U;
    __Vtemp_hd2b6a71a__253[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h17160250__0, __Vtemp_hd2b6a71a__253, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ (__Vtemp_h17160250__0[2U] 
                                   & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_65))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12648: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12648, "");
    }
    __Vtemp_hd2b6a71a__254[0U] = 1U;
    __Vtemp_hd2b6a71a__254[1U] = 0U;
    __Vtemp_hd2b6a71a__254[2U] = 0U;
    __Vtemp_hd2b6a71a__254[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h77151b2a__0, __Vtemp_hd2b6a71a__254, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (__Vtemp_h77151b2a__0[2U] 
                                     & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_65)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__255[0U] = 1U;
    __Vtemp_hd2b6a71a__255[1U] = 0U;
    __Vtemp_hd2b6a71a__255[2U] = 0U;
    __Vtemp_hd2b6a71a__255[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h19e2a759__0, __Vtemp_hd2b6a71a__255, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ (__Vtemp_h19e2a759__0[2U] 
                                   & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_65)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12671: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12671, "");
    }
    __Vtemp_hd2b6a71a__256[0U] = 1U;
    __Vtemp_hd2b6a71a__256[1U] = 0U;
    __Vtemp_hd2b6a71a__256[2U] = 0U;
    __Vtemp_hd2b6a71a__256[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h84b645ac__0, __Vtemp_hd2b6a71a__256, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h84b645ac__0[2U] 
                                      >> 1U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                                 | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_66))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n");
    }
    __Vtemp_hd2b6a71a__257[0U] = 1U;
    __Vtemp_hd2b6a71a__257[1U] = 0U;
    __Vtemp_hd2b6a71a__257[2U] = 0U;
    __Vtemp_hd2b6a71a__257[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8be265bf__0, __Vtemp_hd2b6a71a__257, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__d_sel_shiftAmount));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h8be265bf__0[2U] 
                                    >> 1U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT____VdfgTmp_hfc354f15__0))) 
                               | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_66))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12694: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12694, "");
    }
    __Vtemp_hd2b6a71a__258[0U] = 1U;
    __Vtemp_hd2b6a71a__258[1U] = 0U;
    __Vtemp_hd2b6a71a__258[2U] = 0U;
    __Vtemp_hd2b6a71a__258[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h5c1e68ec__0, __Vtemp_hd2b6a71a__258, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((__Vtemp_h5c1e68ec__0[2U] 
                                      >> 1U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                                 | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_66)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n");
    }
    __Vtemp_hd2b6a71a__259[0U] = 1U;
    __Vtemp_hd2b6a71a__259[1U] = 0U;
    __Vtemp_hd2b6a71a__259[2U] = 0U;
    __Vtemp_hd2b6a71a__259[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h97800426__0, __Vtemp_hd2b6a71a__259, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    if (VL_UNLIKELY((1U & ((~ ((~ ((__Vtemp_h97800426__0[2U] 
                                    >> 1U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_66)))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: composer.v:12717: Assertion failed in %NComposerTop.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name());
        VL_STOP_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 12717, "");
    }
    vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__mem_tx_state 
        = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__mem_tx_state;
    vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__mem_tx_state 
        = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__mem_tx_state;
    vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__mem_tx_state 
        = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__mem_tx_state;
    if (VL_UNLIKELY((((0U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state)) 
                      & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT___T_1)) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"input fired\n");
    }
    if (VL_UNLIKELY(((((0U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state)) 
                       & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT___T_1)) 
                      & (0U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmdPipePipe_bits_3_cmdP_inst_rs1))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"input 1 data address %b\n",
                   34,vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__addr_data);
    }
    if (VL_UNLIKELY(((((0U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state)) 
                       & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT___T_1)) 
                      & (0U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmdPipePipe_bits_3_cmdP_inst_rs1))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"input 1 HNBT address %11#\n",
                   34,vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__addr_HNBT);
    }
    if (VL_UNLIKELY((((((0U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state)) 
                        & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT___T_1)) 
                       & (0U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmdPipePipe_bits_3_cmdP_inst_rs1))) 
                      & (1U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmdPipePipe_bits_3_cmdP_inst_rs1))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"input 2\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state)) 
                      & (1U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"read\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state)) 
                      & (1U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"input 1 data address %b\n",
                   34,vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__addr_HNBT);
    }
    if (VL_UNLIKELY(((((0U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state)) 
                       & (1U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state))) 
                      & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__access_readRes_valid_REG)) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"%b\n",128,vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__mem_rval_data.data());
    }
    if (VL_UNLIKELY(((((0U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state)) 
                       & (1U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state))) 
                      & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__access_readRes_valid_REG)) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"a%10# b%10# c%10# d%10#\n",
                   32,vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__a,
                   32,vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__b,
                   32,vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__c,
                   32,vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__d);
    }
    if (VL_UNLIKELY(((((0U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state)) 
                       & (1U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state))) 
                      & (2U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"calculate\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT___GEN_103) 
                       & (2U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state))) 
                      & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data_access_readReq_valid)) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"%b\n",128,vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__mem_rval_data.data());
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT___GEN_103) 
                      & (2U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"a%10# b%10# c%10# d%10#\n",
                   32,vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__a,
                   32,vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__b,
                   32,vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__c,
                   32,vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__d);
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT___GEN_103) 
                       & (2U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state))) 
                      & (3U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"store\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT___GEN_118) 
                       & (3U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state))) 
                      & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___T_9)) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"output sum - %10#\n",
                   32,vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__sum);
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT___GEN_118) 
                        & (3U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state))) 
                       & (4U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state))) 
                      & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data_access_readReq_valid)) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"%b\n",128,vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__mem_rval_data.data());
    }
    if (VL_UNLIKELY(((((3U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state)) 
                       & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT___GEN_118)) 
                      & (4U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"a%10# b%10# c%10# d%10#\n",
                   32,vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__a,
                   32,vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__b,
                   32,vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__c,
                   32,vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__d);
    }
    if (VL_UNLIKELY(((((3U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state)) 
                       & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT___GEN_118)) 
                      & (4U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"commit\n");
    }
    if (VL_UNLIKELY((((((3U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state)) 
                        & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT___GEN_118)) 
                       & (4U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state))) 
                      & (5U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"finish\n");
    }
    if (vlSelf->ComposerTop__DOT__tl2axi4__DOT__deq__DOT__ram_data_MPORT_en) {
        vlSelf->__Vdlyvset__ComposerTop__DOT__tl2axi4__DOT__deq__DOT__ram_last__v0 = 1U;
        vlSelf->__Vdlyvval__ComposerTop__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0[0U] 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[0U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0[1U] 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[1U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0[2U] 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[2U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0[3U] 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[3U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0[4U] 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[4U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0[5U] 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[5U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0[6U] 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[6U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0[7U] 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[7U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0[8U] 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[8U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0[9U] 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[9U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0[0xaU] 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[0xaU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0[0xbU] 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[0xbU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0[0xcU] 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[0xcU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0[0xdU] 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[0xdU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0[0xeU] 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[0xeU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0[0xfU] 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[0xfU];
        vlSelf->__Vdlyvset__ComposerTop__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0 = 1U;
        vlSelf->__Vdlyvval__ComposerTop__DOT__tl2axi4__DOT__deq__DOT__ram_strb__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_mask;
        vlSelf->__Vdlyvset__ComposerTop__DOT__tl2axi4__DOT__deq__DOT__ram_strb__v0 = 1U;
    }
    if (vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__deq__DOT__ram_resp__v0 = 1U;
        vlSelf->__Vdlyvval__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__deq__DOT__ram_data__v0 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__deq__DOT__ram_data_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__deq__DOT__ram_data__v0 = 1U;
        vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__deq__DOT__ram_last__v0 = 1U;
    }
    if (vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_w_deq__DOT__ram_data_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_w_deq__DOT__ram_last__v0 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_w_deq__DOT__ram_last_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_w_deq__DOT__ram_last__v0 = 1U;
        vlSelf->__Vdlyvval__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_w_deq__DOT__ram_data__v0 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_w_deq__DOT__ram_data_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_w_deq__DOT__ram_data__v0 = 1U;
    }
    if (vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__q_b_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__q_b_deq__DOT__ram_resp__v0 = 1U;
    }
    if (vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvset__ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_qos__v0 = 1U;
        vlSelf->__Vdlyvset__ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_lock__v0 = 1U;
        vlSelf->__Vdlyvset__ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_burst__v0 = 1U;
        vlSelf->__Vdlyvset__ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_prot__v0 = 1U;
        vlSelf->__Vdlyvset__ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_cache__v0 = 1U;
        vlSelf->__Vdlyvval__ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_size__v0 
            = vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_size_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_size__v0 = 1U;
        vlSelf->__Vdlyvval__ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_address;
        vlSelf->__Vdlyvset__ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr__v0 = 1U;
        vlSelf->__Vdlyvval__ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_len__v0 
            = (0xffU & (~ (0xffU & (((IData)(0x3fffU) 
                                     << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_size)) 
                                    >> 6U))));
        vlSelf->__Vdlyvset__ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_len__v0 = 1U;
        vlSelf->__Vdlyvval__ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id__v0 = 1U;
        vlSelf->__Vdlyvval__ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_wen__v0 
            = (1U & (~ ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_opcode) 
                        >> 2U)));
        vlSelf->__Vdlyvset__ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_wen__v0 = 1U;
    }
    if (vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__ram_burst__v0 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__ram_burst_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__ram_burst__v0 = 1U;
        vlSelf->__Vdlyvval__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__ram_addr__v0 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__ram_addr_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__ram_addr__v0 = 1U;
        vlSelf->__Vdlyvval__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__ram_size__v0 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__ram_size_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__ram_size__v0 = 1U;
        vlSelf->__Vdlyvval__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__ram_len__v0 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__ram_len_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__ram_len__v0 = 1U;
        vlSelf->__Vdlyvval__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__ram_echo_extra_id__v0 
            = (0x7fffU & ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4index_auto_in_aw_bits_id) 
                          >> 1U));
        vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__ram_echo_extra_id__v0 = 1U;
        vlSelf->__Vdlyvval__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__ram_id__v0 
            = (1U & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4index_auto_in_aw_bits_id));
        vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__ram_id__v0 = 1U;
    }
    if (vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__ram_burst__v0 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__ram_burst_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__ram_burst__v0 = 1U;
        vlSelf->__Vdlyvval__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__ram_addr__v0 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__ram_addr_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__ram_addr__v0 = 1U;
        vlSelf->__Vdlyvval__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__ram_size__v0 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__ram_size_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__ram_size__v0 = 1U;
        vlSelf->__Vdlyvval__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__ram_len__v0 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__ram_len_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__ram_len__v0 = 1U;
        vlSelf->__Vdlyvval__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__ram_echo_extra_id__v0 
            = (0x7fffU & ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4index_auto_in_ar_bits_id) 
                          >> 1U));
        vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__ram_echo_extra_id__v0 = 1U;
        vlSelf->__Vdlyvval__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__ram_id__v0 
            = (1U & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4index_auto_in_ar_bits_id));
        vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__ram_id__v0 = 1U;
    }
    if (vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__ram_rd_MPORT_en) {
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__ram_core_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__ram_core_id__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__enq_ptr_value;
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__ram_system_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__ram_system_id__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__ram_data__v0 
            = (0x7fffffffffffULL & vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__coreResps_rq__DOT__ram_data
               [vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__coreResps_rq__DOT__ram_data_io_deq_bits_MPORT_addr_pipe_0]);
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__ram_data__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__ram_data__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__ram_rd__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__coreResps_rq__DOT__ram_rd
            [vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__coreResps_rq__DOT__ram_rd_io_deq_bits_MPORT_addr_pipe_0];
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__ram_rd__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__ram_rd__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[0U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[1U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[1U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[2U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[2U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[3U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[3U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[4U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[4U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[5U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[5U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[6U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[6U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[7U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[7U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[8U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[8U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[9U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[9U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xaU] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[0xaU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xbU] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[0xbU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xcU] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[0xcU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xdU] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[0xdU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xeU] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[0xeU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xfU] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[0xfU];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 
            = (0x7fU & (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_echo_tl_state_source
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_echo_tl_state_source__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data__v0[0U] 
            = vlSelf->dma_wdata[0U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data__v0[1U] 
            = vlSelf->dma_wdata[1U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data__v0[2U] 
            = vlSelf->dma_wdata[2U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data__v0[3U] 
            = vlSelf->dma_wdata[3U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data__v0[4U] 
            = vlSelf->dma_wdata[4U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data__v0[5U] 
            = vlSelf->dma_wdata[5U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data__v0[6U] 
            = vlSelf->dma_wdata[6U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data__v0[7U] 
            = vlSelf->dma_wdata[7U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data__v0[8U] 
            = vlSelf->dma_wdata[8U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data__v0[9U] 
            = vlSelf->dma_wdata[9U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data__v0[0xaU] 
            = vlSelf->dma_wdata[0xaU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data__v0[0xbU] 
            = vlSelf->dma_wdata[0xbU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data__v0[0xcU] 
            = vlSelf->dma_wdata[0xcU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data__v0[0xdU] 
            = vlSelf->dma_wdata[0xdU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data__v0[0xeU] 
            = vlSelf->dma_wdata[0xeU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data__v0[0xfU] 
            = vlSelf->dma_wdata[0xfU];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_strb__v0 
            = vlSelf->dma_wstrb;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_strb__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_strb__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_last__v0 
            = vlSelf->dma_wlast;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_last__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_last__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[0U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[1U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[1U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[2U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[2U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[3U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[3U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[4U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[4U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[5U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[5U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[6U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[6U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[7U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[7U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[8U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[8U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[9U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[9U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xaU] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[0xaU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xbU] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[0xbU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xcU] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[0xcU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xdU] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[0xdU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xeU] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[0xeU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xfU] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_MPORT_data[0xfU];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_data__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_data__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 
            = (0x3fU & (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_resp
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 
            = (0x7fU & (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_echo_tl_state_source
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_tl_state_source__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_inst_rs1_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_payload1__v0 
            = (0xffffffffffffffULL & vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_rs1_io_deq_bits_MPORT_data);
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_payload1__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_payload1__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_core_id__v0 
            = (0xffU & (IData)((vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_rs1_io_deq_bits_MPORT_data 
                                >> 0x38U)));
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_core_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_core_id__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_inst_funct__v0 
            = (7U & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_inst_funct_io_deq_bits_MPORT_data));
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_inst_funct__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_inst_funct__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_payload2__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_rs2
            [vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_payload2__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_payload2__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_inst_rs2__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_inst_rs2
            [vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_inst_rs2__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_inst_rs2__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_inst_rs1__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_inst_rs1
            [vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_inst_rs1__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_inst_rs1__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_b_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 
            = (0x3fU & (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_resp
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_qos__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_qos_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_qos__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_qos__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_prot__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_prot_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_prot__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_prot__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_cache__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_cache_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_cache__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_cache__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_lock__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_lock_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_lock__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_lock__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_burst__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_burst_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_burst__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_burst__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_addr__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_addr_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_addr__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_addr__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_size__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_size_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_size__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_size__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_len__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_len_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_len__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_len__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_echo_tl_state_source_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_echo_tl_state_source__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_id_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_qos__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_qos_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_qos__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_qos__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_prot__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_prot_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_prot__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_prot__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_cache__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_cache_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_cache__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_cache__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_lock__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_lock_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_lock__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_lock__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_burst__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_burst_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_burst__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_burst__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_addr__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_addr_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_addr__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_addr__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_size__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_size_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_size__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_size__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_len__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_len_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_len__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_len__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_echo_tl_state_source_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_echo_tl_state_source__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_id_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_last__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_last_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_last__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_last__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data__v0[0U] 
            = (((1U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__deq_ptr_value][0U]
                 : Vcomposer__ConstPool__CONST_h93e1b771_0[0U]) 
               | ((2U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                   ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data
                  [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__deq_ptr_value][0U]
                   : Vcomposer__ConstPool__CONST_h93e1b771_0[0U]));
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data__v0[1U] 
            = (((1U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__deq_ptr_value][1U]
                 : Vcomposer__ConstPool__CONST_h93e1b771_0[1U]) 
               | ((2U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                   ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data
                  [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__deq_ptr_value][1U]
                   : Vcomposer__ConstPool__CONST_h93e1b771_0[1U]));
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data__v0[2U] 
            = (((1U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__deq_ptr_value][2U]
                 : Vcomposer__ConstPool__CONST_h93e1b771_0[2U]) 
               | ((2U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                   ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data
                  [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__deq_ptr_value][2U]
                   : Vcomposer__ConstPool__CONST_h93e1b771_0[2U]));
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data__v0[3U] 
            = (((1U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__deq_ptr_value][3U]
                 : Vcomposer__ConstPool__CONST_h93e1b771_0[3U]) 
               | ((2U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                   ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data
                  [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__deq_ptr_value][3U]
                   : Vcomposer__ConstPool__CONST_h93e1b771_0[3U]));
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data__v0[4U] 
            = (((1U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__deq_ptr_value][4U]
                 : Vcomposer__ConstPool__CONST_h93e1b771_0[4U]) 
               | ((2U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                   ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data
                  [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__deq_ptr_value][4U]
                   : Vcomposer__ConstPool__CONST_h93e1b771_0[4U]));
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data__v0[5U] 
            = (((1U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__deq_ptr_value][5U]
                 : Vcomposer__ConstPool__CONST_h93e1b771_0[5U]) 
               | ((2U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                   ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data
                  [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__deq_ptr_value][5U]
                   : Vcomposer__ConstPool__CONST_h93e1b771_0[5U]));
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data__v0[6U] 
            = (((1U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__deq_ptr_value][6U]
                 : Vcomposer__ConstPool__CONST_h93e1b771_0[6U]) 
               | ((2U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                   ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data
                  [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__deq_ptr_value][6U]
                   : Vcomposer__ConstPool__CONST_h93e1b771_0[6U]));
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data__v0[7U] 
            = (((1U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__deq_ptr_value][7U]
                 : Vcomposer__ConstPool__CONST_h93e1b771_0[7U]) 
               | ((2U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                   ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data
                  [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__deq_ptr_value][7U]
                   : Vcomposer__ConstPool__CONST_h93e1b771_0[7U]));
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data__v0[8U] 
            = (((1U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__deq_ptr_value][8U]
                 : Vcomposer__ConstPool__CONST_h93e1b771_0[8U]) 
               | ((2U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                   ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data
                  [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__deq_ptr_value][8U]
                   : Vcomposer__ConstPool__CONST_h93e1b771_0[8U]));
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data__v0[9U] 
            = (((1U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__deq_ptr_value][9U]
                 : Vcomposer__ConstPool__CONST_h93e1b771_0[9U]) 
               | ((2U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                   ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data
                  [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__deq_ptr_value][9U]
                   : Vcomposer__ConstPool__CONST_h93e1b771_0[9U]));
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data__v0[0xaU] 
            = (((1U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__deq_ptr_value][0xaU]
                 : Vcomposer__ConstPool__CONST_h93e1b771_0[0xaU]) 
               | ((2U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                   ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data
                  [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__deq_ptr_value][0xaU]
                   : Vcomposer__ConstPool__CONST_h93e1b771_0[0xaU]));
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data__v0[0xbU] 
            = (((1U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__deq_ptr_value][0xbU]
                 : Vcomposer__ConstPool__CONST_h93e1b771_0[0xbU]) 
               | ((2U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                   ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data
                  [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__deq_ptr_value][0xbU]
                   : Vcomposer__ConstPool__CONST_h93e1b771_0[0xbU]));
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data__v0[0xcU] 
            = (((1U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__deq_ptr_value][0xcU]
                 : Vcomposer__ConstPool__CONST_h93e1b771_0[0xcU]) 
               | ((2U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                   ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data
                  [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__deq_ptr_value][0xcU]
                   : Vcomposer__ConstPool__CONST_h93e1b771_0[0xcU]));
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data__v0[0xdU] 
            = (((1U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__deq_ptr_value][0xdU]
                 : Vcomposer__ConstPool__CONST_h93e1b771_0[0xdU]) 
               | ((2U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                   ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data
                  [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__deq_ptr_value][0xdU]
                   : Vcomposer__ConstPool__CONST_h93e1b771_0[0xdU]));
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data__v0[0xeU] 
            = (((1U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__deq_ptr_value][0xeU]
                 : Vcomposer__ConstPool__CONST_h93e1b771_0[0xeU]) 
               | ((2U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                   ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data
                  [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__deq_ptr_value][0xeU]
                   : Vcomposer__ConstPool__CONST_h93e1b771_0[0xeU]));
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data__v0[0xfU] 
            = (((1U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__deq_ptr_value][0xfU]
                 : Vcomposer__ConstPool__CONST_h93e1b771_0[0xfU]) 
               | ((2U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                   ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data
                  [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__deq_ptr_value][0xfU]
                   : Vcomposer__ConstPool__CONST_h93e1b771_0[0xfU]));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_strb__v0 
            = (((1U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_strb
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__deq_ptr_value]
                 : 0ULL) | ((2U & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits))
                             ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_strb
                            [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__deq_ptr_value]
                             : 0ULL));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_strb__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_strb__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_data_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_data__v0[0U] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__deq_ptr_value][0U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_data__v0[1U] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__deq_ptr_value][1U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_data__v0[2U] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__deq_ptr_value][2U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_data__v0[3U] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__deq_ptr_value][3U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_data__v0[4U] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__deq_ptr_value][4U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_data__v0[5U] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__deq_ptr_value][5U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_data__v0[6U] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__deq_ptr_value][6U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_data__v0[7U] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__deq_ptr_value][7U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_data__v0[8U] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__deq_ptr_value][8U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_data__v0[9U] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__deq_ptr_value][9U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_data__v0[0xaU] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__deq_ptr_value][0xaU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_data__v0[0xbU] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__deq_ptr_value][0xbU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_data__v0[0xcU] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__deq_ptr_value][0xcU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_data__v0[0xdU] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__deq_ptr_value][0xdU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_data__v0[0xeU] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__deq_ptr_value][0xeU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_data__v0[0xfU] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__deq_ptr_value][0xfU];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_data__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_data__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_strb__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_strb
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_strb__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_strb__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_last__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_last
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_last__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_last__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data__v0[0U] 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__deq_ptr_value][0U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data__v0[1U] 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__deq_ptr_value][1U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data__v0[2U] 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__deq_ptr_value][2U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data__v0[3U] 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__deq_ptr_value][3U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data__v0[4U] 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__deq_ptr_value][4U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data__v0[5U] 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__deq_ptr_value][5U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data__v0[6U] 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__deq_ptr_value][6U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data__v0[7U] 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__deq_ptr_value][7U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data__v0[8U] 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__deq_ptr_value][8U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data__v0[9U] 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__deq_ptr_value][9U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data__v0[0xaU] 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__deq_ptr_value][0xaU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data__v0[0xbU] 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__deq_ptr_value][0xbU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data__v0[0xcU] 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__deq_ptr_value][0xcU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data__v0[0xdU] 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__deq_ptr_value][0xdU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data__v0[0xeU] 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__deq_ptr_value][0xeU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data__v0[0xfU] 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__deq_ptr_value][0xfU];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_strb__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_strb
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_strb__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_strb__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_last__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_last
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_last__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_last__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data__v0[0U] 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__deq_ptr_value][0U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data__v0[1U] 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__deq_ptr_value][1U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data__v0[2U] 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__deq_ptr_value][2U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data__v0[3U] 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__deq_ptr_value][3U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data__v0[4U] 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__deq_ptr_value][4U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data__v0[5U] 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__deq_ptr_value][5U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data__v0[6U] 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__deq_ptr_value][6U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data__v0[7U] 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__deq_ptr_value][7U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data__v0[8U] 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__deq_ptr_value][8U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data__v0[9U] 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__deq_ptr_value][9U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data__v0[0xaU] 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__deq_ptr_value][0xaU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data__v0[0xbU] 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__deq_ptr_value][0xbU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data__v0[0xcU] 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__deq_ptr_value][0xcU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data__v0[0xdU] 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__deq_ptr_value][0xdU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data__v0[0xeU] 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__deq_ptr_value][0xeU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data__v0[0xfU] 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__deq_ptr_value][0xfU];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_strb__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__ram_strb
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_strb__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_strb__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_last__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__ram_last
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_last__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_last__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_inst_funct_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_rs2__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__ram_rs2
            [vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_rs2__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_rs2__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_inst_rs2__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__ram_inst_rs2
            [vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_inst_rs2__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_inst_rs2__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_inst_rs1__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__ram_inst_rs1
            [vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_inst_rs1__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_inst_rs1__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_rs1__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__ram_rs1
            [vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_rs1__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_rs1__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_inst_funct__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__ram_inst_funct
            [vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_inst_funct__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_inst_funct__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_inst_opcode__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__ram_inst_opcode
            [vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_inst_opcode__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_inst_opcode__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_inst_rs1_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_payload2__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_payload2
            [vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_payload2__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_payload2__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_payload1__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_payload1
            [vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_payload1__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_payload1__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_core_id__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_core_id
            [vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_core_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_core_id__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_inst_rs2__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_inst_rs2
            [vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_inst_rs2__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_inst_rs2__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_inst_rs1__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_inst_rs1
            [vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_inst_rs1__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_inst_rs1__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_inst_funct__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_inst_funct
            [vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_inst_funct__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_inst_funct__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_id__v0 
            = vlSelf->dma_arid;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_qos__v0 
            = vlSelf->dma_arqos;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_qos__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_qos__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_prot__v0 
            = vlSelf->dma_arprot;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_prot__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_prot__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_cache__v0 
            = vlSelf->dma_arcache;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_cache__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_cache__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_addr__v0 
            = vlSelf->dma_araddr;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_addr__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_addr__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_lock__v0 
            = vlSelf->dma_arlock;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_lock__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_lock__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_burst__v0 
            = vlSelf->dma_arburst;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_burst__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_burst__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_size__v0 
            = vlSelf->dma_arsize;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_size__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_size__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_len__v0 
            = vlSelf->dma_arlen;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_len__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_len__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_b_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id
            [vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_b_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_tl_state_source
            [vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_b_deq__DOT__ram_echo_tl_state_source__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_b_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_qos__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_qos
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_qos__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_qos__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_prot__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_prot
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_prot__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_prot__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_cache__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_cache
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_cache__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_cache__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_lock__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_lock
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_lock__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_lock__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_addr__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_addr
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_addr__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_addr__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_burst__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_burst
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_burst__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_burst__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_size__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_size
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_size__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_size__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_len__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_len
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_len__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_len__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_echo_tl_state_source
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_echo_tl_state_source__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_id
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4xbar__DOT___T_18) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_echo_tl_state_source__v0 
            = ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__muxState___05F0)
                ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_echo_tl_state_source
               [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__deq_ptr_value]
                : 0U);
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_echo_tl_state_source__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_qos__v0 
            = (((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__muxState___05F0)
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_qos
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__deq_ptr_value]
                 : 0U) | ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__muxState___05F1)
                           ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_qos
                          [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__deq_ptr_value]
                           : 0U));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_qos__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_qos__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_prot__v0 
            = (((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__muxState___05F0)
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_prot
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__deq_ptr_value]
                 : 0U) | ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__muxState___05F1)
                           ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_prot
                          [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__deq_ptr_value]
                           : 0U));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_prot__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_prot__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_cache__v0 
            = (((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__muxState___05F0)
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_cache
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__deq_ptr_value]
                 : 0U) | ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__muxState___05F1)
                           ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_cache
                          [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__deq_ptr_value]
                           : 0U));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_cache__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_cache__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_lock__v0 
            = (((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__muxState___05F0) 
                & vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_lock
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__deq_ptr_value]) 
               | ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__muxState___05F1) 
                  & vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_lock
                  [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__deq_ptr_value]));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_lock__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_lock__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_addr__v0 
            = (((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__muxState___05F0)
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_addr
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__deq_ptr_value]
                 : 0ULL) | ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__muxState___05F1)
                             ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_addr
                            [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__deq_ptr_value]
                             : 0ULL));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_addr__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_addr__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_burst__v0 
            = (((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__muxState___05F0)
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_burst
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__deq_ptr_value]
                 : 0U) | ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__muxState___05F1)
                           ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_burst
                          [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__deq_ptr_value]
                           : 0U));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_burst__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_burst__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_size__v0 
            = (((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__muxState___05F0)
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_size
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__deq_ptr_value]
                 : 0U) | ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__muxState___05F1)
                           ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_size
                          [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__deq_ptr_value]
                           : 0U));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_size__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_size__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_len__v0 
            = (((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__muxState___05F0)
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_len
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__deq_ptr_value]
                 : 0U) | ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__muxState___05F1)
                           ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_len
                          [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__deq_ptr_value]
                           : 0U));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_len__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_len__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_id__v0 
            = (((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__muxState___05F0)
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_id
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__deq_ptr_value]
                 : 0U) | ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__muxState___05F1)
                           ? (0x80U | vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_id
                              [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__deq_ptr_value])
                           : 0U));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0 
            = vlSelf->M00_AXI_bresp;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__ram_resp
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__ram_echo_tl_state_source
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_echo_tl_state_source__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 
            = ((vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__ram_echo_extra_id
                [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value] 
                << 6U) | vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__ram_id
               [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value]);
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_echo_extra_id__v0 
            = (3U & ((IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_id_io_deq_bits_MPORT_data) 
                     >> 6U));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_echo_extra_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_echo_extra_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_qos__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_qos
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_qos__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_qos__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_prot__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_prot
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_prot__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_prot__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_cache__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_cache
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_cache__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_cache__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_lock__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_lock
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_lock__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_lock__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_addr__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_addr
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_addr__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_addr__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_burst__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_burst
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_burst__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_burst__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_size__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_size
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_size__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_size__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_len__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_len
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_len__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_len__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_echo_tl_state_source
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_echo_tl_state_source__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_id__v0 
            = (0x3fU & (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__ram_id_io_deq_bits_MPORT_data));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_echo_extra_id__v0 
            = (3U & ((IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_id_io_deq_bits_MPORT_data) 
                     >> 6U));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_echo_extra_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_echo_extra_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_qos__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_qos
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_qos__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_qos__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_prot__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_prot
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_prot__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_prot__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_cache__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_cache
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_cache__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_cache__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_lock__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_lock
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_lock__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_lock__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_addr__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_addr
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_addr__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_addr__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_burst__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_burst
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_burst__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_burst__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_size__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_size
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_size__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_size__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_len__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_len
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_len__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_len__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_echo_tl_state_source
            [vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_echo_tl_state_source__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_id__v0 
            = (0x3fU & (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_id_io_deq_bits_MPORT_data));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0U] 
            = vlSelf->M00_AXI_rdata[0U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[1U] 
            = vlSelf->M00_AXI_rdata[1U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[2U] 
            = vlSelf->M00_AXI_rdata[2U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[3U] 
            = vlSelf->M00_AXI_rdata[3U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[4U] 
            = vlSelf->M00_AXI_rdata[4U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[5U] 
            = vlSelf->M00_AXI_rdata[5U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[6U] 
            = vlSelf->M00_AXI_rdata[6U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[7U] 
            = vlSelf->M00_AXI_rdata[7U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[8U] 
            = vlSelf->M00_AXI_rdata[8U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[9U] 
            = vlSelf->M00_AXI_rdata[9U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xaU] 
            = vlSelf->M00_AXI_rdata[0xaU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xbU] 
            = vlSelf->M00_AXI_rdata[0xbU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xcU] 
            = vlSelf->M00_AXI_rdata[0xcU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xdU] 
            = vlSelf->M00_AXI_rdata[0xdU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xeU] 
            = vlSelf->M00_AXI_rdata[0xeU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xfU] 
            = vlSelf->M00_AXI_rdata[0xfU];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_data__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_data__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 
            = vlSelf->M00_AXI_rresp;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 
            = vlSelf->M00_AXI_rlast;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf_6__DOT__x1_w_deq__DOT__ram_data_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_6__DOT__x1_w_deq__DOT__ram_last__v0 
            = vlSelf->S00_AXI_wlast;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__x1_w_deq__DOT__ram_last__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_6__DOT__x1_w_deq__DOT__ram_last__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_6__DOT__x1_w_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_6__DOT__x1_w_deq__DOT__ram_data__v0 
            = vlSelf->S00_AXI_wdata;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__x1_w_deq__DOT__ram_data__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_6__DOT__x1_w_deq__DOT__ram_data__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_6__DOT__x1_w_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__ram_burst__v0 
            = vlSelf->S00_AXI_arburst;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__ram_burst__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__ram_burst__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__ram_addr__v0 
            = vlSelf->S00_AXI_araddr;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__ram_addr__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__ram_addr__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__ram_size__v0 
            = vlSelf->S00_AXI_arsize;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__ram_size__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__ram_size__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__ram_len__v0 
            = vlSelf->S00_AXI_arlen;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__ram_len__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__ram_len__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__ram_id__v0 
            = vlSelf->S00_AXI_arid;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__ram_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_id__v0 
            = vlSelf->dma_awid;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_qos__v0 
            = vlSelf->dma_awqos;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_qos__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_qos__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_prot__v0 
            = vlSelf->dma_awprot;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_prot__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_prot__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_cache__v0 
            = vlSelf->dma_awcache;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_cache__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_cache__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_addr__v0 
            = vlSelf->dma_awaddr;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_addr__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_addr__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_lock__v0 
            = vlSelf->dma_awlock;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_lock__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_lock__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_burst__v0 
            = vlSelf->dma_awburst;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_burst__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_burst__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_size__v0 
            = vlSelf->dma_awsize;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_size__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_size__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_len__v0 
            = vlSelf->dma_awlen;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_len__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_len__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT__ram_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT__ram__v0 
            = vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT__ram_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT__ram__v0 
            = vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_echo_tl_state_source
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_echo_tl_state_source__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_resp
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0U] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][0U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[1U] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][1U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[2U] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][2U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[3U] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][3U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[4U] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][4U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[5U] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][5U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[6U] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][6U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[7U] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][7U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[8U] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][8U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[9U] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][9U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xaU] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][0xaU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xbU] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][0xbU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xcU] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][0xcU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xdU] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][0xdU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xeU] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][0xeU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xfU] 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][0xfU];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_data__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_data__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_last
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 
            = ((vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_echo_extra_id
                [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value] 
                << 6U) | vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_id
               [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value]);
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][0U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[1U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][1U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[2U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][2U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[3U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][3U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[4U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][4U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[5U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][5U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[6U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][6U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[7U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][7U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[8U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][8U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[9U] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][9U];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xaU] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][0xaU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xbU] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][0xbU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xcU] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][0xcU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xdU] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][0xdU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xeU] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][0xeU];
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_data__v0[0xfU] 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value][0xfU];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_data__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_data__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id
            [vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last
            [vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_echo_tl_state_source
            [vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_echo_tl_state_source__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_qos__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_qos
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_qos__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_qos__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_prot__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_prot
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_prot__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_prot__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_cache__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_cache
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_cache__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_cache__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_lock__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_lock
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_lock__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_lock__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_addr__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_addr
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_addr__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_addr__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_burst__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_burst
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_burst__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_burst__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_size__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_size
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_size__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_size__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_len__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_len
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_len__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_len__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_echo_tl_state_source
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_echo_tl_state_source__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_id
            [vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_echo_tl_state_source__v0 
            = ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_muxState_0)
                ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_echo_tl_state_source
               [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__deq_ptr_value]
                : 0U);
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_echo_tl_state_source__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_qos__v0 
            = (((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_muxState_0)
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_qos
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__deq_ptr_value]
                 : 0U) | ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_muxState_1)
                           ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_qos
                          [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__deq_ptr_value]
                           : 0U));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_qos__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_qos__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_prot__v0 
            = (((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_muxState_0)
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_prot
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__deq_ptr_value]
                 : 0U) | ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_muxState_1)
                           ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_prot
                          [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__deq_ptr_value]
                           : 0U));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_prot__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_prot__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_cache__v0 
            = (((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_muxState_0)
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_cache
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__deq_ptr_value]
                 : 0U) | ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_muxState_1)
                           ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_cache
                          [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__deq_ptr_value]
                           : 0U));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_cache__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_cache__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_lock__v0 
            = (((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_muxState_0) 
                & vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_lock
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__deq_ptr_value]) 
               | ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_muxState_1) 
                  & vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_lock
                  [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__deq_ptr_value]));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_lock__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_lock__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_addr__v0 
            = (((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_muxState_0)
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_addr
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__deq_ptr_value]
                 : 0ULL) | ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_muxState_1)
                             ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_addr
                            [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__deq_ptr_value]
                             : 0ULL));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_addr__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_addr__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_burst__v0 
            = (((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_muxState_0)
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_burst
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__deq_ptr_value]
                 : 0U) | ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_muxState_1)
                           ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_burst
                          [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__deq_ptr_value]
                           : 0U));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_burst__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_burst__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_size__v0 
            = (((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_muxState_0)
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_size
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__deq_ptr_value]
                 : 0U) | ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_muxState_1)
                           ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_size
                          [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__deq_ptr_value]
                           : 0U));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_size__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_size__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_len__v0 
            = (((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_muxState_0)
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_len
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__deq_ptr_value]
                 : 0U) | ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_muxState_1)
                           ? vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_len
                          [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__deq_ptr_value]
                           : 0U));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_len__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_len__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_id__v0 
            = (((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_muxState_0)
                 ? vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_id
                [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__deq_ptr_value]
                 : 0U) | ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_muxState_1)
                           ? (0x80U | vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_id
                              [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__deq_ptr_value])
                           : 0U));
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_id_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_qos__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_qos
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_qos__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_qos__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_prot__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_prot
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_prot__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_prot__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_cache__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_cache
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_cache__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_cache__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_addr__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_addr
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_addr__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_addr__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_lock__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_lock
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_lock__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_lock__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_burst__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_burst
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_burst__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_burst__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_size__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_size
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_size__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_size__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_len__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_len
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_len__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_len__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_id_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_qos__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_qos
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_qos__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_qos__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_prot__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_prot
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_prot__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_prot__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_cache__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_cache
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_cache__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_cache__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_addr__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_addr
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_addr__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_addr__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_lock__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_lock
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_lock__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_lock__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_burst__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_burst
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_burst__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_burst__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_size__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_size
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_size__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_size__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_len__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_len
            [vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_len__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_len__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__ram_burst__v0 
            = vlSelf->S00_AXI_awburst;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__ram_burst__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__ram_burst__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__ram_addr__v0 
            = vlSelf->S00_AXI_awaddr;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__ram_addr__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__ram_addr__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__ram_size__v0 
            = vlSelf->S00_AXI_awsize;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__ram_size__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__ram_size__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__ram_len__v0 
            = vlSelf->S00_AXI_awlen;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__ram_len__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__ram_len__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__ram_id__v0 
            = vlSelf->S00_AXI_awid;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__ram_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_6__DOT__x1_aw_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_last_io_deq_bits_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_6__DOT__x1_w_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_6__DOT__x1_w_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value = 0U;
    } else {
        if (vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__ram_data_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_b_deq__DOT__ram_id_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__ram_data_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_w_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__ram_id_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_b_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_w_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__ram_rd_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__respQ__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_inst_rs1_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__ram_inst_funct_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__ram_data_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__ram_id_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__ram_id_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_2__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__ram_inst_funct_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__ram_inst_rs1_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__systemSoftwareResps_ComposerSyst__VhshvqS2wesD5p01CLx1cV1jPK3cw6nOAOwDTiOUFgpB__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_data_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_id_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_id_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_data_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4xbar__DOT___T_18) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_ar_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__ram_id_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_aw_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_b_deq__DOT__ram_id_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_r_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__deq__DOT___do_deq_T) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_b_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmdRouter__DOT__cmd__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_b_deq__DOT__ram_id_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__ram_id_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_ar_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_id_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_ar_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT__ram_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__ram_id_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__ram_id_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__ram_id_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_ar_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__ram_id_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_4__DOT__x1_aw_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_b_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_ar_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__x1_aw_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__ram_id_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_6__DOT__x1_ar_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__ram_id_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_r_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_6__DOT__x1_w_deq__DOT__ram_data_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_6__DOT__x1_w_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_6__DOT__x1_w_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_6__DOT__x1_w_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_6__DOT__x1_w_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_6__DOT__x1_w_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__do_deq) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__deq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__ram_id_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_aw_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_id_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_aw_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__ram_id_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value)));
        }
        if (vlSelf->ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__ram_id_MPORT_en) {
            vlSelf->__Vdly__ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->ComposerTop__DOT__axi4buf_1__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value)));
        }
    }
    if (vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT___T_46) {
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__coreResps_rq__DOT__ram_rd__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__coreResps_rq__DOT__ram_rd__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__coreResps_rq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__coreResps_rq__DOT__ram_data__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__coreResps_rq__DOT__ram_data__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__coreResps_rq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__ram_inst_funct_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__ram_inst_rs2__v0 
            = (0x1fU & (vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_to_rocc__DOT__bitsBuffer_0 
                        >> 0x14U));
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__ram_inst_rs2__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__ram_inst_rs2__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__ram_inst_opcode__v0 
            = (0x7fU & vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_to_rocc__DOT__bitsBuffer_0);
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__ram_inst_opcode__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__ram_inst_opcode__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__ram_inst_rs1__v0 
            = (0x1fU & (vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_to_rocc__DOT__bitsBuffer_0 
                        >> 0xfU));
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__ram_inst_rs1__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__ram_inst_rs1__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__ram_inst_funct__v0 
            = (vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_to_rocc__DOT__bitsBuffer_0 
               >> 0x19U);
        vlSelf->__Vdlyvset__ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__ram_inst_funct__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__ram_inst_funct__v0 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__cmd__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_127__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_127__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_127__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_127__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_127__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_127__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_127__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_127__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_127__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_127__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_127__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_127__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_127__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_127__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_126__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_126__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_126__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_126__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_126__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_126__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_126__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_126__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_126__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_126__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_126__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_126__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_126__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_126__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_63__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_63__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_63__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_63__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_63__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_63__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_63__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_63__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_63__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_63__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_63__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_63__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_63__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_63__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_62__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_62__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_62__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_62__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_62__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_62__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_62__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_62__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_62__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_62__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_62__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_62__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_62__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_62__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_125__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_125__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_125__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_125__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_125__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_125__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_125__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_125__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_125__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_125__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_125__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_125__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_125__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_125__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_124__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_124__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_124__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_124__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_124__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_124__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_124__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_124__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_124__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_124__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_124__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_124__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_124__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_124__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_123__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_123__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_123__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_123__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_123__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_123__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_123__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_123__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_123__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_123__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_123__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_123__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_123__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_123__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_122__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_122__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_122__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_122__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_122__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_122__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_122__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_122__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_122__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_122__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_122__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_122__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_122__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_122__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_121__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_121__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_121__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_121__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_121__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_121__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_121__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_121__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_121__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_121__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_121__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_121__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_121__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_121__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_120__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_120__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_120__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_120__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_120__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_120__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_120__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_120__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_120__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_120__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_120__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_120__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_120__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_120__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_119__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_119__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_119__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_119__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_119__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_119__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_119__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_119__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_119__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_119__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_119__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_119__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_119__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_119__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_61__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_61__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_61__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_61__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_61__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_61__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_61__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_61__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_61__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_61__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_61__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_61__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_61__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_61__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_60__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_60__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_60__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_60__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_60__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_60__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_60__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_60__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_60__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_60__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_60__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_60__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_60__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_60__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_59__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_59__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_59__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_59__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_59__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_59__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_59__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_59__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_59__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_59__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_59__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_59__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_59__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_59__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_58__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_58__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_58__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_58__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_58__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_58__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_58__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_58__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_58__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_58__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_58__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_58__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_58__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_58__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_57__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_57__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_57__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_57__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_57__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_57__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_57__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_57__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_57__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_57__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_57__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_57__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_57__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_57__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_56__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_56__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_56__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_56__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_56__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_56__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_56__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_56__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_56__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_56__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_56__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_56__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_56__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_56__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_55__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_55__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_55__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_55__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_55__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_55__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_55__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_55__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_55__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_55__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_55__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_55__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_55__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_55__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_118__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_118__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_118__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_118__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_118__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_118__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_118__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_118__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_118__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_118__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_118__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_118__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_118__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_118__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_117__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_117__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_117__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_117__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_117__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_117__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_117__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_117__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_117__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_117__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_117__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_117__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_117__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_117__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_116__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_116__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_116__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_116__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_116__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_116__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_116__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_116__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_116__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_116__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_116__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_116__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_116__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_116__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_54__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_54__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_54__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_54__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_54__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_54__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_54__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_54__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_54__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_54__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_54__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_54__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_54__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_54__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_53__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_53__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_53__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_53__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_53__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_53__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_53__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_53__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_53__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_53__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_53__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_53__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_53__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_53__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_52__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_52__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_52__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_52__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_52__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_52__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_52__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_52__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_52__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_52__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_52__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_52__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_52__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_52__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_115__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_115__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_115__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_115__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_115__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_115__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_115__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_115__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_115__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_115__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_115__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_115__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_115__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_115__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_114__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_114__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_114__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_114__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_114__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_114__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_114__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_114__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_114__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_114__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_114__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_114__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_114__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_114__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_113__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_113__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_113__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_113__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_113__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_113__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_113__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_113__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_113__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_113__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_113__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_113__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_113__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_113__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_112__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_112__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_112__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_112__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_112__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_112__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_112__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_112__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_112__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_112__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_112__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_112__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_112__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_112__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_111__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_111__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_111__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_111__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_111__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_111__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_111__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_111__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_111__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_111__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_111__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_111__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_111__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_111__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_110__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_110__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_110__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_110__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_110__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_110__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_110__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_110__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_110__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_110__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_110__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_110__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_110__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_110__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_51__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_51__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_51__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_51__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_51__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_51__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_51__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_51__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_51__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_51__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_51__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_51__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_51__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_51__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_50__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_50__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_50__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_50__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_50__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_50__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_50__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_50__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_50__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_50__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_50__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_50__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_50__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_50__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_49__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_49__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_49__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_49__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_49__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_49__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_49__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_49__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_49__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_49__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_49__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_49__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_49__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_49__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_48__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_48__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_48__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_48__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_48__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_48__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_48__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_48__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_48__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_48__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_48__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_48__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_48__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_48__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_47__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_47__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_47__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_47__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_47__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_47__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_47__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_47__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_47__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_47__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_47__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_47__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_47__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_47__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_46__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_46__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_46__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_46__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_46__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_46__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_46__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_46__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_46__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_46__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_46__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_46__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_46__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_46__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__deq__DOT___do_deq_T) {
        if (vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__deq__DOT__maybe_full) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 
                = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__deq__DOT__ram_resp
                [0U];
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_r_deq__DOT__ram_data__v0 
                = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__deq__DOT__ram_data
                [0U];
        } else {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 = 0U;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_r_deq__DOT__ram_data__v0 
                = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__deq__DOT__ram_data_MPORT_data;
        }
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_r_deq__DOT__ram_data__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_r_deq__DOT__ram_data__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_6__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_109__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_109__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_109__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_109__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_109__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_109__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_109__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_109__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_109__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_109__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_109__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_109__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_109__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_109__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_108__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_108__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_108__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_108__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_108__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_108__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_108__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_108__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_108__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_108__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_108__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_108__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_108__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_108__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_107__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_107__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_107__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_107__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_107__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_107__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_107__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_107__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_107__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_107__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_107__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_107__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_107__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_107__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_106__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_106__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_106__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_106__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_106__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_106__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_106__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_106__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_106__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_106__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_106__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_106__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_106__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_106__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_105__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_105__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_105__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_105__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_105__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_105__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_105__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_105__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_105__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_105__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_105__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_105__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_105__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_105__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_104__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_104__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_104__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_104__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_104__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_104__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_104__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_104__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_104__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_104__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_104__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_104__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_104__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_104__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_103__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_103__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_103__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_103__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_103__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_103__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_103__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_103__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_103__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_103__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_103__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_103__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_103__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_103__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_102__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_102__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_102__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_102__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_102__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_102__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_102__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_102__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_102__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_102__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_102__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_102__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_102__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_102__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_101__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_101__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_101__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_101__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_101__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_101__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_101__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_101__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_101__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_101__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_101__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_101__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_101__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_101__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_45__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_45__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_45__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_45__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_45__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_45__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_45__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_45__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_45__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_45__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_45__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_45__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_45__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_45__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_44__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_44__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_44__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_44__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_44__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_44__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_44__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_44__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_44__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_44__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_44__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_44__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_44__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_44__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_43__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_43__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_43__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_43__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_43__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_43__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_43__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_43__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_43__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_43__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_43__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_43__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_43__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_43__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_42__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_42__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_42__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_42__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_42__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_42__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_42__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_42__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_42__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_42__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_42__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_42__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_42__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_42__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_41__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_41__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_41__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_41__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_41__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_41__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_41__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_41__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_41__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_41__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_41__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_41__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_41__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_41__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_40__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_40__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_40__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_40__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_40__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_40__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_40__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_40__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_40__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_40__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_40__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_40__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_40__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_40__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_39__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_39__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_39__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_39__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_39__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_39__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_39__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_39__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_39__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_39__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_39__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_39__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_39__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_39__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_38__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_38__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_38__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_38__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_38__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_38__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_38__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_38__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_38__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_38__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_38__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_38__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_38__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_38__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_37__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_37__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_37__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_37__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_37__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_37__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_37__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_37__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_37__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_37__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_37__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_37__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_37__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_37__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_100__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_100__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_100__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_100__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_100__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_100__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_100__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_100__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_100__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_100__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_100__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_100__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_100__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_100__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_99__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_99__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_99__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_99__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_99__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_99__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_99__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_99__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_99__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_99__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_99__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_99__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_99__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_99__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_36__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_36__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_36__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_36__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_36__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_36__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_36__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_36__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_36__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_36__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_36__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_36__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_36__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_36__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_35__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_35__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_35__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_35__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_35__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_35__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_35__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_35__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_35__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_35__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_35__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_35__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_35__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_35__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_98__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_98__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_98__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_98__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_98__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_98__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_98__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_98__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_98__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_98__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_98__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_98__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_98__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_98__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_97__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_97__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_97__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_97__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_97__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_97__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_97__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_97__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_97__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_97__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_97__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_97__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_97__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_97__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_96__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_96__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_96__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_96__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_96__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_96__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_96__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_96__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_96__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_96__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_96__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_96__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_96__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_96__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_95__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_95__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_95__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_95__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_95__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_95__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_95__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_95__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_95__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_95__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_95__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_95__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_95__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_95__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_94__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_94__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_94__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_94__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_94__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_94__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_94__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_94__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_94__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_94__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_94__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_94__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_94__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_94__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_93__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_93__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_93__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_93__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_93__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_93__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_93__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_93__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_93__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_93__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_93__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_93__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_93__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_93__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_92__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_92__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_92__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_92__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_92__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_92__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_92__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_92__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_92__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_92__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_92__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_92__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_92__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_92__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_34__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_34__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_34__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_34__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_34__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_34__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_34__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_34__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_34__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_34__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_34__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_34__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_34__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_34__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_33__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_33__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_33__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_33__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_33__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_33__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_33__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_33__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_33__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_33__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_33__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_33__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_33__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_33__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_32__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_32__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_32__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_32__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_32__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_32__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_32__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_32__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_32__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_32__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_32__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_32__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_32__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_32__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_31__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_31__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_31__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_31__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_31__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_31__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_31__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_31__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_31__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_31__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_31__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_31__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_31__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_31__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_30__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_30__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_30__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_30__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_30__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_30__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_30__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_30__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_30__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_30__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_30__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_30__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_30__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_30__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_29__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_29__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_29__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_29__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_29__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_29__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_29__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_29__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_29__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_29__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_29__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_29__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_29__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_29__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_28__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_28__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_28__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_28__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_28__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_28__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_28__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_28__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_28__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_28__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_28__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_28__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_28__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_28__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__ram_resp
            [vlSelf->ComposerTop__DOT__axi4buf_3__DOT__bundleIn_0_b_deq__DOT__deq_ptr_value];
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0 
            = vlSelf->ComposerTop__DOT__axi4buf_4__DOT__bundleIn_0_b_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_91__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_91__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_91__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_91__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_91__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_91__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_91__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_91__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_91__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_91__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_91__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_91__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_91__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_91__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_90__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_90__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_90__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_90__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_90__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_90__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_90__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_90__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_90__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_90__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_90__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_90__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_90__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_90__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_89__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_89__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_89__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_89__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_89__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_89__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_89__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_89__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_89__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_89__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_89__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_89__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_89__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_89__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_88__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_88__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_88__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_88__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_88__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_88__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_88__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_88__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_88__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_88__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_88__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_88__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_88__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_88__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_87__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_87__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_87__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_87__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_87__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_87__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_87__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_87__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_87__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_87__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_87__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_87__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_87__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_87__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_86__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_86__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_86__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_86__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_86__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_86__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_86__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_86__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_86__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_86__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_86__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_86__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_86__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_86__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_85__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_85__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_85__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_85__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_85__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_85__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_85__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_85__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_85__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_85__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_85__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_85__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_85__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_85__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_84__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_84__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_84__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_84__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_84__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_84__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_84__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_84__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_84__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_84__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_84__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_84__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_84__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_84__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_83__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_83__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_83__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_83__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_83__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_83__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_83__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_83__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_83__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_83__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_83__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_83__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_83__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_83__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_27__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_27__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_27__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_27__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_27__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_27__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_27__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_27__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_27__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_27__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_27__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_27__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_27__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_27__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_26__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_26__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_26__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_26__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_26__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_26__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_26__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_26__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_26__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_26__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_26__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_26__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_26__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_26__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_25__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_25__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_25__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_25__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_25__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_25__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_25__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_25__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_25__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_25__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_25__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_25__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_25__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_25__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_24__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_24__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_24__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_24__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_24__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_24__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_24__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_24__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_24__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_24__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_24__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_24__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_24__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_24__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_23__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_23__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_23__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_23__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_23__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_23__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_23__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_23__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_23__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_23__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_23__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_23__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_23__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_23__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_22__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_22__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_22__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_22__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_22__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_22__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_22__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_22__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_22__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_22__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_22__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_22__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_22__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_22__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_21__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_21__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_21__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_21__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_21__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_21__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_21__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_21__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_21__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_21__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_21__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_21__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_21__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_21__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_20__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_20__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_20__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_20__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_20__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_20__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_20__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_20__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_20__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_20__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_20__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_20__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_20__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_20__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_19__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_19__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_19__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_19__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_19__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_19__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_19__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_19__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_19__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_19__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_19__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_19__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_19__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_19__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id__v0 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id__v0 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1__DOT__ram_real_last__v0 
            = (0U == (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__len));
        vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1__DOT__ram_real_last__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1__DOT__ram_real_last__v0 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue__DOT__ram_extra_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue__DOT__ram_extra_id__v0 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue__DOT__ram_extra_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue__DOT__ram_extra_id__v0 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue__DOT__ram_real_last__v0 
            = (0U == (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__len));
        vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue__DOT__ram_real_last__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue__DOT__ram_real_last__v0 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_82__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_82__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_82__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_82__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_82__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_82__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_82__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_82__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_82__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_82__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_82__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_82__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_82__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_82__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_18__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_18__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_18__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_18__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_18__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_18__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_18__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_18__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_18__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_18__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_18__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_18__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_18__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_18__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_81__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_81__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_81__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_81__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_81__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_81__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_81__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_81__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_81__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_81__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_81__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_81__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_81__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_81__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_80__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_80__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_80__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_80__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_80__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_80__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_80__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_80__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_80__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_80__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_80__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_80__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_80__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_80__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_79__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_79__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_79__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_79__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_79__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_79__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_79__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_79__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_79__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_79__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_79__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_79__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_79__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_79__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_78__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_78__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_78__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_78__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_78__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_78__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_78__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_78__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_78__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_78__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_78__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_78__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_78__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_78__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_77__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_77__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_77__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_77__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_77__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_77__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_77__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_77__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_77__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_77__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_77__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_77__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_77__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_77__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_76__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_76__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_76__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_76__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_76__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_76__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_76__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_76__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_76__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_76__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_76__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_76__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_76__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_76__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_75__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_75__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_75__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_75__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_75__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_75__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_75__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_75__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_75__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_75__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_75__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_75__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_75__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_75__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_74__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_74__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_74__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_74__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_74__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_74__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_74__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_74__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_74__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_74__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_74__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_74__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_74__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_74__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_17__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_17__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_17__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_17__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_17__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_17__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_17__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_17__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_17__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_17__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_17__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_17__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_17__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_17__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_16__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_16__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_16__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_16__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_16__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_16__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_16__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_16__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_16__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_16__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_16__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_16__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_16__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_16__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_15__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_15__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_15__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_15__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_15__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_15__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_15__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_15__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_15__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_15__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_15__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_15__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_15__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_15__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_14__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_14__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_14__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_14__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_14__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_14__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_14__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_14__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_14__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_14__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_14__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_14__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_14__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_14__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_13__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_13__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_13__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_13__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_13__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_13__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_13__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_13__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_13__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_13__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_13__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_13__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_13__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_13__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_12__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_12__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_12__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_12__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_12__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_12__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_12__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_12__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_12__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_12__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_12__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_12__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_12__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_12__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_11__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_11__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_11__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_11__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_11__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_11__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_11__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_11__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_11__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_11__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_11__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_11__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_11__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_11__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_10__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_10__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_10__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_10__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_10__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_10__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_10__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_10__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_10__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_10__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_10__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_10__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_10__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_10__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_3__DOT__ram_extra_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_3__DOT__ram_extra_id__v0 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2__DOT__ram_extra_id_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_3__DOT__ram_extra_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_3__DOT__ram_extra_id__v0 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_3__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2__DOT__ram_extra_id_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2__DOT__ram_extra_id__v0 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2__DOT__ram_extra_id_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2__DOT__ram_extra_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2__DOT__ram_extra_id__v0 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_65__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_65__DOT__ram_extra_id__v0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_65__DOT__ram_extra_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_65__DOT__ram_extra_id__v0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_65__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_65__DOT__ram_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_65__DOT__ram_tl_state_source__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_65__DOT__ram_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_65__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id__v0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id__v0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id__v0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id__v0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue__DOT__ram_extra_id__v0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue__DOT__ram_extra_id__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue__DOT__ram_extra_id__v0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue__DOT__enq_ptr_value;
        vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue__DOT__ram_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue__DOT__ram_tl_state_source__v0 = 1U;
        vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue__DOT__ram_tl_state_source__v0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue__DOT__enq_ptr_value;
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_73__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_73__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_73__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_73__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_73__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_73__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_73__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_73__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_73__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_73__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_73__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_73__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_73__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_73__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_72__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_72__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_72__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_72__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_72__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_72__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_72__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_72__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_72__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_72__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_72__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_72__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_72__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_72__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_71__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_71__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_71__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_71__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_71__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_71__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_71__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_71__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_71__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_71__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_71__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_71__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_71__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_71__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_70__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_70__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_70__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_70__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_70__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_70__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_70__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_70__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_70__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_70__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_70__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_70__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_70__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_70__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_69__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_69__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_69__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_69__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_69__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_69__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_69__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_69__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_69__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_69__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_69__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_69__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_69__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_69__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_68__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_68__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_68__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_68__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_68__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_68__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_68__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_68__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_68__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_68__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_68__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_68__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_68__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_68__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_67__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_67__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_67__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_67__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_67__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_67__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_67__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_67__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_67__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_67__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_67__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_67__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_67__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_67__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_66__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_66__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_66__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_64__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_66__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_66__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_66__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_66__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_66__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_66__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_66__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_66__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_66__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_66__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_66__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_9__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_9__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_9__DOT____Vlvbound_h58a343c0__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_tl_state_source_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_9__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_9__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_9__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_9__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_9__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_9__DOT__enq_ptr_value;
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_9__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_9__DOT____Vlvbound_h58a343c0__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_9__DOT__ram_tl_state_source__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_9__DOT__ram_tl_state_source__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_9__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_8__DOT__ram_tl_state_source_MPORT_en) {
        vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_8__DOT____Vlvbound_h0c1ed119__0 
            = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_data;
        if ((2U >= (IData)(vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_8__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ComposerTop__DOT__axi4yank__DOT__Queue_8__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_8__DOT____Vlvbound_h0c1ed119__0;
            vlSelf->__Vdlyvset__ComposerTop__DOT__axi4yank__DOT__Queue_8__DOT__ram_extra_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__ComposerTop__DOT__axi4yank__DOT__Queue_8__DOT__ram_extra_id__v0 
                = vlSelf->ComposerTop__DOT__axi4yank__DOT__Queue_8__DOT__enq_ptr_value;
        }
    }
}
