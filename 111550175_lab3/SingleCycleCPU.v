module SingleCycleCPU (
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
wire [31:0] pc_input, pc_output, sum_1, sum_2, MALU_o, read_data, write_data;
wire [31:0] mux_pc_output, sum_jalr, mux_writedata_output;
//wire [31:0] add4;
wire [3:0] ALU_ctl;
wire [2:0] ALU_Op;
wire mem_read, mem_to_reg, mem_write, zero_o, ALU_src, reg_write, jal_con, jalr_con;
wire w1, branc;
// lab3-parameters
wire [31:0] if_o_1, if_o_2;
// id/ex parameters
wire [31:0] id_o_1, id_o_2, id_o_3, id_o_4;
wire [2:0] id_o_6, id_o_16;
wire [4:0] id_o_7;
wire id_o_5, id_o_8, id_o_9, id_o_10, id_o_11, id_o_12, id_o_13, id_o_14, id_o_15;
// ex/mem parameters
wire [31:0] ex_o_1, ex_o_3, ex_o_4;
wire [4:0] ex_o_5;
wire ex_o_2, ex_o_6, ex_o_7, ex_o_8, ex_o_9, ex_o_10, ex_o_11, ex_o_12;
// mem/wb parameters
wire [31:0] mem_o_1, mem_o_2;
wire [4:0] mem_o_3;
wire mem_o_4, mem_o_5, mem_o_6;

wire [31:0] s0_sel;

and and1(w1, ex_o_12, ex_o_2);
// ex_o_8 == branch

//add4 <= 32'h4;

PC m_PC( //done
    .clk(clk),
    .rst(start),
    .pc_i(pc_input),
    .pc_o(pc_output)
);

// adder plus 4
Adder m_Adder_1( // done
    .a(pc_output),
    .b(32'h4),
    .sum(sum_1)
);

InstructionMemory m_InstMem( //done
    .readAddr(pc_output),
    .inst(inst_out)
);

// IF/ID register
pipeline_register_ifid m_ifid(  //done
    .clk(clk),
    .rst(start),
    .p_reg_i_if_1(pc_output),
    .p_reg_i_if_2(inst_out),
    .p_reg_o_if_1(if_o_1),
    .p_reg_o_if_2(if_o_2)
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
    .writeData(write_data), //still has to adjust //output of jal mux
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
    .p_reg_i_id_2(read_data1),
    .p_reg_i_id_3(read_data2),
    .p_reg_i_id_4(imm_out),
    .p_reg_i_id_5(if_o_2[30]),
    .p_reg_i_id_6(if_o_2[14:12]),
    .p_reg_i_id_7(if_o_2[11:7]),
    .p_reg_i_id_8(reg_write),
    .p_reg_i_id_9(mem_to_reg),
    .p_reg_i_id_10(jal_con),
    .p_reg_i_id_11(jalr_con),
    .p_reg_i_id_12(mem_write),
    .p_reg_i_id_13(mem_read),
    .p_reg_i_id_14(branc),
    .p_reg_i_id_15(ALU_src),
    .p_reg_i_id_16(ALU_Op),
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
    .p_reg_o_id_16(id_o_16)
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
    .sum(sum_2)
);

Adder m_Adder_jalr( //done
    .a(id_o_2),
    .b(id_o_4),
    .sum(sum_jalr)
);

Mux2to1 #(.size(32)) m_Mux_PC( //done
    .sel(w1),
    .s0(sum_1),
    .s1(ex_o_1), //pc+imm<<1
    .out(mux_pc_output)
);

Mux2to1 #(.size(32)) m_Mux_PC2( //done
    .sel(ex_o_9), //jalr_con
    .s0(mux_pc_output),
    .s1(sum_jalr),
    .out(pc_input)
);

Mux2to1 #(.size(32)) m_Mux_ALU( //done
    .sel(id_o_15),
    .s0(s0_sel),
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
    .A(id_o_2),
    .B(MALU_o),
    .ALUOut(ALU_res),
    .zero(zero_o)
);

pipeline_register_exmem m_exmem( //done
    .clk(clk),
    .rst(start),
    .p_reg_i_ex_1(sum_2), // pc+imm<<1
    .p_reg_i_ex_2(zero_o),
    .p_reg_i_ex_3(ALU_res), // ALU output
    .p_reg_i_ex_4(id_o_3), // read data2
    .p_reg_i_ex_5(id_o_7),
    .p_reg_i_ex_6(id_o_8), //regwrite
    .p_reg_i_ex_7(id_o_9), //memtoreg
    .p_reg_i_ex_8(id_o_10), //jal_con
    .p_reg_i_ex_9(id_o_11), //jalr_con
    .p_reg_i_ex_10(id_o_12), //memwrite
    .p_reg_i_ex_11(id_o_13), //memread
    .p_reg_i_ex_12(id_o_14), //branch
    .p_reg_o_ex_1(ex_o_1),
    .p_reg_o_ex_2(ex_o_2),
    .p_reg_o_ex_3(ex_o_3),
    .p_reg_o_ex_4(ex_o_4),
    .p_reg_o_ex_5(ex_o_5),
    .p_reg_o_ex_6(ex_o_6),
    .p_reg_o_ex_7(ex_o_7),
    .p_reg_o_ex_8(ex_o_8),
    .p_reg_o_ex_9(ex_o_9),
    .p_reg_o_ex_10(ex_o_10),
    .p_reg_o_ex_11(ex_o_11),
    .p_reg_o_ex_12(ex_o_12)
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
    .p_reg_i_mem_3(ex_o_5), //write reg.
    .p_reg_i_mem_4(ex_o_6), //regwrite
    .p_reg_i_mem_5(ex_o_7), //memtoreg
    .p_reg_i_mem_6(ex_o_8), //jal_con
    .p_reg_o_mem_1(mem_o_1),
    .p_reg_o_mem_2(mem_o_2),
    .p_reg_o_mem_3(mem_o_3),
    .p_reg_o_mem_4(mem_o_4),
    .p_reg_o_mem_5(mem_o_5),
    .p_reg_o_mem_6(mem_o_6)
);

Mux2to1 #(.size(32)) m_Mux_WriteData( //done
    .sel(mem_o_5), //mem_to_reg
    .s0(mem_o_2), //alu output
    .s1(mem_o_1), //read data
    .out(mux_writedata_output)
);

Mux2to1 #(.size(32)) m_Mux_WriteData_jal( //done for lab3
    .sel(mem_o_6), //jal_con
    .s0(mux_writedata_output),
    .s1(sum_1), // might need to adjust but its ok in lab3 as jal will not be implement
    .out(write_data)
);

endmodule
