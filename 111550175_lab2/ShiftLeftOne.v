module ShiftLeftOne (
    input signed [31:0] i,
    output signed [31:0] o
);

    // TODO: implement your shift left 1 here
    //always @ (i) begin
        assign o = (i << 1);
    //end
endmodule

