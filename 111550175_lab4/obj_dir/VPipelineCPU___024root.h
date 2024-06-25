// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPipelineCPU.h for the primary calling header

#ifndef VERILATED_VPIPELINECPU___024ROOT_H_
#define VERILATED_VPIPELINECPU___024ROOT_H_  // guard

#include "verilated.h"

class VPipelineCPU__Syms;

class VPipelineCPU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(start,0,0);
        CData/*0:0*/ PipelineCPU__DOT__w1;
        CData/*0:0*/ PipelineCPU__DOT__id_o_5;
        CData/*0:0*/ PipelineCPU__DOT__id_o_11;
        CData/*0:0*/ PipelineCPU__DOT__id_o_15;
        CData/*0:0*/ PipelineCPU__DOT__ex_o_11;
        CData/*0:0*/ PipelineCPU__DOT__mem_o_5;
        CData/*0:0*/ PipelineCPU__DOT__mem_o_6;
        CData/*0:0*/ PipelineCPU__DOT__mfu_o_1;
        CData/*0:0*/ PipelineCPU__DOT__mfu_o_2;
        CData/*0:0*/ PipelineCPU__DOT__mfu_o_3;
        CData/*0:0*/ PipelineCPU__DOT__mfu_o_4;
        CData/*3:0*/ PipelineCPU__DOT__ALU_ctl;
        CData/*2:0*/ PipelineCPU__DOT__ALU_Op;
        CData/*0:0*/ PipelineCPU__DOT__mem_read;
        CData/*0:0*/ PipelineCPU__DOT__mem_to_reg;
        CData/*0:0*/ PipelineCPU__DOT__mem_write;
        CData/*0:0*/ PipelineCPU__DOT__zero_o;
        CData/*0:0*/ PipelineCPU__DOT__ALU_src;
        CData/*0:0*/ PipelineCPU__DOT__reg_write;
        CData/*0:0*/ PipelineCPU__DOT__jal_con;
        CData/*0:0*/ PipelineCPU__DOT__jalr_con;
        CData/*0:0*/ PipelineCPU__DOT__branc;
        CData/*2:0*/ PipelineCPU__DOT__id_o_6;
        CData/*2:0*/ PipelineCPU__DOT__id_o_16;
        CData/*4:0*/ PipelineCPU__DOT__id_o_7;
        CData/*4:0*/ PipelineCPU__DOT__id_o_18;
        CData/*4:0*/ PipelineCPU__DOT__id_o_19;
        CData/*0:0*/ PipelineCPU__DOT__id_o_8;
        CData/*0:0*/ PipelineCPU__DOT__id_o_9;
        CData/*0:0*/ PipelineCPU__DOT__id_o_10;
        CData/*0:0*/ PipelineCPU__DOT__id_o_12;
        CData/*0:0*/ PipelineCPU__DOT__id_o_13;
        CData/*0:0*/ PipelineCPU__DOT__id_o_14;
        CData/*4:0*/ PipelineCPU__DOT__ex_o_5;
        CData/*0:0*/ PipelineCPU__DOT__ex_o_6;
        CData/*0:0*/ PipelineCPU__DOT__ex_o_7;
        CData/*0:0*/ PipelineCPU__DOT__ex_o_8;
        CData/*0:0*/ PipelineCPU__DOT__ex_o_10;
        CData/*4:0*/ PipelineCPU__DOT__mem_o_3;
        CData/*0:0*/ PipelineCPU__DOT__mem_o_4;
        CData/*0:0*/ PipelineCPU__DOT__mhdu_o_1;
        CData/*0:0*/ PipelineCPU__DOT__mhdu_o_2;
        CData/*0:0*/ PipelineCPU__DOT__mhdu_o_4;
        CData/*6:0*/ PipelineCPU__DOT____Vcellinp__m_Control__opcode;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
        CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4;
        CData/*4:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0;
        CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0;
        CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__start;
        CData/*6:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT____Vcellinp__m_Control__opcode;
        CData/*0:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__mfu_o_1;
        CData/*0:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__mfu_o_2;
    };
    struct {
        CData/*0:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__w1;
        CData/*0:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__id_o_11;
        CData/*0:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__mfu_o_3;
        CData/*0:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__mfu_o_4;
        CData/*0:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__id_o_15;
        CData/*0:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__ex_o_11;
        CData/*0:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__mem_o_5;
        CData/*0:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__mem_o_6;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ PipelineCPU__DOT__ALU_res;
        IData/*31:0*/ PipelineCPU__DOT__imm_out;
        IData/*31:0*/ PipelineCPU__DOT__pc_input;
        IData/*31:0*/ PipelineCPU__DOT__pc_output;
        IData/*31:0*/ PipelineCPU__DOT__sum_1;
        IData/*31:0*/ PipelineCPU__DOT__sum_2;
        IData/*31:0*/ PipelineCPU__DOT__MALU_o;
        IData/*31:0*/ PipelineCPU__DOT__read_data;
        IData/*31:0*/ PipelineCPU__DOT__write_data;
        IData/*31:0*/ PipelineCPU__DOT__Mdm_o;
        IData/*31:0*/ PipelineCPU__DOT__Mdm_2_o;
        IData/*31:0*/ PipelineCPU__DOT__mjalr_o;
        IData/*31:0*/ PipelineCPU__DOT__mjalr2_o;
        IData/*31:0*/ PipelineCPU__DOT__mux_pc_output;
        IData/*31:0*/ PipelineCPU__DOT__sum_jalr;
        IData/*31:0*/ PipelineCPU__DOT__mux_writedata_output;
        IData/*31:0*/ PipelineCPU__DOT__if_o_1;
        IData/*31:0*/ PipelineCPU__DOT__if_o_2;
        IData/*31:0*/ PipelineCPU__DOT__if_o_3;
        IData/*31:0*/ PipelineCPU__DOT__id_o_1;
        IData/*31:0*/ PipelineCPU__DOT__id_o_2;
        IData/*31:0*/ PipelineCPU__DOT__id_o_3;
        IData/*31:0*/ PipelineCPU__DOT__id_o_4;
        IData/*31:0*/ PipelineCPU__DOT__id_o_17;
        IData/*31:0*/ PipelineCPU__DOT__ex_o_3;
        IData/*31:0*/ PipelineCPU__DOT__ex_o_4;
        IData/*31:0*/ PipelineCPU__DOT__ex_o_13;
        IData/*31:0*/ PipelineCPU__DOT__mem_o_1;
        IData/*31:0*/ PipelineCPU__DOT__mem_o_2;
        IData/*31:0*/ PipelineCPU__DOT__mem_o_7;
        IData/*31:0*/ PipelineCPU__DOT__rs1_1_output;
        IData/*31:0*/ PipelineCPU__DOT__rs1_2_output;
        IData/*31:0*/ PipelineCPU__DOT__rs2_1_output;
        IData/*31:0*/ PipelineCPU__DOT__rs2_2_output;
        IData/*31:0*/ __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__if_o_2;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__ex_o_3;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__id_o_2;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__mjalr_o;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__write_data;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__sum_1;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__sum_2;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__mux_pc_output;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__sum_jalr;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__rs1_1_output;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__id_o_3;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__rs2_1_output;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__id_o_4;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__rs2_2_output;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__Mdm_o;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__mem_o_1;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__mem_o_2;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__mem_o_7;
    };
    struct {
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__mux_writedata_output;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(r[32],31,0);
        VlUnpacked<CData/*7:0*/, 128> PipelineCPU__DOT__m_InstMem__DOT__insts;
        VlUnpacked<IData/*31:0*/, 32> PipelineCPU__DOT__m_Register__DOT__regs;
        VlUnpacked<CData/*7:0*/, 128> PipelineCPU__DOT__m_DataMemory__DOT__data_memory;
        VlUnpacked<CData/*0:0*/, 8> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<15> __VactTriggered;
    VlTriggerVec<15> __VnbaTriggered;

    // INTERNAL VARIABLES
    VPipelineCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPipelineCPU___024root(VPipelineCPU__Syms* symsp, const char* v__name);
    ~VPipelineCPU___024root();
    VL_UNCOPYABLE(VPipelineCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
