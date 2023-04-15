// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcomposer.h for the primary calling header

#include "verilated.h"

#include "Vcomposer___024root.h"

extern const VlWide<16>/*511:0*/ Vcomposer__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT void Vcomposer___024root___nba_sequent__TOP__3(Vcomposer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomposer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomposer___024root___nba_sequent__TOP__3\n"); );
    // Init
    CData/*0:0*/ ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___T_15;
    ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___T_15 = 0;
    CData/*4:0*/ ComposerTop__DOT__acc__DOT__crossbarModule__DOT___readys_mask_T_3;
    ComposerTop__DOT__acc__DOT__crossbarModule__DOT___readys_mask_T_3 = 0;
    QData/*63:0*/ ComposerTop__DOT__acc__DOT__crossbarModule__DOT___T_66;
    ComposerTop__DOT__acc__DOT__crossbarModule__DOT___T_66 = 0;
    QData/*63:0*/ ComposerTop__DOT__acc__DOT__crossbarModule__DOT___T_67;
    ComposerTop__DOT__acc__DOT__crossbarModule__DOT___T_67 = 0;
    QData/*63:0*/ ComposerTop__DOT__acc__DOT__crossbarModule__DOT___T_68;
    ComposerTop__DOT__acc__DOT__crossbarModule__DOT___T_68 = 0;
    QData/*63:0*/ ComposerTop__DOT__acc__DOT__crossbarModule__DOT___T_69;
    ComposerTop__DOT__acc__DOT__crossbarModule__DOT___T_69 = 0;
    CData/*0:0*/ ComposerTop__DOT__tl2axi4__DOT___GEN_89;
    ComposerTop__DOT__tl2axi4__DOT___GEN_89 = 0;
    CData/*0:0*/ ComposerTop__DOT__tl2axi4__DOT___GEN_110;
    ComposerTop__DOT__tl2axi4__DOT___GEN_110 = 0;
    CData/*0:0*/ ComposerTop__DOT__tl2axi4__DOT___GEN_131;
    ComposerTop__DOT__tl2axi4__DOT___GEN_131 = 0;
    CData/*6:0*/ ComposerTop__DOT__tl2axi4__DOT___GEN_22;
    ComposerTop__DOT__tl2axi4__DOT___GEN_22 = 0;
    CData/*6:0*/ ComposerTop__DOT__tl2axi4__DOT___GEN_43;
    ComposerTop__DOT__tl2axi4__DOT___GEN_43 = 0;
    CData/*6:0*/ ComposerTop__DOT__tl2axi4__DOT___GEN_64;
    ComposerTop__DOT__tl2axi4__DOT___GEN_64 = 0;
    CData/*0:0*/ ComposerTop__DOT__tl2axi4__DOT___out_arw_valid_T_1;
    ComposerTop__DOT__tl2axi4__DOT___out_arw_valid_T_1 = 0;
    CData/*0:0*/ ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT____VdfgTmp_h6aec78c2__0;
    ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT____VdfgTmp_h6aec78c2__0 = 0;
    CData/*0:0*/ ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT____VdfgTmp_h470c5fef__0;
    ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT____VdfgTmp_h470c5fef__0 = 0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__0;
    VlWide<4>/*127:0*/ __Vtemp_h79ac100e__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__1;
    VlWide<4>/*127:0*/ __Vtemp_h2d4da71b__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__2;
    VlWide<4>/*127:0*/ __Vtemp_h38f09b4d__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__3;
    VlWide<4>/*127:0*/ __Vtemp_h00d8e1cb__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__4;
    VlWide<4>/*127:0*/ __Vtemp_hc93d08c3__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__5;
    VlWide<4>/*127:0*/ __Vtemp_he0885fa8__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__6;
    VlWide<4>/*127:0*/ __Vtemp_ha8d0cd25__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__7;
    VlWide<4>/*127:0*/ __Vtemp_h127ca22f__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__8;
    VlWide<4>/*127:0*/ __Vtemp_h26e2e9bc__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__9;
    VlWide<4>/*127:0*/ __Vtemp_h5af8c16b__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__10;
    VlWide<4>/*127:0*/ __Vtemp_h36e0fd1d__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__11;
    VlWide<4>/*127:0*/ __Vtemp_h1a5002a9__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__12;
    VlWide<4>/*127:0*/ __Vtemp_hf553736a__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__13;
    VlWide<4>/*127:0*/ __Vtemp_h1650a295__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__14;
    VlWide<4>/*127:0*/ __Vtemp_h960910d8__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__15;
    VlWide<4>/*127:0*/ __Vtemp_he040b0fa__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__16;
    VlWide<4>/*127:0*/ __Vtemp_h6586b3b4__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__17;
    VlWide<4>/*127:0*/ __Vtemp_hf1b2db86__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__18;
    VlWide<4>/*127:0*/ __Vtemp_h8adc7b6d__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__19;
    VlWide<4>/*127:0*/ __Vtemp_h45a9a630__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__20;
    VlWide<4>/*127:0*/ __Vtemp_h01acfad0__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__21;
    VlWide<4>/*127:0*/ __Vtemp_hd52bd83b__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__22;
    VlWide<4>/*127:0*/ __Vtemp_hfb56c413__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__23;
    VlWide<4>/*127:0*/ __Vtemp_h449816ef__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__24;
    VlWide<4>/*127:0*/ __Vtemp_h9901fc01__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__25;
    VlWide<4>/*127:0*/ __Vtemp_hee786d21__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__26;
    VlWide<4>/*127:0*/ __Vtemp_haf3c5f1a__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__27;
    VlWide<4>/*127:0*/ __Vtemp_hcb53fa89__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__28;
    VlWide<4>/*127:0*/ __Vtemp_ha7c94d82__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__29;
    VlWide<4>/*127:0*/ __Vtemp_h10849629__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__30;
    VlWide<4>/*127:0*/ __Vtemp_hefcaae1a__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__31;
    VlWide<4>/*127:0*/ __Vtemp_h36c51038__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__32;
    VlWide<4>/*127:0*/ __Vtemp_h3f8a0695__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__33;
    VlWide<4>/*127:0*/ __Vtemp_h3bae82dc__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__34;
    VlWide<4>/*127:0*/ __Vtemp_h59c6dbe8__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__35;
    VlWide<4>/*127:0*/ __Vtemp_hbafa417c__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__36;
    VlWide<4>/*127:0*/ __Vtemp_h4e52e4ec__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__37;
    VlWide<4>/*127:0*/ __Vtemp_h7757bc9f__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__38;
    VlWide<4>/*127:0*/ __Vtemp_hc1f1ecca__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__39;
    VlWide<4>/*127:0*/ __Vtemp_h8699e225__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__40;
    VlWide<4>/*127:0*/ __Vtemp_h1986d4d2__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__41;
    VlWide<4>/*127:0*/ __Vtemp_h168f1093__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__42;
    VlWide<4>/*127:0*/ __Vtemp_h611effbc__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__43;
    VlWide<4>/*127:0*/ __Vtemp_h54248795__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__44;
    VlWide<4>/*127:0*/ __Vtemp_h104d6e53__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__45;
    VlWide<4>/*127:0*/ __Vtemp_h85459d14__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__46;
    VlWide<4>/*127:0*/ __Vtemp_h6aeaa05c__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__47;
    VlWide<4>/*127:0*/ __Vtemp_hc2279870__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__48;
    VlWide<4>/*127:0*/ __Vtemp_h05615be6__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__49;
    VlWide<4>/*127:0*/ __Vtemp_h8ff6551d__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__50;
    VlWide<4>/*127:0*/ __Vtemp_h56dc1ac5__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__51;
    VlWide<4>/*127:0*/ __Vtemp_h574097e0__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__52;
    VlWide<4>/*127:0*/ __Vtemp_h7a15af17__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__53;
    VlWide<4>/*127:0*/ __Vtemp_h22000ac6__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__54;
    VlWide<4>/*127:0*/ __Vtemp_h371ad274__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__55;
    VlWide<4>/*127:0*/ __Vtemp_h1a2d1032__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__56;
    VlWide<4>/*127:0*/ __Vtemp_hf7176b72__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__57;
    VlWide<4>/*127:0*/ __Vtemp_had6cdeb3__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__58;
    VlWide<4>/*127:0*/ __Vtemp_ha21fd949__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__59;
    VlWide<4>/*127:0*/ __Vtemp_h34d79755__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__60;
    VlWide<4>/*127:0*/ __Vtemp_hf7ad1aa4__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__61;
    VlWide<4>/*127:0*/ __Vtemp_h4e59a781__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__62;
    VlWide<4>/*127:0*/ __Vtemp_h0278d47e__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__63;
    VlWide<4>/*127:0*/ __Vtemp_h4c2fceef__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6a71a__64;
    VlWide<4>/*127:0*/ __Vtemp_h849d07d1__0;
    // Body
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_5 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 4U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_5))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_2 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 4U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_2))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_3 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 4U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_3))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_4 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 4U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_4))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_5 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 4U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_5))));
    ComposerTop__DOT__acc__DOT__crossbarModule__DOT___readys_mask_T_3 
        = (0x1fU & ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT___readys_mask_T) 
                    | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT___readys_mask_T) 
                       << 1U)));
    if (vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__beatsLeft) {
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_4 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__state_4;
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_0 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__state_0;
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_1 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__state_1;
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_2 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__state_2;
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_3 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__state_3;
    } else {
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_4 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_4;
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_0 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_0;
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_1 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_1;
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_2 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_2;
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_3 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__earlyWinner_3;
    }
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_2 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 4U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_2))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_3 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 4U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_3))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_4 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 4U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_4))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_5 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 4U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_5))));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2_io_deq_ready 
        = ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___T_90) 
           & ((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__q_b_deq_io_deq_bits_id)));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_3_io_deq_ready 
        = ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___T_90) 
           & (((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__q_b_deq_io_deq_bits_id)) 
              >> 1U));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__crFile__DOT___T_1 
        = ((0U == (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__crFile__DOT__state)) 
           & ((0U == (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__beatsLeft))
               ? ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl_auto_in_ar_valid) 
                  | (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__w_out_valid))
               : (((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl_auto_in_ar_valid) 
                   & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__state_0)) 
                  | ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__state_1) 
                     & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__w_out_valid)))));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__readys_valid 
        = (((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__w_out_valid) 
            << 1U) | (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl_auto_in_ar_valid));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_payload1_io_deq_bits_MPORT_data 
        = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_payload1
        [vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__deq_ptr_value];
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_payload2_io_deq_bits_MPORT_data 
        = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_payload2
        [vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__deq_ptr_value];
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_inst_rs1_io_deq_bits_MPORT_data 
        = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_inst_rs1
        [vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__deq_ptr_value];
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_core_id_io_deq_bits_MPORT_data 
        = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_core_id
        [vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__deq_ptr_value];
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_inst_funct_io_deq_bits_MPORT_data 
        = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_inst_funct
        [vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__deq_ptr_value];
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_6 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_2) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_6))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_7 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_2) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_7))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_8 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_3) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_8))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_9 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_3) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_9))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_10 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_4) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_10))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_11 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_4) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_11))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_12 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_5) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_12))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_13 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_5) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_13))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_6 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_2) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_6))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_7 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_2) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_7))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_8 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_3) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_8))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_9 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_3) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_9))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_10 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_4) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_10))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_11 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_4) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_11))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_12 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_5) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_12))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_13 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_5) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_13))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_6 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_2) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_6))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_7 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_2) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_7))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_8 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_3) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_8))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_9 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_3) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_9))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_10 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_4) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_10))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_11 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_4) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_11))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_12 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_5) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_12))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_13 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_5) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_13))));
    vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT___readys_mask_T_6 
        = (0x1fU & ((IData)(ComposerTop__DOT__acc__DOT__crossbarModule__DOT___readys_mask_T_3) 
                    | ((IData)(ComposerTop__DOT__acc__DOT__crossbarModule__DOT___readys_mask_T_3) 
                       << 2U)));
    if (vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_0) {
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[0U] 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataBuf_0;
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[1U] 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataBuf_1;
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[2U] 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataBuf_2;
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[3U] 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataBuf_3;
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[4U] 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataBuf_4;
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[5U] 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataBuf_5;
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[6U] 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataBuf_6;
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[7U] 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataBuf_7;
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[8U] 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataBuf_8;
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[9U] 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataBuf_9;
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[0xaU] 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataBuf_10;
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[0xbU] 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataBuf_11;
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[0xcU] 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataBuf_12;
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[0xdU] 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataBuf_13;
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[0xeU] 
            = (IData)((((QData)((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataBuf_15)) 
                        << 0x20U) | (QData)((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataBuf_14))));
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[0xfU] 
            = (IData)(((((QData)((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataBuf_15)) 
                         << 0x20U) | (QData)((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataBuf_14))) 
                       >> 0x20U));
        ComposerTop__DOT__acc__DOT__crossbarModule__DOT___T_66 
            = (((QData)((IData)(((((0x8000U & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataValid))
                                    ? 0xfU : 0U) << 0x1cU) 
                                 | ((((0x4000U & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataValid))
                                       ? 0xfU : 0U) 
                                     << 0x18U) | ((
                                                   ((0x2000U 
                                                     & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataValid))
                                                     ? 0xfU
                                                     : 0U) 
                                                   << 0x14U) 
                                                  | ((((0x1000U 
                                                        & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataValid))
                                                        ? 0xfU
                                                        : 0U) 
                                                      << 0x10U) 
                                                     | ((((0x800U 
                                                           & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataValid))
                                                           ? 0xfU
                                                           : 0U) 
                                                         << 0xcU) 
                                                        | ((((0x400U 
                                                              & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataValid))
                                                              ? 0xfU
                                                              : 0U) 
                                                            << 8U) 
                                                           | ((((0x200U 
                                                                 & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataValid))
                                                                 ? 0xfU
                                                                 : 0U) 
                                                               << 4U) 
                                                              | ((0x100U 
                                                                  & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataValid))
                                                                  ? 0xfU
                                                                  : 0U)))))))))) 
                << 0x20U) | (QData)((IData)(((((0x80U 
                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataValid))
                                                ? 0xfU
                                                : 0U) 
                                              << 0x1cU) 
                                             | ((((0x40U 
                                                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataValid))
                                                   ? 0xfU
                                                   : 0U) 
                                                 << 0x18U) 
                                                | ((((0x20U 
                                                      & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataValid))
                                                      ? 0xfU
                                                      : 0U) 
                                                    << 0x14U) 
                                                   | ((((0x10U 
                                                         & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataValid))
                                                         ? 0xfU
                                                         : 0U) 
                                                       << 0x10U) 
                                                      | ((((8U 
                                                            & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataValid))
                                                            ? 0xfU
                                                            : 0U) 
                                                          << 0xcU) 
                                                         | ((((4U 
                                                               & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataValid))
                                                               ? 0xfU
                                                               : 0U) 
                                                             << 8U) 
                                                            | ((((2U 
                                                                  & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataValid))
                                                                  ? 0xfU
                                                                  : 0U) 
                                                                << 4U) 
                                                               | ((1U 
                                                                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataValid))
                                                                   ? 0xfU
                                                                   : 0U)))))))))));
    } else {
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[0U] 
            = Vcomposer__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[1U] 
            = Vcomposer__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[2U] 
            = Vcomposer__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[3U] 
            = Vcomposer__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[4U] 
            = Vcomposer__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[5U] 
            = Vcomposer__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[6U] 
            = Vcomposer__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[7U] 
            = Vcomposer__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[8U] 
            = Vcomposer__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[9U] 
            = Vcomposer__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[0xaU] 
            = Vcomposer__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[0xbU] 
            = Vcomposer__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[0xcU] 
            = Vcomposer__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[0xdU] 
            = Vcomposer__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[0xeU] 
            = Vcomposer__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_data[0xfU] 
            = Vcomposer__ConstPool__CONST_h93e1b771_0[0xfU];
        ComposerTop__DOT__acc__DOT__crossbarModule__DOT___T_66 = 0ULL;
    }
    vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_address 
        = ((((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_0)
                ? ((QData)((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__addr)) 
                   << 6U) : 0ULL) | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_1)
                                      ? vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress
                                      : 0ULL)) | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_2)
                                                   ? vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress
                                                   : 0ULL)) 
            | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_3)
                ? vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress
                : 0ULL)) | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_4)
                             ? vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress
                             : 0ULL));
    vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_size 
        = ((((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_0)
                ? 6U : 0U) | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_1)
                               ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)
                               : 0U)) | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_2)
                                          ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)
                                          : 0U)) | 
            ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_3)
              ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)
              : 0U)) | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_4)
                         ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)
                         : 0U));
    vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_opcode 
        = ((((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_0)
                ? 1U : 0U) | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_1)
                               ? 4U : 0U)) | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_2)
                                               ? 4U
                                               : 0U)) 
            | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_3)
                ? 4U : 0U)) | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_4)
                                ? 4U : 0U));
    vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source 
        = ((((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_0)
                ? (0x40U | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__allocatedTransaction))
                : 0U) | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_1)
                          ? (0x30U | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen))
                          : 0U)) | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_2)
                                     ? (0x20U | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen))
                                     : 0U)) | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_3)
                                                ? (0x10U 
                                                   | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen))
                                                : 0U)) 
           | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_4)
               ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen)
               : 0U));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_6 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_2) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_6))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_7 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_2) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_7))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_8 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_3) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_8))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_9 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_3) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_9))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_10 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_4) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_10))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_11 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_4) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_11))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_12 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_5) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_12))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_13 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_5) 
           | (7U & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                     >> 3U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_13))));
    vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits 
        = ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT__empty)
            ? (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT__ram_MPORT_data)
            : vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT__ram
           [vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT__deq_ptr_value]);
    vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__do_deq 
        = ((~ (IData)(vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__empty)) 
           & ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__out_0_w_ready) 
              & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits)));
    vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__do_deq 
        = ((~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__empty)) 
           & ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__out_0_w_ready) 
              & ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits) 
                 >> 1U)));
    vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_last_MPORT_data 
        = (((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits) 
            & vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__ram_last
            [vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__deq_ptr_value]) 
           | (((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits) 
               >> 1U) & vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__ram_last
              [vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__deq_ptr_value]));
    vlSelf->ComposerTop__DOT__axi4xbar__DOT__out_0_w_valid 
        = (1U & (((~ (IData)(vlSelf->ComposerTop__DOT__axi4buf__DOT__x1_w_deq__DOT__empty)) 
                  & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits)) 
                 | ((~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_2__DOT__x1_w_deq__DOT__empty)) 
                    & ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_bits) 
                       >> 1U))));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___beatsLeft_T_4 
        = (0xffU & ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__beatsLeft) 
                    - (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__crFile__DOT___T_1)));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__readys_filter 
        = ((((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__readys_mask)) 
             & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__readys_valid)) 
            << 2U) | (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__readys_valid));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__channelSelect 
        = ((0xe0U & (vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_inst_rs2
                     [vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__deq_ptr_value] 
                     << 5U)) | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_inst_rs1_io_deq_bits_MPORT_data));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd_io_deq_ready 
        = ((1U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_inst_funct_io_deq_bits_MPORT_data)) 
           | (0U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__state)));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_14 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_6) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_14))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_15 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_6) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_15))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_16 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_7) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_16))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_17 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_7) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_17))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_18 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_8) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_18))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_19 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_8) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_19))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_20 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_9) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_20))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_21 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_9) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_21))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_22 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_10) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_22))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_23 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_10) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_23))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_24 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_11) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_24))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_25 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_11) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_25))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_26 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_12) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_26))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_27 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_12) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_27))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_28 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_13) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_28))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_29 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_13) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_29))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_14 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_6) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_14))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_15 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_6) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_15))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_16 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_7) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_16))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_17 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_7) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_17))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_18 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_8) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_18))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_19 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_8) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_19))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_20 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_9) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_20))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_21 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_9) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_21))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_22 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_10) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_22))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_23 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_10) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_23))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_24 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_11) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_24))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_25 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_11) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_25))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_26 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_12) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_26))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_27 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_12) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_27))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_28 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_13) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_28))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_29 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_13) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_29))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_14 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_6) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_14))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_15 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_6) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_15))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_16 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_7) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_16))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_17 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_7) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_17))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_18 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_8) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_18))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_19 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_8) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_19))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_20 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_9) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_20))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_21 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_9) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_21))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_22 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_10) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_22))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_23 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_10) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_23))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_24 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_11) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_24))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_25 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_11) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_25))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_26 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_12) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_26))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_27 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_12) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_27))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_28 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_13) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_28))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_29 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_13) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_29))));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_size_MPORT_data 
        = ((6U <= (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_size))
            ? 6U : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_size));
    ComposerTop__DOT__tl2axi4__DOT___GEN_22 = ((0x14U 
                                                == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                ? 0x14U
                                                : (
                                                   (0x13U 
                                                    == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                    ? 0x13U
                                                    : 
                                                   ((0x12U 
                                                     == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                     ? 0x12U
                                                     : 
                                                    ((0x11U 
                                                      == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                      ? 0x11U
                                                      : 
                                                     ((0x10U 
                                                       == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                       ? 0x10U
                                                       : 
                                                      ((0xfU 
                                                        == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                        ? 0xfU
                                                        : 
                                                       ((0xeU 
                                                         == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                         ? 0xeU
                                                         : 
                                                        ((0xdU 
                                                          == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                          ? 0xdU
                                                          : 
                                                         ((0xcU 
                                                           == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                           ? 0xcU
                                                           : 
                                                          ((0xbU 
                                                            == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                            ? 0xbU
                                                            : 
                                                           ((0xaU 
                                                             == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                             ? 0xaU
                                                             : 
                                                            ((9U 
                                                              == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                              ? 9U
                                                              : 
                                                             ((8U 
                                                               == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                               ? 8U
                                                               : 
                                                              ((7U 
                                                                == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                ? 7U
                                                                : 
                                                               ((6U 
                                                                 == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                 ? 6U
                                                                 : 
                                                                ((5U 
                                                                  == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                  ? 5U
                                                                  : 
                                                                 ((4U 
                                                                   == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                   ? 4U
                                                                   : 
                                                                  ((3U 
                                                                    == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                    ? 3U
                                                                    : 
                                                                   ((2U 
                                                                     == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                     ? 2U
                                                                     : 
                                                                    ((1U 
                                                                      == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                      ? 1U
                                                                      : 0U))))))))))))))))))));
    ComposerTop__DOT__tl2axi4__DOT___GEN_89 = ((0x15U 
                                                == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_22)
                                                : (
                                                   (0x14U 
                                                    == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                    ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_21)
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                     ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_20)
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                      ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_19)
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                       ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_18)
                                                       : 
                                                      ((0x10U 
                                                        == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                        ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_17)
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                         ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_16)
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                          ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_15)
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                           ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_14)
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                            ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_13)
                                                            : 
                                                           ((0xbU 
                                                             == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                             ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_12)
                                                             : 
                                                            ((0xaU 
                                                              == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                              ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_11)
                                                              : 
                                                             ((9U 
                                                               == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                               ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_10)
                                                               : 
                                                              ((8U 
                                                                == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_9)
                                                                : 
                                                               ((7U 
                                                                 == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                 ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_8)
                                                                 : 
                                                                ((6U 
                                                                  == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                  ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_7)
                                                                  : 
                                                                 ((5U 
                                                                   == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                   ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_6)
                                                                   : 
                                                                  ((4U 
                                                                    == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                    ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_5)
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                     ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_4)
                                                                     : 
                                                                    ((2U 
                                                                      == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                      ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_3)
                                                                      : 
                                                                     ((1U 
                                                                       == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                       ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_2)
                                                                       : (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_1))))))))))))))))))))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_14 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_6) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_14))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_15 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_6) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_15))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_16 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_7) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_16))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_17 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_7) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_17))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_18 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_8) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_18))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_19 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_8) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_19))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_20 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_9) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_20))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_21 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_9) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_21))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_22 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_10) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_22))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_23 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_10) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_23))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_24 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_11) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_24))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_25 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_11) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_25))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_26 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_12) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_26))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_27 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_12) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_27))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_28 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_13) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_28))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_29 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_13) 
           | (0xfU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                       >> 2U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_29))));
    vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_data_MPORT_en 
        = ((~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__full)) 
           & ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__out_0_w_valid) 
              & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_valid)));
    vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_ready 
        = ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__out_0_w_valid) 
           & ((~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__full)) 
              & (IData)(vlSelf->ComposerTop__DOT__axi4buf_5__DOT__x1_w_deq__DOT__ram_last_MPORT_data)));
    vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT__ram_MPORT_en 
        = ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT__empty)
            ? ((~ (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_ready)) 
               & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT___do_enq_T))
            : (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT___do_enq_T));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__readys_unready 
        = (0xfU & ((((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__readys_filter) 
                     >> 1U) | ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__readys_filter) 
                               >> 2U)) | ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__readys_mask) 
                                          << 2U)));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__do_deq 
        = ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__empty)) 
           & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd_io_deq_ready));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_30 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_14) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_30))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_31 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_14) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_31))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_32 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_15) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_32))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_33 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_15) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_33))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_34 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_16) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_34))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_35 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_16) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_35))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_36 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_17) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_36))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_37 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_17) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_37))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_38 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_18) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_38))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_39 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_18) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_39))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_40 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_19) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_40))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_41 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_19) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_41))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_42 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_20) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_42))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_43 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_20) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_43))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_44 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_21) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_44))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_45 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_21) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_45))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_46 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_22) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_46))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_47 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_22) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_47))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_48 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_23) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_48))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_49 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_23) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_49))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_50 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_24) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_50))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_51 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_24) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_51))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_52 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_25) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_52))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_53 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_25) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_53))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_54 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_26) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_54))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_55 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_26) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_55))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_56 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_27) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_56))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_57 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_27) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_57))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_58 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_28) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_58))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_59 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_28) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_59))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_60 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_29) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_60))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_61 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_29) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_61))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_30 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_14) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_30))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_31 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_14) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_31))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_32 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_15) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_32))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_33 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_15) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_33))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_34 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_16) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_34))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_35 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_16) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_35))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_36 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_17) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_36))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_37 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_17) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_37))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_38 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_18) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_38))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_39 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_18) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_39))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_40 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_19) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_40))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_41 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_19) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_41))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_42 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_20) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_42))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_43 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_20) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_43))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_44 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_21) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_44))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_45 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_21) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_45))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_46 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_22) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_46))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_47 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_22) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_47))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_48 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_23) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_48))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_49 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_23) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_49))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_50 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_24) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_50))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_51 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_24) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_51))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_52 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_25) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_52))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_53 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_25) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_53))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_54 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_26) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_54))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_55 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_26) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_55))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_56 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_27) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_56))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_57 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_27) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_57))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_58 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_28) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_58))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_59 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_28) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_59))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_60 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_29) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_60))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_61 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_29) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_61))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_30 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_14) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_30))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_31 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_14) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_31))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_32 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_15) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_32))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_33 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_15) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_33))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_34 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_16) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_34))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_35 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_16) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_35))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_36 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_17) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_36))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_37 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_17) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_37))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_38 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_18) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_38))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_39 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_18) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_39))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_40 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_19) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_40))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_41 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_19) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_41))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_42 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_20) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_42))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_43 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_20) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_43))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_44 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_21) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_44))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_45 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_21) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_45))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_46 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_22) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_46))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_47 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_22) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_47))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_48 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_23) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_48))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_49 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_23) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_49))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_50 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_24) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_50))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_51 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_24) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_51))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_52 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_25) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_52))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_53 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_25) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_53))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_54 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_26) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_54))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_55 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_26) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_55))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_56 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_27) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_56))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_57 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_27) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_57))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_58 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_28) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_58))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_59 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_28) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_59))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_60 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_29) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_60))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_61 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_29) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_61))));
    if (vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full) {
        vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_addr_MPORT_data 
            = vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr
            [0U];
        vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_len_MPORT_data 
            = (0xffU & vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_len
               [0U]);
        vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_wen 
            = (1U & vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_wen
               [0U]);
    } else {
        vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_addr_MPORT_data 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_address;
        vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_len_MPORT_data 
            = (0xffU & (~ (0xffU & (((IData)(0x3fffU) 
                                     << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_size)) 
                                    >> 6U))));
        vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_wen 
            = (1U & (~ ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_opcode) 
                        >> 2U)));
    }
    vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_ready 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_wen)
                  ? (~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__full))
                  : (~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__full))));
    ComposerTop__DOT__tl2axi4__DOT___GEN_43 = ((0x29U 
                                                == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                ? 0x29U
                                                : (
                                                   (0x28U 
                                                    == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                    ? 0x28U
                                                    : 
                                                   ((0x27U 
                                                     == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                     ? 0x27U
                                                     : 
                                                    ((0x26U 
                                                      == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                      ? 0x26U
                                                      : 
                                                     ((0x25U 
                                                       == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                       ? 0x25U
                                                       : 
                                                      ((0x24U 
                                                        == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                        ? 0x24U
                                                        : 
                                                       ((0x23U 
                                                         == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                         ? 0x23U
                                                         : 
                                                        ((0x22U 
                                                          == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                          ? 0x22U
                                                          : 
                                                         ((0x21U 
                                                           == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                           ? 0x21U
                                                           : 
                                                          ((0x20U 
                                                            == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                            ? 0x20U
                                                            : 
                                                           ((0x1fU 
                                                             == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                             ? 0x1fU
                                                             : 
                                                            ((0x1eU 
                                                              == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                              ? 0x1eU
                                                              : 
                                                             ((0x1dU 
                                                               == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                               ? 0x1dU
                                                               : 
                                                              ((0x1cU 
                                                                == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                ? 0x1cU
                                                                : 
                                                               ((0x1bU 
                                                                 == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                 ? 0x1bU
                                                                 : 
                                                                ((0x1aU 
                                                                  == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                  ? 0x1aU
                                                                  : 
                                                                 ((0x19U 
                                                                   == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                   ? 0x19U
                                                                   : 
                                                                  ((0x18U 
                                                                    == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                    ? 0x18U
                                                                    : 
                                                                   ((0x17U 
                                                                     == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x16U 
                                                                      == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                      ? 0x16U
                                                                      : 
                                                                     ((0x15U 
                                                                       == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                       ? 0x15U
                                                                       : (IData)(ComposerTop__DOT__tl2axi4__DOT___GEN_22))))))))))))))))))))));
    ComposerTop__DOT__tl2axi4__DOT___GEN_110 = ((0x2aU 
                                                 == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                 ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_43)
                                                 : 
                                                ((0x29U 
                                                  == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                  ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_42)
                                                  : 
                                                 ((0x28U 
                                                   == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                   ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_41)
                                                   : 
                                                  ((0x27U 
                                                    == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                    ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_40)
                                                    : 
                                                   ((0x26U 
                                                     == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                     ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_39)
                                                     : 
                                                    ((0x25U 
                                                      == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                      ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_38)
                                                      : 
                                                     ((0x24U 
                                                       == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                       ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_37)
                                                       : 
                                                      ((0x23U 
                                                        == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                        ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_36)
                                                        : 
                                                       ((0x22U 
                                                         == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                         ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_35)
                                                         : 
                                                        ((0x21U 
                                                          == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                          ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_34)
                                                          : 
                                                         ((0x20U 
                                                           == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                           ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_33)
                                                           : 
                                                          ((0x1fU 
                                                            == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                            ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_32)
                                                            : 
                                                           ((0x1eU 
                                                             == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                             ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_31)
                                                             : 
                                                            ((0x1dU 
                                                              == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                              ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_30)
                                                              : 
                                                             ((0x1cU 
                                                               == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                               ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_29)
                                                               : 
                                                              ((0x1bU 
                                                                == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_28)
                                                                : 
                                                               ((0x1aU 
                                                                 == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                 ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_27)
                                                                 : 
                                                                ((0x19U 
                                                                  == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                  ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_26)
                                                                  : 
                                                                 ((0x18U 
                                                                   == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                   ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_25)
                                                                   : 
                                                                  ((0x17U 
                                                                    == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                    ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_24)
                                                                    : 
                                                                   ((0x16U 
                                                                     == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                     ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_23)
                                                                     : (IData)(ComposerTop__DOT__tl2axi4__DOT___GEN_89))))))))))))))))))))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_30 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_14) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_30))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_31 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_14) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_31))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_32 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_15) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_32))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_33 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_15) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_33))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_34 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_16) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_34))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_35 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_16) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_35))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_36 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_17) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_36))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_37 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_17) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_37))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_38 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_18) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_38))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_39 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_18) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_39))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_40 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_19) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_40))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_41 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_19) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_41))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_42 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_20) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_42))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_43 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_20) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_43))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_44 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_21) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_44))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_45 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_21) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_45))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_46 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_22) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_46))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_47 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_22) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_47))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_48 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_23) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_48))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_49 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_23) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_49))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_50 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_24) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_50))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_51 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_24) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_51))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_52 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_25) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_52))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_53 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_25) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_53))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_54 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_26) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_54))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_55 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_26) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_55))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_56 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_27) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_56))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_57 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_27) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_57))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_58 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_28) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_58))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_59 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_28) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_59))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_60 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_29) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_60))));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_61 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_29) 
           | (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_sizeOH_shiftAmount)) 
                        >> 1U) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_61))));
    vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT__do_deq 
        = ((~ (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0__DOT__empty)) 
           & ((IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_ready) 
              & (IData)(vlSelf->ComposerTop__DOT__axi4xbar__DOT__awOut_0_io_deq_valid)));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___readys_readys_T_2 
        = (3U & (((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__readys_unready) 
                  >> 2U) & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__readys_unready)));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__addr_func_live 
        = ((0U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__ram_inst_funct_io_deq_bits_MPORT_data)) 
           & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cmd__DOT__do_deq));
    ComposerTop__DOT__acc__DOT__crossbarModule__DOT___T_69 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_3)
            ? (((QData)((IData)(((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_61) 
                                   | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_61) 
                                      & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                  << 0x1fU) | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_61) 
                                                 | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                    & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_61))) 
                                                << 0x1eU) 
                                               | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_60) 
                                                    | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_60) 
                                                       & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                   << 0x1dU) 
                                                  | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_60) 
                                                       | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                          & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_60))) 
                                                      << 0x1cU) 
                                                     | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_59) 
                                                          | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_59) 
                                                             & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                         << 0x1bU) 
                                                        | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_59) 
                                                             | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_59))) 
                                                            << 0x1aU) 
                                                           | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_58) 
                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_58) 
                                                                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                               << 0x19U) 
                                                              | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_58) 
                                                                   | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                      & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_58))) 
                                                                  << 0x18U) 
                                                                 | (((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_57) 
                                                                       | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_57) 
                                                                          & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                                      << 0x17U) 
                                                                     | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_57) 
                                                                          | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                             & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_57))) 
                                                                         << 0x16U) 
                                                                        | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_56) 
                                                                             | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_56) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                                            << 0x15U) 
                                                                           | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_56) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_56))) 
                                                                               << 0x14U) 
                                                                              | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_55) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_55) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 0x13U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_55) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_55))) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_54) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_54) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_54) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_54))) 
                                                                                << 0x10U)))))))) 
                                                                    | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_53) 
                                                                         | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_53) 
                                                                            & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                                        << 0xfU) 
                                                                       | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_53) 
                                                                            | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                               & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_53))) 
                                                                           << 0xeU) 
                                                                          | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_52) 
                                                                               | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_52) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                                              << 0xdU) 
                                                                             | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_52) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_52))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_51) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_51) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_51) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_51))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_50) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_50) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_50) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_50))) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_49) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_49) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_49) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_49))) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_48) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_48) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_48) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_48))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_47) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_47) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_47) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_47))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_46) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_46) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_46) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_46))))))))))))))))))))))))))))) 
                << 0x20U) | (QData)((IData)(((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_45) 
                                               | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_45) 
                                                  & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                              << 0x1fU) 
                                             | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_45) 
                                                  | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                     & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_45))) 
                                                 << 0x1eU) 
                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_44) 
                                                     | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_44) 
                                                        & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                    << 0x1dU) 
                                                   | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_44) 
                                                        | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                           & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_44))) 
                                                       << 0x1cU) 
                                                      | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_43) 
                                                           | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_43) 
                                                              & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                          << 0x1bU) 
                                                         | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_43) 
                                                              | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                 & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_43))) 
                                                             << 0x1aU) 
                                                            | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_42) 
                                                                 | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_42) 
                                                                    & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                                << 0x19U) 
                                                               | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_42) 
                                                                    | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                       & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_42))) 
                                                                   << 0x18U) 
                                                                  | (((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_41) 
                                                                        | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_41) 
                                                                           & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                                       << 0x17U) 
                                                                      | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_41) 
                                                                           | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                              & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_41))) 
                                                                          << 0x16U) 
                                                                         | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_40) 
                                                                              | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_40) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                                             << 0x15U) 
                                                                            | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_40) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_40))) 
                                                                                << 0x14U) 
                                                                               | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_39) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_39) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 0x13U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_39) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_39))) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_38) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_38) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_38) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_38))) 
                                                                                << 0x10U)))))))) 
                                                                     | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_37) 
                                                                          | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_37) 
                                                                             & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                                         << 0xfU) 
                                                                        | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_37) 
                                                                             | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_37))) 
                                                                            << 0xeU) 
                                                                           | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_36) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_36) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                                               << 0xdU) 
                                                                              | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_36) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_36))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_35) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_35) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_35) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_35))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_34) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_34) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_34) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_34))) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_33) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_33) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_33) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_33))) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_32) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_32) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_32) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_32))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_31) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_31) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_31) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_31))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_30) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_30) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_acc_30) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__x1_a_bits_a_mask_eq_30))))))))))))))))))))))))))))))
            : 0ULL);
    ComposerTop__DOT__acc__DOT__crossbarModule__DOT___T_68 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_2)
            ? (((QData)((IData)(((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_61) 
                                   | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_61) 
                                      & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                  << 0x1fU) | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_61) 
                                                 | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                    & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_61))) 
                                                << 0x1eU) 
                                               | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_60) 
                                                    | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_60) 
                                                       & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                   << 0x1dU) 
                                                  | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_60) 
                                                       | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                          & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_60))) 
                                                      << 0x1cU) 
                                                     | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_59) 
                                                          | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_59) 
                                                             & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                         << 0x1bU) 
                                                        | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_59) 
                                                             | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_59))) 
                                                            << 0x1aU) 
                                                           | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_58) 
                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_58) 
                                                                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                               << 0x19U) 
                                                              | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_58) 
                                                                   | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                      & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_58))) 
                                                                  << 0x18U) 
                                                                 | (((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_57) 
                                                                       | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_57) 
                                                                          & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                                      << 0x17U) 
                                                                     | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_57) 
                                                                          | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                             & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_57))) 
                                                                         << 0x16U) 
                                                                        | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_56) 
                                                                             | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_56) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                                            << 0x15U) 
                                                                           | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_56) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_56))) 
                                                                               << 0x14U) 
                                                                              | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_55) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_55) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 0x13U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_55) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_55))) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_54) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_54) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_54) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_54))) 
                                                                                << 0x10U)))))))) 
                                                                    | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_53) 
                                                                         | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_53) 
                                                                            & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                                        << 0xfU) 
                                                                       | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_53) 
                                                                            | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                               & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_53))) 
                                                                           << 0xeU) 
                                                                          | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_52) 
                                                                               | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_52) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                                              << 0xdU) 
                                                                             | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_52) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_52))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_51) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_51) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_51) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_51))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_50) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_50) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_50) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_50))) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_49) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_49) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_49) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_49))) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_48) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_48) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_48) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_48))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_47) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_47) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_47) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_47))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_46) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_46) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_46) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_46))))))))))))))))))))))))))))) 
                << 0x20U) | (QData)((IData)(((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_45) 
                                               | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_45) 
                                                  & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                              << 0x1fU) 
                                             | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_45) 
                                                  | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                     & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_45))) 
                                                 << 0x1eU) 
                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_44) 
                                                     | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_44) 
                                                        & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                    << 0x1dU) 
                                                   | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_44) 
                                                        | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                           & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_44))) 
                                                       << 0x1cU) 
                                                      | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_43) 
                                                           | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_43) 
                                                              & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                          << 0x1bU) 
                                                         | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_43) 
                                                              | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                 & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_43))) 
                                                             << 0x1aU) 
                                                            | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_42) 
                                                                 | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_42) 
                                                                    & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                                << 0x19U) 
                                                               | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_42) 
                                                                    | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                       & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_42))) 
                                                                   << 0x18U) 
                                                                  | (((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_41) 
                                                                        | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_41) 
                                                                           & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                                       << 0x17U) 
                                                                      | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_41) 
                                                                           | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                              & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_41))) 
                                                                          << 0x16U) 
                                                                         | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_40) 
                                                                              | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_40) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                                             << 0x15U) 
                                                                            | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_40) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_40))) 
                                                                                << 0x14U) 
                                                                               | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_39) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_39) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 0x13U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_39) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_39))) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_38) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_38) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_38) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_38))) 
                                                                                << 0x10U)))))))) 
                                                                     | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_37) 
                                                                          | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_37) 
                                                                             & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                                         << 0xfU) 
                                                                        | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_37) 
                                                                             | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_37))) 
                                                                            << 0xeU) 
                                                                           | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_36) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_36) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                                               << 0xdU) 
                                                                              | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_36) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_36))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_35) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_35) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_35) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_35))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_34) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_34) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_34) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_34))) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_33) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_33) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_33) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_33))) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_32) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_32) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_32) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_32))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_31) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_31) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_31) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_31))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_30) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_30) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_acc_30) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__x1_a_bits_a_mask_eq_30))))))))))))))))))))))))))))))
            : 0ULL);
    ComposerTop__DOT__tl2axi4__DOT___GEN_64 = ((0x3eU 
                                                == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                ? 0x3eU
                                                : (
                                                   (0x3dU 
                                                    == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                    ? 0x3dU
                                                    : 
                                                   ((0x3cU 
                                                     == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                     ? 0x3cU
                                                     : 
                                                    ((0x3bU 
                                                      == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                      ? 0x3bU
                                                      : 
                                                     ((0x3aU 
                                                       == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                       ? 0x3aU
                                                       : 
                                                      ((0x39U 
                                                        == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                        ? 0x39U
                                                        : 
                                                       ((0x38U 
                                                         == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                         ? 0x38U
                                                         : 
                                                        ((0x37U 
                                                          == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                          ? 0x37U
                                                          : 
                                                         ((0x36U 
                                                           == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                           ? 0x36U
                                                           : 
                                                          ((0x35U 
                                                            == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                            ? 0x35U
                                                            : 
                                                           ((0x34U 
                                                             == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                             ? 0x34U
                                                             : 
                                                            ((0x33U 
                                                              == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                              ? 0x33U
                                                              : 
                                                             ((0x32U 
                                                               == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                               ? 0x32U
                                                               : 
                                                              ((0x31U 
                                                                == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                ? 0x31U
                                                                : 
                                                               ((0x30U 
                                                                 == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                 ? 0x30U
                                                                 : 
                                                                ((0x2fU 
                                                                  == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                  ? 0x2fU
                                                                  : 
                                                                 ((0x2eU 
                                                                   == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                   ? 0x2eU
                                                                   : 
                                                                  ((0x2dU 
                                                                    == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                    ? 0x2dU
                                                                    : 
                                                                   ((0x2cU 
                                                                     == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                     ? 0x2cU
                                                                     : 
                                                                    ((0x2bU 
                                                                      == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                      ? 0x2bU
                                                                      : 
                                                                     ((0x2aU 
                                                                       == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                       ? 0x2aU
                                                                       : (IData)(ComposerTop__DOT__tl2axi4__DOT___GEN_43))))))))))))))))))))));
    ComposerTop__DOT__tl2axi4__DOT___GEN_131 = ((0x3fU 
                                                 == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                 ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_64)
                                                 : 
                                                ((0x3eU 
                                                  == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                  ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_63)
                                                  : 
                                                 ((0x3dU 
                                                   == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                   ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_62)
                                                   : 
                                                  ((0x3cU 
                                                    == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                    ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_61)
                                                    : 
                                                   ((0x3bU 
                                                     == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                     ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_60)
                                                     : 
                                                    ((0x3aU 
                                                      == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                      ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_59)
                                                      : 
                                                     ((0x39U 
                                                       == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                       ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_58)
                                                       : 
                                                      ((0x38U 
                                                        == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                        ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_57)
                                                        : 
                                                       ((0x37U 
                                                         == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                         ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_56)
                                                         : 
                                                        ((0x36U 
                                                          == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                          ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_55)
                                                          : 
                                                         ((0x35U 
                                                           == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                           ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_54)
                                                           : 
                                                          ((0x34U 
                                                            == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                            ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_53)
                                                            : 
                                                           ((0x33U 
                                                             == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                             ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_52)
                                                             : 
                                                            ((0x32U 
                                                              == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                              ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_51)
                                                              : 
                                                             ((0x31U 
                                                               == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                               ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_50)
                                                               : 
                                                              ((0x30U 
                                                                == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_49)
                                                                : 
                                                               ((0x2fU 
                                                                 == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                 ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_48)
                                                                 : 
                                                                ((0x2eU 
                                                                  == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                  ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_47)
                                                                  : 
                                                                 ((0x2dU 
                                                                   == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                   ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_46)
                                                                   : 
                                                                  ((0x2cU 
                                                                    == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                    ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_45)
                                                                    : 
                                                                   ((0x2bU 
                                                                     == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                                                     ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_44)
                                                                     : (IData)(ComposerTop__DOT__tl2axi4__DOT___GEN_110))))))))))))))))))))));
    ComposerTop__DOT__acc__DOT__crossbarModule__DOT___T_67 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_1)
            ? (((QData)((IData)(((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_61) 
                                   | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_61) 
                                      & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                  << 0x1fU) | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_61) 
                                                 | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                    & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_61))) 
                                                << 0x1eU) 
                                               | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_60) 
                                                    | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_60) 
                                                       & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                   << 0x1dU) 
                                                  | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_60) 
                                                       | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                          & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_60))) 
                                                      << 0x1cU) 
                                                     | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_59) 
                                                          | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_59) 
                                                             & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                         << 0x1bU) 
                                                        | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_59) 
                                                             | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_59))) 
                                                            << 0x1aU) 
                                                           | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_58) 
                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_58) 
                                                                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                               << 0x19U) 
                                                              | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_58) 
                                                                   | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                      & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_58))) 
                                                                  << 0x18U) 
                                                                 | (((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_57) 
                                                                       | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_57) 
                                                                          & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                                      << 0x17U) 
                                                                     | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_57) 
                                                                          | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                             & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_57))) 
                                                                         << 0x16U) 
                                                                        | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_56) 
                                                                             | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_56) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                                            << 0x15U) 
                                                                           | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_56) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_56))) 
                                                                               << 0x14U) 
                                                                              | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_55) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_55) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                                                << 0x13U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_55) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_55))) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_54) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_54) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_54) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_54))) 
                                                                                << 0x10U)))))))) 
                                                                    | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_53) 
                                                                         | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_53) 
                                                                            & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                                        << 0xfU) 
                                                                       | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_53) 
                                                                            | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                               & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_53))) 
                                                                           << 0xeU) 
                                                                          | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_52) 
                                                                               | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_52) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                                              << 0xdU) 
                                                                             | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_52) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_52))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_51) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_51) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_51) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_51))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_50) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_50) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_50) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_50))) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_49) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_49) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_49) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_49))) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_48) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_48) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_48) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_48))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_47) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_47) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_47) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_47))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_46) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_46) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_46) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_46))))))))))))))))))))))))))))) 
                << 0x20U) | (QData)((IData)(((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_45) 
                                               | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_45) 
                                                  & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                              << 0x1fU) 
                                             | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_45) 
                                                  | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                     & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_45))) 
                                                 << 0x1eU) 
                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_44) 
                                                     | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_44) 
                                                        & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                    << 0x1dU) 
                                                   | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_44) 
                                                        | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                           & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_44))) 
                                                       << 0x1cU) 
                                                      | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_43) 
                                                           | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_43) 
                                                              & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                          << 0x1bU) 
                                                         | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_43) 
                                                              | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                 & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_43))) 
                                                             << 0x1aU) 
                                                            | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_42) 
                                                                 | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_42) 
                                                                    & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                                << 0x19U) 
                                                               | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_42) 
                                                                    | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                       & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_42))) 
                                                                   << 0x18U) 
                                                                  | (((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_41) 
                                                                        | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_41) 
                                                                           & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                                       << 0x17U) 
                                                                      | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_41) 
                                                                           | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                              & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_41))) 
                                                                          << 0x16U) 
                                                                         | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_40) 
                                                                              | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_40) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                                             << 0x15U) 
                                                                            | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_40) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_40))) 
                                                                                << 0x14U) 
                                                                               | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_39) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_39) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                                                << 0x13U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_39) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_39))) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_38) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_38) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_38) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_38))) 
                                                                                << 0x10U)))))))) 
                                                                     | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_37) 
                                                                          | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_37) 
                                                                             & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                                         << 0xfU) 
                                                                        | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_37) 
                                                                             | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_37))) 
                                                                            << 0xeU) 
                                                                           | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_36) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_36) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                                               << 0xdU) 
                                                                              | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_36) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_36))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_35) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_35) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_35) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_35))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_34) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_34) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_34) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_34))) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_33) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_33) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_33) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_33))) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_32) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_32) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_32) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_32))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_31) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_31) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_31) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_31))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_30) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_30) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_acc_30) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__x1_a_bits_a_mask_eq_30))))))))))))))))))))))))))))))
            : 0ULL);
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___readys_mask_T 
        = ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___readys_readys_T_2)) 
           & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__readys_valid));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__earlyWinner_0 
        = ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___readys_readys_T_2)) 
           & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl_auto_in_ar_valid));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__earlyWinner_1 
        = ((~ ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___readys_readys_T_2) 
               >> 1U)) & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__w_out_valid));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__out_ready 
        = ((0U == (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__crFile__DOT__state)) 
           & ((0U == (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__beatsLeft))
               ? (~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___readys_readys_T_2))
               : (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__state_0)));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__out_1_ready 
        = ((0U == (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__crFile__DOT__state)) 
           & ((0U == (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__beatsLeft))
               ? (~ ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___readys_readys_T_2) 
                     >> 1U)) : (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__state_1)));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data 
        = ((0x41U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
            ? 0x41U : ((0x40U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                        ? 0x40U : ((0x3fU == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                                    ? 0x3fU : (IData)(ComposerTop__DOT__tl2axi4__DOT___GEN_64))));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT__stall = 
        ((~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__counter)) 
         & ((0x41U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
             ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_66)
             : ((0x40U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source))
                 ? (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_65)
                 : (IData)(ComposerTop__DOT__tl2axi4__DOT___GEN_131))));
    vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_mask 
        = ((((ComposerTop__DOT__acc__DOT__crossbarModule__DOT___T_66 
              | ComposerTop__DOT__acc__DOT__crossbarModule__DOT___T_67) 
             | ComposerTop__DOT__acc__DOT__crossbarModule__DOT___T_68) 
            | ComposerTop__DOT__acc__DOT__crossbarModule__DOT___T_69) 
           | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__muxStateEarly_4)
               ? (((QData)((IData)(((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_61) 
                                      | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_61) 
                                         & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                     << 0x1fU) | ((
                                                   ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_61) 
                                                    | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                       & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_61))) 
                                                   << 0x1eU) 
                                                  | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_60) 
                                                       | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_60) 
                                                          & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                      << 0x1dU) 
                                                     | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_60) 
                                                          | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                             & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_60))) 
                                                         << 0x1cU) 
                                                        | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_59) 
                                                             | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_59) 
                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                            << 0x1bU) 
                                                           | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_59) 
                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_59))) 
                                                               << 0x1aU) 
                                                              | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_58) 
                                                                   | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_58) 
                                                                      & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                                  << 0x19U) 
                                                                 | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_58) 
                                                                      | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                         & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_58))) 
                                                                     << 0x18U) 
                                                                    | (((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_57) 
                                                                          | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_57) 
                                                                             & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                                         << 0x17U) 
                                                                        | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_57) 
                                                                             | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_57))) 
                                                                            << 0x16U) 
                                                                           | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_56) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_56) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                                               << 0x15U) 
                                                                              | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_56) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_56))) 
                                                                                << 0x14U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_55) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_55) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                                                << 0x13U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_55) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_55))) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_54) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_54) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_54) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_54))) 
                                                                                << 0x10U)))))))) 
                                                                       | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_53) 
                                                                            | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_53) 
                                                                               & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                                           << 0xfU) 
                                                                          | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_53) 
                                                                               | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_53))) 
                                                                              << 0xeU) 
                                                                             | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_52) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_52) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_52) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_52))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_51) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_51) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_51) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_51))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_50) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_50) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_50) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_50))) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_49) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_49) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_49) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_49))) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_48) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_48) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_48) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_48))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_47) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_47) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_47) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_47))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_46) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_46) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_46) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_46))))))))))))))))))))))))))))) 
                   << 0x20U) | (QData)((IData)(((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_45) 
                                                  | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_45) 
                                                     & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                 << 0x1fU) 
                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_45) 
                                                     | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                        & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_45))) 
                                                    << 0x1eU) 
                                                   | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_44) 
                                                        | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_44) 
                                                           & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                       << 0x1dU) 
                                                      | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_44) 
                                                           | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                              & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_44))) 
                                                          << 0x1cU) 
                                                         | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_43) 
                                                              | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_43) 
                                                                 & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                             << 0x1bU) 
                                                            | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_43) 
                                                                 | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                    & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_43))) 
                                                                << 0x1aU) 
                                                               | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_42) 
                                                                    | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_42) 
                                                                       & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                                   << 0x19U) 
                                                                  | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_42) 
                                                                       | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                          & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_42))) 
                                                                      << 0x18U) 
                                                                     | (((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_41) 
                                                                           | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_41) 
                                                                              & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                                          << 0x17U) 
                                                                         | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_41) 
                                                                              | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_41))) 
                                                                             << 0x16U) 
                                                                            | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_40) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_40) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                                                << 0x15U) 
                                                                               | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_40) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_40))) 
                                                                                << 0x14U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_39) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_39) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                                                << 0x13U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_39) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_39))) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_38) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_38) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_38) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_38))) 
                                                                                << 0x10U)))))))) 
                                                                        | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_37) 
                                                                             | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_37) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                                            << 0xfU) 
                                                                           | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_37) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_37))) 
                                                                               << 0xeU) 
                                                                              | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_36) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_36) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_36) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_36))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_35) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_35) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_35) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_35))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_34) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_34) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_34) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_34))) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_33) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_33) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_33) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_33))) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_32) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_32) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_32) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_32))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_31) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_31) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_31) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_31))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_30) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_30) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_acc_30) 
                                                                                | ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__totalTx_memoryAddress)) 
                                                                                & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__x1_a_bits_a_mask_eq_30))))))))))))))))))))))))))))))
               : 0ULL));
    if ((0U == (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__beatsLeft))) {
        vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__muxStateEarly_0 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__earlyWinner_0;
        vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__muxStateEarly_1 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__earlyWinner_1;
    } else {
        vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__muxStateEarly_0 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__state_0;
        vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__muxStateEarly_1 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__state_1;
    }
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___T_12 
        = ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__out_ready) 
           & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl_auto_in_ar_valid));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank_auto_in_ar_ready 
        = ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__out_ready) 
           & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT___GEN_1));
    ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT____VdfgTmp_h470c5fef__0 
        = ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_io_deq_valid) 
           & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__out_ready));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl_auto_in_w_ready 
        = ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__out_1_ready) 
           & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl_auto_in_aw_valid));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__bundleIn_0_aw_ready 
        = ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__out_1_ready) 
           & ((1U == (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__w_todo)) 
              & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__x1_w_valid)));
    ComposerTop__DOT__tl2axi4__DOT___out_arw_valid_T_1 
        = ((~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__stall)) 
           & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__out_5_0_a_earlyValid));
    vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_ready 
        = (1U & ((~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__stall)) 
                 & ((4U & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_opcode))
                     ? (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full))
                     : ((~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__deq__DOT__maybe_full)) 
                        & (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full))))));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__crFile_auto_in_a_bits_opcode 
        = (((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__muxStateEarly_0)
             ? 4U : 0U) | ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__muxStateEarly_1)
                            ? 1U : 0U));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT___T_2 
        = ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank_auto_in_ar_ready) 
           & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_io_deq_valid));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_io_deq_ready 
        = ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank_auto_in_ar_ready) 
           & (0U == (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__len)));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_io_enq_valid 
        = ((IData)(ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT____VdfgTmp_h470c5fef__0) 
           & ((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_io_deq_bits_id)));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1_io_enq_valid 
        = ((IData)(ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT____VdfgTmp_h470c5fef__0) 
           & (((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_io_deq_bits_id)) 
              >> 1U));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_w_deq_io_deq_ready 
        = ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl_auto_in_w_ready) 
           & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT___x1_w_valid_T_1));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT___T_36 
        = ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__bundleIn_0_aw_ready) 
           & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl_auto_in_aw_valid));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank_auto_in_aw_ready 
        = ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__bundleIn_0_aw_ready) 
           & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT___GEN_9));
    ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT____VdfgTmp_h6aec78c2__0 
        = ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__x1_aw_valid) 
           & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi42tl__DOT__bundleIn_0_aw_ready));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT__deq_io_enq_valid 
        = ((IData)(ComposerTop__DOT__tl2axi4__DOT___out_arw_valid_T_1) 
           & ((~ ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_opcode) 
                  >> 2U)) & (~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full))));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq_io_enq_valid 
        = ((IData)(ComposerTop__DOT__tl2axi4__DOT___out_arw_valid_T_1) 
           & ((~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__deq__DOT__maybe_full)) 
              | ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_opcode) 
                 >> 2U)));
    vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__latch 
        = ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__beatsLeft)) 
           & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_ready));
    vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT___beatsLeft_T_2 
        = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_ready) 
           & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__out_5_0_a_earlyValid));
    ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___T_15 
        = (((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_ready) 
            & ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__beatsLeft)
                ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__state_0)
                : (~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT___readys_readys_T_2)))) 
           & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1_tl_out_a_valid));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___T_13 
        = (((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_ready) 
            & ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__beatsLeft)
                ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__state_2)
                : (~ ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT___readys_readys_T_2) 
                      >> 2U)))) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__mem_out_a_valid));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___T_13 
        = (((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_ready) 
            & ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__beatsLeft)
                ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__state_3)
                : (~ ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT___readys_readys_T_2) 
                      >> 3U)))) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__mem_out_a_valid));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___T_13 
        = (((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_ready) 
            & ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__beatsLeft)
                ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__state_4)
                : (~ ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT___readys_readys_T_2) 
                      >> 4U)))) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__mem_out_a_valid));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___T_13 
        = (((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_ready) 
            & ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__beatsLeft)
                ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT__state_1)
                : (~ ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule__DOT___readys_readys_T_2) 
                      >> 1U)))) & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__mem_out_a_valid));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__crFile__DOT___GEN_0 
        = (((0U == (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__crFile_auto_in_a_bits_opcode)) 
            | (1U == (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__crFile_auto_in_a_bits_opcode)))
            ? 3U : (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__crFile__DOT__state));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT___GEN_4 
        = (0x1ffU & ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT___T_2)
                      ? ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__len) 
                         - (IData)(1U)) : (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__r_len)));
    if (vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__maybe_full) {
        vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__ram_id_MPORT_en 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT___do_enq_T;
        vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__do_deq 
            = ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_io_deq_ready) 
               & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_io_deq_valid));
    } else {
        vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__ram_id_MPORT_en 
            = ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_io_deq_ready)) 
               & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT___do_enq_T));
        vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq__DOT__do_deq = 0U;
    }
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_io_deq_valid 
        = (1U & ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue__DOT__empty)) 
                 | (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_io_enq_valid)));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue__DOT__full)) 
           & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_io_enq_valid));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1_io_deq_valid 
        = (1U & ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1__DOT__empty)) 
                 | (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1_io_enq_valid)));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1__DOT__full)) 
           & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1_io_enq_valid));
    if (vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full) {
        vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_w_deq__DOT__ram_data_MPORT_en 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_w_deq__DOT___do_enq_T;
        vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_w_deq__DOT__do_deq 
            = ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_w_deq_io_deq_ready) 
               & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_w_deq_io_deq_valid));
    } else {
        vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_w_deq__DOT__ram_data_MPORT_en 
            = ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_w_deq_io_deq_ready)) 
               & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_w_deq__DOT___do_enq_T));
        vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_w_deq__DOT__do_deq = 0U;
    }
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_aw_ready 
        = ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank_auto_in_aw_ready) 
           & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT___in_aw_ready_T));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2_io_enq_valid 
        = ((IData)(ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT____VdfgTmp_h6aec78c2__0) 
           & ((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1_io_deq_bits_id)));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_3_io_enq_valid 
        = ((IData)(ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT____VdfgTmp_h6aec78c2__0) 
           & (((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1_io_deq_bits_id)) 
              >> 1U));
    vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__ram_data_MPORT_en 
        = ((~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__full)) 
           & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__deq_io_enq_valid) 
              | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__deq__DOT__maybe_full)));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT__deq__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__deq__DOT__maybe_full)) 
           & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__deq_io_enq_valid));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_valid 
        = ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq_io_enq_valid) 
           | (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)) 
           & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq_io_enq_valid));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___GEN_54 
        = (0xfffffffU & (vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__addr 
                         + (IData)(ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___T_15)));
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___GEN_56 
        = ((IData)(ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___T_15)
            ? 0U : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__dataValid));
    if ((3U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__state))) {
        if (ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___T_15) {
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___GEN_73 
                = ((0U == vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__req_len)
                    ? 0U : 1U);
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___GEN_68 
                = (1U & ((~ (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__allocatedTransaction)) 
                         | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___GEN_2)));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___GEN_69 
                = ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__allocatedTransaction) 
                   | (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___GEN_3));
        } else {
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___GEN_73 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__state;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___GEN_68 
                = (1U & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___GEN_2));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___GEN_69 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___GEN_3;
        }
    } else {
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___GEN_73 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__state;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___GEN_68 
            = (1U & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___GEN_2));
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___GEN_69 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___GEN_3;
    }
    vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___GEN_126 
        = (0x1fU & ((0U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__state))
                     ? ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___T_2)
                         ? (IData)((vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__tx_addr_start 
                                    >> 2U)) : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__idx))
                     : (0xfU & ((1U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__state))
                                 ? ((IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__idx) 
                                    + (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___T_9))
                                 : ((2U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__state))
                                     ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__idx)
                                     : ((3U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__state))
                                         ? ((IData)(ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT___T_15)
                                             ? 0U : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__idx))
                                         : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__myWriters_WriteChannel_1__DOT__idx)))))));
    if ((0U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__mem_tx_state))) {
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_171 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_0;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_172 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_1;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_173 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_2;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_174 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_3;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_175 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_4;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_176 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_5;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_177 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_6;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_178 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_7;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_179 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_8;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_180 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_9;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_181 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_10;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_182 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_11;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_183 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_12;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_184 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_13;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_185 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_14;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_186 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_15;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_203 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_0_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_204 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_1_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_205 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_2_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_206 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_3_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_207 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_4_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_208 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_5_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_209 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_6_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_210 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_7_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_211 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_8_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_212 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_9_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_213 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_10_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_214 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_11_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_215 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_12_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_216 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_13_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_217 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_14_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_218 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_15_memoryLength;
    } else if ((1U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__mem_tx_state))) {
        if (vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___T_13) {
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_171 
                = ((0U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_0));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_172 
                = ((1U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_1));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_173 
                = ((2U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_2));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_174 
                = ((3U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_3));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_175 
                = ((4U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_4));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_176 
                = ((5U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_5));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_177 
                = ((6U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_6));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_178 
                = ((7U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_7));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_179 
                = ((8U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_8));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_180 
                = ((9U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_9));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_181 
                = ((0xaU != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_10));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_182 
                = ((0xbU != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_11));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_183 
                = ((0xcU != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_12));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_184 
                = ((0xdU != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_13));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_185 
                = ((0xeU != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_14));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_186 
                = ((0xfU != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_15));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_203 
                = ((0U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_0_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_204 
                = ((1U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_1_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_205 
                = ((2U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_2_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_206 
                = ((3U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_3_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_207 
                = ((4U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_4_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_208 
                = ((5U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_5_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_209 
                = ((6U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_6_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_210 
                = ((7U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_7_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_211 
                = ((8U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_8_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_212 
                = ((9U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_9_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_213 
                = ((0xaU == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_10_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_214 
                = ((0xbU == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_11_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_215 
                = ((0xcU == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_12_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_216 
                = ((0xdU == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_13_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_217 
                = ((0xeU == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_14_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_218 
                = ((0xfU == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_15_memoryLength));
        } else {
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_171 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_0;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_172 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_1;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_173 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_2;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_174 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_3;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_175 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_4;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_176 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_5;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_177 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_6;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_178 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_7;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_179 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_8;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_180 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_9;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_181 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_10;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_182 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_11;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_183 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_12;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_184 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_13;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_185 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_14;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_186 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_15;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_203 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_0_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_204 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_1_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_205 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_2_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_206 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_3_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_207 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_4_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_208 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_5_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_209 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_6_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_210 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_7_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_211 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_8_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_212 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_9_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_213 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_10_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_214 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_11_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_215 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_12_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_216 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_13_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_217 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_14_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_218 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_15_memoryLength;
        }
    } else {
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_171 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_0;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_172 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_1;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_173 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_2;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_174 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_3;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_175 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_4;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_176 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_5;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_177 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_6;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_178 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_7;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_179 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_8;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_180 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_9;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_181 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_10;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_182 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_11;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_183 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_12;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_184 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_13;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_185 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_14;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_186 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__reqIdleBits_15;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_203 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_0_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_204 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_1_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_205 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_2_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_206 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_3_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_207 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_4_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_208 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_5_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_209 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_6_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_210 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_7_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_211 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_8_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_212 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_9_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_213 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_10_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_214 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_11_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_215 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_12_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_216 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_13_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_217 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_14_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT___GEN_218 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__halfNonBonded__DOT__req_cache_15_memoryLength;
    }
    if ((0U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__mem_tx_state))) {
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_171 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_0;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_172 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_1;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_173 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_2;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_174 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_3;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_175 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_4;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_176 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_5;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_177 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_6;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_178 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_7;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_179 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_8;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_180 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_9;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_181 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_10;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_182 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_11;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_183 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_12;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_184 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_13;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_185 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_14;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_186 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_15;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_203 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_0_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_204 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_1_memoryLength;
    } else if ((1U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__mem_tx_state))) {
        if (vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___T_13) {
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_171 
                = ((0U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_0));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_172 
                = ((1U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_1));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_173 
                = ((2U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_2));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_174 
                = ((3U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_3));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_175 
                = ((4U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_4));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_176 
                = ((5U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_5));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_177 
                = ((6U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_6));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_178 
                = ((7U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_7));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_179 
                = ((8U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_8));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_180 
                = ((9U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_9));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_181 
                = ((0xaU != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_10));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_182 
                = ((0xbU != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_11));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_183 
                = ((0xcU != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_12));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_184 
                = ((0xdU != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_13));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_185 
                = ((0xeU != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_14));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_186 
                = ((0xfU != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_15));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_203 
                = ((0U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_0_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_204 
                = ((1U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_1_memoryLength));
        } else {
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_171 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_0;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_172 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_1;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_173 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_2;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_174 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_3;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_175 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_4;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_176 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_5;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_177 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_6;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_178 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_7;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_179 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_8;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_180 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_9;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_181 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_10;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_182 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_11;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_183 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_12;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_184 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_13;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_185 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_14;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_186 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_15;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_203 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_0_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_204 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_1_memoryLength;
        }
    } else {
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_171 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_0;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_172 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_1;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_173 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_2;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_174 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_3;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_175 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_4;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_176 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_5;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_177 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_6;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_178 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_7;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_179 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_8;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_180 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_9;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_181 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_10;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_182 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_11;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_183 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_12;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_184 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_13;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_185 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_14;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_186 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqIdleBits_15;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_203 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_0_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_204 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_1_memoryLength;
    }
    if (vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full) {
        vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_echo_tl_state_source_MPORT_data 
            = vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source
            [0U];
        vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_size_MPORT_data 
            = vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_size
            [0U];
        vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_id_MPORT_data 
            = vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id
            [0U];
        vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_en 
            = vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T;
    } else {
        vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_echo_tl_state_source_MPORT_data 
            = vlSelf->ComposerTop__DOT__acc__DOT__crossbarModule_auto_out_a_bits_source;
        vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_size_MPORT_data 
            = vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_size_MPORT_data;
        vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_id_MPORT_data 
            = vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data;
        vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_en 
            = ((~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_ready)) 
               & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T));
    }
    if ((0U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__mem_tx_state))) {
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_205 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_2_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_206 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_3_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_207 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_4_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_208 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_5_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_209 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_6_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_210 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_7_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_211 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_8_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_212 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_9_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_213 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_10_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_214 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_11_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_215 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_12_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_216 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_13_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_217 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_14_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_218 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_15_memoryLength;
    } else if ((1U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__mem_tx_state))) {
        if (vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___T_13) {
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_205 
                = ((2U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_2_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_206 
                = ((3U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_3_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_207 
                = ((4U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_4_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_208 
                = ((5U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_5_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_209 
                = ((6U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_6_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_210 
                = ((7U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_7_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_211 
                = ((8U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_8_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_212 
                = ((9U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_9_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_213 
                = ((0xaU == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_10_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_214 
                = ((0xbU == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_11_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_215 
                = ((0xcU == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_12_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_216 
                = ((0xdU == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_13_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_217 
                = ((0xeU == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_14_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_218 
                = ((0xfU == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_15_memoryLength));
        } else {
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_205 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_2_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_206 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_3_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_207 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_4_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_208 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_5_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_209 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_6_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_210 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_7_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_211 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_8_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_212 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_9_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_213 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_10_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_214 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_11_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_215 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_12_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_216 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_13_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_217 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_14_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_218 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_15_memoryLength;
        }
    } else {
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_205 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_2_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_206 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_3_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_207 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_4_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_208 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_5_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_209 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_6_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_210 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_7_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_211 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_8_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_212 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_9_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_213 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_10_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_214 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_11_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_215 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_12_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_216 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_13_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_217 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_14_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT___GEN_218 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__nonBonded__DOT__req_cache_15_memoryLength;
    }
    if ((0U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__mem_tx_state))) {
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_171 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_0;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_172 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_1;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_173 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_2;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_174 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_3;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_175 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_4;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_176 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_5;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_177 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_6;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_178 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_7;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_179 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_8;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_180 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_9;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_181 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_10;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_182 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_11;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_183 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_12;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_184 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_13;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_185 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_14;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_186 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_15;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_203 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_0_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_204 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_1_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_205 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_2_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_206 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_3_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_207 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_4_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_208 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_5_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_209 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_6_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_210 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_7_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_211 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_8_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_212 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_9_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_213 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_10_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_214 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_11_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_215 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_12_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_216 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_13_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_217 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_14_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_218 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_15_memoryLength;
    } else if ((1U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__mem_tx_state))) {
        if (vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___T_13) {
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_171 
                = ((0U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_0));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_172 
                = ((1U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_1));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_173 
                = ((2U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_2));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_174 
                = ((3U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_3));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_175 
                = ((4U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_4));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_176 
                = ((5U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_5));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_177 
                = ((6U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_6));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_178 
                = ((7U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_7));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_179 
                = ((8U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_8));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_180 
                = ((9U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_9));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_181 
                = ((0xaU != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_10));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_182 
                = ((0xbU != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_11));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_183 
                = ((0xcU != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_12));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_184 
                = ((0xdU != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_13));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_185 
                = ((0xeU != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_14));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_186 
                = ((0xfU != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_15));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_203 
                = ((0U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_0_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_204 
                = ((1U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_1_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_205 
                = ((2U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_2_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_206 
                = ((3U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_3_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_207 
                = ((4U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_4_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_208 
                = ((5U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_5_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_209 
                = ((6U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_6_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_210 
                = ((7U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_7_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_211 
                = ((8U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_8_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_212 
                = ((9U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_9_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_213 
                = ((0xaU == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_10_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_214 
                = ((0xbU == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_11_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_215 
                = ((0xcU == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_12_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_216 
                = ((0xdU == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_13_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_217 
                = ((0xeU == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_14_memoryLength));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_218 
                = ((0xfU == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqChosen))
                    ? (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT____VdfgTmp_hce842ef5__0)
                    : (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_15_memoryLength));
        } else {
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_171 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_0;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_172 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_1;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_173 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_2;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_174 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_3;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_175 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_4;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_176 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_5;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_177 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_6;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_178 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_7;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_179 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_8;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_180 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_9;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_181 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_10;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_182 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_11;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_183 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_12;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_184 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_13;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_185 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_14;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_186 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_15;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_203 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_0_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_204 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_1_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_205 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_2_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_206 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_3_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_207 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_4_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_208 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_5_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_209 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_6_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_210 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_7_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_211 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_8_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_212 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_9_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_213 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_10_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_214 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_11_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_215 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_12_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_216 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_13_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_217 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_14_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_218 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_15_memoryLength;
        }
    } else {
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_171 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_0;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_172 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_1;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_173 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_2;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_174 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_3;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_175 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_4;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_176 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_5;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_177 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_6;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_178 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_7;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_179 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_8;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_180 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_9;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_181 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_10;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_182 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_11;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_183 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_12;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_184 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_13;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_185 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_14;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_186 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__reqIdleBits_15;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_203 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_0_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_204 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_1_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_205 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_2_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_206 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_3_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_207 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_4_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_208 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_5_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_209 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_6_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_210 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_7_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_211 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_8_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_212 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_9_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_213 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_10_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_214 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_11_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_215 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_12_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_216 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_13_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_217 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_14_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT___GEN_218 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__solvated__DOT__req_cache_15_memoryLength;
    }
    if ((0U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__mem_tx_state))) {
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_171 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_0;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_172 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_1;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_173 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_2;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_174 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_3;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_175 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_4;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_176 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_5;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_177 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_6;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_178 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_7;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_179 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_8;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_180 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_9;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_181 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_10;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_182 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_11;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_183 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_12;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_184 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_13;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_185 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_14;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_186 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_15;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_187 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_0_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_203 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_0_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_188 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_1_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_204 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_1_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_189 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_2_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_205 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_2_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_190 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_3_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_206 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_3_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_191 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_4_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_207 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_4_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_192 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_5_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_208 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_5_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_193 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_6_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_209 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_6_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_194 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_7_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_210 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_7_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_195 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_8_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_211 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_8_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_196 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_9_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_212 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_9_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_197 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_10_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_213 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_10_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_198 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_11_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_214 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_11_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_199 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_12_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_215 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_12_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_200 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_13_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_216 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_13_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_201 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_14_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_217 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_14_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_202 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_15_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_218 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_15_memoryLength;
    } else if ((1U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__mem_tx_state))) {
        if (vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___T_13) {
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_171 
                = ((0U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_0));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_172 
                = ((1U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_1));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_173 
                = ((2U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_2));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_174 
                = ((3U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_3));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_175 
                = ((4U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_4));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_176 
                = ((5U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_5));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_177 
                = ((6U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_6));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_178 
                = ((7U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_7));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_179 
                = ((8U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_8));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_180 
                = ((9U != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_9));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_181 
                = ((0xaU != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_10));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_182 
                = ((0xbU != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_11));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_183 
                = ((0xcU != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_12));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_184 
                = ((0xdU != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_13));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_185 
                = ((0xeU != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_14));
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_186 
                = ((0xfU != (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen)) 
                   & (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_15));
            if ((0U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen))) {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_187 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_203 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT____VdfgTmp_hce842ef5__0;
            } else {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_187 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_0_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_203 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_0_memoryLength;
            }
            if ((1U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen))) {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_188 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_204 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT____VdfgTmp_hce842ef5__0;
            } else {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_188 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_1_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_204 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_1_memoryLength;
            }
            if ((2U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen))) {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_189 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_205 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT____VdfgTmp_hce842ef5__0;
            } else {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_189 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_2_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_205 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_2_memoryLength;
            }
            if ((3U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen))) {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_190 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_206 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT____VdfgTmp_hce842ef5__0;
            } else {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_190 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_3_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_206 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_3_memoryLength;
            }
            if ((4U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen))) {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_191 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_207 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT____VdfgTmp_hce842ef5__0;
            } else {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_191 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_4_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_207 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_4_memoryLength;
            }
            if ((5U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen))) {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_192 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_208 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT____VdfgTmp_hce842ef5__0;
            } else {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_192 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_5_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_208 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_5_memoryLength;
            }
            if ((6U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen))) {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_193 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_209 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT____VdfgTmp_hce842ef5__0;
            } else {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_193 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_6_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_209 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_6_memoryLength;
            }
            if ((7U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen))) {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_194 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_210 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT____VdfgTmp_hce842ef5__0;
            } else {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_194 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_7_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_210 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_7_memoryLength;
            }
            if ((8U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen))) {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_195 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_211 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT____VdfgTmp_hce842ef5__0;
            } else {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_195 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_8_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_211 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_8_memoryLength;
            }
            if ((9U == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen))) {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_196 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_212 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT____VdfgTmp_hce842ef5__0;
            } else {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_196 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_9_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_212 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_9_memoryLength;
            }
            if ((0xaU == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen))) {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_197 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_213 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT____VdfgTmp_hce842ef5__0;
            } else {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_197 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_10_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_213 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_10_memoryLength;
            }
            if ((0xbU == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen))) {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_198 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_214 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT____VdfgTmp_hce842ef5__0;
            } else {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_198 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_11_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_214 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_11_memoryLength;
            }
            if ((0xcU == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen))) {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_199 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_215 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT____VdfgTmp_hce842ef5__0;
            } else {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_199 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_12_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_215 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_12_memoryLength;
            }
            if ((0xdU == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen))) {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_200 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_216 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT____VdfgTmp_hce842ef5__0;
            } else {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_200 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_13_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_216 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_13_memoryLength;
            }
            if ((0xeU == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen))) {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_201 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_217 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT____VdfgTmp_hce842ef5__0;
            } else {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_201 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_14_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_217 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_14_memoryLength;
            }
            if ((0xfU == (IData)(vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqChosen))) {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_202 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__totalTx_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_218 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT____VdfgTmp_hce842ef5__0;
            } else {
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_202 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_15_scratchpadAddress;
                vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_218 
                    = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_15_memoryLength;
            }
        } else {
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_171 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_0;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_172 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_1;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_173 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_2;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_174 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_3;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_175 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_4;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_176 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_5;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_177 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_6;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_178 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_7;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_179 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_8;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_180 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_9;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_181 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_10;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_182 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_11;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_183 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_12;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_184 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_13;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_185 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_14;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_186 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_15;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_187 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_0_scratchpadAddress;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_203 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_0_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_188 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_1_scratchpadAddress;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_204 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_1_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_189 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_2_scratchpadAddress;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_205 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_2_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_190 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_3_scratchpadAddress;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_206 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_3_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_191 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_4_scratchpadAddress;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_207 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_4_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_192 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_5_scratchpadAddress;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_208 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_5_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_193 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_6_scratchpadAddress;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_209 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_6_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_194 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_7_scratchpadAddress;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_210 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_7_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_195 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_8_scratchpadAddress;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_211 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_8_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_196 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_9_scratchpadAddress;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_212 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_9_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_197 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_10_scratchpadAddress;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_213 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_10_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_198 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_11_scratchpadAddress;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_214 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_11_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_199 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_12_scratchpadAddress;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_215 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_12_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_200 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_13_scratchpadAddress;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_216 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_13_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_201 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_14_scratchpadAddress;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_217 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_14_memoryLength;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_202 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_15_scratchpadAddress;
            vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_218 
                = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_15_memoryLength;
        }
    } else {
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_171 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_0;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_172 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_1;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_173 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_2;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_174 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_3;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_175 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_4;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_176 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_5;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_177 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_6;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_178 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_7;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_179 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_8;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_180 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_9;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_181 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_10;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_182 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_11;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_183 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_12;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_184 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_13;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_185 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_14;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_186 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__reqIdleBits_15;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_187 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_0_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_203 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_0_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_188 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_1_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_204 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_1_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_189 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_2_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_205 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_2_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_190 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_3_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_206 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_3_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_191 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_4_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_207 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_4_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_192 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_5_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_208 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_5_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_193 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_6_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_209 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_6_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_194 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_7_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_210 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_7_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_195 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_8_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_211 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_8_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_196 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_9_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_212 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_9_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_197 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_10_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_213 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_10_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_198 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_11_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_214 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_11_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_199 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_12_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_215 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_12_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_200 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_13_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_216 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_13_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_201 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_14_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_217 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_14_memoryLength;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_202 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_15_scratchpadAddress;
        vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT___GEN_218 
            = vlSelf->ComposerTop__DOT__acc__DOT__acc__DOT__EnergyCalc__DOT__cores__DOT__data__DOT__req_cache_15_memoryLength;
    }
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue__DOT__do_deq 
        = ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue__DOT__empty)) 
           & ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_io_deq_ready) 
              & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_io_deq_valid)));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue__DOT__ram_extra_id_MPORT_en 
        = ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue__DOT__empty)
            ? ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_io_deq_ready)) 
               & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue__DOT___do_enq_T))
            : (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue__DOT___do_enq_T));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1__DOT__do_deq 
        = ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1__DOT__empty)) 
           & ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1_io_deq_ready) 
              & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1_io_deq_valid)));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1__DOT__ram_extra_id_MPORT_en 
        = ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1__DOT__empty)
            ? ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1_io_deq_ready)) 
               & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1__DOT___do_enq_T))
            : (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_1__DOT___do_enq_T));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT___T_5 
        = ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_aw_ready) 
           & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1_io_deq_valid));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1_io_deq_ready 
        = ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__in_aw_ready) 
           & (0U == (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__len_1)));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2_io_deq_valid 
        = (1U & ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2__DOT__empty)) 
                 | (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2_io_enq_valid)));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2__DOT__full)) 
           & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2_io_enq_valid));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_3_io_deq_valid 
        = (1U & ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_3__DOT__empty)) 
                 | (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_3_io_enq_valid)));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_3__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_3__DOT__full)) 
           & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_3_io_enq_valid));
    if (vlSelf->ComposerTop__DOT__tl2axi4__DOT__deq__DOT__maybe_full) {
        vlSelf->ComposerTop__DOT__tl2axi4__DOT__deq__DOT__do_deq 
            = vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__ram_data_MPORT_en;
        vlSelf->ComposerTop__DOT__tl2axi4__DOT__deq__DOT__ram_data_MPORT_en 
            = vlSelf->ComposerTop__DOT__tl2axi4__DOT__deq__DOT___do_enq_T;
    } else {
        vlSelf->ComposerTop__DOT__tl2axi4__DOT__deq__DOT__do_deq = 0U;
        vlSelf->ComposerTop__DOT__tl2axi4__DOT__deq__DOT__ram_data_MPORT_en 
            = ((IData)(vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_w_deq__DOT__full) 
               & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__deq__DOT___do_enq_T));
    }
    vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__ram_id_MPORT_en 
        = ((~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_aw_deq__DOT__full)) 
           & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_wen) 
              & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_valid)));
    vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__ram_id_MPORT_en 
        = ((~ (IData)(vlSelf->ComposerTop__DOT__axi4buf_1__DOT__x1_ar_deq__DOT__full)) 
           & ((~ (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_wen)) 
              & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_valid)));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_deq 
        = ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full) 
           & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_ready) 
              & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_valid)));
    __Vtemp_hd2b6a71a__0[0U] = 1U;
    __Vtemp_hd2b6a71a__0[1U] = 0U;
    __Vtemp_hd2b6a71a__0[2U] = 0U;
    __Vtemp_hd2b6a71a__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h79ac100e__0, __Vtemp_hd2b6a71a__0, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_262 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_66) 
                 + ((__Vtemp_h79ac100e__0[2U] >> 1U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__1[0U] = 1U;
    __Vtemp_hd2b6a71a__1[1U] = 0U;
    __Vtemp_hd2b6a71a__1[2U] = 0U;
    __Vtemp_hd2b6a71a__1[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h2d4da71b__0, __Vtemp_hd2b6a71a__1, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_258 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_65) 
                 + (__Vtemp_h2d4da71b__0[2U] & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__2[0U] = 1U;
    __Vtemp_hd2b6a71a__2[1U] = 0U;
    __Vtemp_hd2b6a71a__2[2U] = 0U;
    __Vtemp_hd2b6a71a__2[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h38f09b4d__0, __Vtemp_hd2b6a71a__2, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_254 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_64) 
                 + ((__Vtemp_h38f09b4d__0[1U] >> 0x1fU) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__3[0U] = 1U;
    __Vtemp_hd2b6a71a__3[1U] = 0U;
    __Vtemp_hd2b6a71a__3[2U] = 0U;
    __Vtemp_hd2b6a71a__3[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h00d8e1cb__0, __Vtemp_hd2b6a71a__3, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_250 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_63) 
                 + ((__Vtemp_h00d8e1cb__0[1U] >> 0x1eU) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__4[0U] = 1U;
    __Vtemp_hd2b6a71a__4[1U] = 0U;
    __Vtemp_hd2b6a71a__4[2U] = 0U;
    __Vtemp_hd2b6a71a__4[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc93d08c3__0, __Vtemp_hd2b6a71a__4, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_246 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_62) 
                 + ((__Vtemp_hc93d08c3__0[1U] >> 0x1dU) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__5[0U] = 1U;
    __Vtemp_hd2b6a71a__5[1U] = 0U;
    __Vtemp_hd2b6a71a__5[2U] = 0U;
    __Vtemp_hd2b6a71a__5[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_he0885fa8__0, __Vtemp_hd2b6a71a__5, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_242 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_61) 
                 + ((__Vtemp_he0885fa8__0[1U] >> 0x1cU) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__6[0U] = 1U;
    __Vtemp_hd2b6a71a__6[1U] = 0U;
    __Vtemp_hd2b6a71a__6[2U] = 0U;
    __Vtemp_hd2b6a71a__6[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha8d0cd25__0, __Vtemp_hd2b6a71a__6, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_238 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_60) 
                 + ((__Vtemp_ha8d0cd25__0[1U] >> 0x1bU) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__7[0U] = 1U;
    __Vtemp_hd2b6a71a__7[1U] = 0U;
    __Vtemp_hd2b6a71a__7[2U] = 0U;
    __Vtemp_hd2b6a71a__7[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h127ca22f__0, __Vtemp_hd2b6a71a__7, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_234 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_59) 
                 + ((__Vtemp_h127ca22f__0[1U] >> 0x1aU) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__8[0U] = 1U;
    __Vtemp_hd2b6a71a__8[1U] = 0U;
    __Vtemp_hd2b6a71a__8[2U] = 0U;
    __Vtemp_hd2b6a71a__8[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h26e2e9bc__0, __Vtemp_hd2b6a71a__8, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_230 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_58) 
                 + ((__Vtemp_h26e2e9bc__0[1U] >> 0x19U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__9[0U] = 1U;
    __Vtemp_hd2b6a71a__9[1U] = 0U;
    __Vtemp_hd2b6a71a__9[2U] = 0U;
    __Vtemp_hd2b6a71a__9[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h5af8c16b__0, __Vtemp_hd2b6a71a__9, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_226 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_57) 
                 + ((__Vtemp_h5af8c16b__0[1U] >> 0x18U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__10[0U] = 1U;
    __Vtemp_hd2b6a71a__10[1U] = 0U;
    __Vtemp_hd2b6a71a__10[2U] = 0U;
    __Vtemp_hd2b6a71a__10[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h36e0fd1d__0, __Vtemp_hd2b6a71a__10, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_222 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_56) 
                 + ((__Vtemp_h36e0fd1d__0[1U] >> 0x17U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__11[0U] = 1U;
    __Vtemp_hd2b6a71a__11[1U] = 0U;
    __Vtemp_hd2b6a71a__11[2U] = 0U;
    __Vtemp_hd2b6a71a__11[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1a5002a9__0, __Vtemp_hd2b6a71a__11, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_218 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_55) 
                 + ((__Vtemp_h1a5002a9__0[1U] >> 0x16U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__12[0U] = 1U;
    __Vtemp_hd2b6a71a__12[1U] = 0U;
    __Vtemp_hd2b6a71a__12[2U] = 0U;
    __Vtemp_hd2b6a71a__12[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf553736a__0, __Vtemp_hd2b6a71a__12, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_214 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_54) 
                 + ((__Vtemp_hf553736a__0[1U] >> 0x15U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__13[0U] = 1U;
    __Vtemp_hd2b6a71a__13[1U] = 0U;
    __Vtemp_hd2b6a71a__13[2U] = 0U;
    __Vtemp_hd2b6a71a__13[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1650a295__0, __Vtemp_hd2b6a71a__13, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_210 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_53) 
                 + ((__Vtemp_h1650a295__0[1U] >> 0x14U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__14[0U] = 1U;
    __Vtemp_hd2b6a71a__14[1U] = 0U;
    __Vtemp_hd2b6a71a__14[2U] = 0U;
    __Vtemp_hd2b6a71a__14[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h960910d8__0, __Vtemp_hd2b6a71a__14, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_206 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_52) 
                 + ((__Vtemp_h960910d8__0[1U] >> 0x13U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__15[0U] = 1U;
    __Vtemp_hd2b6a71a__15[1U] = 0U;
    __Vtemp_hd2b6a71a__15[2U] = 0U;
    __Vtemp_hd2b6a71a__15[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_he040b0fa__0, __Vtemp_hd2b6a71a__15, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_202 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_51) 
                 + ((__Vtemp_he040b0fa__0[1U] >> 0x12U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__16[0U] = 1U;
    __Vtemp_hd2b6a71a__16[1U] = 0U;
    __Vtemp_hd2b6a71a__16[2U] = 0U;
    __Vtemp_hd2b6a71a__16[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6586b3b4__0, __Vtemp_hd2b6a71a__16, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_198 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_50) 
                 + ((__Vtemp_h6586b3b4__0[1U] >> 0x11U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__17[0U] = 1U;
    __Vtemp_hd2b6a71a__17[1U] = 0U;
    __Vtemp_hd2b6a71a__17[2U] = 0U;
    __Vtemp_hd2b6a71a__17[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf1b2db86__0, __Vtemp_hd2b6a71a__17, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_194 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_49) 
                 + ((__Vtemp_hf1b2db86__0[1U] >> 0x10U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__18[0U] = 1U;
    __Vtemp_hd2b6a71a__18[1U] = 0U;
    __Vtemp_hd2b6a71a__18[2U] = 0U;
    __Vtemp_hd2b6a71a__18[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8adc7b6d__0, __Vtemp_hd2b6a71a__18, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_190 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_48) 
                 + ((__Vtemp_h8adc7b6d__0[1U] >> 0xfU) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__19[0U] = 1U;
    __Vtemp_hd2b6a71a__19[1U] = 0U;
    __Vtemp_hd2b6a71a__19[2U] = 0U;
    __Vtemp_hd2b6a71a__19[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h45a9a630__0, __Vtemp_hd2b6a71a__19, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_186 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_47) 
                 + ((__Vtemp_h45a9a630__0[1U] >> 0xeU) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__20[0U] = 1U;
    __Vtemp_hd2b6a71a__20[1U] = 0U;
    __Vtemp_hd2b6a71a__20[2U] = 0U;
    __Vtemp_hd2b6a71a__20[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h01acfad0__0, __Vtemp_hd2b6a71a__20, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_182 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_46) 
                 + ((__Vtemp_h01acfad0__0[1U] >> 0xdU) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__21[0U] = 1U;
    __Vtemp_hd2b6a71a__21[1U] = 0U;
    __Vtemp_hd2b6a71a__21[2U] = 0U;
    __Vtemp_hd2b6a71a__21[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd52bd83b__0, __Vtemp_hd2b6a71a__21, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_178 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_45) 
                 + ((__Vtemp_hd52bd83b__0[1U] >> 0xcU) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__22[0U] = 1U;
    __Vtemp_hd2b6a71a__22[1U] = 0U;
    __Vtemp_hd2b6a71a__22[2U] = 0U;
    __Vtemp_hd2b6a71a__22[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfb56c413__0, __Vtemp_hd2b6a71a__22, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_174 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_44) 
                 + ((__Vtemp_hfb56c413__0[1U] >> 0xbU) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__23[0U] = 1U;
    __Vtemp_hd2b6a71a__23[1U] = 0U;
    __Vtemp_hd2b6a71a__23[2U] = 0U;
    __Vtemp_hd2b6a71a__23[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h449816ef__0, __Vtemp_hd2b6a71a__23, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_170 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_43) 
                 + ((__Vtemp_h449816ef__0[1U] >> 0xaU) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__24[0U] = 1U;
    __Vtemp_hd2b6a71a__24[1U] = 0U;
    __Vtemp_hd2b6a71a__24[2U] = 0U;
    __Vtemp_hd2b6a71a__24[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9901fc01__0, __Vtemp_hd2b6a71a__24, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_166 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_42) 
                 + ((__Vtemp_h9901fc01__0[1U] >> 9U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__25[0U] = 1U;
    __Vtemp_hd2b6a71a__25[1U] = 0U;
    __Vtemp_hd2b6a71a__25[2U] = 0U;
    __Vtemp_hd2b6a71a__25[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hee786d21__0, __Vtemp_hd2b6a71a__25, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_162 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_41) 
                 + ((__Vtemp_hee786d21__0[1U] >> 8U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__26[0U] = 1U;
    __Vtemp_hd2b6a71a__26[1U] = 0U;
    __Vtemp_hd2b6a71a__26[2U] = 0U;
    __Vtemp_hd2b6a71a__26[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_haf3c5f1a__0, __Vtemp_hd2b6a71a__26, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_158 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_40) 
                 + ((__Vtemp_haf3c5f1a__0[1U] >> 7U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__27[0U] = 1U;
    __Vtemp_hd2b6a71a__27[1U] = 0U;
    __Vtemp_hd2b6a71a__27[2U] = 0U;
    __Vtemp_hd2b6a71a__27[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcb53fa89__0, __Vtemp_hd2b6a71a__27, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_154 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_39) 
                 + ((__Vtemp_hcb53fa89__0[1U] >> 6U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__28[0U] = 1U;
    __Vtemp_hd2b6a71a__28[1U] = 0U;
    __Vtemp_hd2b6a71a__28[2U] = 0U;
    __Vtemp_hd2b6a71a__28[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha7c94d82__0, __Vtemp_hd2b6a71a__28, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_150 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_38) 
                 + ((__Vtemp_ha7c94d82__0[1U] >> 5U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__29[0U] = 1U;
    __Vtemp_hd2b6a71a__29[1U] = 0U;
    __Vtemp_hd2b6a71a__29[2U] = 0U;
    __Vtemp_hd2b6a71a__29[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h10849629__0, __Vtemp_hd2b6a71a__29, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_146 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_37) 
                 + ((__Vtemp_h10849629__0[1U] >> 4U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__30[0U] = 1U;
    __Vtemp_hd2b6a71a__30[1U] = 0U;
    __Vtemp_hd2b6a71a__30[2U] = 0U;
    __Vtemp_hd2b6a71a__30[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hefcaae1a__0, __Vtemp_hd2b6a71a__30, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_142 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_36) 
                 + ((__Vtemp_hefcaae1a__0[1U] >> 3U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__31[0U] = 1U;
    __Vtemp_hd2b6a71a__31[1U] = 0U;
    __Vtemp_hd2b6a71a__31[2U] = 0U;
    __Vtemp_hd2b6a71a__31[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h36c51038__0, __Vtemp_hd2b6a71a__31, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_138 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_35) 
                 + ((__Vtemp_h36c51038__0[1U] >> 2U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__32[0U] = 1U;
    __Vtemp_hd2b6a71a__32[1U] = 0U;
    __Vtemp_hd2b6a71a__32[2U] = 0U;
    __Vtemp_hd2b6a71a__32[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h3f8a0695__0, __Vtemp_hd2b6a71a__32, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_134 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_34) 
                 + ((__Vtemp_h3f8a0695__0[1U] >> 1U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__33[0U] = 1U;
    __Vtemp_hd2b6a71a__33[1U] = 0U;
    __Vtemp_hd2b6a71a__33[2U] = 0U;
    __Vtemp_hd2b6a71a__33[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h3bae82dc__0, __Vtemp_hd2b6a71a__33, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_130 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_33) 
                 + (__Vtemp_h3bae82dc__0[1U] & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__34[0U] = 1U;
    __Vtemp_hd2b6a71a__34[1U] = 0U;
    __Vtemp_hd2b6a71a__34[2U] = 0U;
    __Vtemp_hd2b6a71a__34[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h59c6dbe8__0, __Vtemp_hd2b6a71a__34, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_126 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_32) 
                 + ((__Vtemp_h59c6dbe8__0[0U] >> 0x1fU) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__35[0U] = 1U;
    __Vtemp_hd2b6a71a__35[1U] = 0U;
    __Vtemp_hd2b6a71a__35[2U] = 0U;
    __Vtemp_hd2b6a71a__35[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hbafa417c__0, __Vtemp_hd2b6a71a__35, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_122 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_31) 
                 + ((__Vtemp_hbafa417c__0[0U] >> 0x1eU) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__36[0U] = 1U;
    __Vtemp_hd2b6a71a__36[1U] = 0U;
    __Vtemp_hd2b6a71a__36[2U] = 0U;
    __Vtemp_hd2b6a71a__36[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h4e52e4ec__0, __Vtemp_hd2b6a71a__36, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_118 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_30) 
                 + ((__Vtemp_h4e52e4ec__0[0U] >> 0x1dU) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__37[0U] = 1U;
    __Vtemp_hd2b6a71a__37[1U] = 0U;
    __Vtemp_hd2b6a71a__37[2U] = 0U;
    __Vtemp_hd2b6a71a__37[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7757bc9f__0, __Vtemp_hd2b6a71a__37, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_114 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_29) 
                 + ((__Vtemp_h7757bc9f__0[0U] >> 0x1cU) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__38[0U] = 1U;
    __Vtemp_hd2b6a71a__38[1U] = 0U;
    __Vtemp_hd2b6a71a__38[2U] = 0U;
    __Vtemp_hd2b6a71a__38[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc1f1ecca__0, __Vtemp_hd2b6a71a__38, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_110 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_28) 
                 + ((__Vtemp_hc1f1ecca__0[0U] >> 0x1bU) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__39[0U] = 1U;
    __Vtemp_hd2b6a71a__39[1U] = 0U;
    __Vtemp_hd2b6a71a__39[2U] = 0U;
    __Vtemp_hd2b6a71a__39[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8699e225__0, __Vtemp_hd2b6a71a__39, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_106 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_27) 
                 + ((__Vtemp_h8699e225__0[0U] >> 0x1aU) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__40[0U] = 1U;
    __Vtemp_hd2b6a71a__40[1U] = 0U;
    __Vtemp_hd2b6a71a__40[2U] = 0U;
    __Vtemp_hd2b6a71a__40[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1986d4d2__0, __Vtemp_hd2b6a71a__40, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_102 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_26) 
                 + ((__Vtemp_h1986d4d2__0[0U] >> 0x19U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__41[0U] = 1U;
    __Vtemp_hd2b6a71a__41[1U] = 0U;
    __Vtemp_hd2b6a71a__41[2U] = 0U;
    __Vtemp_hd2b6a71a__41[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h168f1093__0, __Vtemp_hd2b6a71a__41, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_98 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_25) 
                 + ((__Vtemp_h168f1093__0[0U] >> 0x18U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__42[0U] = 1U;
    __Vtemp_hd2b6a71a__42[1U] = 0U;
    __Vtemp_hd2b6a71a__42[2U] = 0U;
    __Vtemp_hd2b6a71a__42[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h611effbc__0, __Vtemp_hd2b6a71a__42, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_94 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_24) 
                 + ((__Vtemp_h611effbc__0[0U] >> 0x17U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__43[0U] = 1U;
    __Vtemp_hd2b6a71a__43[1U] = 0U;
    __Vtemp_hd2b6a71a__43[2U] = 0U;
    __Vtemp_hd2b6a71a__43[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h54248795__0, __Vtemp_hd2b6a71a__43, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_90 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_23) 
                 + ((__Vtemp_h54248795__0[0U] >> 0x16U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__44[0U] = 1U;
    __Vtemp_hd2b6a71a__44[1U] = 0U;
    __Vtemp_hd2b6a71a__44[2U] = 0U;
    __Vtemp_hd2b6a71a__44[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h104d6e53__0, __Vtemp_hd2b6a71a__44, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_86 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_22) 
                 + ((__Vtemp_h104d6e53__0[0U] >> 0x15U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__45[0U] = 1U;
    __Vtemp_hd2b6a71a__45[1U] = 0U;
    __Vtemp_hd2b6a71a__45[2U] = 0U;
    __Vtemp_hd2b6a71a__45[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h85459d14__0, __Vtemp_hd2b6a71a__45, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_82 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_21) 
                 + ((__Vtemp_h85459d14__0[0U] >> 0x14U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__46[0U] = 1U;
    __Vtemp_hd2b6a71a__46[1U] = 0U;
    __Vtemp_hd2b6a71a__46[2U] = 0U;
    __Vtemp_hd2b6a71a__46[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6aeaa05c__0, __Vtemp_hd2b6a71a__46, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_78 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_20) 
                 + ((__Vtemp_h6aeaa05c__0[0U] >> 0x13U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__47[0U] = 1U;
    __Vtemp_hd2b6a71a__47[1U] = 0U;
    __Vtemp_hd2b6a71a__47[2U] = 0U;
    __Vtemp_hd2b6a71a__47[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc2279870__0, __Vtemp_hd2b6a71a__47, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_74 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_19) 
                 + ((__Vtemp_hc2279870__0[0U] >> 0x12U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__48[0U] = 1U;
    __Vtemp_hd2b6a71a__48[1U] = 0U;
    __Vtemp_hd2b6a71a__48[2U] = 0U;
    __Vtemp_hd2b6a71a__48[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h05615be6__0, __Vtemp_hd2b6a71a__48, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_70 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_18) 
                 + ((__Vtemp_h05615be6__0[0U] >> 0x11U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__49[0U] = 1U;
    __Vtemp_hd2b6a71a__49[1U] = 0U;
    __Vtemp_hd2b6a71a__49[2U] = 0U;
    __Vtemp_hd2b6a71a__49[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8ff6551d__0, __Vtemp_hd2b6a71a__49, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_66 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_17) 
                 + ((__Vtemp_h8ff6551d__0[0U] >> 0x10U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__50[0U] = 1U;
    __Vtemp_hd2b6a71a__50[1U] = 0U;
    __Vtemp_hd2b6a71a__50[2U] = 0U;
    __Vtemp_hd2b6a71a__50[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h56dc1ac5__0, __Vtemp_hd2b6a71a__50, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_62 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_16) 
                 + ((__Vtemp_h56dc1ac5__0[0U] >> 0xfU) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__51[0U] = 1U;
    __Vtemp_hd2b6a71a__51[1U] = 0U;
    __Vtemp_hd2b6a71a__51[2U] = 0U;
    __Vtemp_hd2b6a71a__51[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h574097e0__0, __Vtemp_hd2b6a71a__51, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_58 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_15) 
                 + ((__Vtemp_h574097e0__0[0U] >> 0xeU) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__52[0U] = 1U;
    __Vtemp_hd2b6a71a__52[1U] = 0U;
    __Vtemp_hd2b6a71a__52[2U] = 0U;
    __Vtemp_hd2b6a71a__52[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7a15af17__0, __Vtemp_hd2b6a71a__52, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_54 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_14) 
                 + ((__Vtemp_h7a15af17__0[0U] >> 0xdU) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__53[0U] = 1U;
    __Vtemp_hd2b6a71a__53[1U] = 0U;
    __Vtemp_hd2b6a71a__53[2U] = 0U;
    __Vtemp_hd2b6a71a__53[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h22000ac6__0, __Vtemp_hd2b6a71a__53, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_50 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_13) 
                 + ((__Vtemp_h22000ac6__0[0U] >> 0xcU) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__54[0U] = 1U;
    __Vtemp_hd2b6a71a__54[1U] = 0U;
    __Vtemp_hd2b6a71a__54[2U] = 0U;
    __Vtemp_hd2b6a71a__54[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h371ad274__0, __Vtemp_hd2b6a71a__54, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_46 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_12) 
                 + ((__Vtemp_h371ad274__0[0U] >> 0xbU) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__55[0U] = 1U;
    __Vtemp_hd2b6a71a__55[1U] = 0U;
    __Vtemp_hd2b6a71a__55[2U] = 0U;
    __Vtemp_hd2b6a71a__55[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1a2d1032__0, __Vtemp_hd2b6a71a__55, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_42 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_11) 
                 + ((__Vtemp_h1a2d1032__0[0U] >> 0xaU) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__56[0U] = 1U;
    __Vtemp_hd2b6a71a__56[1U] = 0U;
    __Vtemp_hd2b6a71a__56[2U] = 0U;
    __Vtemp_hd2b6a71a__56[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf7176b72__0, __Vtemp_hd2b6a71a__56, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_38 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_10) 
                 + ((__Vtemp_hf7176b72__0[0U] >> 9U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__57[0U] = 1U;
    __Vtemp_hd2b6a71a__57[1U] = 0U;
    __Vtemp_hd2b6a71a__57[2U] = 0U;
    __Vtemp_hd2b6a71a__57[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_had6cdeb3__0, __Vtemp_hd2b6a71a__57, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_34 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_9) 
                 + ((__Vtemp_had6cdeb3__0[0U] >> 8U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__58[0U] = 1U;
    __Vtemp_hd2b6a71a__58[1U] = 0U;
    __Vtemp_hd2b6a71a__58[2U] = 0U;
    __Vtemp_hd2b6a71a__58[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha21fd949__0, __Vtemp_hd2b6a71a__58, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_30 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_8) 
                 + ((__Vtemp_ha21fd949__0[0U] >> 7U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__59[0U] = 1U;
    __Vtemp_hd2b6a71a__59[1U] = 0U;
    __Vtemp_hd2b6a71a__59[2U] = 0U;
    __Vtemp_hd2b6a71a__59[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h34d79755__0, __Vtemp_hd2b6a71a__59, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_26 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_7) 
                 + ((__Vtemp_h34d79755__0[0U] >> 6U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__60[0U] = 1U;
    __Vtemp_hd2b6a71a__60[1U] = 0U;
    __Vtemp_hd2b6a71a__60[2U] = 0U;
    __Vtemp_hd2b6a71a__60[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf7ad1aa4__0, __Vtemp_hd2b6a71a__60, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_22 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_6) 
                 + ((__Vtemp_hf7ad1aa4__0[0U] >> 5U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__61[0U] = 1U;
    __Vtemp_hd2b6a71a__61[1U] = 0U;
    __Vtemp_hd2b6a71a__61[2U] = 0U;
    __Vtemp_hd2b6a71a__61[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h4e59a781__0, __Vtemp_hd2b6a71a__61, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_18 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_5) 
                 + ((__Vtemp_h4e59a781__0[0U] >> 4U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__62[0U] = 1U;
    __Vtemp_hd2b6a71a__62[1U] = 0U;
    __Vtemp_hd2b6a71a__62[2U] = 0U;
    __Vtemp_hd2b6a71a__62[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0278d47e__0, __Vtemp_hd2b6a71a__62, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_14 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_4) 
                 + ((__Vtemp_h0278d47e__0[0U] >> 3U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__63[0U] = 1U;
    __Vtemp_hd2b6a71a__63[1U] = 0U;
    __Vtemp_hd2b6a71a__63[2U] = 0U;
    __Vtemp_hd2b6a71a__63[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h4c2fceef__0, __Vtemp_hd2b6a71a__63, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_10 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_3) 
                 + ((__Vtemp_h4c2fceef__0[0U] >> 2U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    __Vtemp_hd2b6a71a__64[0U] = 1U;
    __Vtemp_hd2b6a71a__64[1U] = 0U;
    __Vtemp_hd2b6a71a__64[2U] = 0U;
    __Vtemp_hd2b6a71a__64[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h849d07d1__0, __Vtemp_hd2b6a71a__64, (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_6 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_2) 
                 + ((__Vtemp_h849d07d1__0[0U] >> 1U) 
                    & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    vlSelf->ComposerTop__DOT__tl2axi4__DOT___count_T_2 
        = (1U & ((IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__count_1) 
                 + (((0U >= (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data))
                      ? ((IData)(1U) << (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data))
                      : 0U) & (IData)(vlSelf->ComposerTop__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT___GEN_9 
        = (0x1ffU & ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT___T_5)
                      ? ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__len_1) 
                         - (IData)(1U)) : (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__r_len_1)));
    if (vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__maybe_full) {
        vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__ram_id_MPORT_en 
            = vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T;
        vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__do_deq 
            = ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1_io_deq_ready) 
               & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1_io_deq_valid));
    } else {
        vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__ram_id_MPORT_en 
            = ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1_io_deq_ready)) 
               & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T));
        vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4frag__DOT__deq_1__DOT__do_deq = 0U;
    }
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2__DOT__do_deq 
        = ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2__DOT__empty)) 
           & ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2_io_deq_ready) 
              & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2_io_deq_valid)));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2__DOT__ram_extra_id_MPORT_en 
        = ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2__DOT__empty)
            ? ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2_io_deq_ready)) 
               & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2__DOT___do_enq_T))
            : (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_2__DOT___do_enq_T));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_3__DOT__do_deq 
        = ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_3__DOT__empty)) 
           & ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_3_io_deq_ready) 
              & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_3_io_deq_valid)));
    vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_3__DOT__ram_extra_id_MPORT_en 
        = ((IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_3__DOT__empty)
            ? ((~ (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_3_io_deq_ready)) 
               & (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_3__DOT___do_enq_T))
            : (IData)(vlSelf->ComposerTop__DOT__cmd_resp_axilhub__DOT__axil_widget__DOT__axi4yank__DOT__Queue_3__DOT___do_enq_T));
}

void Vcomposer___024root___nba_sequent__TOP__0(Vcomposer___024root* vlSelf);
void Vcomposer___024root___nba_sequent__TOP__1(Vcomposer___024root* vlSelf);
void Vcomposer___024root___nba_sequent__TOP__2(Vcomposer___024root* vlSelf);

void Vcomposer___024root___eval_nba(Vcomposer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomposer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomposer___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vcomposer___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vcomposer___024root___nba_sequent__TOP__1(vlSelf);
        Vcomposer___024root___nba_sequent__TOP__2(vlSelf);
        Vcomposer___024root___nba_sequent__TOP__3(vlSelf);
    }
}

void Vcomposer___024root___eval_triggers__ico(Vcomposer___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcomposer___024root___dump_triggers__ico(Vcomposer___024root* vlSelf);
#endif  // VL_DEBUG
void Vcomposer___024root___eval_ico(Vcomposer___024root* vlSelf);
void Vcomposer___024root___eval_triggers__act(Vcomposer___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcomposer___024root___dump_triggers__act(Vcomposer___024root* vlSelf);
#endif  // VL_DEBUG
void Vcomposer___024root___eval_act(Vcomposer___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcomposer___024root___dump_triggers__nba(Vcomposer___024root* vlSelf);
#endif  // VL_DEBUG

void Vcomposer___024root___eval(Vcomposer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomposer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomposer___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vcomposer___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vcomposer___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 25393, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vcomposer___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vcomposer___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vcomposer___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 25393, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vcomposer___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vcomposer___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v", 25393, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vcomposer___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vcomposer___024root___eval_debug_assertions(Vcomposer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcomposer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomposer___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->S00_AXI_awsize & 0xf8U))) {
        Verilated::overWidthError("S00_AXI_awsize");}
    if (VL_UNLIKELY((vlSelf->S00_AXI_awburst & 0xfcU))) {
        Verilated::overWidthError("S00_AXI_awburst");}
    if (VL_UNLIKELY((vlSelf->S00_AXI_awlock & 0xfeU))) {
        Verilated::overWidthError("S00_AXI_awlock");}
    if (VL_UNLIKELY((vlSelf->S00_AXI_awcache & 0xf0U))) {
        Verilated::overWidthError("S00_AXI_awcache");}
    if (VL_UNLIKELY((vlSelf->S00_AXI_awprot & 0xf8U))) {
        Verilated::overWidthError("S00_AXI_awprot");}
    if (VL_UNLIKELY((vlSelf->S00_AXI_awregion & 0xf0U))) {
        Verilated::overWidthError("S00_AXI_awregion");}
    if (VL_UNLIKELY((vlSelf->S00_AXI_awqos & 0xf0U))) {
        Verilated::overWidthError("S00_AXI_awqos");}
    if (VL_UNLIKELY((vlSelf->S00_AXI_awvalid & 0xfeU))) {
        Verilated::overWidthError("S00_AXI_awvalid");}
    if (VL_UNLIKELY((vlSelf->S00_AXI_wstrb & 0xf0U))) {
        Verilated::overWidthError("S00_AXI_wstrb");}
    if (VL_UNLIKELY((vlSelf->S00_AXI_wlast & 0xfeU))) {
        Verilated::overWidthError("S00_AXI_wlast");}
    if (VL_UNLIKELY((vlSelf->S00_AXI_wvalid & 0xfeU))) {
        Verilated::overWidthError("S00_AXI_wvalid");}
    if (VL_UNLIKELY((vlSelf->S00_AXI_bready & 0xfeU))) {
        Verilated::overWidthError("S00_AXI_bready");}
    if (VL_UNLIKELY((vlSelf->S00_AXI_arsize & 0xf8U))) {
        Verilated::overWidthError("S00_AXI_arsize");}
    if (VL_UNLIKELY((vlSelf->S00_AXI_arburst & 0xfcU))) {
        Verilated::overWidthError("S00_AXI_arburst");}
    if (VL_UNLIKELY((vlSelf->S00_AXI_arlock & 0xfeU))) {
        Verilated::overWidthError("S00_AXI_arlock");}
    if (VL_UNLIKELY((vlSelf->S00_AXI_arcache & 0xf0U))) {
        Verilated::overWidthError("S00_AXI_arcache");}
    if (VL_UNLIKELY((vlSelf->S00_AXI_arprot & 0xf8U))) {
        Verilated::overWidthError("S00_AXI_arprot");}
    if (VL_UNLIKELY((vlSelf->S00_AXI_arregion & 0xf0U))) {
        Verilated::overWidthError("S00_AXI_arregion");}
    if (VL_UNLIKELY((vlSelf->S00_AXI_arqos & 0xf0U))) {
        Verilated::overWidthError("S00_AXI_arqos");}
    if (VL_UNLIKELY((vlSelf->S00_AXI_arvalid & 0xfeU))) {
        Verilated::overWidthError("S00_AXI_arvalid");}
    if (VL_UNLIKELY((vlSelf->S00_AXI_rready & 0xfeU))) {
        Verilated::overWidthError("S00_AXI_rready");}
    if (VL_UNLIKELY((vlSelf->M00_AXI_awready & 0xfeU))) {
        Verilated::overWidthError("M00_AXI_awready");}
    if (VL_UNLIKELY((vlSelf->M00_AXI_wready & 0xfeU))) {
        Verilated::overWidthError("M00_AXI_wready");}
    if (VL_UNLIKELY((vlSelf->M00_AXI_bid & 0xc0U))) {
        Verilated::overWidthError("M00_AXI_bid");}
    if (VL_UNLIKELY((vlSelf->M00_AXI_bresp & 0xfcU))) {
        Verilated::overWidthError("M00_AXI_bresp");}
    if (VL_UNLIKELY((vlSelf->M00_AXI_bvalid & 0xfeU))) {
        Verilated::overWidthError("M00_AXI_bvalid");}
    if (VL_UNLIKELY((vlSelf->M00_AXI_arready & 0xfeU))) {
        Verilated::overWidthError("M00_AXI_arready");}
    if (VL_UNLIKELY((vlSelf->M00_AXI_rid & 0xc0U))) {
        Verilated::overWidthError("M00_AXI_rid");}
    if (VL_UNLIKELY((vlSelf->M00_AXI_rresp & 0xfcU))) {
        Verilated::overWidthError("M00_AXI_rresp");}
    if (VL_UNLIKELY((vlSelf->M00_AXI_rlast & 0xfeU))) {
        Verilated::overWidthError("M00_AXI_rlast");}
    if (VL_UNLIKELY((vlSelf->M00_AXI_rvalid & 0xfeU))) {
        Verilated::overWidthError("M00_AXI_rvalid");}
    if (VL_UNLIKELY((vlSelf->dma_awid & 0xc0U))) {
        Verilated::overWidthError("dma_awid");}
    if (VL_UNLIKELY((vlSelf->dma_awaddr & 0ULL))) {
        Verilated::overWidthError("dma_awaddr");}
    if (VL_UNLIKELY((vlSelf->dma_awsize & 0xf8U))) {
        Verilated::overWidthError("dma_awsize");}
    if (VL_UNLIKELY((vlSelf->dma_awburst & 0xfcU))) {
        Verilated::overWidthError("dma_awburst");}
    if (VL_UNLIKELY((vlSelf->dma_awlock & 0xfeU))) {
        Verilated::overWidthError("dma_awlock");}
    if (VL_UNLIKELY((vlSelf->dma_awcache & 0xf0U))) {
        Verilated::overWidthError("dma_awcache");}
    if (VL_UNLIKELY((vlSelf->dma_awprot & 0xf8U))) {
        Verilated::overWidthError("dma_awprot");}
    if (VL_UNLIKELY((vlSelf->dma_awregion & 0xf0U))) {
        Verilated::overWidthError("dma_awregion");}
    if (VL_UNLIKELY((vlSelf->dma_awqos & 0xf0U))) {
        Verilated::overWidthError("dma_awqos");}
    if (VL_UNLIKELY((vlSelf->dma_awvalid & 0xfeU))) {
        Verilated::overWidthError("dma_awvalid");}
    if (VL_UNLIKELY((vlSelf->dma_wlast & 0xfeU))) {
        Verilated::overWidthError("dma_wlast");}
    if (VL_UNLIKELY((vlSelf->dma_wvalid & 0xfeU))) {
        Verilated::overWidthError("dma_wvalid");}
    if (VL_UNLIKELY((vlSelf->dma_bready & 0xfeU))) {
        Verilated::overWidthError("dma_bready");}
    if (VL_UNLIKELY((vlSelf->dma_arid & 0xc0U))) {
        Verilated::overWidthError("dma_arid");}
    if (VL_UNLIKELY((vlSelf->dma_araddr & 0ULL))) {
        Verilated::overWidthError("dma_araddr");}
    if (VL_UNLIKELY((vlSelf->dma_arsize & 0xf8U))) {
        Verilated::overWidthError("dma_arsize");}
    if (VL_UNLIKELY((vlSelf->dma_arburst & 0xfcU))) {
        Verilated::overWidthError("dma_arburst");}
    if (VL_UNLIKELY((vlSelf->dma_arlock & 0xfeU))) {
        Verilated::overWidthError("dma_arlock");}
    if (VL_UNLIKELY((vlSelf->dma_arcache & 0xf0U))) {
        Verilated::overWidthError("dma_arcache");}
    if (VL_UNLIKELY((vlSelf->dma_arprot & 0xf8U))) {
        Verilated::overWidthError("dma_arprot");}
    if (VL_UNLIKELY((vlSelf->dma_arregion & 0xf0U))) {
        Verilated::overWidthError("dma_arregion");}
    if (VL_UNLIKELY((vlSelf->dma_arqos & 0xf0U))) {
        Verilated::overWidthError("dma_arqos");}
    if (VL_UNLIKELY((vlSelf->dma_arvalid & 0xfeU))) {
        Verilated::overWidthError("dma_arvalid");}
    if (VL_UNLIKELY((vlSelf->dma_rready & 0xfeU))) {
        Verilated::overWidthError("dma_rready");}
}
#endif  // VL_DEBUG
