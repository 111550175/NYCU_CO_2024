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
//wire [31:0] add4;
wire [3:0] ALU_ctl;
wire [1:0] ALU_Op;
wire mem_read, mem_to_reg, mem_write, zero_o, ALU_src, reg_write;
wire w1, branc;

and and1(w1, branc, zero_o);
//add4 <= 32'h4;

PC m_PC(
    .clk(clk),
    .rst(start),
    .pc_i(pc_input),
    .pc_o(pc_output)
);

// adder plus 4
Adder m_Adder_1(
    .a(pc_output),
    .b(32'h4),
    .sum(sum_1)
);

InstructionMemory m_InstMem(
    .readAddr(pc_output),
    .inst(inst_out)
);

Control m_Control(
    .opcode(inst_out[6:0]),
    .branch(branc),
    .memRead(mem_read),
    .memtoReg(mem_to_reg),
    .ALUOp(ALU_Op),
    .memWrite(mem_write),
    .ALUSrc(ALU_src),
    .regWrite(reg_write)
);

// For Student: 
// Do not change the Register instance name!
// Or you will fail validation.

Register m_Register(
    .clk(clk),
    .rst(start),
    .regWrite(reg_write),
    .readReg1(inst_out[19:15]),
    .readReg2(inst_out[24:20]),
    .writeReg(inst_out[11:7]),
    .writeData(write_data),
    .readData1(read_data1),
    .readData2(read_data2)
);

// ======= for validation ======= 
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

ImmGen m_ImmGen(
    .inst(inst_out),
    .imm(imm_out)
);

ShiftLeftOne m_ShiftLeftOne(
    .i(imm_out),
    .o(shift_left_one)
);

// input has shift left 1
Adder m_Adder_2(
    .a(pc_output),
    .b(shift_left_one),
    .sum(sum_2)
);

Mux2to1 #(.size(32)) m_Mux_PC(
    .sel(w1),
    .s0(sum_1),
    .s1(sum_2),
    .out(pc_input)
);

Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(ALU_src),
    .s0(read_data2),
    .s1(imm_out),
    .out(MALU_o)
);

ALUCtrl m_ALUCtrl(
    .ALUOp(ALU_Op),
    .funct7(inst_out[30]),
    .funct3(inst_out[14:12]),
    .ALUCtl(ALU_ctl)
);

ALU m_ALU(
    .ALUctl(ALU_ctl),
    .A(read_data1),
    .B(MALU_o),
    .ALUOut(ALU_res),
    .zero(zero_o)
);

DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(mem_write),
    .memRead(mem_read),
    .address(ALU_res),
    .writeData(read_data2),
    .readData(read_data)
);

Mux2to1 #(.size(32)) m_Mux_WriteData(
    .sel(mem_to_reg),
    .s0(ALU_res),
    .s1(read_data),
    .out(write_data)
);

endmodule
