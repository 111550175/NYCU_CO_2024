module ALU (
    input [3:0] ALUctl,
    input signed [31:0] A,B,
    output reg signed [31:0] ALUOut,
    output zero
);
    // ALU has two operand, it execute different operator based on ALUctl wire 
    // output zero is for determining taking branch or not (or you can change the design as you wish)

    // TODO: implement your ALU here
    // Hint: you can use operator to implement
    
    always @ (*) begin
        case(ALUctl)
            4'b0000: begin zero = 0; ALUOut = A & B; end
            

            4'b0001: begin zero = 0; ALUOut = A | B; end
            

            4'b0010: begin zero = 0; ALUOut = A + B; end
            

            4'b0110: begin 
                if(A == B)
                    zero = 1;
                else
                    zero = 0;
                ALUOut = A - B; 
            end

            4'b1111: begin 
                zero = 0;
                if(A<B)
                    ALUOut = 32'h1;
                else
                    ALUOut = 32'h0;
            end

            default: begin zero = 0; ALUOut = A; end
        endcase
    end
endmodule

