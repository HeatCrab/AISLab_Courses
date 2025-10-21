// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VASIC_WRAPPER_H_
#define VERILATED_VASIC_WRAPPER_H_  // guard

#include "verilated.h"

class Vasic_wrapper__Syms;
class Vasic_wrapper___024root;
class VerilatedVcdC;
class Vasic_wrapper_GIN_Bus__T4;
class Vasic_wrapper_GON_Bus__T4;
class Vasic_wrapper_PE;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vasic_wrapper VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vasic_wrapper__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&ACLK,0,0);
    VL_IN8(&ARESETn,0,0);
    VL_OUT8(&ASIC_interrupt,0,0);
    VL_IN8(&AWID_S,7,0);
    VL_IN8(&AWLEN_S,7,0);
    VL_IN8(&AWSIZE_S,2,0);
    VL_IN8(&AWBURST_S,1,0);
    VL_IN8(&AWVALID_S,0,0);
    VL_OUT8(&AWREADY_S,0,0);
    VL_IN8(&WSTRB_S,3,0);
    VL_IN8(&WLAST_S,0,0);
    VL_IN8(&WVALID_S,0,0);
    VL_OUT8(&WREADY_S,0,0);
    VL_OUT8(&BID_S,7,0);
    VL_OUT8(&BRESP_S,1,0);
    VL_OUT8(&BVALID_S,0,0);
    VL_IN8(&BREADY_S,0,0);
    VL_IN8(&ARID_S,7,0);
    VL_IN8(&ARLEN_S,7,0);
    VL_IN8(&ARSIZE_S,2,0);
    VL_IN8(&ARBURST_S,1,0);
    VL_IN8(&ARVALID_S,0,0);
    VL_OUT8(&ARREADY_S,0,0);
    VL_OUT8(&RID_S,7,0);
    VL_OUT8(&RRESP_S,1,0);
    VL_OUT8(&RLAST_S,0,0);
    VL_OUT8(&RVALID_S,0,0);
    VL_IN8(&RREADY_S,0,0);
    VL_OUT8(&AWID_M,3,0);
    VL_OUT8(&AWLEN_M,7,0);
    VL_OUT8(&AWSIZE_M,2,0);
    VL_OUT8(&AWBURST_M,1,0);
    VL_OUT8(&AWVALID_M,0,0);
    VL_IN8(&AWREADY_M,0,0);
    VL_OUT8(&WSTRB_M,3,0);
    VL_OUT8(&WLAST_M,0,0);
    VL_OUT8(&WVALID_M,0,0);
    VL_IN8(&WREADY_M,0,0);
    VL_IN8(&BID_M,3,0);
    VL_IN8(&BRESP_M,1,0);
    VL_IN8(&BVALID_M,0,0);
    VL_OUT8(&BREADY_M,0,0);
    VL_OUT8(&ARID_M,3,0);
    VL_OUT8(&ARLEN_M,7,0);
    VL_OUT8(&ARSIZE_M,2,0);
    VL_OUT8(&ARBURST_M,1,0);
    VL_OUT8(&ARVALID_M,0,0);
    VL_IN8(&ARREADY_M,0,0);
    VL_IN8(&RID_M,3,0);
    VL_IN8(&RRESP_M,1,0);
    VL_IN8(&RLAST_M,0,0);
    VL_IN8(&RVALID_M,0,0);
    VL_OUT8(&RREADY_M,0,0);
    VL_IN(&AWADDR_S,31,0);
    VL_IN(&WDATA_S,31,0);
    VL_IN(&ARADDR_S,31,0);
    VL_OUT(&RDATA_S,31,0);
    VL_OUT(&AWADDR_M,31,0);
    VL_OUT(&WDATA_M,31,0);
    VL_OUT(&ARADDR_M,31,0);
    VL_IN(&RDATA_M,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE;
    Vasic_wrapper_PE* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE;
    Vasic_wrapper_GIN_Bus__T4* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus;
    Vasic_wrapper_GON_Bus__T4* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus;
    Vasic_wrapper_GON_Bus__T4* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus;
    Vasic_wrapper_GON_Bus__T4* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus;
    Vasic_wrapper_GON_Bus__T4* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus;
    Vasic_wrapper_GON_Bus__T4* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus;
    Vasic_wrapper_GON_Bus__T4* const __PVT__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vasic_wrapper___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vasic_wrapper(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vasic_wrapper(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vasic_wrapper();
  private:
    VL_UNCOPYABLE(Vasic_wrapper);  ///< Copying not allowed

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
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
