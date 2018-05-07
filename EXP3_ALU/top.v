`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:59:11 04/28/2018 
// Design Name: 
// Module Name:    top 
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
module top(ALU_OP,AB_SW,F_LED_SW,LED);
	
	input [2:0] ALU_OP;
	input [2:0]AB_SW;
	input [2:0]F_LED_SW;
	output reg[7:0]LED;
	
	wire [31:0]F;
	wire ZF,OF;
	
	reg [31:0]A,B;
	
	always@(*)
	begin
		case(AB_SW)
			3'b000:begin A=32'h00000000;B=32'h00000000;end
			3'b001:begin A=32'h00000003;B=32'h00000607;end
			3'b010:begin A=32'h80000000;B=32'h80000000;end
			3'b011:begin A=32'h7FFFFFFF;B=32'h7FFFFFFF;end
			3'b100:begin A=32'hFFFFFFFF;B=32'hFFFFFFFF;end
			3'b101:begin A=32'h80000000;B=32'hFFFFFFFF;end
			3'b110:begin A=32'hFFFFFFFF;B=32'h80000000;end
			3'b111:begin A=32'h12345678;B=32'h33332222;end
			default:begin A=32'h9ABCDEF0;B=32'h11112222;end
		endcase
	end
	
	ALU alu1(ALU_OP,A,B,F,ZF,OF);
	always@(*)
	begin
		
		case(F_LED_SW)
			3'b000:LED=F[7:0];
			3'b001:LED=F[15:8];
			3'b010:LED=F[23:16];
			3'b011:LED=F[31:24];
			default:begin LED[7]=ZF;LED[0]=OF;LED[6:1]=6'b0;end
		endcase
	end
	

endmodule
