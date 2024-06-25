module pipeline_register_ifid(
    input clk,
    input rst,
    input [31:0] p_reg_i_if_1, //pc address
    input [31:0] p_reg_i_if_2, //instruction
    input [31:0] p_reg_i_if_3, //pc+4
    input p_reg_i_if_4,     //flush
    input p_reg_i_if_5,     //if-stall
    output reg [31:0] p_reg_o_if_1,
    output reg [31:0] p_reg_o_if_2,
    output reg [31:0] p_reg_o_if_3  //pc+4
);

    always @ (posedge clk, negedge rst) begin
        if (rst == 1'b0 || p_reg_i_if_4==1'b1)begin
            p_reg_o_if_1 <= 32'h0;
            p_reg_o_if_2 <= 32'h0;
            p_reg_o_if_3 <= 32'h0;
        end
        else if(p_reg_i_if_5==1'b1) begin
            //no action
        end
        else begin
            p_reg_o_if_1 <= p_reg_i_if_1;
            p_reg_o_if_2 <= p_reg_i_if_2;
            /* verilator lint_off SYNCASYNCNET */
            p_reg_o_if_3 <= p_reg_i_if_3;
            /* verilator lint_on SYNCASYNCNET */
        end
    end

endmodule
