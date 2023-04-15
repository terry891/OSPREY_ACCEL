// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCOMPOSER_H_
#define VERILATED_VCOMPOSER_H_  // guard

#include "verilated.h"

class Vcomposer__Syms;
class Vcomposer___024root;
class VerilatedFstC;

// This class is the main interface to the Verilated model
class Vcomposer VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vcomposer__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&S00_AXI_awlen,7,0);
    VL_IN8(&S00_AXI_awsize,2,0);
    VL_IN8(&S00_AXI_awburst,1,0);
    VL_IN8(&S00_AXI_awlock,0,0);
    VL_IN8(&S00_AXI_awcache,3,0);
    VL_IN8(&S00_AXI_awprot,2,0);
    VL_IN8(&S00_AXI_awregion,3,0);
    VL_IN8(&S00_AXI_awqos,3,0);
    VL_IN8(&S00_AXI_awvalid,0,0);
    VL_OUT8(&S00_AXI_awready,0,0);
    VL_IN8(&S00_AXI_wstrb,3,0);
    VL_IN8(&S00_AXI_wlast,0,0);
    VL_IN8(&S00_AXI_wvalid,0,0);
    VL_OUT8(&S00_AXI_wready,0,0);
    VL_OUT8(&S00_AXI_bresp,1,0);
    VL_OUT8(&S00_AXI_bvalid,0,0);
    VL_IN8(&S00_AXI_bready,0,0);
    VL_IN8(&S00_AXI_arlen,7,0);
    VL_IN8(&S00_AXI_arsize,2,0);
    VL_IN8(&S00_AXI_arburst,1,0);
    VL_IN8(&S00_AXI_arlock,0,0);
    VL_IN8(&S00_AXI_arcache,3,0);
    VL_IN8(&S00_AXI_arprot,2,0);
    VL_IN8(&S00_AXI_arregion,3,0);
    VL_IN8(&S00_AXI_arqos,3,0);
    VL_IN8(&S00_AXI_arvalid,0,0);
    VL_OUT8(&S00_AXI_arready,0,0);
    VL_OUT8(&S00_AXI_rresp,1,0);
    VL_OUT8(&S00_AXI_rlast,0,0);
    VL_OUT8(&S00_AXI_rvalid,0,0);
    VL_IN8(&S00_AXI_rready,0,0);
    VL_OUT8(&M00_AXI_awid,5,0);
    VL_OUT8(&M00_AXI_awlen,7,0);
    VL_OUT8(&M00_AXI_awsize,2,0);
    VL_OUT8(&M00_AXI_awburst,1,0);
    VL_OUT8(&M00_AXI_awlock,0,0);
    VL_OUT8(&M00_AXI_awcache,3,0);
    VL_OUT8(&M00_AXI_awprot,2,0);
    VL_OUT8(&M00_AXI_awregion,3,0);
    VL_OUT8(&M00_AXI_awqos,3,0);
    VL_OUT8(&M00_AXI_awvalid,0,0);
    VL_IN8(&M00_AXI_awready,0,0);
    VL_OUT8(&M00_AXI_wlast,0,0);
    VL_OUT8(&M00_AXI_wvalid,0,0);
    VL_IN8(&M00_AXI_wready,0,0);
    VL_IN8(&M00_AXI_bid,5,0);
    VL_IN8(&M00_AXI_bresp,1,0);
    VL_IN8(&M00_AXI_bvalid,0,0);
    VL_OUT8(&M00_AXI_bready,0,0);
    VL_OUT8(&M00_AXI_arid,5,0);
    VL_OUT8(&M00_AXI_arlen,7,0);
    VL_OUT8(&M00_AXI_arsize,2,0);
    VL_OUT8(&M00_AXI_arburst,1,0);
    VL_OUT8(&M00_AXI_arlock,0,0);
    VL_OUT8(&M00_AXI_arcache,3,0);
    VL_OUT8(&M00_AXI_arprot,2,0);
    VL_OUT8(&M00_AXI_arregion,3,0);
    VL_OUT8(&M00_AXI_arqos,3,0);
    VL_OUT8(&M00_AXI_arvalid,0,0);
    VL_IN8(&M00_AXI_arready,0,0);
    VL_IN8(&M00_AXI_rid,5,0);
    VL_IN8(&M00_AXI_rresp,1,0);
    VL_IN8(&M00_AXI_rlast,0,0);
    VL_IN8(&M00_AXI_rvalid,0,0);
    VL_OUT8(&M00_AXI_rready,0,0);
    VL_IN8(&dma_awid,5,0);
    VL_IN8(&dma_awlen,7,0);
    VL_IN8(&dma_awsize,2,0);
    VL_IN8(&dma_awburst,1,0);
    VL_IN8(&dma_awlock,0,0);
    VL_IN8(&dma_awcache,3,0);
    VL_IN8(&dma_awprot,2,0);
    VL_IN8(&dma_awregion,3,0);
    VL_IN8(&dma_awqos,3,0);
    VL_IN8(&dma_awvalid,0,0);
    VL_OUT8(&dma_awready,0,0);
    VL_IN8(&dma_wlast,0,0);
    VL_IN8(&dma_wvalid,0,0);
    VL_OUT8(&dma_wready,0,0);
    VL_OUT8(&dma_bid,5,0);
    VL_OUT8(&dma_bresp,1,0);
    VL_OUT8(&dma_bvalid,0,0);
    VL_IN8(&dma_bready,0,0);
    VL_IN8(&dma_arid,5,0);
    VL_IN8(&dma_arlen,7,0);
    VL_IN8(&dma_arsize,2,0);
    VL_IN8(&dma_arburst,1,0);
    VL_IN8(&dma_arlock,0,0);
    VL_IN8(&dma_arcache,3,0);
    VL_IN8(&dma_arprot,2,0);
    VL_IN8(&dma_arregion,3,0);
    VL_IN8(&dma_arqos,3,0);
    VL_IN8(&dma_arvalid,0,0);
    VL_OUT8(&dma_arready,0,0);
    VL_OUT8(&dma_rid,5,0);
    VL_OUT8(&dma_rresp,1,0);
    VL_OUT8(&dma_rlast,0,0);
    VL_OUT8(&dma_rvalid,0,0);
    VL_IN8(&dma_rready,0,0);
    VL_IN16(&S00_AXI_awid,15,0);
    VL_IN16(&S00_AXI_awaddr,15,0);
    VL_OUT16(&S00_AXI_bid,15,0);
    VL_IN16(&S00_AXI_arid,15,0);
    VL_IN16(&S00_AXI_araddr,15,0);
    VL_OUT16(&S00_AXI_rid,15,0);
    VL_IN(&S00_AXI_wdata,31,0);
    VL_OUT(&S00_AXI_rdata,31,0);
    VL_OUTW(&M00_AXI_wdata,511,0,16);
    VL_INW(&M00_AXI_rdata,511,0,16);
    VL_INW(&dma_wdata,511,0,16);
    VL_OUTW(&dma_rdata,511,0,16);
    VL_OUT64(&M00_AXI_awaddr,33,0);
    VL_OUT64(&M00_AXI_wstrb,63,0);
    VL_OUT64(&M00_AXI_araddr,33,0);
    VL_IN64(&dma_awaddr,33,0);
    VL_IN64(&dma_wstrb,63,0);
    VL_IN64(&dma_araddr,33,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vcomposer___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vcomposer(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vcomposer(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vcomposer();
  private:
    VL_UNCOPYABLE(Vcomposer);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedFstC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
