// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSingleCycleCPU__Syms.h"


void VSingleCycleCPU___024root__trace_chg_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSingleCycleCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_chg_top_0\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSingleCycleCPU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VSingleCycleCPU___024root__trace_chg_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->SingleCycleCPU__DOT__ALU_ctl),4);
        bufp->chgIData(oldp+1,(vlSelf->SingleCycleCPU__DOT__if_o_1),32);
        bufp->chgIData(oldp+2,(vlSelf->SingleCycleCPU__DOT__id_o_1),32);
        bufp->chgIData(oldp+3,(vlSelf->SingleCycleCPU__DOT__id_o_2),32);
        bufp->chgCData(oldp+4,(vlSelf->SingleCycleCPU__DOT__id_o_6),3);
        bufp->chgCData(oldp+5,(vlSelf->SingleCycleCPU__DOT__id_o_16),3);
        bufp->chgBit(oldp+6,(vlSelf->SingleCycleCPU__DOT__id_o_5));
        bufp->chgBit(oldp+7,(vlSelf->SingleCycleCPU__DOT__id_o_12));
        bufp->chgBit(oldp+8,(vlSelf->SingleCycleCPU__DOT__id_o_14));
        bufp->chgIData(oldp+9,(vlSelf->SingleCycleCPU__DOT__ex_o_4),32);
        bufp->chgBit(oldp+10,(vlSelf->SingleCycleCPU__DOT__ex_o_2));
        bufp->chgBit(oldp+11,(vlSelf->SingleCycleCPU__DOT__ex_o_10));
        bufp->chgBit(oldp+12,(vlSelf->SingleCycleCPU__DOT__ex_o_12));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+13,((vlSelf->SingleCycleCPU__DOT__id_o_4 
                                 << 1U)),32);
        bufp->chgIData(oldp+14,(vlSelf->SingleCycleCPU__DOT__id_o_3),32);
        bufp->chgIData(oldp+15,(vlSelf->SingleCycleCPU__DOT__id_o_4),32);
        bufp->chgCData(oldp+16,(vlSelf->SingleCycleCPU__DOT__id_o_7),5);
        bufp->chgBit(oldp+17,(vlSelf->SingleCycleCPU__DOT__id_o_8));
        bufp->chgBit(oldp+18,(vlSelf->SingleCycleCPU__DOT__id_o_15));
        bufp->chgCData(oldp+19,(vlSelf->SingleCycleCPU__DOT__ex_o_5),5);
        bufp->chgBit(oldp+20,(vlSelf->SingleCycleCPU__DOT__ex_o_6));
        bufp->chgCData(oldp+21,(vlSelf->SingleCycleCPU__DOT__mem_o_3),5);
        bufp->chgBit(oldp+22,(vlSelf->SingleCycleCPU__DOT__mem_o_4));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+23,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0]),32);
        bufp->chgIData(oldp+24,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1]),32);
        bufp->chgIData(oldp+25,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2]),32);
        bufp->chgIData(oldp+26,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3]),32);
        bufp->chgIData(oldp+27,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4]),32);
        bufp->chgIData(oldp+28,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5]),32);
        bufp->chgIData(oldp+29,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6]),32);
        bufp->chgIData(oldp+30,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7]),32);
        bufp->chgIData(oldp+31,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8]),32);
        bufp->chgIData(oldp+32,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9]),32);
        bufp->chgIData(oldp+33,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[10]),32);
        bufp->chgIData(oldp+34,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[11]),32);
        bufp->chgIData(oldp+35,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[12]),32);
        bufp->chgIData(oldp+36,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[13]),32);
        bufp->chgIData(oldp+37,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[14]),32);
        bufp->chgIData(oldp+38,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[15]),32);
        bufp->chgIData(oldp+39,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[16]),32);
        bufp->chgIData(oldp+40,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[17]),32);
        bufp->chgIData(oldp+41,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[18]),32);
        bufp->chgIData(oldp+42,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[19]),32);
        bufp->chgIData(oldp+43,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[20]),32);
        bufp->chgIData(oldp+44,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[21]),32);
        bufp->chgIData(oldp+45,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[22]),32);
        bufp->chgIData(oldp+46,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[23]),32);
        bufp->chgIData(oldp+47,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[24]),32);
        bufp->chgIData(oldp+48,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[25]),32);
        bufp->chgIData(oldp+49,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[26]),32);
        bufp->chgIData(oldp+50,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[27]),32);
        bufp->chgIData(oldp+51,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[28]),32);
        bufp->chgIData(oldp+52,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[29]),32);
        bufp->chgIData(oldp+53,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[30]),32);
        bufp->chgIData(oldp+54,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+55,(((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_output)
                                  ? 0U : ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                           [(0x7fU 
                                             & vlSelf->SingleCycleCPU__DOT__pc_output)] 
                                           << 0x18U) 
                                          | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                              [(0x7fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->SingleCycleCPU__DOT__pc_output))] 
                                              << 0x10U) 
                                             | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                 [(0x7fU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->SingleCycleCPU__DOT__pc_output))] 
                                                 << 8U) 
                                                | vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                [(0x7fU 
                                                  & ((IData)(3U) 
                                                     + vlSelf->SingleCycleCPU__DOT__pc_output))]))))),32);
        bufp->chgIData(oldp+56,(vlSelf->SingleCycleCPU__DOT__pc_output),32);
        bufp->chgIData(oldp+57,(vlSelf->SingleCycleCPU__DOT__if_o_2),32);
        bufp->chgBit(oldp+58,(vlSelf->SingleCycleCPU__DOT__id_o_10));
        bufp->chgBit(oldp+59,(vlSelf->SingleCycleCPU__DOT__ex_o_8));
        bufp->chgBit(oldp+60,(vlSelf->SingleCycleCPU__DOT__mem_o_6));
        bufp->chgCData(oldp+61,(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode),7);
        bufp->chgCData(oldp+62,((0x1fU & (vlSelf->SingleCycleCPU__DOT__if_o_2 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+63,((0x1fU & (vlSelf->SingleCycleCPU__DOT__if_o_2 
                                          >> 0x14U))),5);
        bufp->chgBit(oldp+64,((1U & (vlSelf->SingleCycleCPU__DOT__if_o_2 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+65,((7U & (vlSelf->SingleCycleCPU__DOT__if_o_2 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+66,((0x1fU & (vlSelf->SingleCycleCPU__DOT__if_o_2 
                                          >> 7U))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+67,(vlSelf->SingleCycleCPU__DOT__sum_jalr),32);
        bufp->chgBit(oldp+68,(vlSelf->SingleCycleCPU__DOT__id_o_9));
        bufp->chgBit(oldp+69,(vlSelf->SingleCycleCPU__DOT__id_o_11));
        bufp->chgBit(oldp+70,(vlSelf->SingleCycleCPU__DOT__ex_o_7));
        bufp->chgBit(oldp+71,(vlSelf->SingleCycleCPU__DOT__ex_o_9));
        bufp->chgIData(oldp+72,(vlSelf->SingleCycleCPU__DOT__mem_o_1),32);
        bufp->chgIData(oldp+73,(vlSelf->SingleCycleCPU__DOT__mem_o_2),32);
        bufp->chgBit(oldp+74,(vlSelf->SingleCycleCPU__DOT__mem_o_5));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgIData(oldp+75,(vlSelf->SingleCycleCPU__DOT__sum_1),32);
        bufp->chgCData(oldp+76,(vlSelf->SingleCycleCPU__DOT__ALU_Op),3);
        bufp->chgBit(oldp+77,(vlSelf->SingleCycleCPU__DOT__mem_read));
        bufp->chgBit(oldp+78,(vlSelf->SingleCycleCPU__DOT__mem_to_reg));
        bufp->chgBit(oldp+79,(vlSelf->SingleCycleCPU__DOT__mem_write));
        bufp->chgBit(oldp+80,(vlSelf->SingleCycleCPU__DOT__ALU_src));
        bufp->chgBit(oldp+81,(vlSelf->SingleCycleCPU__DOT__reg_write));
        bufp->chgBit(oldp+82,(vlSelf->SingleCycleCPU__DOT__jal_con));
        bufp->chgBit(oldp+83,(vlSelf->SingleCycleCPU__DOT__jalr_con));
        bufp->chgBit(oldp+84,(vlSelf->SingleCycleCPU__DOT__w1));
        bufp->chgBit(oldp+85,(vlSelf->SingleCycleCPU__DOT__branc));
        bufp->chgBit(oldp+86,(vlSelf->SingleCycleCPU__DOT__id_o_13));
        bufp->chgIData(oldp+87,(vlSelf->SingleCycleCPU__DOT__ex_o_1),32);
        bufp->chgIData(oldp+88,(vlSelf->SingleCycleCPU__DOT__ex_o_3),32);
        bufp->chgBit(oldp+89,(vlSelf->SingleCycleCPU__DOT__ex_o_11));
    }
    bufp->chgBit(oldp+90,(vlSelf->clk));
    bufp->chgBit(oldp+91,(vlSelf->start));
    bufp->chgIData(oldp+92,(vlSelf->r[0]),32);
    bufp->chgIData(oldp+93,(vlSelf->r[1]),32);
    bufp->chgIData(oldp+94,(vlSelf->r[2]),32);
    bufp->chgIData(oldp+95,(vlSelf->r[3]),32);
    bufp->chgIData(oldp+96,(vlSelf->r[4]),32);
    bufp->chgIData(oldp+97,(vlSelf->r[5]),32);
    bufp->chgIData(oldp+98,(vlSelf->r[6]),32);
    bufp->chgIData(oldp+99,(vlSelf->r[7]),32);
    bufp->chgIData(oldp+100,(vlSelf->r[8]),32);
    bufp->chgIData(oldp+101,(vlSelf->r[9]),32);
    bufp->chgIData(oldp+102,(vlSelf->r[10]),32);
    bufp->chgIData(oldp+103,(vlSelf->r[11]),32);
    bufp->chgIData(oldp+104,(vlSelf->r[12]),32);
    bufp->chgIData(oldp+105,(vlSelf->r[13]),32);
    bufp->chgIData(oldp+106,(vlSelf->r[14]),32);
    bufp->chgIData(oldp+107,(vlSelf->r[15]),32);
    bufp->chgIData(oldp+108,(vlSelf->r[16]),32);
    bufp->chgIData(oldp+109,(vlSelf->r[17]),32);
    bufp->chgIData(oldp+110,(vlSelf->r[18]),32);
    bufp->chgIData(oldp+111,(vlSelf->r[19]),32);
    bufp->chgIData(oldp+112,(vlSelf->r[20]),32);
    bufp->chgIData(oldp+113,(vlSelf->r[21]),32);
    bufp->chgIData(oldp+114,(vlSelf->r[22]),32);
    bufp->chgIData(oldp+115,(vlSelf->r[23]),32);
    bufp->chgIData(oldp+116,(vlSelf->r[24]),32);
    bufp->chgIData(oldp+117,(vlSelf->r[25]),32);
    bufp->chgIData(oldp+118,(vlSelf->r[26]),32);
    bufp->chgIData(oldp+119,(vlSelf->r[27]),32);
    bufp->chgIData(oldp+120,(vlSelf->r[28]),32);
    bufp->chgIData(oldp+121,(vlSelf->r[29]),32);
    bufp->chgIData(oldp+122,(vlSelf->r[30]),32);
    bufp->chgIData(oldp+123,(vlSelf->r[31]),32);
    bufp->chgIData(oldp+124,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (vlSelf->SingleCycleCPU__DOT__if_o_2 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+125,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (vlSelf->SingleCycleCPU__DOT__if_o_2 
                                        >> 0x14U))]),32);
    bufp->chgIData(oldp+126,(vlSelf->SingleCycleCPU__DOT__ALU_res),32);
    bufp->chgIData(oldp+127,(vlSelf->SingleCycleCPU__DOT__imm_out),32);
    bufp->chgIData(oldp+128,(vlSelf->SingleCycleCPU__DOT__pc_input),32);
    bufp->chgIData(oldp+129,((vlSelf->SingleCycleCPU__DOT__id_o_1 
                              + (vlSelf->SingleCycleCPU__DOT__id_o_4 
                                 << 1U))),32);
    bufp->chgIData(oldp+130,(vlSelf->SingleCycleCPU__DOT__MALU_o),32);
    bufp->chgIData(oldp+131,(vlSelf->SingleCycleCPU__DOT__read_data),32);
    bufp->chgIData(oldp+132,(vlSelf->SingleCycleCPU__DOT__write_data),32);
    bufp->chgIData(oldp+133,(vlSelf->SingleCycleCPU__DOT__mux_pc_output),32);
    bufp->chgIData(oldp+134,(vlSelf->SingleCycleCPU__DOT__mux_writedata_output),32);
    bufp->chgBit(oldp+135,(vlSelf->SingleCycleCPU__DOT__zero_o));
}

void VSingleCycleCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_cleanup\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
