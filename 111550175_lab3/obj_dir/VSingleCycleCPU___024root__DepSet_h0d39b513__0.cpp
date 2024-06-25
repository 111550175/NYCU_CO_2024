// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCycleCPU.h for the primary calling header

#include "verilated.h"

#include "VSingleCycleCPU__Syms.h"
#include "VSingleCycleCPU___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__act(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VSingleCycleCPU___024root___eval_triggers__act(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((~ (IData)(vlSelf->start)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__start)));
    vlSelf->__VactTriggered.at(1U) = (((~ (IData)(vlSelf->clk)) 
                                       & (IData)(vlSelf->__Vtrigrprev__TOP__clk)) 
                                      | ((~ (IData)(vlSelf->start)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__start)));
    vlSelf->__VactTriggered.at(2U) = (((IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT____Vcellinp__m_Control__opcode)) 
                                      | (vlSelf->SingleCycleCPU__DOT__if_o_2 
                                         != vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__if_o_2));
    vlSelf->__VactTriggered.at(3U) = (((vlSelf->SingleCycleCPU__DOT__ex_o_1 
                                        != vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__ex_o_1) 
                                       | (vlSelf->SingleCycleCPU__DOT__sum_1 
                                          != vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__sum_1)) 
                                      | ((IData)(vlSelf->SingleCycleCPU__DOT__w1) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__w1)));
    vlSelf->__VactTriggered.at(4U) = ((((IData)(vlSelf->SingleCycleCPU__DOT__ex_o_9) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__ex_o_9)) 
                                       | (vlSelf->SingleCycleCPU__DOT__mux_pc_output 
                                          != vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__mux_pc_output)) 
                                      | (vlSelf->SingleCycleCPU__DOT__sum_jalr 
                                         != vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__sum_jalr));
    vlSelf->__VactTriggered.at(5U) = ((((IData)(vlSelf->SingleCycleCPU__DOT__id_o_15) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__id_o_15)) 
                                       | (vlSelf->SingleCycleCPU__DOT__id_o_3 
                                          != vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__id_o_3)) 
                                      | (vlSelf->SingleCycleCPU__DOT__id_o_4 
                                         != vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__id_o_4));
    vlSelf->__VactTriggered.at(6U) = (((IData)(vlSelf->SingleCycleCPU__DOT__ex_o_11) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__ex_o_11)) 
                                      | (vlSelf->SingleCycleCPU__DOT__ex_o_3 
                                         != vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__ex_o_3));
    vlSelf->__VactTriggered.at(7U) = (((vlSelf->SingleCycleCPU__DOT__mem_o_1 
                                        != vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__mem_o_1) 
                                       | (vlSelf->SingleCycleCPU__DOT__mem_o_2 
                                          != vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__mem_o_2)) 
                                      | ((IData)(vlSelf->SingleCycleCPU__DOT__mem_o_5) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__mem_o_5)));
    vlSelf->__VactTriggered.at(8U) = ((((IData)(vlSelf->SingleCycleCPU__DOT__mem_o_6) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__mem_o_6)) 
                                       | (vlSelf->SingleCycleCPU__DOT__mux_writedata_output 
                                          != vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__mux_writedata_output)) 
                                      | (vlSelf->SingleCycleCPU__DOT__sum_1 
                                         != vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__sum_1));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__start = vlSelf->start;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT____Vcellinp__m_Control__opcode 
        = vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__if_o_2 
        = vlSelf->SingleCycleCPU__DOT__if_o_2;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__ex_o_1 
        = vlSelf->SingleCycleCPU__DOT__ex_o_1;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__sum_1 
        = vlSelf->SingleCycleCPU__DOT__sum_1;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__w1 
        = vlSelf->SingleCycleCPU__DOT__w1;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__ex_o_9 
        = vlSelf->SingleCycleCPU__DOT__ex_o_9;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__mux_pc_output 
        = vlSelf->SingleCycleCPU__DOT__mux_pc_output;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__sum_jalr 
        = vlSelf->SingleCycleCPU__DOT__sum_jalr;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__id_o_15 
        = vlSelf->SingleCycleCPU__DOT__id_o_15;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__id_o_3 
        = vlSelf->SingleCycleCPU__DOT__id_o_3;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__id_o_4 
        = vlSelf->SingleCycleCPU__DOT__id_o_4;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__ex_o_11 
        = vlSelf->SingleCycleCPU__DOT__ex_o_11;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__ex_o_3 
        = vlSelf->SingleCycleCPU__DOT__ex_o_3;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__mem_o_1 
        = vlSelf->SingleCycleCPU__DOT__mem_o_1;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__mem_o_2 
        = vlSelf->SingleCycleCPU__DOT__mem_o_2;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__mem_o_5 
        = vlSelf->SingleCycleCPU__DOT__mem_o_5;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__mem_o_6 
        = vlSelf->SingleCycleCPU__DOT__mem_o_6;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__mux_writedata_output 
        = vlSelf->SingleCycleCPU__DOT__mux_writedata_output;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(2U) = 1U;
        vlSelf->__VactTriggered.at(3U) = 1U;
        vlSelf->__VactTriggered.at(4U) = 1U;
        vlSelf->__VactTriggered.at(5U) = 1U;
        vlSelf->__VactTriggered.at(6U) = 1U;
        vlSelf->__VactTriggered.at(7U) = 1U;
        vlSelf->__VactTriggered.at(8U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSingleCycleCPU___024root___dump_triggers__act(vlSelf);
    }
#endif
}
