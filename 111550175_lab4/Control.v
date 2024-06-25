module Control (
    input [6:0] opcode,
    output reg branch,
    output reg memRead,
    output reg memtoReg,
    output reg [2:0] ALUOp,
    output reg memWrite,
    output reg ALUSrc,
    output reg regWrite,
    output reg jalcon,
    output reg jalrcon
);

    // TODO: implement your Control here
    // Hint: follow the Architecture (figure in spec) to set output signal
    always @ (*) begin
        case (opcode)
            //R-format
            7'b0110011: begin
                ALUSrc = 0;
                memtoReg = 0;
                regWrite = 1;
                memRead = 0;
                memWrite = 0;
                branch = 0;
                ALUOp = 3'b010;
                jalcon = 0;
                jalrcon = 0;
            end
            //ld
            7'b0000011: begin
                ALUSrc = 1;
                memtoReg = 1;
                regWrite = 1;
                memRead = 1;
                memWrite = 0;
                branch = 0;
                ALUOp = 3'b000;
                jalcon = 0;
                jalrcon = 0;
            end
            //sd
            7'b0100011: begin
                ALUSrc = 1;
                memtoReg = 0;
                regWrite = 0;
                memRead = 0;
                memWrite = 1;
                branch = 0;
                ALUOp = 3'b000;
                jalcon = 0;
                jalrcon = 0;
            end
            //conditional branch
            7'b1100011: begin
                ALUSrc = 0;
                memtoReg = 0;
                regWrite = 0;
                memRead = 0;
                memWrite = 0;
                branch = 1;
                ALUOp = 3'b001;
                jalcon = 0;
                jalrcon = 0;
            end
            //i-format
            7'b0010011: begin
                ALUSrc = 1;
                memtoReg = 0;
                regWrite = 1;
                memRead = 0;
                memWrite = 0;
                branch = 0;
                ALUOp = 3'b011;
                jalcon = 0;
                jalrcon = 0;
            end

            //jal
            7'b1101111: begin
                ALUSrc = 0;
                memtoReg = 0;
                regWrite = 1;
                memRead = 0;
                memWrite = 0;
                branch = 1;
                ALUOp = 3'b100;
                jalcon = 1;
                jalrcon = 0;
            end

            //jalr
            7'b1100111: begin
                ALUSrc = 0;
                memtoReg = 0;
                regWrite = 1;
                memRead = 0;
                memWrite = 0;
                branch = 1;
                ALUOp = 3'b100;
                jalcon = 1;
                jalrcon = 1;
            end

            default: begin
                ALUSrc = 0;
                memtoReg = 0;
                regWrite = 0;
                memRead = 0;
                memWrite = 0;
                branch = 0;
                ALUOp = 3'b001;
                jalcon = 0;
                jalrcon = 0;
            end
        endcase
    end

endmodule

