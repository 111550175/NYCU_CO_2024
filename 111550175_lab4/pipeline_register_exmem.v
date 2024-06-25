module pipeline_register_exmem(
    input clk,
    input rst,
    //input [31:0] p_reg_i_ex_1, //pc + imm
    //input p_reg_i_ex_2, //alu zero
    input [31:0] p_reg_i_ex_3, //alu output
    input [31:0] p_reg_i_ex_4, //read data 2
    input [4:0] p_reg_i_ex_5, //inst[11:7] aka write register
    input p_reg_i_ex_6, //regwrite
    input p_reg_i_ex_7, //memtoreg
    input p_reg_i_ex_8, //jal_con
    //input p_reg_i_ex_9, //jalr_con
    input p_reg_i_ex_10, //memwrite
    input p_reg_i_ex_11, //memread
    //input p_reg_i_ex_12, //branch
    input [31:0] p_reg_i_ex_13, //pc+4
    //output reg [31:0] p_reg_o_ex_1,
    //output reg p_reg_o_ex_2,
    output reg [31:0] p_reg_o_ex_3,
    output reg [31:0] p_reg_o_ex_4,  
    output reg [4:0] p_reg_o_ex_5, 
    output reg p_reg_o_ex_6, 
    output reg p_reg_o_ex_7, 
    output reg p_reg_o_ex_8, 
    //output reg p_reg_o_ex_9, 
    output reg p_reg_o_ex_10, 
    output reg p_reg_o_ex_11, 
    //output reg p_reg_o_ex_12,
    output reg [31:0] p_reg_o_ex_13    //pc+4
);

    always @ (posedge clk, negedge rst) begin
        if (rst == 1'b0)begin
            //p_reg_o_ex_1 <= 32'h0;
            //p_reg_o_ex_2 <= 1'b0;
            p_reg_o_ex_3 <= 32'h0;
            p_reg_o_ex_4 <= 32'h0;
            p_reg_o_ex_5 <= 5'b00000;
            p_reg_o_ex_6 <= 1'b0;
            p_reg_o_ex_7 <= 1'b0;
            p_reg_o_ex_8 <= 1'b0;
            //p_reg_o_ex_9 <= 1'b0;
            p_reg_o_ex_10 <= 1'b0;
            p_reg_o_ex_11 <= 1'b0;
            //p_reg_o_ex_12 <= 1'b0;
            p_reg_o_ex_13 <= 32'h0;
        end
        else begin
            //p_reg_o_ex_1 <= p_reg_i_ex_1;
            //p_reg_o_ex_2 <= p_reg_i_ex_2;
            p_reg_o_ex_3 <= p_reg_i_ex_3;
            p_reg_o_ex_4 <= p_reg_i_ex_4;
            p_reg_o_ex_5 <= p_reg_i_ex_5;
            p_reg_o_ex_6 <= p_reg_i_ex_6;
            p_reg_o_ex_7 <= p_reg_i_ex_7;
            p_reg_o_ex_8 <= p_reg_i_ex_8;
            //p_reg_o_ex_9 <= p_reg_i_ex_9;
            p_reg_o_ex_10 <= p_reg_i_ex_10;
            p_reg_o_ex_11 <= p_reg_i_ex_11;
            //p_reg_o_ex_12 <= p_reg_i_ex_12;
            p_reg_o_ex_13 <= p_reg_i_ex_13;
        end
    end

endmodule
