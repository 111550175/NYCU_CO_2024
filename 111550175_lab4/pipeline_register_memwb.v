module pipeline_register_memwb(
    input clk,
    input rst,
    input [31:0] p_reg_i_mem_1, //read data
    input [31:0] p_reg_i_mem_2, //alu output
    input [4:0] p_reg_i_mem_3, //inst[11:7] aka write register
    input p_reg_i_mem_4, //regwrite
    input p_reg_i_mem_5, //memtoreg
    input p_reg_i_mem_6, //jal_con
    input [31:0] p_reg_i_mem_7, //pc+4
    output reg [31:0] p_reg_o_mem_1,
    output reg [31:0] p_reg_o_mem_2,
    output reg [4:0] p_reg_o_mem_3,
    output reg p_reg_o_mem_4, 
    output reg p_reg_o_mem_5, 
    output reg p_reg_o_mem_6,
    output reg [31:0] p_reg_o_mem_7 //pc+4
);

    always @ (posedge clk, negedge rst) begin
        if (rst == 1'b0)begin
            p_reg_o_mem_1 <= 32'h0;
            p_reg_o_mem_2 <= 32'h0;
            p_reg_o_mem_3 <= 5'b00000;
            p_reg_o_mem_4 <= 1'b0;
            p_reg_o_mem_5 <= 1'b0;
            p_reg_o_mem_6 <= 1'b0;
            p_reg_o_mem_7 <= 32'h0;
        end
        else begin
            p_reg_o_mem_1 <= p_reg_i_mem_1;
            p_reg_o_mem_2 <= p_reg_i_mem_2;
            p_reg_o_mem_3 <= p_reg_i_mem_3;
            p_reg_o_mem_4 <= p_reg_i_mem_4;
            p_reg_o_mem_5 <= p_reg_i_mem_5;
            p_reg_o_mem_6 <= p_reg_i_mem_6;
            p_reg_o_mem_7 <= p_reg_i_mem_7;
        end
    end

endmodule
