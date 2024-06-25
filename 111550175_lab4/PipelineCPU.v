module PipelineCPU (
    input clk,
    input start,
    output signed [31:0] r [0:31]
);

// When input start is zero, cpu should reset
// When input start is high, cpu start running

// TODO: connect wire to realize SingleCycleCPU
// The following provides simple template,
// you can modify it as you wish except I/O pin and register module
wire [31:0] read_data1, read_data2, inst_out, ALU_res, imm_out, shift_left_one;
wire [31:0] pc_input, pc_output, sum_1, sum_2, MALU_o, read_data, write_data, Mdm_o, Mdm_2_o, mjalr_o, mjalr2_o;
wire [31:0] mux_pc_output, sum_jalr, mux_writedata_output;
//wire [31:0] add4;
wire [3:0] ALU_ctl;
wire [2:0] ALU_Op;
wire mem_read, mem_to_reg, mem_write, zero_o, ALU_src, reg_write, jal_con, jalr_con;
wire w1, branc;
// lab3-parameters
wire [31:0] if_o_1, if_o_2, if_o_3;
// id/ex parameters
wire [31:0] id_o_1, id_o_2, id_o_3, id_o_4, id_o_17;
wire [2:0] id_o_6, id_o_16;
wire [4:0] id_o_7, id_o_18, id_o_19;
wire id_o_5, id_o_8, id_o_9, id_o_10, id_o_11, id_o_12, id_o_13, id_o_14, id_o_15;
// ex/mem parameters
wire [31:0] ex_o_3, ex_o_4, ex_o_13;
wire [4:0] ex_o_5;
wire ex_o_6, ex_o_7, ex_o_8, ex_o_10, ex_o_11;
// mem/wb parameters
wire [31:0] mem_o_1, mem_o_2, mem_o_7;
wire [4:0] mem_o_3;
wire mem_o_4, mem_o_5, mem_o_6;

wire [31:0] s0_sel;

//forwarding unit
wire mfu_o_1, mfu_o_2, mfu_o_3, mfu_o_4;
wire [31:0] rs1_1_output, rs1_2_output, rs2_1_output, rs2_2_output;

//hazard detection unit
wire mhdu_o_1, mhdu_o_2, mhdu_o_4;

wire [31:0] write_data_async, sum_1_async;
and and1(w1, id_o_14, zero_o);
// ex_o_8 == branch

//add4 <= 32'h4;

PC m_PC( //done
    .clk(clk),
    .rst(start),
    .pc_i(pc_input),
    .pc_i_2(mhdu_o_1),
    .pc_o(pc_output)
);

