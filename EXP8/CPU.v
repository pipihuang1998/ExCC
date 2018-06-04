`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:51:32 06/04/2018 
// Design Name: 
// Module Name:    CPU 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module CPU(clk,rst,sw,led,ZF,OF);
	 
output reg[7:0]led;
input clk,rst;
input [1:0]sw;
output OF;
output ZF;
reg Write_Reg;
wire [31:0]inst_code;
wire [31:0]R_Data_A,R_Data_B,W_Data;
reg [4:0]R_Addr_A,R_Addr_B,W_Addr;
reg [2:0] ALU_OP;

EXP7 A(clk,rst,inst_code);
regs B(R_Addr_A,R_Addr_B,R_Data_A,R_Data_B,clk,rst,Write_Reg,W_Addr,W_Data);
ALU C(ALU_OP,R_Data_A,R_Data_B,W_Data,ZF,OF);
always @(posedge clk or negedge clk)
begin

	if(clk)
	begin
	#5
		if(inst_code[31:26]==0)
		begin
			Write_Reg<=0;
			R_Addr_A<=inst_code[25:21];
			R_Addr_B<=inst_code[20:16];
			W_Addr<=inst_code[15:11];
			case(inst_code[5:0])
				6'b100000:ALU_OP<=3'b100;
				6'b100010:ALU_OP<=3'b101;
				6'b100100:ALU_OP<=3'b000;
				6'b100101:ALU_OP<=3'b001;
				6'b100110:ALU_OP<=3'b010;
				6'b100111:ALU_OP<=3'b011;
				6'b101011:ALU_OP<=3'b110;
				6'b000100:ALU_OP<=3'b111;
				default:ALU_OP<=0;
			endcase
		end
		else
		begin
			Write_Reg<=0;
			ALU_OP<=0;
			R_Addr_A<=0;
			R_Addr_B<=0;
			W_Addr<=0;
		end
	end
	else
	begin 
		Write_Reg<=1;
	end
end


always@(*)
	case(sw)
	0:led = W_Data[7:0];
	1:led = W_Data[15:8];
	2:led = W_Data[23:16];
	3:led = W_Data[31:24];
	default:led = 0;
	endcase
endmodule
