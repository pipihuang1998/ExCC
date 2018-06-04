`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:37:19 05/07/2018 
// Design Name: 
// Module Name:    regs 
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

module regs(R_Addr_A,R_Addr_B,R_Data_A,R_Data_B,CLK,Reset,Write_Reg,W_Addr,W_Data );
	 input [4:0] R_Addr_A,R_Addr_B,W_Addr;
	 input CLK,Reset,Write_Reg;
	 output [31:0]R_Data_A,R_Data_B;
	 input [31:0]W_Data;
	 reg [31:0]REG_Files[0:31];
	 
	 integer i;
	 initial 
	 begin
			for (i = 0; i < 32; i = i + 1) 
			REG_Files[i] = 0;
	 end
	 
	 assign R_Data_A=REG_Files[R_Addr_A];
	 assign R_Data_B=REG_Files[R_Addr_B];
	 
	 always@(negedge CLK or posedge Reset)
	 begin
		if(Reset)
		begin 
			for(i=0;i<32;i=i+1)
			REG_Files[i]<=32'b0;
		end
		
		else
		begin
		#5;
			if(Write_Reg)
				REG_Files[W_Addr]<=W_Data;
		end
	 end
endmodule
