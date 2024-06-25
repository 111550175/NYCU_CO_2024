// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelineCPU.h for the primary calling header

#include "verilated.h"

#include "VPipelineCPU__Syms.h"
#include "VPipelineCPU___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__act(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VPipelineCPU___024root___eval_triggers__act(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((~ (IData)(vlSelf->start)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__start)));
    vlSelf->__VactTriggered.at(1U) = (((~ (IData)(vlSelf->clk)) 
                                       & (IData)(vlSelf->__Vtrigrprev__TOP__clk)) 
                                      | ((~ (IData)(vlSelf->start)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__start)));
    vlSelf->__VactTriggered.at(2U) = (((IData)(vlSelf->PipelineCPU__DOT____Vcellinp__m_Control__opcode) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT____Vcellinp__m_Control__opcode)) 
                                      | (vlSelf->PipelineCPU__DOT__if_o_2 
                                         != vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__if_o_2));
    vlSelf->__VactTriggered.at(3U) = (((vlSelf->PipelineCPU__DOT__ex_o_3 
                                        != vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__ex_o_3) 
                                       | (vlSelf->PipelineCPU__DOT__id_o_2 
                                          != vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__id_o_2)) 
                                      | ((IData)(vlSelf->PipelineCPU__DOT__mfu_o_1) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mfu_o_1)));
    vlSelf->__VactTriggered.at(4U) = ((((IData)(vlSelf->PipelineCPU__DOT__mfu_o_2) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mfu_o_2)) 
                                       | (vlSelf->PipelineCPU__DOT__mjalr_o 
                                          != vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mjalr_o)) 
                                      | (vlSelf->PipelineCPU__DOT__write_data 
                                         != vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__write_data));
    vlSelf->__VactTriggered.at(5U) = (((vlSelf->PipelineCPU__DOT__sum_1 
                                        != vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__sum_1) 
                                       | (vlSelf->PipelineCPU__DOT__sum_2 
                                          != vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__sum_2)) 
                                      | ((IData)(vlSelf->PipelineCPU__DOT__w1) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__w1)));
    vlSelf->__VactTriggered.at(6U) = ((((IData)(vlSelf->PipelineCPU__DOT__id_o_11) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__id_o_11)) 
                                       | (vlSelf->PipelineCPU__DOT__mux_pc_output 
                                          != vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mux_pc_output)) 
                                      | (vlSelf->PipelineCPU__DOT__sum_jalr 
                                         != vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__sum_jalr));
    vlSelf->__VactTriggered.at(7U) = ((((IData)(vlSelf->PipelineCPU__DOT__mfu_o_2) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mfu_o_2)) 
                                       | (vlSelf->PipelineCPU__DOT__rs1_1_output 
                                          != vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__rs1_1_output)) 
                                      | (vlSelf->PipelineCPU__DOT__write_data 
                                         != vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__write_data));
    vlSelf->__VactTriggered.at(8U) = (((vlSelf->PipelineCPU__DOT__ex_o_3 
                                        != vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__ex_o_3) 
                                       | (vlSelf->PipelineCPU__DOT__id_o_3 
                                          != vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__id_o_3)) 
                                      | ((IData)(vlSelf->PipelineCPU__DOT__mfu_o_3) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mfu_o_3)));
    vlSelf->__VactTriggered.at(9U) = ((((IData)(vlSelf->PipelineCPU__DOT__mfu_o_4) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mfu_o_4)) 
                                       | (vlSelf->PipelineCPU__DOT__rs2_1_output 
                                          != vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__rs2_1_output)) 
                                      | (vlSelf->PipelineCPU__DOT__write_data 
                                         != vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__write_data));
    vlSelf->__VactTriggered.at(0xaU) = ((((IData)(vlSelf->PipelineCPU__DOT__id_o_15) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__id_o_15)) 
                                         | (vlSelf->PipelineCPU__DOT__id_o_4 
                                            != vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__id_o_4)) 
                                        | (vlSelf->PipelineCPU__DOT__rs2_2_output 
                                           != vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__rs2_2_output));
    vlSelf->__VactTriggered.at(0xbU) = (((vlSelf->PipelineCPU__DOT__Mdm_o 
                                          != vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__Mdm_o) 
                                         | ((IData)(vlSelf->PipelineCPU__DOT__mfu_o_4) 
                                            != (IData)(vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mfu_o_4))) 
                                        | (vlSelf->PipelineCPU__DOT__write_data 
                                           != vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__write_data));
    vlSelf->__VactTriggered.at(0xcU) = (((IData)(vlSelf->PipelineCPU__DOT__ex_o_11) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__ex_o_11)) 
                                        | (vlSelf->PipelineCPU__DOT__ex_o_3 
                                           != vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__ex_o_3));
    vlSelf->__VactTriggered.at(0xdU) = (((vlSelf->PipelineCPU__DOT__mem_o_1 
                                          != vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mem_o_1) 
                                         | (vlSelf->PipelineCPU__DOT__mem_o_2 
                                            != vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mem_o_2)) 
                                        | ((IData)(vlSelf->PipelineCPU__DOT__mem_o_5) 
                                           != (IData)(vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mem_o_5)));
    vlSelf->__VactTriggered.at(0xeU) = ((((IData)(vlSelf->PipelineCPU__DOT__mem_o_6) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mem_o_6)) 
                                         | (vlSelf->PipelineCPU__DOT__mem_o_7 
                                            != vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mem_o_7)) 
                                        | (vlSelf->PipelineCPU__DOT__mux_writedata_output 
                                           != vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__mux_writedata_output));
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
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(2U) = 1U;
        vlSelf->__VactTriggered.at(3U) = 1U;
        vlSelf->__VactTriggered.at(4U) = 1U;
        vlSelf->__VactTriggered.at(5U) = 1U;
        vlSelf->__VactTriggered.at(6U) = 1U;
        vlSelf->__VactTriggered.at(7U) = 1U;
        vlSelf->__VactTriggered.at(8U) = 1U;
        vlSelf->__VactTriggered.at(9U) = 1U;
        vlSelf->__VactTriggered.at(0xaU) = 1U;
        vlSelf->__VactTriggered.at(0xbU) = 1U;
        vlSelf->__VactTriggered.at(0xcU) = 1U;
        vlSelf->__VactTriggered.at(0xdU) = 1U;
        vlSelf->__VactTriggered.at(0xeU) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPipelineCPU___024root___dump_triggers__act(vlSelf);
    }
#endif
}
