// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelineCPU.h for the primary calling header

#include "verilated.h"

#include "VPipelineCPU___024root.h"

VL_ATTR_COLD void VPipelineCPU___024root___eval_static(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_static\n"); );
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_initial__TOP(VPipelineCPU___024root* vlSelf);

VL_ATTR_COLD void VPipelineCPU___024root___eval_initial(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_initial\n"); );
    // Body
    VPipelineCPU___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__start = vlSelf->start;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT____Vcellinp__m_Control__opcode 
        = vlSelf->PipelineCPU__DOT____Vcellinp__m_Control__opcode;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__if_o_2 
        = vlSelf->PipelineCPU__DOT__if_o_2;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__ex_o_3 
        = vlSelf->PipelineCPU__DOT__ex_o_3;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__id_o_2 
        = vlSelf->PipelineCPU__DOT__id_o_2;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mfu_o_1 
        = vlSelf->PipelineCPU__DOT__mfu_o_1;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mfu_o_2 
        = vlSelf->PipelineCPU__DOT__mfu_o_2;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mjalr_o 
        = vlSelf->PipelineCPU__DOT__mjalr_o;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__write_data 
        = vlSelf->PipelineCPU__DOT__write_data;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__sum_1 
        = vlSelf->PipelineCPU__DOT__sum_1;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__sum_2 
        = vlSelf->PipelineCPU__DOT__sum_2;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__w1 
        = vlSelf->PipelineCPU__DOT__w1;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__id_o_11 
        = vlSelf->PipelineCPU__DOT__id_o_11;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mux_pc_output 
        = vlSelf->PipelineCPU__DOT__mux_pc_output;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__sum_jalr 
        = vlSelf->PipelineCPU__DOT__sum_jalr;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__rs1_1_output 
        = vlSelf->PipelineCPU__DOT__rs1_1_output;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__id_o_3 
        = vlSelf->PipelineCPU__DOT__id_o_3;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mfu_o_3 
        = vlSelf->PipelineCPU__DOT__mfu_o_3;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mfu_o_4 
        = vlSelf->PipelineCPU__DOT__mfu_o_4;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__rs2_1_output 
        = vlSelf->PipelineCPU__DOT__rs2_1_output;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__id_o_15 
        = vlSelf->PipelineCPU__DOT__id_o_15;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__id_o_4 
        = vlSelf->PipelineCPU__DOT__id_o_4;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__rs2_2_output 
        = vlSelf->PipelineCPU__DOT__rs2_2_output;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__Mdm_o 
        = vlSelf->PipelineCPU__DOT__Mdm_o;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__ex_o_11 
        = vlSelf->PipelineCPU__DOT__ex_o_11;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mem_o_1 
        = vlSelf->PipelineCPU__DOT__mem_o_1;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mem_o_2 
        = vlSelf->PipelineCPU__DOT__mem_o_2;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mem_o_5 
        = vlSelf->PipelineCPU__DOT__mem_o_5;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mem_o_6 
        = vlSelf->PipelineCPU__DOT__mem_o_6;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mem_o_7 
        = vlSelf->PipelineCPU__DOT__mem_o_7;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mux_writedata_output 
        = vlSelf->PipelineCPU__DOT__mux_writedata_output;
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_initial__TOP(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_hd0a1b870__0;
    // Body
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[1U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[2U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[3U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[4U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[5U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[6U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[7U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[8U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[9U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xaU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xbU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xcU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xdU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xeU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xfU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x10U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x11U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x12U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x13U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x14U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x15U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x16U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x17U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x18U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x19U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1aU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1bU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1cU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1dU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1eU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1fU] = 0U;
    __Vtemp_hd0a1b870__0[0U] = 0x2e747874U;
    __Vtemp_hd0a1b870__0[1U] = 0x494f4e53U;
    __Vtemp_hd0a1b870__0[2U] = 0x52554354U;
    __Vtemp_hd0a1b870__0[3U] = 0x494e5354U;
    __Vtemp_hd0a1b870__0[4U] = 0x4553545fU;
    __Vtemp_hd0a1b870__0[5U] = 0x54U;
    VL_READMEM_N(false, 8, 128, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_hd0a1b870__0)
                 ,  &(vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_final(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_final\n"); );
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_triggers__stl(VPipelineCPU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__stl(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___eval_stl(VPipelineCPU___024root* vlSelf);

VL_ATTR_COLD void VPipelineCPU___024root___eval_settle(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VPipelineCPU___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VPipelineCPU___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("PipelineCPU.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VPipelineCPU___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__stl(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*3:0*/, 128> VPipelineCPU__ConstPool__TABLE_h9a76d689_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_hd5c73f6d_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_he16e6d56_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_h3729482a_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_hbdb291c7_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_hde9e3811_0;
extern const VlUnpacked<CData/*2:0*/, 128> VPipelineCPU__ConstPool__TABLE_h1442b447_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_ha8f04b9d_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_h2baa1e1a_0;

VL_ATTR_COLD void VPipelineCPU___024root___stl_sequent__TOP__0(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->PipelineCPU__DOT__sum_1 = ((IData)(4U) 
                                       + vlSelf->PipelineCPU__DOT__pc_output);
    vlSelf->PipelineCPU__DOT__sum_2 = (vlSelf->PipelineCPU__DOT__id_o_1 
                                       + (vlSelf->PipelineCPU__DOT__id_o_4 
                                          << 1U));
    vlSelf->PipelineCPU__DOT__sum_jalr = (vlSelf->PipelineCPU__DOT__id_o_4 
                                          + vlSelf->PipelineCPU__DOT__mjalr2_o);
    vlSelf->PipelineCPU__DOT__mhdu_o_1 = ((IData)(vlSelf->PipelineCPU__DOT__id_o_13) 
                                          & (((IData)(vlSelf->PipelineCPU__DOT__id_o_7) 
                                              == (0x1fU 
                                                  & (vlSelf->PipelineCPU__DOT__if_o_2 
                                                     >> 0xfU))) 
                                             | ((IData)(vlSelf->PipelineCPU__DOT__id_o_7) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->PipelineCPU__DOT__if_o_2 
                                                    >> 0x14U)))));
    vlSelf->PipelineCPU__DOT__mhdu_o_2 = ((IData)(vlSelf->PipelineCPU__DOT__id_o_13) 
                                          & (((IData)(vlSelf->PipelineCPU__DOT__id_o_7) 
                                              == (0x1fU 
                                                  & (vlSelf->PipelineCPU__DOT__if_o_2 
                                                     >> 0xfU))) 
                                             | ((IData)(vlSelf->PipelineCPU__DOT__id_o_7) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->PipelineCPU__DOT__if_o_2 
                                                    >> 0x14U)))));
    vlSelf->PipelineCPU__DOT__mfu_o_4 = 0U;
    vlSelf->PipelineCPU__DOT__mfu_o_2 = 0U;
    vlSelf->PipelineCPU__DOT__mfu_o_3 = 0U;
    if ((1U & (~ ((((IData)(vlSelf->PipelineCPU__DOT__ex_o_5) 
                    == (IData)(vlSelf->PipelineCPU__DOT__id_o_18)) 
                   & ((IData)(vlSelf->PipelineCPU__DOT__mem_o_3) 
                      == (IData)(vlSelf->PipelineCPU__DOT__id_o_18))) 
                  & ((IData)(vlSelf->PipelineCPU__DOT__mem_o_5) 
                     & (IData)(vlSelf->PipelineCPU__DOT__mem_o_4)))))) {
        if (((((IData)(vlSelf->PipelineCPU__DOT__ex_o_5) 
               == (IData)(vlSelf->PipelineCPU__DOT__id_o_19)) 
              & ((IData)(vlSelf->PipelineCPU__DOT__mem_o_3) 
                 == (IData)(vlSelf->PipelineCPU__DOT__id_o_19))) 
             & ((IData)(vlSelf->PipelineCPU__DOT__mem_o_5) 
                & (IData)(vlSelf->PipelineCPU__DOT__mem_o_4)))) {
            vlSelf->PipelineCPU__DOT__mfu_o_4 = 0U;
            vlSelf->PipelineCPU__DOT__mfu_o_3 = 1U;
        } else {
            if ((((IData)(vlSelf->PipelineCPU__DOT__mem_o_3) 
                  == (IData)(vlSelf->PipelineCPU__DOT__id_o_19)) 
                 & ((IData)(vlSelf->PipelineCPU__DOT__mem_o_4) 
                    | (IData)(vlSelf->PipelineCPU__DOT__mem_o_5)))) {
                vlSelf->PipelineCPU__DOT__mfu_o_4 = 1U;
            }
            if ((((IData)(vlSelf->PipelineCPU__DOT__ex_o_5) 
                  == (IData)(vlSelf->PipelineCPU__DOT__id_o_19)) 
                 & ((IData)(vlSelf->PipelineCPU__DOT__ex_o_6) 
                    | (IData)(vlSelf->PipelineCPU__DOT__ex_o_7)))) {
                vlSelf->PipelineCPU__DOT__mfu_o_3 = 1U;
            }
        }
    }
    vlSelf->PipelineCPU__DOT__mfu_o_1 = 0U;
    if (((((IData)(vlSelf->PipelineCPU__DOT__ex_o_5) 
           == (IData)(vlSelf->PipelineCPU__DOT__id_o_18)) 
          & ((IData)(vlSelf->PipelineCPU__DOT__mem_o_3) 
             == (IData)(vlSelf->PipelineCPU__DOT__id_o_18))) 
         & ((IData)(vlSelf->PipelineCPU__DOT__mem_o_5) 
            & (IData)(vlSelf->PipelineCPU__DOT__mem_o_4)))) {
        vlSelf->PipelineCPU__DOT__mfu_o_2 = 0U;
        vlSelf->PipelineCPU__DOT__mfu_o_1 = 1U;
    } else if ((1U & (~ ((((IData)(vlSelf->PipelineCPU__DOT__ex_o_5) 
                           == (IData)(vlSelf->PipelineCPU__DOT__id_o_19)) 
                          & ((IData)(vlSelf->PipelineCPU__DOT__mem_o_3) 
                             == (IData)(vlSelf->PipelineCPU__DOT__id_o_19))) 
                         & ((IData)(vlSelf->PipelineCPU__DOT__mem_o_5) 
                            & (IData)(vlSelf->PipelineCPU__DOT__mem_o_4)))))) {
        if ((((IData)(vlSelf->PipelineCPU__DOT__mem_o_3) 
              == (IData)(vlSelf->PipelineCPU__DOT__id_o_18)) 
             & ((IData)(vlSelf->PipelineCPU__DOT__mem_o_4) 
                | (IData)(vlSelf->PipelineCPU__DOT__mem_o_5)))) {
            vlSelf->PipelineCPU__DOT__mfu_o_2 = 1U;
        }
        if ((((IData)(vlSelf->PipelineCPU__DOT__ex_o_5) 
              == (IData)(vlSelf->PipelineCPU__DOT__id_o_18)) 
             & ((IData)(vlSelf->PipelineCPU__DOT__ex_o_6) 
                | (IData)(vlSelf->PipelineCPU__DOT__ex_o_7)))) {
            vlSelf->PipelineCPU__DOT__mfu_o_1 = 1U;
        }
    }
    __Vtableidx2 = (((IData)(vlSelf->PipelineCPU__DOT__id_o_5) 
                     << 6U) | (((IData)(vlSelf->PipelineCPU__DOT__id_o_6) 
                                << 3U) | (IData)(vlSelf->PipelineCPU__DOT__id_o_16)));
    vlSelf->PipelineCPU__DOT__ALU_ctl = VPipelineCPU__ConstPool__TABLE_h9a76d689_0
        [__Vtableidx2];
    vlSelf->PipelineCPU__DOT____Vcellinp__m_Control__opcode 
        = (0x7fU & vlSelf->PipelineCPU__DOT__if_o_2);
    vlSelf->r[0U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0U];
    vlSelf->r[1U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [1U];
    vlSelf->r[2U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [2U];
    vlSelf->r[3U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [3U];
    vlSelf->r[4U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [4U];
    vlSelf->r[5U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [5U];
    vlSelf->r[6U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [6U];
    vlSelf->r[7U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [7U];
    vlSelf->r[8U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [8U];
    vlSelf->r[9U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [9U];
    vlSelf->r[0xaU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xaU];
    vlSelf->r[0xbU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xbU];
    vlSelf->r[0xcU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xcU];
    vlSelf->r[0xdU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xdU];
    vlSelf->r[0xeU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xeU];
    vlSelf->r[0xfU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xfU];
    vlSelf->r[0x10U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x10U];
    vlSelf->r[0x11U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x11U];
    vlSelf->r[0x12U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x12U];
    vlSelf->r[0x13U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x13U];
    vlSelf->r[0x14U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x14U];
    vlSelf->r[0x15U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x15U];
    vlSelf->r[0x16U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x16U];
    vlSelf->r[0x17U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x17U];
    vlSelf->r[0x18U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x18U];
    vlSelf->r[0x19U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x19U];
    vlSelf->r[0x1aU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1aU];
    vlSelf->r[0x1bU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1bU];
    vlSelf->r[0x1cU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1cU];
    vlSelf->r[0x1dU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1dU];
    vlSelf->r[0x1eU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1eU];
    vlSelf->r[0x1fU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1fU];
    if ((8U & (IData)(vlSelf->PipelineCPU__DOT__ALU_ctl))) {
        vlSelf->PipelineCPU__DOT__ALU_res = ((4U & (IData)(vlSelf->PipelineCPU__DOT__ALU_ctl))
                                              ? ((2U 
                                                  & (IData)(vlSelf->PipelineCPU__DOT__ALU_ctl))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT__ALU_ctl))
                                                   ? 
                                                  (VL_LTS_III(32, vlSelf->PipelineCPU__DOT__rs1_2_output, vlSelf->PipelineCPU__DOT__MALU_o)
                                                    ? 1U
                                                    : 0U)
                                                   : vlSelf->PipelineCPU__DOT__rs1_2_output)
                                                  : vlSelf->PipelineCPU__DOT__rs1_2_output)
                                              : ((2U 
                                                  & (IData)(vlSelf->PipelineCPU__DOT__ALU_ctl))
                                                  ? vlSelf->PipelineCPU__DOT__rs1_2_output
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT__ALU_ctl))
                                                   ? vlSelf->PipelineCPU__DOT__rs1_2_output
                                                   : 
                                                  (vlSelf->PipelineCPU__DOT__rs1_2_output 
                                                   - vlSelf->PipelineCPU__DOT__MALU_o))));
        vlSelf->PipelineCPU__DOT__zero_o = (1U & (IData)(
                                                         (0U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlSelf->PipelineCPU__DOT__ALU_ctl)))));
    } else if ((4U & (IData)(vlSelf->PipelineCPU__DOT__ALU_ctl))) {
        if ((2U & (IData)(vlSelf->PipelineCPU__DOT__ALU_ctl))) {
            vlSelf->PipelineCPU__DOT__ALU_res = ((1U 
                                                  & (IData)(vlSelf->PipelineCPU__DOT__ALU_ctl))
                                                  ? vlSelf->PipelineCPU__DOT__rs1_2_output
                                                  : 
                                                 (vlSelf->PipelineCPU__DOT__rs1_2_output 
                                                  - vlSelf->PipelineCPU__DOT__MALU_o));
            vlSelf->PipelineCPU__DOT__zero_o = (1U 
                                                & ((~ (IData)(vlSelf->PipelineCPU__DOT__ALU_ctl)) 
                                                   & (vlSelf->PipelineCPU__DOT__rs1_2_output 
                                                      == vlSelf->PipelineCPU__DOT__MALU_o)));
        } else if ((1U & (IData)(vlSelf->PipelineCPU__DOT__ALU_ctl))) {
            vlSelf->PipelineCPU__DOT__ALU_res = (vlSelf->PipelineCPU__DOT__rs1_2_output 
                                                 - vlSelf->PipelineCPU__DOT__MALU_o);
            vlSelf->PipelineCPU__DOT__zero_o = (1U 
                                                & VL_GTES_III(32, vlSelf->PipelineCPU__DOT__rs1_2_output, vlSelf->PipelineCPU__DOT__MALU_o));
        } else {
            vlSelf->PipelineCPU__DOT__ALU_res = (vlSelf->PipelineCPU__DOT__rs1_2_output 
                                                 - vlSelf->PipelineCPU__DOT__MALU_o);
            vlSelf->PipelineCPU__DOT__zero_o = (1U 
                                                & VL_LTS_III(32, vlSelf->PipelineCPU__DOT__rs1_2_output, vlSelf->PipelineCPU__DOT__MALU_o));
        }
    } else {
        vlSelf->PipelineCPU__DOT__ALU_res = ((2U & (IData)(vlSelf->PipelineCPU__DOT__ALU_ctl))
                                              ? ((1U 
                                                  & (IData)(vlSelf->PipelineCPU__DOT__ALU_ctl))
                                                  ? 
                                                 (vlSelf->PipelineCPU__DOT__rs1_2_output 
                                                  - vlSelf->PipelineCPU__DOT__MALU_o)
                                                  : 
                                                 (vlSelf->PipelineCPU__DOT__rs1_2_output 
                                                  + vlSelf->PipelineCPU__DOT__MALU_o))
                                              : ((1U 
                                                  & (IData)(vlSelf->PipelineCPU__DOT__ALU_ctl))
                                                  ? 
                                                 (vlSelf->PipelineCPU__DOT__rs1_2_output 
                                                  | vlSelf->PipelineCPU__DOT__MALU_o)
                                                  : 
                                                 (vlSelf->PipelineCPU__DOT__rs1_2_output 
                                                  & vlSelf->PipelineCPU__DOT__MALU_o)));
        vlSelf->PipelineCPU__DOT__zero_o = (1U & (((IData)(vlSelf->PipelineCPU__DOT__ALU_ctl) 
                                                   >> 1U) 
                                                  & ((IData)(vlSelf->PipelineCPU__DOT__ALU_ctl) 
                                                     & (vlSelf->PipelineCPU__DOT__rs1_2_output 
                                                        != vlSelf->PipelineCPU__DOT__MALU_o))));
    }
    __Vtableidx1 = vlSelf->PipelineCPU__DOT____Vcellinp__m_Control__opcode;
    vlSelf->PipelineCPU__DOT__ALU_src = VPipelineCPU__ConstPool__TABLE_hd5c73f6d_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__mem_to_reg = VPipelineCPU__ConstPool__TABLE_he16e6d56_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__reg_write = VPipelineCPU__ConstPool__TABLE_h3729482a_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__mem_read = VPipelineCPU__ConstPool__TABLE_he16e6d56_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__mem_write = VPipelineCPU__ConstPool__TABLE_hbdb291c7_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__branc = VPipelineCPU__ConstPool__TABLE_hde9e3811_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__ALU_Op = VPipelineCPU__ConstPool__TABLE_h1442b447_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__jal_con = VPipelineCPU__ConstPool__TABLE_ha8f04b9d_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__jalr_con = VPipelineCPU__ConstPool__TABLE_h2baa1e1a_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__w1 = ((IData)(vlSelf->PipelineCPU__DOT__id_o_14) 
                                    & (IData)(vlSelf->PipelineCPU__DOT__zero_o));
    vlSelf->PipelineCPU__DOT__mhdu_o_4 = ((~ ((IData)(vlSelf->PipelineCPU__DOT__id_o_13) 
                                              & (((IData)(vlSelf->PipelineCPU__DOT__id_o_7) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->PipelineCPU__DOT__if_o_2 
                                                      >> 0xfU))) 
                                                 | ((IData)(vlSelf->PipelineCPU__DOT__id_o_7) 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->PipelineCPU__DOT__if_o_2 
                                                        >> 0x14U)))))) 
                                          & (IData)(vlSelf->PipelineCPU__DOT__w1));
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_stl(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VPipelineCPU___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__act(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge start)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clk or negedge start)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] PipelineCPU.__Vcellinp__m_Control__opcode or [changed] PipelineCPU.if_o_2)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] PipelineCPU.ex_o_3 or [changed] PipelineCPU.id_o_2 or [changed] PipelineCPU.mfu_o_1)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] PipelineCPU.mfu_o_2 or [changed] PipelineCPU.mjalr_o or [changed] PipelineCPU.write_data)\n");
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([changed] PipelineCPU.sum_1 or [changed] PipelineCPU.sum_2 or [changed] PipelineCPU.w1)\n");
    }
    if (vlSelf->__VactTriggered.at(6U)) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([changed] PipelineCPU.id_o_11 or [changed] PipelineCPU.mux_pc_output or [changed] PipelineCPU.sum_jalr)\n");
    }
    if (vlSelf->__VactTriggered.at(7U)) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([changed] PipelineCPU.mfu_o_2 or [changed] PipelineCPU.rs1_1_output or [changed] PipelineCPU.write_data)\n");
    }
    if (vlSelf->__VactTriggered.at(8U)) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([changed] PipelineCPU.ex_o_3 or [changed] PipelineCPU.id_o_3 or [changed] PipelineCPU.mfu_o_3)\n");
    }
    if (vlSelf->__VactTriggered.at(9U)) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([changed] PipelineCPU.mfu_o_4 or [changed] PipelineCPU.rs2_1_output or [changed] PipelineCPU.write_data)\n");
    }
    if (vlSelf->__VactTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([changed] PipelineCPU.id_o_15 or [changed] PipelineCPU.id_o_4 or [changed] PipelineCPU.rs2_2_output)\n");
    }
    if (vlSelf->__VactTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([changed] PipelineCPU.Mdm_o or [changed] PipelineCPU.mfu_o_4 or [changed] PipelineCPU.write_data)\n");
    }
    if (vlSelf->__VactTriggered.at(0xcU)) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @([changed] PipelineCPU.ex_o_11 or [changed] PipelineCPU.ex_o_3)\n");
    }
    if (vlSelf->__VactTriggered.at(0xdU)) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @([changed] PipelineCPU.mem_o_1 or [changed] PipelineCPU.mem_o_2 or [changed] PipelineCPU.mem_o_5)\n");
    }
    if (vlSelf->__VactTriggered.at(0xeU)) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @([changed] PipelineCPU.mem_o_6 or [changed] PipelineCPU.mem_o_7 or [changed] PipelineCPU.mux_writedata_output)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__nba(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge start)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clk or negedge start)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] PipelineCPU.__Vcellinp__m_Control__opcode or [changed] PipelineCPU.if_o_2)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] PipelineCPU.ex_o_3 or [changed] PipelineCPU.id_o_2 or [changed] PipelineCPU.mfu_o_1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] PipelineCPU.mfu_o_2 or [changed] PipelineCPU.mjalr_o or [changed] PipelineCPU.write_data)\n");
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([changed] PipelineCPU.sum_1 or [changed] PipelineCPU.sum_2 or [changed] PipelineCPU.w1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([changed] PipelineCPU.id_o_11 or [changed] PipelineCPU.mux_pc_output or [changed] PipelineCPU.sum_jalr)\n");
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([changed] PipelineCPU.mfu_o_2 or [changed] PipelineCPU.rs1_1_output or [changed] PipelineCPU.write_data)\n");
    }
    if (vlSelf->__VnbaTriggered.at(8U)) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([changed] PipelineCPU.ex_o_3 or [changed] PipelineCPU.id_o_3 or [changed] PipelineCPU.mfu_o_3)\n");
    }
    if (vlSelf->__VnbaTriggered.at(9U)) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([changed] PipelineCPU.mfu_o_4 or [changed] PipelineCPU.rs2_1_output or [changed] PipelineCPU.write_data)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([changed] PipelineCPU.id_o_15 or [changed] PipelineCPU.id_o_4 or [changed] PipelineCPU.rs2_2_output)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([changed] PipelineCPU.Mdm_o or [changed] PipelineCPU.mfu_o_4 or [changed] PipelineCPU.write_data)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xcU)) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @([changed] PipelineCPU.ex_o_11 or [changed] PipelineCPU.ex_o_3)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xdU)) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @([changed] PipelineCPU.mem_o_1 or [changed] PipelineCPU.mem_o_2 or [changed] PipelineCPU.mem_o_5)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xeU)) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @([changed] PipelineCPU.mem_o_6 or [changed] PipelineCPU.mem_o_7 or [changed] PipelineCPU.mux_writedata_output)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPipelineCPU___024root___ctor_var_reset(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->r[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->PipelineCPU__DOT__ALU_res = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__imm_out = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__pc_input = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__pc_output = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__sum_1 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__sum_2 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__MALU_o = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__read_data = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__Mdm_o = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__Mdm_2_o = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__mjalr_o = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__mjalr2_o = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__mux_pc_output = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__sum_jalr = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__mux_writedata_output = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ALU_ctl = VL_RAND_RESET_I(4);
    vlSelf->PipelineCPU__DOT__ALU_Op = VL_RAND_RESET_I(3);
    vlSelf->PipelineCPU__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__zero_o = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__ALU_src = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__jal_con = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__jalr_con = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__branc = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__if_o_1 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__if_o_2 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__if_o_3 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__id_o_1 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__id_o_2 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__id_o_3 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__id_o_4 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__id_o_17 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__id_o_6 = VL_RAND_RESET_I(3);
    vlSelf->PipelineCPU__DOT__id_o_16 = VL_RAND_RESET_I(3);
    vlSelf->PipelineCPU__DOT__id_o_7 = VL_RAND_RESET_I(5);
    vlSelf->PipelineCPU__DOT__id_o_18 = VL_RAND_RESET_I(5);
    vlSelf->PipelineCPU__DOT__id_o_19 = VL_RAND_RESET_I(5);
    vlSelf->PipelineCPU__DOT__id_o_5 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__id_o_8 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__id_o_9 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__id_o_10 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__id_o_11 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__id_o_12 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__id_o_13 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__id_o_14 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__id_o_15 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__ex_o_3 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ex_o_4 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ex_o_13 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ex_o_5 = VL_RAND_RESET_I(5);
    vlSelf->PipelineCPU__DOT__ex_o_6 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__ex_o_7 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__ex_o_8 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__ex_o_10 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__ex_o_11 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__mem_o_1 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__mem_o_2 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__mem_o_7 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__mem_o_3 = VL_RAND_RESET_I(5);
    vlSelf->PipelineCPU__DOT__mem_o_4 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__mem_o_5 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__mem_o_6 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__mfu_o_1 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__mfu_o_2 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__mfu_o_3 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__mfu_o_4 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__rs1_1_output = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__rs1_2_output = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__rs2_1_output = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__rs2_2_output = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__mhdu_o_1 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__mhdu_o_2 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__mhdu_o_4 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT____Vcellinp__m_Control__opcode = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0;
    vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0;
    vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 = 0;
    vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 = 0;
    vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 = 0;
    vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0;
    vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    vlSelf->__Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__start = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT____Vcellinp__m_Control__opcode = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__if_o_2 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__ex_o_3 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__id_o_2 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mfu_o_1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mfu_o_2 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mjalr_o = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__sum_1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__sum_2 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__id_o_11 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mux_pc_output = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__sum_jalr = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__rs1_1_output = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__id_o_3 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mfu_o_3 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mfu_o_4 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__rs2_1_output = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__id_o_15 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__id_o_4 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__rs2_2_output = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__Mdm_o = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__ex_o_11 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mem_o_1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mem_o_2 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mem_o_5 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mem_o_6 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mem_o_7 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mux_writedata_output = VL_RAND_RESET_I(32);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