// adder plus 4
Adder m_Adder_1( // done
    .a(pc_output),
    .b(32'h4),
    .sum(sum_1) //pc+4
);

InstructionMemory m_InstMem( //done
    .readAddr(pc_output),
    .inst(inst_out)
);

assign sum_1_async = sum_1;

// IF/ID register
pipeline_register_ifid m_ifid(  //done
    .clk(clk),
    .rst(start),
    .p_reg_i_if_1(pc_output),
    .p_reg_i_if_2(inst_out),
    /* verilator lint_off SYNCASYNCNET */
    .p_reg_i_if_3(sum_1_async),   //pc+4
    /* verilator lint_on SYNCASYNCNET */
    .p_reg_i_if_4(mhdu_o_4),    //flush
    .p_reg_i_if_5(mhdu_o_2),    //if-stall
    .p_reg_o_if_1(if_o_1),
    .p_reg_o_if_2(if_o_2),
    .p_reg_o_if_3(if_o_3)   //pc+4
);


Control m_Control(  //done
    .opcode(if_o_2[6:0]),
    .branch(branc),
    .memRead(mem_read),
    .memtoReg(mem_to_reg),
    .ALUOp(ALU_Op),
    .memWrite(mem_write),
    .ALUSrc(ALU_src),
    .regWrite(reg_write),
    .jalcon(jal_con),
    .jalrcon(jalr_con)
);

assign write_data_async = write_data;

// For Student: 
// Do not change the Register instance name!
// Or you will fail validation.

Register m_Register( //done
    .clk(clk),
    .rst(start),
    .regWrite(mem_o_4),  //still have to adjust //regwrite
    .readReg1(if_o_2[19:15]),
    .readReg2(if_o_2[24:20]),
    .writeReg(mem_o_3), // wrong part //write reg.
    .writeData(write_data_async), //still has to adjust //output of jal mux
    .readData1(read_data1),
    .readData2(read_data2)
);

// ======= for validation ======= 
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

ImmGen m_ImmGen( //done
    .inst(if_o_2),
    .imm(imm_out)
);

// ID/EX register
pipeline_register_idex m_idex( //done
    .clk(clk),
    .rst(start),
    .p_reg_i_id_1(if_o_1),
    .p_reg_i_id_2(read_data1),  //R[rs1]
    .p_reg_i_id_3(read_data2),  //R[rs2]
    .p_reg_i_id_4(imm_out),     //imm
    .p_reg_i_id_5(if_o_2[30]),
    .p_reg_i_id_6(if_o_2[14:12]),
    .p_reg_i_id_7(if_o_2[11:7]),    //rd
    .p_reg_i_id_8(reg_write),
    .p_reg_i_id_9(mem_to_reg),
    .p_reg_i_id_10(jal_con),
    .p_reg_i_id_11(jalr_con),   //jalr_con
    .p_reg_i_id_12(mem_write),
    .p_reg_i_id_13(mem_read),
    .p_reg_i_id_14(branc),
    .p_reg_i_id_15(ALU_src),
    .p_reg_i_id_16(ALU_Op),
    .p_reg_i_id_17(if_o_3),     //pc+4
    .p_reg_i_id_18(if_o_2[19:15]),  //rs1
    .p_reg_i_id_19(if_o_2[24:20]),  //rs2
    .p_reg_i_id_20(mhdu_o_4),   //flush
    .p_reg_i_id_21(mhdu_o_2),   //if-stall
    .p_reg_o_id_1(id_o_1),
    .p_reg_o_id_2(id_o_2),
    .p_reg_o_id_3(id_o_3),
    .p_reg_o_id_4(id_o_4),
    .p_reg_o_id_5(id_o_5),
    .p_reg_o_id_6(id_o_6),
    .p_reg_o_id_7(id_o_7),
    .p_reg_o_id_8(id_o_8),
    .p_reg_o_id_9(id_o_9),
    .p_reg_o_id_10(id_o_10),
    .p_reg_o_id_11(id_o_11),
    .p_reg_o_id_12(id_o_12),
    .p_reg_o_id_13(id_o_13),
    .p_reg_o_id_14(id_o_14),
    .p_reg_o_id_15(id_o_15),
    .p_reg_o_id_16(id_o_16),
    .p_reg_o_id_17(id_o_17),     //pc+4
    .p_reg_o_id_18(id_o_18),
    .p_reg_o_id_19(id_o_19)
);

hazard_detection_unit m_hdu(
    .hdu_i_1(id_o_13),    //mem_read
    .hdu_i_2(id_o_7),   //rd
    .hdu_i_3(if_o_2[19:15]),    //rs1
    .hdu_i_4(if_o_2[24:20]),    //rs2
    .hdu_i_5(w1),   //pc_sel
    .hdu_o_1(mhdu_o_1), //pc-stall
    .hdu_o_2(mhdu_o_2), //if-stall
    .hdu_o_4(mhdu_o_4)  //flush
);

assign s0_sel = id_o_3;

ShiftLeftOne m_ShiftLeftOne( //done
    .i(id_o_4),
    .o(shift_left_one)
);

// input has shift left 1
Adder m_Adder_2( //done
    .a(id_o_1),
    .b(shift_left_one),
    .sum(sum_2)     //pc+imm<<1
);

Mux2to1 #(.size(32)) m_Mux_jalr( //done
    .sel(mfu_o_1),
    /* verilator lint_off SYNCASYNCNET */
    .s0(id_o_2),
    /* verilator lint_on SYNCASYNCNET */
    .s1(ex_o_3),    //alu output from mem stage
    .out(mjalr_o)
);

Mux2to1 #(.size(32)) m_Mux_jalr_2( //done
    .sel(mfu_o_2),
    /* verilator lint_off SYNCASYNCNET */
    .s0(mjalr_o),
    /* verilator lint_on SYNCASYNCNET */
    .s1(write_data), 
    .out(mjalr2_o)
);

Adder m_Adder_jalr( //done
    .a(mjalr2_o),     //R[rs1]
    .b(id_o_4),     //imm
    .sum(sum_jalr)      //R[rs1]+imm
);

Mux2to1 #(.size(32)) m_Mux_PC( //done
    .sel(w1),
    /* verilator lint_off SYNCASYNCNET */
    .s0(sum_1),
    /* verilator lint_on SYNCASYNCNET */
    .s1(sum_2), //pc+imm<<1
    .out(mux_pc_output)
);

Mux2to1 #(.size(32)) m_Mux_PC2( //done
    .sel(id_o_11), //jalr_con
    .s0(mux_pc_output),
    .s1(sum_jalr),  //R[rs1]+imm
    .out(pc_input)
);

Mux2to1 #(.size(32)) m_Mux_rs1_1( //done
    .sel(mfu_o_1),  //rs1_1
    .s0(id_o_2),
    .s1(ex_o_3),    //alu output from mem stage
    .out(rs1_1_output)
);

Mux2to1 #(.size(32)) m_Mux_rs1_2( //done
    .sel(mfu_o_2),  //rs1_2
    .s0(rs1_1_output),
    .s1(write_data),    //alu output from wb stage
    .out(rs1_2_output)
);

Mux2to1 #(.size(32)) m_Mux_rs2_1( //done
    .sel(mfu_o_3),
    .s0(s0_sel),
    .s1(ex_o_3),    //alu output from mem stage
    .out(rs2_1_output)
);

Mux2to1 #(.size(32)) m_Mux_rs2_2( //done
    .sel(mfu_o_4),
    .s0(rs2_1_output),
    .s1(write_data),
    .out(rs2_2_output)
);

