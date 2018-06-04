`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:19:05 05/13/2018 
// Design Name: 
// Module Name:    reg 
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

module memory(CLK,Reset,Mem_Addr,M_W_Data,Mem_Read,Mem_Write,M_R_Data );
	 input [7:0] Mem_Addr;
	 input CLK,Reset;
	 input Mem_Write,Mem_Read;

	 input [31:0]M_W_Data;
	 output reg[31:0]M_R_Data;
	 reg [7:0]REG_Files[0:255];
	 
	
	 //³õÊ¼»¯´æ´¢Æ÷
	 integer i;
	 initial 
	 begin
			for (i = 0; i < 256; i = i + 1) 
			REG_Files[i] = 0;
	 end
	 
	 always@(always@(posedge CLK or posedge Reset))
	 begin
		case ({Mem_Write,Mem_Read})
		
			2'b10:begin
						REG_Files[Mem_Addr]<=M_W_Data[7:0];
						REG_Files[Mem_Addr+1]<=M_W_Data[15:8];
						REG_Files[Mem_Addr+2]<=M_W_Data[23:16];
						REG_Files[Mem_Addr+3]<=M_W_Data[31:24];
						end
			2'b01:begin 
						M_R_Data[7:0]<=REG_Files[Mem_Addr];
						M_R_Data[15:8]<=REG_Files[Mem_Addr+1];
						M_R_Data[23:16]<=REG_Files[Mem_Addr+2];
						M_R_Data[31:24]<=REG_Files[Mem_Addr+3];
					end
			
			default:REG_Files<=REG_Files;
		endcase
	 end
endmodule
