module pipeline_register_idex(
    input clk,
    input rst,
    input [31:0] p_reg_i_id_1, //pc address
    input [31:0] p_reg_i_id_2, //read data 1
    input [31:0] p_reg_i_id_3, //read data 2
    input [31:0] p_reg_i_id_4, //imm gen
    input p_reg_i_id_5, //inst[30] aka func7
    input [2:0] p_reg_i_id_6, //inst[14:12] aka func3
    input [4:0] p_reg_i_id_7, //inst[11:7] aka write register
    input p_reg_i_id_8, //regwrite
    input p_reg_i_id_9, //memtoreg
    input p_reg_i_id_10, //jal_con
    input p_reg_i_id_11, //jalr_con
    input p_reg_i_id_12, //memwrite
    input p_reg_i_id_13, //memread
    input p_reg_i_id_14, //branch
    input p_reg_i_id_15, //alusrc
    input [2:0] p_reg_i_id_16, //aluop
    input [31:0] p_reg_i_id_17, //pc+4
    input [4:0] p_reg_i_id_18,  //rs1
    input [4:0] p_reg_i_id_19,  //rs2
    input p_reg_i_id_20,    //flush
    input p_reg_i_id_21,    //if-stall
    output reg [31:0] p_reg_o_id_1,
    output reg [31:0] p_reg_o_id_2,
    output reg [31:0] p_reg_o_id_3,
    output reg [31:0] p_reg_o_id_4,
    output reg p_reg_o_id_5,
    output reg [2:0] p_reg_o_id_6, 
    output reg [4:0] p_reg_o_id_7,
    output reg p_reg_o_id_8, 
    output reg p_reg_o_id_9, 
    output reg p_reg_o_id_10, 
    output reg p_reg_o_id_11, 
    output reg p_reg_o_id_12, 
    output reg p_reg_o_id_13, 
    output reg p_reg_o_id_14,
    output reg p_reg_o_id_15, 
    output reg [2:0] p_reg_o_id_16,
    output reg [31:0] p_reg_o_id_17,     //pc+4
    output reg [4:0] p_reg_o_id_18,
    output reg [4:0] p_reg_o_id_19
);

    always @ (posedge clk, negedge rst) begin
        if (rst == 1'b0 || p_reg_i_id_20==1'b1 || p_reg_i_id_21==1'b1)begin
            p_reg_o_id_1 <= 32'h0;
            p_reg_o_id_2 <= 32'h0;
            p_reg_o_id_3 <= 32'h0;
            p_reg_o_id_4 <= 32'h0;
            p_reg_o_id_5 <= 1'b0;
            p_reg_o_id_6 <= 3'b000;
            p_reg_o_id_7 <= 5'b00000;
            p_reg_o_id_8 <= 1'b0;
            p_reg_o_id_9 <= 1'b0;
            p_reg_o_id_10 <= 1'b0;
            p_reg_o_id_11 <= 1'b0;
            p_reg_o_id_12 <= 1'b0;
            p_reg_o_id_13 <= 1'b0;
            p_reg_o_id_14 <= 1'b0;
            p_reg_o_id_15 <= 1'b0;
            p_reg_o_id_16 <= 3'b000;
            p_reg_o_id_17 <= 32'h0;
            p_reg_o_id_18 <= 5'b00000;
            p_reg_o_id_19 <= 5'b00000;
        end
        //else if(p_reg_i_id_21==1'b1) begin
            //no action
        //end
        else begin
            p_reg_o_id_1 <= p_reg_i_id_1;
            p_reg_o_id_2 <= p_reg_i_id_2;
            p_reg_o_id_3 <= p_reg_i_id_3;
            p_reg_o_id_4 <= p_reg_i_id_4;
            p_reg_o_id_5 <= p_reg_i_id_5;
            p_reg_o_id_6 <= p_reg_i_id_6;
            p_reg_o_id_7 <= p_reg_i_id_7;
            p_reg_o_id_8 <= p_reg_i_id_8;
            p_reg_o_id_9 <= p_reg_i_id_9;
            p_reg_o_id_10 <= p_reg_i_id_10;
            p_reg_o_id_11 <= p_reg_i_id_11;
            p_reg_o_id_12 <= p_reg_i_id_12;
            p_reg_o_id_13 <= p_reg_i_id_13;
            p_reg_o_id_14 <= p_reg_i_id_14;
            p_reg_o_id_15 <= p_reg_i_id_15;
            p_reg_o_id_16 <= p_reg_i_id_16;
            p_reg_o_id_17 <= p_reg_i_id_17;
            p_reg_o_id_18 <= p_reg_i_id_18;
            p_reg_o_id_19 <= p_reg_i_id_19;
        end
    end

endmodule