Mux2to1 #(.size(32)) m_Mux_ALU( //done
    .sel(id_o_15),
    .s0(rs2_2_output),
    .s1(id_o_4),
    .out(MALU_o)
);

ALUCtrl m_ALUCtrl( //done
    .ALUOp(id_o_16),
    .funct7(id_o_5),
    .funct3(id_o_6),
    .ALUCtl(ALU_ctl)
);

ALU m_ALU( //done
    .ALUctl(ALU_ctl),
    .A(rs1_2_output),
    .B(MALU_o),
    .ALUOut(ALU_res),
    .zero(zero_o)
);

forwarding_unit m_fu(
    .fu_i_1(ex_o_5),    //rd from mem stage 
    .fu_i_2(mem_o_3),   //rd from wb stage
    .fu_i_3(id_o_18),  //rs1
    .fu_i_4(id_o_19),  //rs2
    .fu_i_5(mem_o_5),   //memtorreg
    .fu_i_6(mem_o_4),   //reg_write
    .fu_i_7(ex_o_6),
    .fu_i_8(ex_o_7),
    //.fu_i_7(id_o_11),   //jalr_con
    .fu_o_1(mfu_o_1),
    .fu_o_2(mfu_o_2),
    .fu_o_3(mfu_o_3),
    .fu_o_4(mfu_o_4)
);

pipeline_register_exmem m_exmem( //done
    .clk(clk),
    .rst(start),
    //.p_reg_i_ex_1(sum_2), // pc+imm<<1
    //.p_reg_i_ex_2(zero_o),
    .p_reg_i_ex_3(ALU_res), // ALU output
    .p_reg_i_ex_4(Mdm_2_o), // read data2
    .p_reg_i_ex_5(id_o_7),  //rd
    .p_reg_i_ex_6(id_o_8), //regwrite
    .p_reg_i_ex_7(id_o_9), //memtoreg
    .p_reg_i_ex_8(id_o_10), //jal_con
    //.p_reg_i_ex_9(id_o_11), //jalr_con
    .p_reg_i_ex_10(id_o_12), //memwrite
    .p_reg_i_ex_11(id_o_13), //memread
    //.p_reg_i_ex_12(id_o_14), //branch
    .p_reg_i_ex_13(id_o_17), //pc+4
    //.p_reg_o_ex_1(ex_o_1),
    //.p_reg_o_ex_2(ex_o_2),
    .p_reg_o_ex_3(ex_o_3),
    .p_reg_o_ex_4(ex_o_4),
    .p_reg_o_ex_5(ex_o_5),
    .p_reg_o_ex_6(ex_o_6),
    .p_reg_o_ex_7(ex_o_7),
    .p_reg_o_ex_8(ex_o_8),
    //.p_reg_o_ex_9(ex_o_9),
    .p_reg_o_ex_10(ex_o_10),
    .p_reg_o_ex_11(ex_o_11),
    //.p_reg_o_ex_12(ex_o_12),
    .p_reg_o_ex_13(ex_o_13)     //pc+4
);

Mux2to1 #(.size(32)) m_Mux_dm( //data memory
    .sel(mfu_o_3),
    .s0(id_o_3),
    .s1(ex_o_3),
    .out(Mdm_o)
);

Mux2to1 #(.size(32)) m_Mux_dm_2( //data memory
    .sel(mfu_o_4),
    .s0(Mdm_o),
    .s1(write_data),
    .out(Mdm_2_o)
);

DataMemory m_DataMemory( //done
    .rst(start),
    .clk(clk),
    .memWrite(ex_o_10),
    .memRead(ex_o_11),
    .address(ex_o_3),
    .writeData(ex_o_4),
    .readData(read_data)
);

pipeline_register_memwb m_memwb( //done
    .clk(clk),
    .rst(start),
    .p_reg_i_mem_1(read_data),
    .p_reg_i_mem_2(ex_o_3), // alu output
    .p_reg_i_mem_3(ex_o_5), //write reg. (rd)
    .p_reg_i_mem_4(ex_o_6), //regwrite
    .p_reg_i_mem_5(ex_o_7), //memtoreg
    .p_reg_i_mem_6(ex_o_8), //jal_con
    .p_reg_i_mem_7(ex_o_13), //pc+4
    .p_reg_o_mem_1(mem_o_1),
    .p_reg_o_mem_2(mem_o_2),
    .p_reg_o_mem_3(mem_o_3),
    .p_reg_o_mem_4(mem_o_4),
    .p_reg_o_mem_5(mem_o_5),
    .p_reg_o_mem_6(mem_o_6),
    .p_reg_o_mem_7(mem_o_7)     //pc+4
);

Mux2to1 #(.size(32)) m_Mux_WriteData( //done
    .sel(mem_o_5), //mem_to_reg
    .s0(mem_o_2), //alu output
    .s1(mem_o_1), //read data
    .out(mux_writedata_output)
);

Mux2to1 #(.size(32)) m_Mux_WriteData_jal( //done for lab4
    .sel(mem_o_6), //jal_con
    .s0(mux_writedata_output),
    .s1(mem_o_7), // pc+4
    .out(write_data)
);

endmodule
