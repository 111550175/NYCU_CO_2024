module ALUCtrl (
    input [2:0] ALUOp,
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
            7'b000_?_???: ALUCtl = 4'b0010; //lw & sw
            7'b001_?_000: ALUCtl = 4'b0110; //beq
            7'b010_0_000: ALUCtl = 4'b0010; //add 
            7'b010_1_000: ALUCtl = 4'b0110; //sub
            7'b010_0_111: ALUCtl = 4'b0000; //and
            7'b010_0_110: ALUCtl = 4'b0001; //or
            7'b011_?_000: ALUCtl = 4'b0010; //addi
            7'b011_?_111: ALUCtl = 4'b0000; //andi
            7'b011_?_110: ALUCtl = 4'b0001; //ori
            7'b010_0_010: ALUCtl = 4'b1111; //slt
            7'b011_?_010: ALUCtl = 4'b1111; //slti
            7'b001_?_001: ALUCtl = 4'b0011; //bne
            7'b001_?_100: ALUCtl = 4'b0100; //blt
            7'b001_?_101: ALUCtl = 4'b0101; //bge
            7'b100_?_???: ALUCtl = 4'b1000; //jal & jalr
            default: ALUCtl = 4'b0000;
        endcase
    end

endmodule

