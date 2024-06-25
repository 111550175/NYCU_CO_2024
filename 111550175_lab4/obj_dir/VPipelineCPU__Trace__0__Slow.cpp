// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPipelineCPU__Syms.h"


VL_ATTR_COLD void VPipelineCPU___024root__trace_init_sub__TOP__0(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+100+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("PipelineCPU ");
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+100+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBus(c+132,"read_data1", false,-1, 31,0);
    tracep->declBus(c+133,"read_data2", false,-1, 31,0);
    tracep->declBus(c+22,"inst_out", false,-1, 31,0);
    tracep->declBus(c+134,"ALU_res", false,-1, 31,0);
    tracep->declBus(c+135,"imm_out", false,-1, 31,0);
    tracep->declBus(c+13,"shift_left_one", false,-1, 31,0);
    tracep->declBus(c+136,"pc_input", false,-1, 31,0);
    tracep->declBus(c+23,"pc_output", false,-1, 31,0);
    tracep->declBus(c+73,"sum_1", false,-1, 31,0);
    tracep->declBus(c+74,"sum_2", false,-1, 31,0);
    tracep->declBus(c+137,"MALU_o", false,-1, 31,0);
    tracep->declBus(c+138,"read_data", false,-1, 31,0);
    tracep->declBus(c+139,"write_data", false,-1, 31,0);
    tracep->declBus(c+140,"Mdm_o", false,-1, 31,0);
    tracep->declBus(c+141,"Mdm_2_o", false,-1, 31,0);
    tracep->declBus(c+142,"mjalr_o", false,-1, 31,0);
    tracep->declBus(c+143,"mjalr2_o", false,-1, 31,0);
    tracep->declBus(c+144,"mux_pc_output", false,-1, 31,0);
    tracep->declBus(c+145,"sum_jalr", false,-1, 31,0);
    tracep->declBus(c+146,"mux_writedata_output", false,-1, 31,0);
    tracep->declBus(c+1,"ALU_ctl", false,-1, 3,0);
    tracep->declBus(c+84,"ALU_Op", false,-1, 2,0);
    tracep->declBit(c+85,"mem_read", false,-1);
    tracep->declBit(c+86,"mem_to_reg", false,-1);
    tracep->declBit(c+87,"mem_write", false,-1);
    tracep->declBit(c+147,"zero_o", false,-1);
    tracep->declBit(c+88,"ALU_src", false,-1);
    tracep->declBit(c+89,"reg_write", false,-1);
    tracep->declBit(c+90,"jal_con", false,-1);
    tracep->declBit(c+91,"jalr_con", false,-1);
    tracep->declBit(c+148,"w1", false,-1);
    tracep->declBit(c+92,"branc", false,-1);
    tracep->declBus(c+2,"if_o_1", false,-1, 31,0);
    tracep->declBus(c+24,"if_o_2", false,-1, 31,0);
    tracep->declBus(c+65,"if_o_3", false,-1, 31,0);
    tracep->declBus(c+3,"id_o_1", false,-1, 31,0);
    tracep->declBus(c+25,"id_o_2", false,-1, 31,0);
    tracep->declBus(c+26,"id_o_3", false,-1, 31,0);
    tracep->declBus(c+14,"id_o_4", false,-1, 31,0);
    tracep->declBus(c+66,"id_o_17", false,-1, 31,0);
    tracep->declBus(c+4,"id_o_6", false,-1, 2,0);
    tracep->declBus(c+5,"id_o_16", false,-1, 2,0);
    tracep->declBus(c+15,"id_o_7", false,-1, 4,0);
    tracep->declBus(c+6,"id_o_18", false,-1, 4,0);
    tracep->declBus(c+7,"id_o_19", false,-1, 4,0);
    tracep->declBit(c+8,"id_o_5", false,-1);
    tracep->declBit(c+16,"id_o_8", false,-1);
    tracep->declBit(c+75,"id_o_9", false,-1);
    tracep->declBit(c+67,"id_o_10", false,-1);
    tracep->declBit(c+68,"id_o_11", false,-1);
    tracep->declBit(c+9,"id_o_12", false,-1);
    tracep->declBit(c+93,"id_o_13", false,-1);
    tracep->declBit(c+10,"id_o_14", false,-1);
    tracep->declBit(c+17,"id_o_15", false,-1);
    tracep->declBus(c+94,"ex_o_3", false,-1, 31,0);
    tracep->declBus(c+11,"ex_o_4", false,-1, 31,0);
    tracep->declBus(c+69,"ex_o_13", false,-1, 31,0);
    tracep->declBus(c+18,"ex_o_5", false,-1, 4,0);
    tracep->declBit(c+19,"ex_o_6", false,-1);
    tracep->declBit(c+76,"ex_o_7", false,-1);
    tracep->declBit(c+70,"ex_o_8", false,-1);
    tracep->declBit(c+12,"ex_o_10", false,-1);
    tracep->declBit(c+95,"ex_o_11", false,-1);
    tracep->declBus(c+77,"mem_o_1", false,-1, 31,0);
    tracep->declBus(c+78,"mem_o_2", false,-1, 31,0);
    tracep->declBus(c+71,"mem_o_7", false,-1, 31,0);
    tracep->declBus(c+20,"mem_o_3", false,-1, 4,0);
    tracep->declBit(c+21,"mem_o_4", false,-1);
    tracep->declBit(c+79,"mem_o_5", false,-1);
    tracep->declBit(c+72,"mem_o_6", false,-1);
    tracep->declBus(c+26,"s0_sel", false,-1, 31,0);
    tracep->declBit(c+80,"mfu_o_1", false,-1);
    tracep->declBit(c+81,"mfu_o_2", false,-1);
    tracep->declBit(c+82,"mfu_o_3", false,-1);
    tracep->declBit(c+83,"mfu_o_4", false,-1);
    tracep->declBus(c+149,"rs1_1_output", false,-1, 31,0);
    tracep->declBus(c+150,"rs1_2_output", false,-1, 31,0);
    tracep->declBus(c+151,"rs2_1_output", false,-1, 31,0);
    tracep->declBus(c+152,"rs2_2_output", false,-1, 31,0);
    tracep->declBit(c+96,"mhdu_o_1", false,-1);
    tracep->declBit(c+97,"mhdu_o_2", false,-1);
    tracep->declBit(c+153,"mhdu_o_4", false,-1);
    tracep->declBus(c+139,"write_data_async", false,-1, 31,0);
    tracep->declBus(c+73,"sum_1_async", false,-1, 31,0);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+1,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+150,"A", false,-1, 31,0);
    tracep->declBus(c+137,"B", false,-1, 31,0);
    tracep->declBus(c+134,"ALUOut", false,-1, 31,0);
    tracep->declBit(c+147,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrl ");
    tracep->declBus(c+5,"ALUOp", false,-1, 2,0);
    tracep->declBit(c+8,"funct7", false,-1);
    tracep->declBus(c+4,"funct3", false,-1, 2,0);
    tracep->declBus(c+1,"ALUCtl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_1 ");
    tracep->declBus(c+23,"a", false,-1, 31,0);
    tracep->declBus(c+154,"b", false,-1, 31,0);
    tracep->declBus(c+73,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_2 ");
    tracep->declBus(c+3,"a", false,-1, 31,0);
    tracep->declBus(c+13,"b", false,-1, 31,0);
    tracep->declBus(c+74,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_jalr ");
    tracep->declBus(c+143,"a", false,-1, 31,0);
    tracep->declBus(c+14,"b", false,-1, 31,0);
    tracep->declBus(c+145,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control ");
    tracep->declBus(c+27,"opcode", false,-1, 6,0);
    tracep->declBit(c+92,"branch", false,-1);
    tracep->declBit(c+85,"memRead", false,-1);
    tracep->declBit(c+86,"memtoReg", false,-1);
    tracep->declBus(c+84,"ALUOp", false,-1, 2,0);
    tracep->declBit(c+87,"memWrite", false,-1);
    tracep->declBit(c+88,"ALUSrc", false,-1);
    tracep->declBit(c+89,"regWrite", false,-1);
    tracep->declBit(c+90,"jalcon", false,-1);
    tracep->declBit(c+91,"jalrcon", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+99,"rst", false,-1);
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+12,"memWrite", false,-1);
    tracep->declBit(c+95,"memRead", false,-1);
    tracep->declBus(c+94,"address", false,-1, 31,0);
    tracep->declBus(c+11,"writeData", false,-1, 31,0);
    tracep->declBus(c+138,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+24,"inst", false,-1, 31,0);
    tracep->declBus(c+135,"imm", false,-1, 31,0);
    tracep->declBus(c+27,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+23,"readAddr", false,-1, 31,0);
    tracep->declBus(c+22,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALU ");
    tracep->declBus(c+155,"size", false,-1, 31,0);
    tracep->declBit(c+17,"sel", false,-1);
    tracep->declBus(c+152,"s0", false,-1, 31,0);
    tracep->declBus(c+14,"s1", false,-1, 31,0);
    tracep->declBus(c+137,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC ");
    tracep->declBus(c+155,"size", false,-1, 31,0);
    tracep->declBit(c+148,"sel", false,-1);
    tracep->declBus(c+73,"s0", false,-1, 31,0);
    tracep->declBus(c+74,"s1", false,-1, 31,0);
    tracep->declBus(c+144,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC2 ");
    tracep->declBus(c+155,"size", false,-1, 31,0);
    tracep->declBit(c+68,"sel", false,-1);
    tracep->declBus(c+144,"s0", false,-1, 31,0);
    tracep->declBus(c+145,"s1", false,-1, 31,0);
    tracep->declBus(c+136,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WriteData ");
    tracep->declBus(c+155,"size", false,-1, 31,0);
    tracep->declBit(c+79,"sel", false,-1);
    tracep->declBus(c+78,"s0", false,-1, 31,0);
    tracep->declBus(c+77,"s1", false,-1, 31,0);
    tracep->declBus(c+146,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WriteData_jal ");
    tracep->declBus(c+155,"size", false,-1, 31,0);
    tracep->declBit(c+72,"sel", false,-1);
    tracep->declBus(c+146,"s0", false,-1, 31,0);
    tracep->declBus(c+71,"s1", false,-1, 31,0);
    tracep->declBus(c+139,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_dm ");
    tracep->declBus(c+155,"size", false,-1, 31,0);
    tracep->declBit(c+82,"sel", false,-1);
    tracep->declBus(c+26,"s0", false,-1, 31,0);
    tracep->declBus(c+94,"s1", false,-1, 31,0);
    tracep->declBus(c+140,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_dm_2 ");
    tracep->declBus(c+155,"size", false,-1, 31,0);
    tracep->declBit(c+83,"sel", false,-1);
    tracep->declBus(c+140,"s0", false,-1, 31,0);
    tracep->declBus(c+139,"s1", false,-1, 31,0);
    tracep->declBus(c+141,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_jalr ");
    tracep->declBus(c+155,"size", false,-1, 31,0);
    tracep->declBit(c+80,"sel", false,-1);
    tracep->declBus(c+25,"s0", false,-1, 31,0);
    tracep->declBus(c+94,"s1", false,-1, 31,0);
    tracep->declBus(c+142,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_jalr_2 ");
    tracep->declBus(c+155,"size", false,-1, 31,0);
    tracep->declBit(c+81,"sel", false,-1);
    tracep->declBus(c+142,"s0", false,-1, 31,0);
    tracep->declBus(c+139,"s1", false,-1, 31,0);
    tracep->declBus(c+143,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_rs1_1 ");
    tracep->declBus(c+155,"size", false,-1, 31,0);
    tracep->declBit(c+80,"sel", false,-1);
    tracep->declBus(c+25,"s0", false,-1, 31,0);
    tracep->declBus(c+94,"s1", false,-1, 31,0);
    tracep->declBus(c+149,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_rs1_2 ");
    tracep->declBus(c+155,"size", false,-1, 31,0);
    tracep->declBit(c+81,"sel", false,-1);
    tracep->declBus(c+149,"s0", false,-1, 31,0);
    tracep->declBus(c+139,"s1", false,-1, 31,0);
    tracep->declBus(c+150,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_rs2_1 ");
    tracep->declBus(c+155,"size", false,-1, 31,0);
    tracep->declBit(c+82,"sel", false,-1);
    tracep->declBus(c+26,"s0", false,-1, 31,0);
    tracep->declBus(c+94,"s1", false,-1, 31,0);
    tracep->declBus(c+151,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_rs2_2 ");
    tracep->declBus(c+155,"size", false,-1, 31,0);
    tracep->declBit(c+83,"sel", false,-1);
    tracep->declBus(c+151,"s0", false,-1, 31,0);
    tracep->declBus(c+139,"s1", false,-1, 31,0);
    tracep->declBus(c+152,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"rst", false,-1);
    tracep->declBus(c+136,"pc_i", false,-1, 31,0);
    tracep->declBit(c+96,"pc_i_2", false,-1);
    tracep->declBus(c+23,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"rst", false,-1);
    tracep->declBit(c+21,"regWrite", false,-1);
    tracep->declBus(c+28,"readReg1", false,-1, 4,0);
    tracep->declBus(c+29,"readReg2", false,-1, 4,0);
    tracep->declBus(c+20,"writeReg", false,-1, 4,0);
    tracep->declBus(c+139,"writeData", false,-1, 31,0);
    tracep->declBus(c+132,"readData1", false,-1, 31,0);
    tracep->declBus(c+133,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+33+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ShiftLeftOne ");
    tracep->declBus(c+14,"i", false,-1, 31,0);
    tracep->declBus(c+13,"o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_exmem ");
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"rst", false,-1);
    tracep->declBus(c+134,"p_reg_i_ex_3", false,-1, 31,0);
    tracep->declBus(c+141,"p_reg_i_ex_4", false,-1, 31,0);
    tracep->declBus(c+15,"p_reg_i_ex_5", false,-1, 4,0);
    tracep->declBit(c+16,"p_reg_i_ex_6", false,-1);
    tracep->declBit(c+75,"p_reg_i_ex_7", false,-1);
    tracep->declBit(c+67,"p_reg_i_ex_8", false,-1);
    tracep->declBit(c+9,"p_reg_i_ex_10", false,-1);
    tracep->declBit(c+93,"p_reg_i_ex_11", false,-1);
    tracep->declBus(c+66,"p_reg_i_ex_13", false,-1, 31,0);
    tracep->declBus(c+94,"p_reg_o_ex_3", false,-1, 31,0);
    tracep->declBus(c+11,"p_reg_o_ex_4", false,-1, 31,0);
    tracep->declBus(c+18,"p_reg_o_ex_5", false,-1, 4,0);
    tracep->declBit(c+19,"p_reg_o_ex_6", false,-1);
    tracep->declBit(c+76,"p_reg_o_ex_7", false,-1);
    tracep->declBit(c+70,"p_reg_o_ex_8", false,-1);
    tracep->declBit(c+12,"p_reg_o_ex_10", false,-1);
    tracep->declBit(c+95,"p_reg_o_ex_11", false,-1);
    tracep->declBus(c+69,"p_reg_o_ex_13", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_fu ");
    tracep->declBus(c+18,"fu_i_1", false,-1, 4,0);
    tracep->declBus(c+20,"fu_i_2", false,-1, 4,0);
    tracep->declBus(c+6,"fu_i_3", false,-1, 4,0);
    tracep->declBus(c+7,"fu_i_4", false,-1, 4,0);
    tracep->declBit(c+79,"fu_i_5", false,-1);
    tracep->declBit(c+21,"fu_i_6", false,-1);
    tracep->declBit(c+19,"fu_i_7", false,-1);
    tracep->declBit(c+76,"fu_i_8", false,-1);
    tracep->declBit(c+80,"fu_o_1", false,-1);
    tracep->declBit(c+81,"fu_o_2", false,-1);
    tracep->declBit(c+82,"fu_o_3", false,-1);
    tracep->declBit(c+83,"fu_o_4", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_hdu ");
    tracep->declBit(c+93,"hdu_i_1", false,-1);
    tracep->declBus(c+15,"hdu_i_2", false,-1, 4,0);
    tracep->declBus(c+28,"hdu_i_3", false,-1, 4,0);
    tracep->declBus(c+29,"hdu_i_4", false,-1, 4,0);
    tracep->declBit(c+148,"hdu_i_5", false,-1);
    tracep->declBit(c+96,"hdu_o_1", false,-1);
    tracep->declBit(c+97,"hdu_o_2", false,-1);
    tracep->declBit(c+153,"hdu_o_4", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_idex ");
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"rst", false,-1);
    tracep->declBus(c+2,"p_reg_i_id_1", false,-1, 31,0);
    tracep->declBus(c+132,"p_reg_i_id_2", false,-1, 31,0);
    tracep->declBus(c+133,"p_reg_i_id_3", false,-1, 31,0);
    tracep->declBus(c+135,"p_reg_i_id_4", false,-1, 31,0);
    tracep->declBit(c+30,"p_reg_i_id_5", false,-1);
    tracep->declBus(c+31,"p_reg_i_id_6", false,-1, 2,0);
    tracep->declBus(c+32,"p_reg_i_id_7", false,-1, 4,0);
    tracep->declBit(c+89,"p_reg_i_id_8", false,-1);
    tracep->declBit(c+86,"p_reg_i_id_9", false,-1);
    tracep->declBit(c+90,"p_reg_i_id_10", false,-1);
    tracep->declBit(c+91,"p_reg_i_id_11", false,-1);
    tracep->declBit(c+87,"p_reg_i_id_12", false,-1);
    tracep->declBit(c+85,"p_reg_i_id_13", false,-1);
    tracep->declBit(c+92,"p_reg_i_id_14", false,-1);
    tracep->declBit(c+88,"p_reg_i_id_15", false,-1);
    tracep->declBus(c+84,"p_reg_i_id_16", false,-1, 2,0);
    tracep->declBus(c+65,"p_reg_i_id_17", false,-1, 31,0);
    tracep->declBus(c+28,"p_reg_i_id_18", false,-1, 4,0);
    tracep->declBus(c+29,"p_reg_i_id_19", false,-1, 4,0);
    tracep->declBit(c+153,"p_reg_i_id_20", false,-1);
    tracep->declBit(c+97,"p_reg_i_id_21", false,-1);
    tracep->declBus(c+3,"p_reg_o_id_1", false,-1, 31,0);
    tracep->declBus(c+25,"p_reg_o_id_2", false,-1, 31,0);
    tracep->declBus(c+26,"p_reg_o_id_3", false,-1, 31,0);
    tracep->declBus(c+14,"p_reg_o_id_4", false,-1, 31,0);
    tracep->declBit(c+8,"p_reg_o_id_5", false,-1);
    tracep->declBus(c+4,"p_reg_o_id_6", false,-1, 2,0);
    tracep->declBus(c+15,"p_reg_o_id_7", false,-1, 4,0);
    tracep->declBit(c+16,"p_reg_o_id_8", false,-1);
    tracep->declBit(c+75,"p_reg_o_id_9", false,-1);
    tracep->declBit(c+67,"p_reg_o_id_10", false,-1);
    tracep->declBit(c+68,"p_reg_o_id_11", false,-1);
    tracep->declBit(c+9,"p_reg_o_id_12", false,-1);
    tracep->declBit(c+93,"p_reg_o_id_13", false,-1);
    tracep->declBit(c+10,"p_reg_o_id_14", false,-1);
    tracep->declBit(c+17,"p_reg_o_id_15", false,-1);
    tracep->declBus(c+5,"p_reg_o_id_16", false,-1, 2,0);
    tracep->declBus(c+66,"p_reg_o_id_17", false,-1, 31,0);
    tracep->declBus(c+6,"p_reg_o_id_18", false,-1, 4,0);
    tracep->declBus(c+7,"p_reg_o_id_19", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ifid ");
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"rst", false,-1);
    tracep->declBus(c+23,"p_reg_i_if_1", false,-1, 31,0);
    tracep->declBus(c+22,"p_reg_i_if_2", false,-1, 31,0);
    tracep->declBus(c+73,"p_reg_i_if_3", false,-1, 31,0);
    tracep->declBit(c+153,"p_reg_i_if_4", false,-1);
    tracep->declBit(c+97,"p_reg_i_if_5", false,-1);
    tracep->declBus(c+2,"p_reg_o_if_1", false,-1, 31,0);
    tracep->declBus(c+24,"p_reg_o_if_2", false,-1, 31,0);
    tracep->declBus(c+65,"p_reg_o_if_3", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_memwb ");
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"rst", false,-1);
    tracep->declBus(c+138,"p_reg_i_mem_1", false,-1, 31,0);
    tracep->declBus(c+94,"p_reg_i_mem_2", false,-1, 31,0);
    tracep->declBus(c+18,"p_reg_i_mem_3", false,-1, 4,0);
    tracep->declBit(c+19,"p_reg_i_mem_4", false,-1);
    tracep->declBit(c+76,"p_reg_i_mem_5", false,-1);
    tracep->declBit(c+70,"p_reg_i_mem_6", false,-1);
    tracep->declBus(c+69,"p_reg_i_mem_7", false,-1, 31,0);
    tracep->declBus(c+77,"p_reg_o_mem_1", false,-1, 31,0);
    tracep->declBus(c+78,"p_reg_o_mem_2", false,-1, 31,0);
    tracep->declBus(c+20,"p_reg_o_mem_3", false,-1, 4,0);
    tracep->declBit(c+21,"p_reg_o_mem_4", false,-1);
    tracep->declBit(c+79,"p_reg_o_mem_5", false,-1);
    tracep->declBit(c+72,"p_reg_o_mem_6", false,-1);
    tracep->declBus(c+71,"p_reg_o_mem_7", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_init_top(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_init_top\n"); );
    // Body
    VPipelineCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelineCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelineCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPipelineCPU___024root__trace_register(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPipelineCPU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPipelineCPU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPipelineCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_full_top_0\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPipelineCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->PipelineCPU__DOT__ALU_ctl),4);
    bufp->fullIData(oldp+2,(vlSelf->PipelineCPU__DOT__if_o_1),32);
    bufp->fullIData(oldp+3,(vlSelf->PipelineCPU__DOT__id_o_1),32);
    bufp->fullCData(oldp+4,(vlSelf->PipelineCPU__DOT__id_o_6),3);
    bufp->fullCData(oldp+5,(vlSelf->PipelineCPU__DOT__id_o_16),3);
    bufp->fullCData(oldp+6,(vlSelf->PipelineCPU__DOT__id_o_18),5);
    bufp->fullCData(oldp+7,(vlSelf->PipelineCPU__DOT__id_o_19),5);
    bufp->fullBit(oldp+8,(vlSelf->PipelineCPU__DOT__id_o_5));
    bufp->fullBit(oldp+9,(vlSelf->PipelineCPU__DOT__id_o_12));
    bufp->fullBit(oldp+10,(vlSelf->PipelineCPU__DOT__id_o_14));
    bufp->fullIData(oldp+11,(vlSelf->PipelineCPU__DOT__ex_o_4),32);
    bufp->fullBit(oldp+12,(vlSelf->PipelineCPU__DOT__ex_o_10));
    bufp->fullIData(oldp+13,((vlSelf->PipelineCPU__DOT__id_o_4 
                              << 1U)),32);
    bufp->fullIData(oldp+14,(vlSelf->PipelineCPU__DOT__id_o_4),32);
    bufp->fullCData(oldp+15,(vlSelf->PipelineCPU__DOT__id_o_7),5);
    bufp->fullBit(oldp+16,(vlSelf->PipelineCPU__DOT__id_o_8));
    bufp->fullBit(oldp+17,(vlSelf->PipelineCPU__DOT__id_o_15));
    bufp->fullCData(oldp+18,(vlSelf->PipelineCPU__DOT__ex_o_5),5);
    bufp->fullBit(oldp+19,(vlSelf->PipelineCPU__DOT__ex_o_6));
    bufp->fullCData(oldp+20,(vlSelf->PipelineCPU__DOT__mem_o_3),5);
    bufp->fullBit(oldp+21,(vlSelf->PipelineCPU__DOT__mem_o_4));
    bufp->fullIData(oldp+22,(((0x80U <= vlSelf->PipelineCPU__DOT__pc_output)
                               ? 0U : ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & vlSelf->PipelineCPU__DOT__pc_output)] 
                                        << 0x18U) | 
                                       ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                         [(0x7fU & 
                                           ((IData)(1U) 
                                            + vlSelf->PipelineCPU__DOT__pc_output))] 
                                         << 0x10U) 
                                        | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                            [(0x7fU 
                                              & ((IData)(2U) 
                                                 + vlSelf->PipelineCPU__DOT__pc_output))] 
                                            << 8U) 
                                           | vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                           [(0x7fU 
                                             & ((IData)(3U) 
                                                + vlSelf->PipelineCPU__DOT__pc_output))]))))),32);
    bufp->fullIData(oldp+23,(vlSelf->PipelineCPU__DOT__pc_output),32);
    bufp->fullIData(oldp+24,(vlSelf->PipelineCPU__DOT__if_o_2),32);
    bufp->fullIData(oldp+25,(vlSelf->PipelineCPU__DOT__id_o_2),32);
    bufp->fullIData(oldp+26,(vlSelf->PipelineCPU__DOT__id_o_3),32);
    bufp->fullCData(oldp+27,(vlSelf->PipelineCPU__DOT____Vcellinp__m_Control__opcode),7);
    bufp->fullCData(oldp+28,((0x1fU & (vlSelf->PipelineCPU__DOT__if_o_2 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+29,((0x1fU & (vlSelf->PipelineCPU__DOT__if_o_2 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+30,((1U & (vlSelf->PipelineCPU__DOT__if_o_2 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+31,((7U & (vlSelf->PipelineCPU__DOT__if_o_2 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+32,((0x1fU & (vlSelf->PipelineCPU__DOT__if_o_2 
                                       >> 7U))),5);
    bufp->fullIData(oldp+33,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+34,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+35,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+36,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+37,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+38,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+39,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+40,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+41,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+42,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+43,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+44,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+45,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+46,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+47,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+48,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+49,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+50,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+51,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+52,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+53,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+54,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+55,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+56,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+57,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+58,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+59,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+60,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+61,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+62,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+63,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+64,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullIData(oldp+65,(vlSelf->PipelineCPU__DOT__if_o_3),32);
    bufp->fullIData(oldp+66,(vlSelf->PipelineCPU__DOT__id_o_17),32);
    bufp->fullBit(oldp+67,(vlSelf->PipelineCPU__DOT__id_o_10));
    bufp->fullBit(oldp+68,(vlSelf->PipelineCPU__DOT__id_o_11));
    bufp->fullIData(oldp+69,(vlSelf->PipelineCPU__DOT__ex_o_13),32);
    bufp->fullBit(oldp+70,(vlSelf->PipelineCPU__DOT__ex_o_8));
    bufp->fullIData(oldp+71,(vlSelf->PipelineCPU__DOT__mem_o_7),32);
    bufp->fullBit(oldp+72,(vlSelf->PipelineCPU__DOT__mem_o_6));
    bufp->fullIData(oldp+73,(vlSelf->PipelineCPU__DOT__sum_1),32);
    bufp->fullIData(oldp+74,(vlSelf->PipelineCPU__DOT__sum_2),32);
    bufp->fullBit(oldp+75,(vlSelf->PipelineCPU__DOT__id_o_9));
    bufp->fullBit(oldp+76,(vlSelf->PipelineCPU__DOT__ex_o_7));
    bufp->fullIData(oldp+77,(vlSelf->PipelineCPU__DOT__mem_o_1),32);
    bufp->fullIData(oldp+78,(vlSelf->PipelineCPU__DOT__mem_o_2),32);
    bufp->fullBit(oldp+79,(vlSelf->PipelineCPU__DOT__mem_o_5));
    bufp->fullBit(oldp+80,(vlSelf->PipelineCPU__DOT__mfu_o_1));
    bufp->fullBit(oldp+81,(vlSelf->PipelineCPU__DOT__mfu_o_2));
    bufp->fullBit(oldp+82,(vlSelf->PipelineCPU__DOT__mfu_o_3));
    bufp->fullBit(oldp+83,(vlSelf->PipelineCPU__DOT__mfu_o_4));
    bufp->fullCData(oldp+84,(vlSelf->PipelineCPU__DOT__ALU_Op),3);
    bufp->fullBit(oldp+85,(vlSelf->PipelineCPU__DOT__mem_read));
    bufp->fullBit(oldp+86,(vlSelf->PipelineCPU__DOT__mem_to_reg));
    bufp->fullBit(oldp+87,(vlSelf->PipelineCPU__DOT__mem_write));
    bufp->fullBit(oldp+88,(vlSelf->PipelineCPU__DOT__ALU_src));
    bufp->fullBit(oldp+89,(vlSelf->PipelineCPU__DOT__reg_write));
    bufp->fullBit(oldp+90,(vlSelf->PipelineCPU__DOT__jal_con));
    bufp->fullBit(oldp+91,(vlSelf->PipelineCPU__DOT__jalr_con));
    bufp->fullBit(oldp+92,(vlSelf->PipelineCPU__DOT__branc));
    bufp->fullBit(oldp+93,(vlSelf->PipelineCPU__DOT__id_o_13));
    bufp->fullIData(oldp+94,(vlSelf->PipelineCPU__DOT__ex_o_3),32);
    bufp->fullBit(oldp+95,(vlSelf->PipelineCPU__DOT__ex_o_11));
    bufp->fullBit(oldp+96,(vlSelf->PipelineCPU__DOT__mhdu_o_1));
    bufp->fullBit(oldp+97,(vlSelf->PipelineCPU__DOT__mhdu_o_2));
    bufp->fullBit(oldp+98,(vlSelf->clk));
    bufp->fullBit(oldp+99,(vlSelf->start));
    bufp->fullIData(oldp+100,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+101,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+102,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+103,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+104,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+105,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+106,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+107,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+108,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+109,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+110,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+111,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+112,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+113,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+114,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+115,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+116,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+117,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+118,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+119,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+120,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+121,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+122,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+123,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+124,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+125,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+126,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+127,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+128,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+129,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+130,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+131,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+132,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelf->PipelineCPU__DOT__if_o_2 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+133,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelf->PipelineCPU__DOT__if_o_2 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+134,(vlSelf->PipelineCPU__DOT__ALU_res),32);
    bufp->fullIData(oldp+135,(vlSelf->PipelineCPU__DOT__imm_out),32);
    bufp->fullIData(oldp+136,(vlSelf->PipelineCPU__DOT__pc_input),32);
    bufp->fullIData(oldp+137,(vlSelf->PipelineCPU__DOT__MALU_o),32);
    bufp->fullIData(oldp+138,(vlSelf->PipelineCPU__DOT__read_data),32);
    bufp->fullIData(oldp+139,(vlSelf->PipelineCPU__DOT__write_data),32);
    bufp->fullIData(oldp+140,(vlSelf->PipelineCPU__DOT__Mdm_o),32);
    bufp->fullIData(oldp+141,(vlSelf->PipelineCPU__DOT__Mdm_2_o),32);
    bufp->fullIData(oldp+142,(vlSelf->PipelineCPU__DOT__mjalr_o),32);
    bufp->fullIData(oldp+143,(vlSelf->PipelineCPU__DOT__mjalr2_o),32);
    bufp->fullIData(oldp+144,(vlSelf->PipelineCPU__DOT__mux_pc_output),32);
    bufp->fullIData(oldp+145,(vlSelf->PipelineCPU__DOT__sum_jalr),32);
    bufp->fullIData(oldp+146,(vlSelf->PipelineCPU__DOT__mux_writedata_output),32);
    bufp->fullBit(oldp+147,(vlSelf->PipelineCPU__DOT__zero_o));
    bufp->fullBit(oldp+148,(vlSelf->PipelineCPU__DOT__w1));
    bufp->fullIData(oldp+149,(vlSelf->PipelineCPU__DOT__rs1_1_output),32);
    bufp->fullIData(oldp+150,(vlSelf->PipelineCPU__DOT__rs1_2_output),32);
    bufp->fullIData(oldp+151,(vlSelf->PipelineCPU__DOT__rs2_1_output),32);
    bufp->fullIData(oldp+152,(vlSelf->PipelineCPU__DOT__rs2_2_output),32);
    bufp->fullBit(oldp+153,(vlSelf->PipelineCPU__DOT__mhdu_o_4));
    bufp->fullIData(oldp+154,(4U),32);
    bufp->fullIData(oldp+155,(0x20U),32);
}
