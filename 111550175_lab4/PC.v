module PC (
    input clk,
    input rst,
    input [31:0] pc_i,
    input pc_i_2,
    output reg [31:0] pc_o
);

    // TODO: implement your program counter here
    always @ (posedge clk, negedge rst) begin
        if (rst == 1'b0)
            pc_o <= 32'h0;
        else if(pc_i_2==1'b1) begin
            //no action
        end
        else
            pc_o <= pc_i;
    
    end

endmodule

