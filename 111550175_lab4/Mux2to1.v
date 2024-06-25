module Mux2to1 #(
    parameter size = 32
) 
(
    input sel,
    input signed [size-1:0] s0,
    input signed [size-1:0] s1,
    output reg signed [size-1:0] out
);
    // TODO: implement your 2to1 multiplexer here
    always @ (sel, s0, s1) begin
        case (sel)
            1'b1:  out <= s1;
            /* verilator lint_off SYNCASYNCNET */
            1'b0:  out <= s0;
            /* verilator lint_on SYNCASYNCNET */
        endcase
    end
    
endmodule

