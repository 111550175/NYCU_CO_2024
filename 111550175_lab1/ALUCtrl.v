module ALUCtrl (
    input [1:0] ALUOp,
    input funct7,
    input [2:0] funct3,
    output reg [3:0] ALUCtl
);

    // TODO: implement your ALU control here
    // For testbench verifying, Do not modify input and output pin
    // Hint: using ALUOp, funct7, funct3 to select exact operation

    // func7: l[30]
    always @ (ALUOp, funct7, funct3) begin
        casez ({ALUOp, funct7, funct3})
            6'b00_?_???: ALUCtl = 4'b0010; //lw & sw
            6'b01_?_???: ALUCtl = 4'b0110; //beq
            6'b10_0_000: ALUCtl = 4'b0010; //add 
            6'b10_1_000: ALUCtl = 4'b0110; //sub
            6'b10_0_111: ALUCtl = 4'b0000; //and
            6'b10_0_110: ALUCtl = 4'b0001; //or
            6'b11_?_000: ALUCtl = 4'b0010; //addi
            6'b11_?_111: ALUCtl = 4'b0000; //andi
            6'b11_?_110: ALUCtl = 4'b0001; //ori
            6'b10_0_010: ALUCtl = 4'b1111; //slt
            6'b11_?_010: ALUCtl = 4'b1111; //slti
            default: ALUCtl = 4'b0000;
        endcase
    end

endmodule

