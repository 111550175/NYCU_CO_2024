module forwarding_unit(
    input [4:0] fu_i_1, //rd from mem stage
    input [4:0] fu_i_2, //rd from wb stage
    input [4:0] fu_i_3, //rs1
    input [4:0] fu_i_4, //rs2
    input fu_i_5,   //memtoreg from wb stage
    input fu_i_6,   //write_reg from wb stage
    input fu_i_7,   //memtoreg from mem stage
    input fu_i_8,   //write_reg from mem stage
    //input fu_i_7,   //jalr_con
    output reg fu_o_1,  //rs1_1
    output reg fu_o_2,  //rs1_2
    output reg fu_o_3,  //rs2_1
    output reg fu_o_4   //rs2_2
);
    always @(*) begin
        fu_o_1 = 1'b0;
        fu_o_2 = 1'b0;
        fu_o_3 = 1'b0;
        fu_o_4 = 1'b0;
        
        if(fu_i_1==fu_i_3 && fu_i_2==fu_i_3 && (fu_i_5==1'b1 && fu_i_6==1'b1)) begin
            fu_o_1 = 1'b1;
            fu_o_2 = 1'b0;
        end
        else if(fu_i_1==fu_i_4 && fu_i_2==fu_i_4 && (fu_i_5==1'b1 && fu_i_6==1'b1)) begin
            fu_o_3 = 1'b1;
            fu_o_4 = 1'b0;
        end
        else begin 
            if(fu_i_1==fu_i_3 && (fu_i_7==1'b1 ||fu_i_8==1'b1)) begin
                fu_o_1 = 1'b1;
            end
            if(fu_i_2==fu_i_3 && (fu_i_6==1'b1 ||fu_i_5==1'b1)) begin
                fu_o_2 = 1'b1;
            end
            if(fu_i_1==fu_i_4 && (fu_i_7==1'b1 ||fu_i_8==1'b1)) begin
                fu_o_3 = 1'b1;
            end
            if(fu_i_2==fu_i_4 && (fu_i_6==1'b1 ||fu_i_5==1'b1)) begin
                fu_o_4 = 1'b1;
            end
        end
    end


endmodule
