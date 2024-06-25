// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCycleCPU.h for the primary calling header

#include "verilated.h"

#include "VSingleCycleCPU___024root.h"

void VSingleCycleCPU___024root___eval_act(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_act\n"); );
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__0(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0U;
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0U;
    if (vlSelf->start) {
        if (vlSelf->SingleCycleCPU__DOT__mem_write) {
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (vlSelf->SingleCycleCPU__DOT__read_data2 
                   >> 0x18U);
            vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (0x7fU & ((IData)(3U) + vlSelf->SingleCycleCPU__DOT__ALU_res));
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0xffU & (vlSelf->SingleCycleCPU__DOT__read_data2 
                            >> 0x10U));
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0x7fU & ((IData)(2U) + vlSelf->SingleCycleCPU__DOT__ALU_res));
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0xffU & (vlSelf->SingleCycleCPU__DOT__read_data2 
                            >> 8U));
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0x7fU & ((IData)(1U) + vlSelf->SingleCycleCPU__DOT__ALU_res));
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0xffU & vlSelf->SingleCycleCPU__DOT__read_data2);
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0x7fU & vlSelf->SingleCycleCPU__DOT__ALU_res);
        }
        vlSelf->SingleCycleCPU__DOT__pc_output = vlSelf->SingleCycleCPU__DOT__pc_input;
    } else {
        vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 1U;
        vlSelf->SingleCycleCPU__DOT__pc_output = 0U;
    }
    vlSelf->__VdfgTmp_hff823896__0 = vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
        [(0x7fU & vlSelf->SingleCycleCPU__DOT__pc_output)];
    vlSelf->__VdfgTmp_hac72c8ea__0 = vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
        [(0x7fU & ((IData)(2U) + vlSelf->SingleCycleCPU__DOT__pc_output))];
    vlSelf->__VdfgTmp_hac4cce05__0 = vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
        [(0x7fU & ((IData)(3U) + vlSelf->SingleCycleCPU__DOT__pc_output))];
    vlSelf->__VdfgTmp_h2f5c11db__0 = (((IData)(vlSelf->__VdfgTmp_hac72c8ea__0) 
                                       << 8U) | (IData)(vlSelf->__VdfgTmp_hac4cce05__0));
    vlSelf->__VdfgTmp_hc1192a24__0 = ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                       [(0x7fU & ((IData)(1U) 
                                                  + vlSelf->SingleCycleCPU__DOT__pc_output))] 
                                       << 0x10U) | (IData)(vlSelf->__VdfgTmp_h2f5c11db__0));
    vlSelf->__VdfgTmp_h6def5ec4__0 = (((IData)(vlSelf->__VdfgTmp_hff823896__0) 
                                       << 0x18U) | vlSelf->__VdfgTmp_hc1192a24__0);
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__1(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1;
    __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1 = 0;
    // Body
    __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0U;
    __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1 = 0U;
    if (vlSelf->start) {
        if (vlSelf->SingleCycleCPU__DOT__reg_write) {
            __Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 
                = ((0U == (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg))
                    ? 0U : vlSelf->SingleCycleCPU__DOT__write_data);
            __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 1U;
            __Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 
                = vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg;
        }
    } else {
        __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1 = 1U;
    }
    if (__Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0) {
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[__Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0] 
            = __Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    }
    if (__Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1) {
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2U] = 0x80U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xaU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xbU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xcU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xdU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xeU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xfU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x10U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x11U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x12U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x13U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x14U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x15U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x16U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x17U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x18U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x19U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1aU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1bU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1cU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1dU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1eU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1fU] = 0U;
    }
    vlSelf->r[0U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0U];
    vlSelf->r[1U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [1U];
    vlSelf->r[2U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [2U];
    vlSelf->r[3U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [3U];
    vlSelf->r[4U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [4U];
    vlSelf->r[5U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [5U];
    vlSelf->r[6U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [6U];
    vlSelf->r[7U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [7U];
    vlSelf->r[8U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [8U];
    vlSelf->r[9U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [9U];
    vlSelf->r[0xaU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xaU];
    vlSelf->r[0xbU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xbU];
    vlSelf->r[0xcU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xcU];
    vlSelf->r[0xdU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xdU];
    vlSelf->r[0xeU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xeU];
    vlSelf->r[0xfU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xfU];
    vlSelf->r[0x10U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x10U];
    vlSelf->r[0x11U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x11U];
    vlSelf->r[0x12U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x12U];
    vlSelf->r[0x13U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x13U];
    vlSelf->r[0x14U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x14U];
    vlSelf->r[0x15U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x15U];
    vlSelf->r[0x16U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x16U];
    vlSelf->r[0x17U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x17U];
    vlSelf->r[0x18U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x18U];
    vlSelf->r[0x19U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x19U];
    vlSelf->r[0x1aU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1aU];
    vlSelf->r[0x1bU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1bU];
    vlSelf->r[0x1cU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1cU];
    vlSelf->r[0x1dU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1dU];
    vlSelf->r[0x1eU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1eU];
    vlSelf->r[0x1fU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1fU];
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__2(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->SingleCycleCPU__DOT__ALU_src) {
        vlSelf->SingleCycleCPU__DOT__MALU_o = vlSelf->SingleCycleCPU__DOT__imm_out;
    } else if ((1U & (~ (IData)(vlSelf->SingleCycleCPU__DOT__ALU_src)))) {
        vlSelf->SingleCycleCPU__DOT__MALU_o = vlSelf->SingleCycleCPU__DOT__read_data2;
    }
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__3(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->SingleCycleCPU__DOT__w1) {
        vlSelf->SingleCycleCPU__DOT__pc_input = vlSelf->SingleCycleCPU__DOT__sum_2;
    } else if ((1U & (~ (IData)(vlSelf->SingleCycleCPU__DOT__w1)))) {
        vlSelf->SingleCycleCPU__DOT__pc_input = vlSelf->SingleCycleCPU__DOT__sum_1;
    }
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__4(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg 
        = ((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_output)
            ? 0U : (0x1fU & ((IData)(vlSelf->__VdfgTmp_h2f5c11db__0) 
                             >> 7U)));
    vlSelf->SingleCycleCPU__DOT__sum_1 = ((IData)(4U) 
                                          + vlSelf->SingleCycleCPU__DOT__pc_output);
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__5(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__5\n"); );
    // Body
    if (vlSelf->SingleCycleCPU__DOT__mem_to_reg) {
        vlSelf->SingleCycleCPU__DOT__write_data = vlSelf->SingleCycleCPU__DOT__read_data;
    } else if ((1U & (~ (IData)(vlSelf->SingleCycleCPU__DOT__mem_to_reg)))) {
        vlSelf->SingleCycleCPU__DOT__write_data = vlSelf->SingleCycleCPU__DOT__ALU_res;
    }
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_comb__TOP__0(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->SingleCycleCPU__DOT__read_data1 = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_output)
           ? 0U : (0x1fU & (vlSelf->__VdfgTmp_hc1192a24__0 
                            >> 0xfU)))];
    vlSelf->SingleCycleCPU__DOT__read_data2 = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_output)
           ? 0U : (0x1fU & (vlSelf->__VdfgTmp_h6def5ec4__0 
                            >> 0x14U)))];
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__6(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->SingleCycleCPU__DOT__imm_out = ((0x40U 
                                             & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                             ? ((0x20U 
                                                 & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->SingleCycleCPU__DOT__inst_out 
                                                                   >> 0x1fU))) 
                                                       << 0xbU) 
                                                      | ((0x400U 
                                                          & (vlSelf->SingleCycleCPU__DOT__inst_out 
                                                             << 3U)) 
                                                         | ((0x3f0U 
                                                             & (vlSelf->SingleCycleCPU__DOT__inst_out 
                                                                >> 0x15U)) 
                                                            | (0xfU 
                                                               & (vlSelf->SingleCycleCPU__DOT__inst_out 
                                                                  >> 8U)))))
                                                      : 0U)
                                                     : 0U))))
                                                 : 0U)
                                             : ((0x20U 
                                                 & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->SingleCycleCPU__DOT__inst_out 
                                                                   >> 0x1fU))) 
                                                       << 0xbU) 
                                                      | ((0x7e0U 
                                                          & (vlSelf->SingleCycleCPU__DOT__inst_out 
                                                             >> 0x14U)) 
                                                         | (0x1fU 
                                                            & (vlSelf->SingleCycleCPU__DOT__inst_out 
                                                               >> 7U))))
                                                      : 0U)
                                                     : 0U))))
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->SingleCycleCPU__DOT__inst_out 
                                                                   >> 0x1fU))) 
                                                       << 0xbU) 
                                                      | (0x7ffU 
                                                         & (vlSelf->SingleCycleCPU__DOT__inst_out 
                                                            >> 0x14U)))
                                                      : 0U)
                                                     : 0U)))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->SingleCycleCPU__DOT__inst_out 
                                                                   >> 0x1fU))) 
                                                       << 0xbU) 
                                                      | (0x7ffU 
                                                         & (vlSelf->SingleCycleCPU__DOT__inst_out 
                                                            >> 0x14U)))
                                                      : 0U)
                                                     : 0U))))));
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__7(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__7\n"); );
    // Body
    if (vlSelf->SingleCycleCPU__DOT__mem_read) {
        vlSelf->SingleCycleCPU__DOT__read_data = ((0xffffffU 
                                                   & vlSelf->SingleCycleCPU__DOT__read_data) 
                                                  | (vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                                                     [
                                                     (0x7fU 
                                                      & ((IData)(3U) 
                                                         + vlSelf->SingleCycleCPU__DOT__ALU_res))] 
                                                     << 0x18U));
        vlSelf->SingleCycleCPU__DOT__read_data = ((0xff00ffffU 
                                                   & vlSelf->SingleCycleCPU__DOT__read_data) 
                                                  | (vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                                                     [
                                                     (0x7fU 
                                                      & ((IData)(2U) 
                                                         + vlSelf->SingleCycleCPU__DOT__ALU_res))] 
                                                     << 0x10U));
        vlSelf->SingleCycleCPU__DOT__read_data = ((0xffff00ffU 
                                                   & vlSelf->SingleCycleCPU__DOT__read_data) 
                                                  | (vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                                                     [
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + vlSelf->SingleCycleCPU__DOT__ALU_res))] 
                                                     << 8U));
        vlSelf->SingleCycleCPU__DOT__read_data = ((0xffffff00U 
                                                   & vlSelf->SingleCycleCPU__DOT__read_data) 
                                                  | vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                                                  [
                                                  (0x7fU 
                                                   & vlSelf->SingleCycleCPU__DOT__ALU_res)]);
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_hd5c73f6d_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_he16e6d56_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_h7c96d48f_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_hbdb291c7_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_h9fda1277_0;
extern const VlUnpacked<CData/*1:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_h0ba53a1a_0;
extern const VlUnpacked<CData/*3:0*/, 64> VSingleCycleCPU__ConstPool__TABLE_h5b60b6c7_0;

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__8(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__8\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    IData/*31:0*/ __Vilp;
    // Body
    if ((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_output)) {
        vlSelf->SingleCycleCPU__DOT__inst_out = 0U;
        vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode = 0U;
    } else {
        vlSelf->SingleCycleCPU__DOT__inst_out = vlSelf->__VdfgTmp_h6def5ec4__0;
        vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode 
            = (0x7fU & (IData)(vlSelf->__VdfgTmp_hac4cce05__0));
    }
    if (vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0) {
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3;
    }
    if (vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    __Vtableidx1 = vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode;
    vlSelf->SingleCycleCPU__DOT__ALU_src = VSingleCycleCPU__ConstPool__TABLE_hd5c73f6d_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__mem_to_reg = VSingleCycleCPU__ConstPool__TABLE_he16e6d56_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__reg_write = VSingleCycleCPU__ConstPool__TABLE_h7c96d48f_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__mem_read = VSingleCycleCPU__ConstPool__TABLE_he16e6d56_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__mem_write = VSingleCycleCPU__ConstPool__TABLE_hbdb291c7_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__branc = VSingleCycleCPU__ConstPool__TABLE_h9fda1277_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__ALU_Op = VSingleCycleCPU__ConstPool__TABLE_h0ba53a1a_0
        [__Vtableidx1];
    __Vtableidx2 = ((0x7fffffe0U & (((0x80U > vlSelf->SingleCycleCPU__DOT__pc_output) 
                                     << 5U) & ((IData)(vlSelf->__VdfgTmp_hff823896__0) 
                                               >> 1U))) 
                    | ((((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_output)
                          ? 0U : (7U & ((IData)(vlSelf->__VdfgTmp_hac72c8ea__0) 
                                        >> 4U))) << 2U) 
                       | (IData)(vlSelf->SingleCycleCPU__DOT__ALU_Op)));
    vlSelf->SingleCycleCPU__DOT__ALU_ctl = VSingleCycleCPU__ConstPool__TABLE_h5b60b6c7_0
        [__Vtableidx2];
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_comb__TOP__1(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->SingleCycleCPU__DOT__sum_2 = (vlSelf->SingleCycleCPU__DOT__pc_output 
                                          + (vlSelf->SingleCycleCPU__DOT__imm_out 
                                             << 1U));
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_comb__TOP__2(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->SingleCycleCPU__DOT__ALU_res = ((8U & (IData)(vlSelf->SingleCycleCPU__DOT__ALU_ctl))
                                             ? ((4U 
                                                 & (IData)(vlSelf->SingleCycleCPU__DOT__ALU_ctl))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->SingleCycleCPU__DOT__ALU_ctl))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT__ALU_ctl))
                                                   ? 
                                                  (VL_LTS_III(32, vlSelf->SingleCycleCPU__DOT__read_data1, vlSelf->SingleCycleCPU__DOT__MALU_o)
                                                    ? 1U
                                                    : 0U)
                                                   : vlSelf->SingleCycleCPU__DOT__read_data1)
                                                  : vlSelf->SingleCycleCPU__DOT__read_data1)
                                                 : vlSelf->SingleCycleCPU__DOT__read_data1)
                                             : ((4U 
                                                 & (IData)(vlSelf->SingleCycleCPU__DOT__ALU_ctl))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->SingleCycleCPU__DOT__ALU_ctl))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT__ALU_ctl))
                                                   ? vlSelf->SingleCycleCPU__DOT__read_data1
                                                   : 
                                                  (vlSelf->SingleCycleCPU__DOT__read_data1 
                                                   - vlSelf->SingleCycleCPU__DOT__MALU_o))
                                                  : vlSelf->SingleCycleCPU__DOT__read_data1)
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->SingleCycleCPU__DOT__ALU_ctl))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT__ALU_ctl))
                                                   ? vlSelf->SingleCycleCPU__DOT__read_data1
                                                   : 
                                                  (vlSelf->SingleCycleCPU__DOT__read_data1 
                                                   + vlSelf->SingleCycleCPU__DOT__MALU_o))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT__ALU_ctl))
                                                   ? 
                                                  (vlSelf->SingleCycleCPU__DOT__read_data1 
                                                   | vlSelf->SingleCycleCPU__DOT__MALU_o)
                                                   : 
                                                  (vlSelf->SingleCycleCPU__DOT__read_data1 
                                                   & vlSelf->SingleCycleCPU__DOT__MALU_o)))));
    vlSelf->SingleCycleCPU__DOT__zero_o = (IData)((
                                                   (6U 
                                                    == (IData)(vlSelf->SingleCycleCPU__DOT__ALU_ctl)) 
                                                   & (vlSelf->SingleCycleCPU__DOT__read_data1 
                                                      == vlSelf->SingleCycleCPU__DOT__MALU_o)));
    vlSelf->SingleCycleCPU__DOT__w1 = ((IData)(vlSelf->SingleCycleCPU__DOT__branc) 
                                       & (IData)(vlSelf->SingleCycleCPU__DOT__zero_o));
}

void VSingleCycleCPU___024root___eval_nba(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__4(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        VSingleCycleCPU___024root___nba_comb__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__6(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__7(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(2U))) {
        VSingleCycleCPU___024root___nba_comb__TOP__1(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
         | vlSelf->__VnbaTriggered.at(4U))) {
        VSingleCycleCPU___024root___nba_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void VSingleCycleCPU___024root___eval_triggers__act(VSingleCycleCPU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__act(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__nba(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VSingleCycleCPU___024root___eval(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval\n"); );
    // Init
    VlTriggerVec<7> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VSingleCycleCPU___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VSingleCycleCPU___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("SingleCycleCPU.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VSingleCycleCPU___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VSingleCycleCPU___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("SingleCycleCPU.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VSingleCycleCPU___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VSingleCycleCPU___024root___eval_debug_assertions(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
