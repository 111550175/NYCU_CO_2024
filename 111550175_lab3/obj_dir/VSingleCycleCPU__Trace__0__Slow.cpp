// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSingleCycleCPU__Syms.h"


VL_ATTR_COLD void VSingleCycleCPU___024root__trace_init_sub__TOP__0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+91,"clk", false,-1);
    tracep->declBit(c+92,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+93+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("SingleCycleCPU ");
    tracep->declBit(c+91,"clk", false,-1);
    tracep->declBit(c+92,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+93+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBus(c+125,"read_data1", false,-1, 31,0);
    tracep->declBus(c+126,"read_data2", false,-1, 31,0);
    tracep->declBus(c+56,"inst_out", false,-1, 31,0);
    tracep->declBus(c+127,"ALU_res", false,-1, 31,0);
    tracep->declBus(c+128,"imm_out", false,-1, 31,0);
    tracep->declBus(c+14,"shift_left_one", false,-1, 31,0);
    tracep->declBus(c+129,"pc_input", false,-1, 31,0);
    tracep->declBus(c+57,"pc_output", false,-1, 31,0);
    tracep->declBus(c+76,"sum_1", false,-1, 31,0);
    tracep->declBus(c+130,"sum_2", false,-1, 31,0);
    tracep->declBus(c+131,"MALU_o", false,-1, 31,0);
    tracep->declBus(c+132,"read_data", false,-1, 31,0);
    tracep->declBus(c+133,"write_data", false,-1, 31,0);
    tracep->declBus(c+134,"mux_pc_output", false,-1, 31,0);
    tracep->declBus(c+68,"sum_jalr", false,-1, 31,0);
    tracep->declBus(c+135,"mux_writedata_output", false,-1, 31,0);
    tracep->declBus(c+1,"ALU_ctl", false,-1, 3,0);
    tracep->declBus(c+77,"ALU_Op", false,-1, 2,0);
    tracep->declBit(c+78,"mem_read", false,-1);
    tracep->declBit(c+79,"mem_to_reg", false,-1);
    tracep->declBit(c+80,"mem_write", false,-1);
    tracep->declBit(c+136,"zero_o", false,-1);
    tracep->declBit(c+81,"ALU_src", false,-1);
    tracep->declBit(c+82,"reg_write", false,-1);
    tracep->declBit(c+83,"jal_con", false,-1);
    tracep->declBit(c+84,"jalr_con", false,-1);
    tracep->declBit(c+85,"w1", false,-1);
    tracep->declBit(c+86,"branc", false,-1);
    tracep->declBus(c+2,"if_o_1", false,-1, 31,0);
    tracep->declBus(c+58,"if_o_2", false,-1, 31,0);
    tracep->declBus(c+3,"id_o_1", false,-1, 31,0);
    tracep->declBus(c+4,"id_o_2", false,-1, 31,0);
    tracep->declBus(c+15,"id_o_3", false,-1, 31,0);
    tracep->declBus(c+16,"id_o_4", false,-1, 31,0);
    tracep->declBus(c+5,"id_o_6", false,-1, 2,0);
    tracep->declBus(c+6,"id_o_16", false,-1, 2,0);
    tracep->declBus(c+17,"id_o_7", false,-1, 4,0);
    tracep->declBit(c+7,"id_o_5", false,-1);
    tracep->declBit(c+18,"id_o_8", false,-1);
    tracep->declBit(c+69,"id_o_9", false,-1);
    tracep->declBit(c+59,"id_o_10", false,-1);
    tracep->declBit(c+70,"id_o_11", false,-1);
    tracep->declBit(c+8,"id_o_12", false,-1);
    tracep->declBit(c+87,"id_o_13", false,-1);
    tracep->declBit(c+9,"id_o_14", false,-1);
    tracep->declBit(c+19,"id_o_15", false,-1);
    tracep->declBus(c+88,"ex_o_1", false,-1, 31,0);
    tracep->declBus(c+89,"ex_o_3", false,-1, 31,0);
    tracep->declBus(c+10,"ex_o_4", false,-1, 31,0);
    tracep->declBus(c+20,"ex_o_5", false,-1, 4,0);
    tracep->declBit(c+11,"ex_o_2", false,-1);
    tracep->declBit(c+21,"ex_o_6", false,-1);
    tracep->declBit(c+71,"ex_o_7", false,-1);
    tracep->declBit(c+60,"ex_o_8", false,-1);
    tracep->declBit(c+72,"ex_o_9", false,-1);
    tracep->declBit(c+12,"ex_o_10", false,-1);
    tracep->declBit(c+90,"ex_o_11", false,-1);
    tracep->declBit(c+13,"ex_o_12", false,-1);
    tracep->declBus(c+73,"mem_o_1", false,-1, 31,0);
    tracep->declBus(c+74,"mem_o_2", false,-1, 31,0);
    tracep->declBus(c+22,"mem_o_3", false,-1, 4,0);
    tracep->declBit(c+23,"mem_o_4", false,-1);
    tracep->declBit(c+75,"mem_o_5", false,-1);
    tracep->declBit(c+61,"mem_o_6", false,-1);
    tracep->declBus(c+15,"s0_sel", false,-1, 31,0);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+1,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+4,"A", false,-1, 31,0);
    tracep->declBus(c+131,"B", false,-1, 31,0);
    tracep->declBus(c+127,"ALUOut", false,-1, 31,0);
    tracep->declBit(c+136,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrl ");
    tracep->declBus(c+6,"ALUOp", false,-1, 2,0);
    tracep->declBit(c+7,"funct7", false,-1);
    tracep->declBus(c+5,"funct3", false,-1, 2,0);
    tracep->declBus(c+1,"ALUCtl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_1 ");
    tracep->declBus(c+57,"a", false,-1, 31,0);
    tracep->declBus(c+137,"b", false,-1, 31,0);
    tracep->declBus(c+76,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_2 ");
    tracep->declBus(c+3,"a", false,-1, 31,0);
    tracep->declBus(c+14,"b", false,-1, 31,0);
    tracep->declBus(c+130,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_jalr ");
    tracep->declBus(c+4,"a", false,-1, 31,0);
    tracep->declBus(c+16,"b", false,-1, 31,0);
    tracep->declBus(c+68,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control ");
    tracep->declBus(c+62,"opcode", false,-1, 6,0);
    tracep->declBit(c+86,"branch", false,-1);
    tracep->declBit(c+78,"memRead", false,-1);
    tracep->declBit(c+79,"memtoReg", false,-1);
    tracep->declBus(c+77,"ALUOp", false,-1, 2,0);
    tracep->declBit(c+80,"memWrite", false,-1);
    tracep->declBit(c+81,"ALUSrc", false,-1);
    tracep->declBit(c+82,"regWrite", false,-1);
    tracep->declBit(c+83,"jalcon", false,-1);
    tracep->declBit(c+84,"jalrcon", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+92,"rst", false,-1);
    tracep->declBit(c+91,"clk", false,-1);
    tracep->declBit(c+12,"memWrite", false,-1);
    tracep->declBit(c+90,"memRead", false,-1);
    tracep->declBus(c+89,"address", false,-1, 31,0);
    tracep->declBus(c+10,"writeData", false,-1, 31,0);
    tracep->declBus(c+132,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+58,"inst", false,-1, 31,0);
    tracep->declBus(c+128,"imm", false,-1, 31,0);
    tracep->declBus(c+62,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+57,"readAddr", false,-1, 31,0);
    tracep->declBus(c+56,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALU ");
    tracep->declBus(c+138,"size", false,-1, 31,0);
    tracep->declBit(c+19,"sel", false,-1);
    tracep->declBus(c+15,"s0", false,-1, 31,0);
    tracep->declBus(c+16,"s1", false,-1, 31,0);
    tracep->declBus(c+131,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC ");
    tracep->declBus(c+138,"size", false,-1, 31,0);
    tracep->declBit(c+85,"sel", false,-1);
    tracep->declBus(c+76,"s0", false,-1, 31,0);
    tracep->declBus(c+88,"s1", false,-1, 31,0);
    tracep->declBus(c+134,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC2 ");
    tracep->declBus(c+138,"size", false,-1, 31,0);
    tracep->declBit(c+72,"sel", false,-1);
    tracep->declBus(c+134,"s0", false,-1, 31,0);
    tracep->declBus(c+68,"s1", false,-1, 31,0);
    tracep->declBus(c+129,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WriteData ");
    tracep->declBus(c+138,"size", false,-1, 31,0);
    tracep->declBit(c+75,"sel", false,-1);
    tracep->declBus(c+74,"s0", false,-1, 31,0);
    tracep->declBus(c+73,"s1", false,-1, 31,0);
    tracep->declBus(c+135,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WriteData_jal ");
    tracep->declBus(c+138,"size", false,-1, 31,0);
    tracep->declBit(c+61,"sel", false,-1);
    tracep->declBus(c+135,"s0", false,-1, 31,0);
    tracep->declBus(c+76,"s1", false,-1, 31,0);
    tracep->declBus(c+133,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+91,"clk", false,-1);
    tracep->declBit(c+92,"rst", false,-1);
    tracep->declBus(c+129,"pc_i", false,-1, 31,0);
    tracep->declBus(c+57,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+91,"clk", false,-1);
    tracep->declBit(c+92,"rst", false,-1);
    tracep->declBit(c+23,"regWrite", false,-1);
    tracep->declBus(c+63,"readReg1", false,-1, 4,0);
    tracep->declBus(c+64,"readReg2", false,-1, 4,0);
    tracep->declBus(c+22,"writeReg", false,-1, 4,0);
    tracep->declBus(c+133,"writeData", false,-1, 31,0);
    tracep->declBus(c+125,"readData1", false,-1, 31,0);
    tracep->declBus(c+126,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+24+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ShiftLeftOne ");
    tracep->declBus(c+16,"i", false,-1, 31,0);
    tracep->declBus(c+14,"o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_exmem ");
    tracep->declBit(c+91,"clk", false,-1);
    tracep->declBit(c+92,"rst", false,-1);
    tracep->declBus(c+130,"p_reg_i_ex_1", false,-1, 31,0);
    tracep->declBit(c+136,"p_reg_i_ex_2", false,-1);
    tracep->declBus(c+127,"p_reg_i_ex_3", false,-1, 31,0);
    tracep->declBus(c+15,"p_reg_i_ex_4", false,-1, 31,0);
    tracep->declBus(c+17,"p_reg_i_ex_5", false,-1, 4,0);
    tracep->declBit(c+18,"p_reg_i_ex_6", false,-1);
    tracep->declBit(c+69,"p_reg_i_ex_7", false,-1);
    tracep->declBit(c+59,"p_reg_i_ex_8", false,-1);
    tracep->declBit(c+70,"p_reg_i_ex_9", false,-1);
    tracep->declBit(c+8,"p_reg_i_ex_10", false,-1);
    tracep->declBit(c+87,"p_reg_i_ex_11", false,-1);
    tracep->declBit(c+9,"p_reg_i_ex_12", false,-1);
    tracep->declBus(c+88,"p_reg_o_ex_1", false,-1, 31,0);
    tracep->declBit(c+11,"p_reg_o_ex_2", false,-1);
    tracep->declBus(c+89,"p_reg_o_ex_3", false,-1, 31,0);
    tracep->declBus(c+10,"p_reg_o_ex_4", false,-1, 31,0);
    tracep->declBus(c+20,"p_reg_o_ex_5", false,-1, 4,0);
    tracep->declBit(c+21,"p_reg_o_ex_6", false,-1);
    tracep->declBit(c+71,"p_reg_o_ex_7", false,-1);
    tracep->declBit(c+60,"p_reg_o_ex_8", false,-1);
    tracep->declBit(c+72,"p_reg_o_ex_9", false,-1);
    tracep->declBit(c+12,"p_reg_o_ex_10", false,-1);
    tracep->declBit(c+90,"p_reg_o_ex_11", false,-1);
    tracep->declBit(c+13,"p_reg_o_ex_12", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_idex ");
    tracep->declBit(c+91,"clk", false,-1);
    tracep->declBit(c+92,"rst", false,-1);
    tracep->declBus(c+2,"p_reg_i_id_1", false,-1, 31,0);
    tracep->declBus(c+125,"p_reg_i_id_2", false,-1, 31,0);
    tracep->declBus(c+126,"p_reg_i_id_3", false,-1, 31,0);
    tracep->declBus(c+128,"p_reg_i_id_4", false,-1, 31,0);
    tracep->declBit(c+65,"p_reg_i_id_5", false,-1);
    tracep->declBus(c+66,"p_reg_i_id_6", false,-1, 2,0);
    tracep->declBus(c+67,"p_reg_i_id_7", false,-1, 4,0);
    tracep->declBit(c+82,"p_reg_i_id_8", false,-1);
    tracep->declBit(c+79,"p_reg_i_id_9", false,-1);
    tracep->declBit(c+83,"p_reg_i_id_10", false,-1);
    tracep->declBit(c+84,"p_reg_i_id_11", false,-1);
    tracep->declBit(c+80,"p_reg_i_id_12", false,-1);
    tracep->declBit(c+78,"p_reg_i_id_13", false,-1);
    tracep->declBit(c+86,"p_reg_i_id_14", false,-1);
    tracep->declBit(c+81,"p_reg_i_id_15", false,-1);
    tracep->declBus(c+77,"p_reg_i_id_16", false,-1, 2,0);
    tracep->declBus(c+3,"p_reg_o_id_1", false,-1, 31,0);
    tracep->declBus(c+4,"p_reg_o_id_2", false,-1, 31,0);
    tracep->declBus(c+15,"p_reg_o_id_3", false,-1, 31,0);
    tracep->declBus(c+16,"p_reg_o_id_4", false,-1, 31,0);
    tracep->declBit(c+7,"p_reg_o_id_5", false,-1);
    tracep->declBus(c+5,"p_reg_o_id_6", false,-1, 2,0);
    tracep->declBus(c+17,"p_reg_o_id_7", false,-1, 4,0);
    tracep->declBit(c+18,"p_reg_o_id_8", false,-1);
    tracep->declBit(c+69,"p_reg_o_id_9", false,-1);
    tracep->declBit(c+59,"p_reg_o_id_10", false,-1);
    tracep->declBit(c+70,"p_reg_o_id_11", false,-1);
    tracep->declBit(c+8,"p_reg_o_id_12", false,-1);
    tracep->declBit(c+87,"p_reg_o_id_13", false,-1);
    tracep->declBit(c+9,"p_reg_o_id_14", false,-1);
    tracep->declBit(c+19,"p_reg_o_id_15", false,-1);
    tracep->declBus(c+6,"p_reg_o_id_16", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ifid ");
    tracep->declBit(c+91,"clk", false,-1);
    tracep->declBit(c+92,"rst", false,-1);
    tracep->declBus(c+57,"p_reg_i_if_1", false,-1, 31,0);
    tracep->declBus(c+56,"p_reg_i_if_2", false,-1, 31,0);
    tracep->declBus(c+2,"p_reg_o_if_1", false,-1, 31,0);
    tracep->declBus(c+58,"p_reg_o_if_2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_memwb ");
    tracep->declBit(c+91,"clk", false,-1);
    tracep->declBit(c+92,"rst", false,-1);
    tracep->declBus(c+132,"p_reg_i_mem_1", false,-1, 31,0);
    tracep->declBus(c+89,"p_reg_i_mem_2", false,-1, 31,0);
    tracep->declBus(c+20,"p_reg_i_mem_3", false,-1, 4,0);
    tracep->declBit(c+21,"p_reg_i_mem_4", false,-1);
    tracep->declBit(c+71,"p_reg_i_mem_5", false,-1);
    tracep->declBit(c+60,"p_reg_i_mem_6", false,-1);
    tracep->declBus(c+73,"p_reg_o_mem_1", false,-1, 31,0);
    tracep->declBus(c+74,"p_reg_o_mem_2", false,-1, 31,0);
    tracep->declBus(c+22,"p_reg_o_mem_3", false,-1, 4,0);
    tracep->declBit(c+23,"p_reg_o_mem_4", false,-1);
    tracep->declBit(c+75,"p_reg_o_mem_5", false,-1);
    tracep->declBit(c+61,"p_reg_o_mem_6", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_init_top(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_init_top\n"); );
    // Body
    VSingleCycleCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSingleCycleCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSingleCycleCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_register(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSingleCycleCPU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSingleCycleCPU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSingleCycleCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_full_top_0\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSingleCycleCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->SingleCycleCPU__DOT__ALU_ctl),4);
    bufp->fullIData(oldp+2,(vlSelf->SingleCycleCPU__DOT__if_o_1),32);
    bufp->fullIData(oldp+3,(vlSelf->SingleCycleCPU__DOT__id_o_1),32);
    bufp->fullIData(oldp+4,(vlSelf->SingleCycleCPU__DOT__id_o_2),32);
    bufp->fullCData(oldp+5,(vlSelf->SingleCycleCPU__DOT__id_o_6),3);
    bufp->fullCData(oldp+6,(vlSelf->SingleCycleCPU__DOT__id_o_16),3);
    bufp->fullBit(oldp+7,(vlSelf->SingleCycleCPU__DOT__id_o_5));
    bufp->fullBit(oldp+8,(vlSelf->SingleCycleCPU__DOT__id_o_12));
    bufp->fullBit(oldp+9,(vlSelf->SingleCycleCPU__DOT__id_o_14));
    bufp->fullIData(oldp+10,(vlSelf->SingleCycleCPU__DOT__ex_o_4),32);
    bufp->fullBit(oldp+11,(vlSelf->SingleCycleCPU__DOT__ex_o_2));
    bufp->fullBit(oldp+12,(vlSelf->SingleCycleCPU__DOT__ex_o_10));
    bufp->fullBit(oldp+13,(vlSelf->SingleCycleCPU__DOT__ex_o_12));
    bufp->fullIData(oldp+14,((vlSelf->SingleCycleCPU__DOT__id_o_4 
                              << 1U)),32);
    bufp->fullIData(oldp+15,(vlSelf->SingleCycleCPU__DOT__id_o_3),32);
    bufp->fullIData(oldp+16,(vlSelf->SingleCycleCPU__DOT__id_o_4),32);
    bufp->fullCData(oldp+17,(vlSelf->SingleCycleCPU__DOT__id_o_7),5);
    bufp->fullBit(oldp+18,(vlSelf->SingleCycleCPU__DOT__id_o_8));
    bufp->fullBit(oldp+19,(vlSelf->SingleCycleCPU__DOT__id_o_15));
    bufp->fullCData(oldp+20,(vlSelf->SingleCycleCPU__DOT__ex_o_5),5);
    bufp->fullBit(oldp+21,(vlSelf->SingleCycleCPU__DOT__ex_o_6));
    bufp->fullCData(oldp+22,(vlSelf->SingleCycleCPU__DOT__mem_o_3),5);
    bufp->fullBit(oldp+23,(vlSelf->SingleCycleCPU__DOT__mem_o_4));
    bufp->fullIData(oldp+24,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+25,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+26,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+27,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+28,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+29,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+30,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+31,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+32,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+33,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+34,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+35,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+36,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+37,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+38,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+39,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+40,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+41,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+42,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+43,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+44,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+45,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+46,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+47,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+48,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+49,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+50,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+51,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+52,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+53,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+54,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+55,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullIData(oldp+56,(((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_output)
                               ? 0U : ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & vlSelf->SingleCycleCPU__DOT__pc_output)] 
                                        << 0x18U) | 
                                       ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                         [(0x7fU & 
                                           ((IData)(1U) 
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
    bufp->fullIData(oldp+57,(vlSelf->SingleCycleCPU__DOT__pc_output),32);
    bufp->fullIData(oldp+58,(vlSelf->SingleCycleCPU__DOT__if_o_2),32);
    bufp->fullBit(oldp+59,(vlSelf->SingleCycleCPU__DOT__id_o_10));
    bufp->fullBit(oldp+60,(vlSelf->SingleCycleCPU__DOT__ex_o_8));
    bufp->fullBit(oldp+61,(vlSelf->SingleCycleCPU__DOT__mem_o_6));
    bufp->fullCData(oldp+62,(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode),7);
    bufp->fullCData(oldp+63,((0x1fU & (vlSelf->SingleCycleCPU__DOT__if_o_2 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+64,((0x1fU & (vlSelf->SingleCycleCPU__DOT__if_o_2 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+65,((1U & (vlSelf->SingleCycleCPU__DOT__if_o_2 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+66,((7U & (vlSelf->SingleCycleCPU__DOT__if_o_2 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+67,((0x1fU & (vlSelf->SingleCycleCPU__DOT__if_o_2 
                                       >> 7U))),5);
    bufp->fullIData(oldp+68,(vlSelf->SingleCycleCPU__DOT__sum_jalr),32);
    bufp->fullBit(oldp+69,(vlSelf->SingleCycleCPU__DOT__id_o_9));
    bufp->fullBit(oldp+70,(vlSelf->SingleCycleCPU__DOT__id_o_11));
    bufp->fullBit(oldp+71,(vlSelf->SingleCycleCPU__DOT__ex_o_7));
    bufp->fullBit(oldp+72,(vlSelf->SingleCycleCPU__DOT__ex_o_9));
    bufp->fullIData(oldp+73,(vlSelf->SingleCycleCPU__DOT__mem_o_1),32);
    bufp->fullIData(oldp+74,(vlSelf->SingleCycleCPU__DOT__mem_o_2),32);
    bufp->fullBit(oldp+75,(vlSelf->SingleCycleCPU__DOT__mem_o_5));
    bufp->fullIData(oldp+76,(vlSelf->SingleCycleCPU__DOT__sum_1),32);
    bufp->fullCData(oldp+77,(vlSelf->SingleCycleCPU__DOT__ALU_Op),3);
    bufp->fullBit(oldp+78,(vlSelf->SingleCycleCPU__DOT__mem_read));
    bufp->fullBit(oldp+79,(vlSelf->SingleCycleCPU__DOT__mem_to_reg));
    bufp->fullBit(oldp+80,(vlSelf->SingleCycleCPU__DOT__mem_write));
    bufp->fullBit(oldp+81,(vlSelf->SingleCycleCPU__DOT__ALU_src));
    bufp->fullBit(oldp+82,(vlSelf->SingleCycleCPU__DOT__reg_write));
    bufp->fullBit(oldp+83,(vlSelf->SingleCycleCPU__DOT__jal_con));
    bufp->fullBit(oldp+84,(vlSelf->SingleCycleCPU__DOT__jalr_con));
    bufp->fullBit(oldp+85,(vlSelf->SingleCycleCPU__DOT__w1));
    bufp->fullBit(oldp+86,(vlSelf->SingleCycleCPU__DOT__branc));
    bufp->fullBit(oldp+87,(vlSelf->SingleCycleCPU__DOT__id_o_13));
    bufp->fullIData(oldp+88,(vlSelf->SingleCycleCPU__DOT__ex_o_1),32);
    bufp->fullIData(oldp+89,(vlSelf->SingleCycleCPU__DOT__ex_o_3),32);
    bufp->fullBit(oldp+90,(vlSelf->SingleCycleCPU__DOT__ex_o_11));
    bufp->fullBit(oldp+91,(vlSelf->clk));
    bufp->fullBit(oldp+92,(vlSelf->start));
    bufp->fullIData(oldp+93,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+94,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+95,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+96,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+97,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+98,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+99,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+100,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+101,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+102,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+103,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+104,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+105,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+106,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+107,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+108,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+109,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+110,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+111,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+112,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+113,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+114,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+115,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+116,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+117,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+118,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+119,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+120,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+121,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+122,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+123,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+124,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+125,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelf->SingleCycleCPU__DOT__if_o_2 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+126,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelf->SingleCycleCPU__DOT__if_o_2 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+127,(vlSelf->SingleCycleCPU__DOT__ALU_res),32);
    bufp->fullIData(oldp+128,(vlSelf->SingleCycleCPU__DOT__imm_out),32);
    bufp->fullIData(oldp+129,(vlSelf->SingleCycleCPU__DOT__pc_input),32);
    bufp->fullIData(oldp+130,((vlSelf->SingleCycleCPU__DOT__id_o_1 
                               + (vlSelf->SingleCycleCPU__DOT__id_o_4 
                                  << 1U))),32);
    bufp->fullIData(oldp+131,(vlSelf->SingleCycleCPU__DOT__MALU_o),32);
    bufp->fullIData(oldp+132,(vlSelf->SingleCycleCPU__DOT__read_data),32);
    bufp->fullIData(oldp+133,(vlSelf->SingleCycleCPU__DOT__write_data),32);
    bufp->fullIData(oldp+134,(vlSelf->SingleCycleCPU__DOT__mux_pc_output),32);
    bufp->fullIData(oldp+135,(vlSelf->SingleCycleCPU__DOT__mux_writedata_output),32);
    bufp->fullBit(oldp+136,(vlSelf->SingleCycleCPU__DOT__zero_o));
    bufp->fullIData(oldp+137,(4U),32);
    bufp->fullIData(oldp+138,(0x20U),32);
}
