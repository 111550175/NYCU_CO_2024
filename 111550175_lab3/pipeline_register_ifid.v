module pipeline_register_ifid(
    input clk,
    input rst,
    input [31:0] p_reg_i_if_1, //pc address
    input [31:0] p_reg_i_if_2, //instruction
    output reg [31:0] p_reg_o_if_1,
    output reg [31:0] p_reg_o_if_2
);

    always @ (posedge clk, negedge rst) begin
        if (rst == 1'b0)begin
            p_reg_o_if_1 <= 32'h0;
            p_reg_o_if_2 <= 32'h0;
        end
        else begin
            p_reg_o_if_1 <= p_reg_i_if_1;
            p_reg_o_if_2 <= p_reg_i_if_2;
        end
    end

endmodule
