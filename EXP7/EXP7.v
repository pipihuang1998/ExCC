`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:32:36 05/24/2018 
// Design Name: 
// Module Name:    EXP7 
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
module EXP7(clk,rst,sw,led,pc);
input clk;
input rst;
input [1:0]sw;
output reg[7:0]led;
output reg[7:2] pc;

wire [31:0]inst_code;

wire [7:2]pcnew;

Inst_ROM my(
	  .clka(clk), // input clka
	  .addra(pc[7:2]), // input [5 : 0] addra
	  .douta(inst_code) // output [31 : 0] douta
	);
assign pcnew = pc+4;
always@(posedge rst or negedge clk)
	if(rst)
		pc <= 0;
	else
		pc <= pcnew;

always@(*)
	case(sw)
	0:led = inst_code[7:0];
	1:led = inst_code[15:8];
	2:led = inst_code[23:16];
	3:led = inst_code[31:24];
	default:led = 0;
	endcase
endmodule
