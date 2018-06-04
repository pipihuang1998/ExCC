`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:16:05 04/23/2018 
// Design Name: 
// Module Name:    ALU 
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
module ALU(ALU_OP,A,B,F,ZF,OF);
	input [2:0] ALU_OP;
	input [31:0]A,B;
	output reg [31:0]F;
	output reg OF;
	output reg ZF;
	
	reg _C32;
	always @(*)
	begin
		case(ALU_OP)
			3'b000:begin F=A&B; OF=1'b0; end
			3'b001:begin F=A|B; OF=1'b0; end
			3'b010:begin F=A^B; OF=1'b0; end
			3'b011:begin F=~(A|B); OF=1'b0;end
			3'b100:begin {OF,F}=A+B;end
			3'b101:begin {_C32,F}={1'b1,A}-{1'b0,B};OF=A[31]^B[31]^F[31]^(~_C32);end
			3'b110:begin if(A<B)F=32'b1;else F=32'b0; OF=1'b0; end
			3'b111:begin F=B<<A;OF=1'b0; end
			default:begin F=32'b0;OF=1'b0;end
			
	endcase
	end
	
	
	always @(*)
	begin
		if(F==32'b0)
			ZF=1'b1;
		else
			ZF=1'b0;
	end
endmodule
