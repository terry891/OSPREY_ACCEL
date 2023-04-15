// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcomposer.h"
#include "Vcomposer__Syms.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vcomposer::Vcomposer(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcomposer__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , S00_AXI_awlen{vlSymsp->TOP.S00_AXI_awlen}
    , S00_AXI_awsize{vlSymsp->TOP.S00_AXI_awsize}
    , S00_AXI_awburst{vlSymsp->TOP.S00_AXI_awburst}
    , S00_AXI_awlock{vlSymsp->TOP.S00_AXI_awlock}
    , S00_AXI_awcache{vlSymsp->TOP.S00_AXI_awcache}
    , S00_AXI_awprot{vlSymsp->TOP.S00_AXI_awprot}
    , S00_AXI_awregion{vlSymsp->TOP.S00_AXI_awregion}
    , S00_AXI_awqos{vlSymsp->TOP.S00_AXI_awqos}
    , S00_AXI_awvalid{vlSymsp->TOP.S00_AXI_awvalid}
    , S00_AXI_awready{vlSymsp->TOP.S00_AXI_awready}
    , S00_AXI_wstrb{vlSymsp->TOP.S00_AXI_wstrb}
    , S00_AXI_wlast{vlSymsp->TOP.S00_AXI_wlast}
    , S00_AXI_wvalid{vlSymsp->TOP.S00_AXI_wvalid}
    , S00_AXI_wready{vlSymsp->TOP.S00_AXI_wready}
    , S00_AXI_bresp{vlSymsp->TOP.S00_AXI_bresp}
    , S00_AXI_bvalid{vlSymsp->TOP.S00_AXI_bvalid}
    , S00_AXI_bready{vlSymsp->TOP.S00_AXI_bready}
    , S00_AXI_arlen{vlSymsp->TOP.S00_AXI_arlen}
    , S00_AXI_arsize{vlSymsp->TOP.S00_AXI_arsize}
    , S00_AXI_arburst{vlSymsp->TOP.S00_AXI_arburst}
    , S00_AXI_arlock{vlSymsp->TOP.S00_AXI_arlock}
    , S00_AXI_arcache{vlSymsp->TOP.S00_AXI_arcache}
    , S00_AXI_arprot{vlSymsp->TOP.S00_AXI_arprot}
    , S00_AXI_arregion{vlSymsp->TOP.S00_AXI_arregion}
    , S00_AXI_arqos{vlSymsp->TOP.S00_AXI_arqos}
    , S00_AXI_arvalid{vlSymsp->TOP.S00_AXI_arvalid}
    , S00_AXI_arready{vlSymsp->TOP.S00_AXI_arready}
    , S00_AXI_rresp{vlSymsp->TOP.S00_AXI_rresp}
    , S00_AXI_rlast{vlSymsp->TOP.S00_AXI_rlast}
    , S00_AXI_rvalid{vlSymsp->TOP.S00_AXI_rvalid}
    , S00_AXI_rready{vlSymsp->TOP.S00_AXI_rready}
    , M00_AXI_awid{vlSymsp->TOP.M00_AXI_awid}
    , M00_AXI_awlen{vlSymsp->TOP.M00_AXI_awlen}
    , M00_AXI_awsize{vlSymsp->TOP.M00_AXI_awsize}
    , M00_AXI_awburst{vlSymsp->TOP.M00_AXI_awburst}
    , M00_AXI_awlock{vlSymsp->TOP.M00_AXI_awlock}
    , M00_AXI_awcache{vlSymsp->TOP.M00_AXI_awcache}
    , M00_AXI_awprot{vlSymsp->TOP.M00_AXI_awprot}
    , M00_AXI_awregion{vlSymsp->TOP.M00_AXI_awregion}
    , M00_AXI_awqos{vlSymsp->TOP.M00_AXI_awqos}
    , M00_AXI_awvalid{vlSymsp->TOP.M00_AXI_awvalid}
    , M00_AXI_awready{vlSymsp->TOP.M00_AXI_awready}
    , M00_AXI_wlast{vlSymsp->TOP.M00_AXI_wlast}
    , M00_AXI_wvalid{vlSymsp->TOP.M00_AXI_wvalid}
    , M00_AXI_wready{vlSymsp->TOP.M00_AXI_wready}
    , M00_AXI_bid{vlSymsp->TOP.M00_AXI_bid}
    , M00_AXI_bresp{vlSymsp->TOP.M00_AXI_bresp}
    , M00_AXI_bvalid{vlSymsp->TOP.M00_AXI_bvalid}
    , M00_AXI_bready{vlSymsp->TOP.M00_AXI_bready}
    , M00_AXI_arid{vlSymsp->TOP.M00_AXI_arid}
    , M00_AXI_arlen{vlSymsp->TOP.M00_AXI_arlen}
    , M00_AXI_arsize{vlSymsp->TOP.M00_AXI_arsize}
    , M00_AXI_arburst{vlSymsp->TOP.M00_AXI_arburst}
    , M00_AXI_arlock{vlSymsp->TOP.M00_AXI_arlock}
    , M00_AXI_arcache{vlSymsp->TOP.M00_AXI_arcache}
    , M00_AXI_arprot{vlSymsp->TOP.M00_AXI_arprot}
    , M00_AXI_arregion{vlSymsp->TOP.M00_AXI_arregion}
    , M00_AXI_arqos{vlSymsp->TOP.M00_AXI_arqos}
    , M00_AXI_arvalid{vlSymsp->TOP.M00_AXI_arvalid}
    , M00_AXI_arready{vlSymsp->TOP.M00_AXI_arready}
    , M00_AXI_rid{vlSymsp->TOP.M00_AXI_rid}
    , M00_AXI_rresp{vlSymsp->TOP.M00_AXI_rresp}
    , M00_AXI_rlast{vlSymsp->TOP.M00_AXI_rlast}
    , M00_AXI_rvalid{vlSymsp->TOP.M00_AXI_rvalid}
    , M00_AXI_rready{vlSymsp->TOP.M00_AXI_rready}
    , dma_awid{vlSymsp->TOP.dma_awid}
    , dma_awlen{vlSymsp->TOP.dma_awlen}
    , dma_awsize{vlSymsp->TOP.dma_awsize}
    , dma_awburst{vlSymsp->TOP.dma_awburst}
    , dma_awlock{vlSymsp->TOP.dma_awlock}
    , dma_awcache{vlSymsp->TOP.dma_awcache}
    , dma_awprot{vlSymsp->TOP.dma_awprot}
    , dma_awregion{vlSymsp->TOP.dma_awregion}
    , dma_awqos{vlSymsp->TOP.dma_awqos}
    , dma_awvalid{vlSymsp->TOP.dma_awvalid}
    , dma_awready{vlSymsp->TOP.dma_awready}
    , dma_wlast{vlSymsp->TOP.dma_wlast}
    , dma_wvalid{vlSymsp->TOP.dma_wvalid}
    , dma_wready{vlSymsp->TOP.dma_wready}
    , dma_bid{vlSymsp->TOP.dma_bid}
    , dma_bresp{vlSymsp->TOP.dma_bresp}
    , dma_bvalid{vlSymsp->TOP.dma_bvalid}
    , dma_bready{vlSymsp->TOP.dma_bready}
    , dma_arid{vlSymsp->TOP.dma_arid}
    , dma_arlen{vlSymsp->TOP.dma_arlen}
    , dma_arsize{vlSymsp->TOP.dma_arsize}
    , dma_arburst{vlSymsp->TOP.dma_arburst}
    , dma_arlock{vlSymsp->TOP.dma_arlock}
    , dma_arcache{vlSymsp->TOP.dma_arcache}
    , dma_arprot{vlSymsp->TOP.dma_arprot}
    , dma_arregion{vlSymsp->TOP.dma_arregion}
    , dma_arqos{vlSymsp->TOP.dma_arqos}
    , dma_arvalid{vlSymsp->TOP.dma_arvalid}
    , dma_arready{vlSymsp->TOP.dma_arready}
    , dma_rid{vlSymsp->TOP.dma_rid}
    , dma_rresp{vlSymsp->TOP.dma_rresp}
    , dma_rlast{vlSymsp->TOP.dma_rlast}
    , dma_rvalid{vlSymsp->TOP.dma_rvalid}
    , dma_rready{vlSymsp->TOP.dma_rready}
    , S00_AXI_awid{vlSymsp->TOP.S00_AXI_awid}
    , S00_AXI_awaddr{vlSymsp->TOP.S00_AXI_awaddr}
    , S00_AXI_bid{vlSymsp->TOP.S00_AXI_bid}
    , S00_AXI_arid{vlSymsp->TOP.S00_AXI_arid}
    , S00_AXI_araddr{vlSymsp->TOP.S00_AXI_araddr}
    , S00_AXI_rid{vlSymsp->TOP.S00_AXI_rid}
    , S00_AXI_wdata{vlSymsp->TOP.S00_AXI_wdata}
    , S00_AXI_rdata{vlSymsp->TOP.S00_AXI_rdata}
    , M00_AXI_wdata{vlSymsp->TOP.M00_AXI_wdata}
    , M00_AXI_rdata{vlSymsp->TOP.M00_AXI_rdata}
    , dma_wdata{vlSymsp->TOP.dma_wdata}
    , dma_rdata{vlSymsp->TOP.dma_rdata}
    , M00_AXI_awaddr{vlSymsp->TOP.M00_AXI_awaddr}
    , M00_AXI_wstrb{vlSymsp->TOP.M00_AXI_wstrb}
    , M00_AXI_araddr{vlSymsp->TOP.M00_AXI_araddr}
    , dma_awaddr{vlSymsp->TOP.dma_awaddr}
    , dma_wstrb{vlSymsp->TOP.dma_wstrb}
    , dma_araddr{vlSymsp->TOP.dma_araddr}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcomposer::Vcomposer(const char* _vcname__)
    : Vcomposer(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcomposer::~Vcomposer() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcomposer___024root___eval_debug_assertions(Vcomposer___024root* vlSelf);
#endif  // VL_DEBUG
void Vcomposer___024root___eval_static(Vcomposer___024root* vlSelf);
void Vcomposer___024root___eval_initial(Vcomposer___024root* vlSelf);
void Vcomposer___024root___eval_settle(Vcomposer___024root* vlSelf);
void Vcomposer___024root___eval(Vcomposer___024root* vlSelf);

void Vcomposer::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcomposer::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcomposer___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcomposer___024root___eval_static(&(vlSymsp->TOP));
        Vcomposer___024root___eval_initial(&(vlSymsp->TOP));
        Vcomposer___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcomposer___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcomposer::eventsPending() { return false; }

uint64_t Vcomposer::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcomposer::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcomposer___024root___eval_final(Vcomposer___024root* vlSelf);

VL_ATTR_COLD void Vcomposer::final() {
    Vcomposer___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcomposer::hierName() const { return vlSymsp->name(); }
const char* Vcomposer::modelName() const { return "Vcomposer"; }
unsigned Vcomposer::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vcomposer::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcomposer___024root__trace_init_top(Vcomposer___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcomposer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcomposer___024root*>(voidSelf);
    Vcomposer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vcomposer___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vcomposer___024root__trace_register(Vcomposer___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vcomposer::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcomposer::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcomposer___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
