module hazard_detection_unit(
    input hdu_i_1,  //mem_read
    input [4:0] hdu_i_2,  //rd
    input [4:0] hdu_i_3,  //rs1
    input [4:0] hdu_i_4,  //rs2
    input hdu_i_5,      //w1- determine whether branch or not
    output reg hdu_o_1,     //pc-stall
    output reg hdu_o_2,     //if-stall    
    output reg hdu_o_4      //flush
);
    always @(*) begin

        if (hdu_i_1 &&(hdu_i_2==hdu_i_3 || hdu_i_2==hdu_i_4) ) begin
            hdu_o_1 = 1'b1;
            hdu_o_2 = 1'b1;
            hdu_o_4 = 1'b0;
        end
        else if (hdu_i_5==1'b1) begin
            hdu_o_1 = 1'b0;
            hdu_o_2 = 1'b0;
            hdu_o_4 = 1'b1;
        end
        else begin
            hdu_o_1 = 1'b0;
            hdu_o_2 = 1'b0;
            hdu_o_4 = 1'b0;
        end
    end

endmodule
