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


module top(
	input Mem_Read,		//读控制信号
	input Mem_Write,		//写控制信号
	input[7:2]Mem_Addr,	//寄存器访问地址
	input[1:0]MUX,		//2位输入选择器
	input Clk,
	input Reset,
	output reg[7:0]LED				//LED输出显示
);


	wire[31:0]M_R_Data;	//存储器读出数据
	reg[31:0]M_W_Data;	//存储器写入数据

	
	always @ (*) 
	begin
		if(Reset)
		begin
		LED = 0;
		M_W_Data = 0;
		end
		else if (Mem_Read) 
		begin 	//读操作
			case(MUX)
				2'b00:	LED = M_R_Data[7:0];
				2'b01:	LED = M_R_Data[15:8];
				2'b10:	LED = M_R_Data[23:16];
				2'b11:	LED = M_R_Data[31:24];
				default:LED = 0;
			endcase
		end
		else if (Mem_Write)
		begin
			LED=0;
			case(MUX)
				2'b00:begin	M_W_Data = 32'h0000_000F; 	end//末8位： 0000_1111
				2'b01:begin	M_W_Data = 32'h0000_0DB0;	end//倒数第二8位：0000_1101, 末8位：	1011_0000
				2'b10:begin	M_W_Data = 32'h003C_C381;	end//倒数第三3位：0011_1100, 倒数第二8位：1100_0011, 末8位：1000_0001
				2'b11:begin	M_W_Data = 32'hFFFF_FFFF;  end
				default:M_W_Data = 0;
			endcase
		end
	end

endmodule