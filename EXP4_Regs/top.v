`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:37:08 05/07/2018 
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
module top(Addr,Write_Reg,choose,CLK,Reset,A_B,LED);


	input [4:0]Addr;
	input Write_Reg,CLK,Reset,A_B;
	input [1:0]choose;
	output reg [7:0]LED;
	
	
	
	wire [31:0]R_Data_A,R_Data_B;
	reg [31:0] W_Data;
	reg [4:0]R_Addr_A,R_Addr_B;
	

	regs REG1(R_Addr_A,R_Addr_B,R_Data_A,R_Data_B,CLK,Reset,Write_Reg,Addr,W_Data );
	
	always@(*)
	begin
		R_Addr_A = 0;
		R_Addr_B = 0;
		W_Data = 0;
		LED = 0;
		if(!Write_Reg)
		begin
			if(A_B)
			begin 
				R_Addr_A=Addr;
				case(choose)
					2'b00:LED=R_Data_A[7:0];
					2'b01:LED=R_Data_A[15:8];
					2'b10:LED=R_Data_A[23:16];
					2'b11:LED=R_Data_A[31:24];
					default:LED=8'b0;
				endcase
			end		
			else
			begin 
				R_Addr_B=Addr;
				case(choose)
					2'b00:LED=R_Data_B[7:0];
					2'b01:LED=R_Data_B[15:8];
					2'b10:LED=R_Data_B[23:16];
					2'b11:LED=R_Data_B[31:24];
					default:LED=8'b0;
				endcase
			end
		end
			
		else 
		begin 
			case(choose)
				2'b00:W_Data=32'h0000_000F;
				2'b01:W_Data=32'h0000_0DB0;
				2'b10:W_Data=32'h003C_C381;
				2'b11:W_Data=32'hFFFF_FFFF;
				default:W_Data=32'h0;
			endcase
			
		end
		
	end
endmodule


