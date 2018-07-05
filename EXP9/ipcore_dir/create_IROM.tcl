##
## Core Generator Run Script, generator for Project Navigator create command
##

proc findRtfPath { relativePath } {
   set xilenv ""
   if { [info exists ::env(XILINX) ] } {
      if { [info exists ::env(MYXILINX)] } {
         set xilenv [join [list $::env(MYXILINX) $::env(XILINX)] $::xilinx::path_sep ]
      } else {
         set xilenv $::env(XILINX)
      }
   }
   foreach path [ split $xilenv $::xilinx::path_sep ] {
      set fullPath [ file join $path $relativePath ]
      if { [ file exists $fullPath ] } {
         return $fullPath
      }
   }
   return ""
}

source [ findRtfPath "data/projnav/scripts/dpm_cgUtils.tcl" ]

set result [ run_cg_create "xilinx.com:ip:blk_mem_gen:7.3" "IROM" "Block Memory Generator" "Block Memory Generator (xilinx.com:ip:blk_mem_gen:7.3) generated by Project Navigator" xc6slx16-3csg324 Verilog ]

if { $result == 0 } {
   puts "Core Generator create command completed successfully."
} elseif { $result == 1 } {
   puts "Core Generator create command failed."
} elseif { $result == 3 || $result == 4 } {
   # convert 'version check' result to real return range, bypassing any messages.
   set result [ expr $result - 3 ]
} else {
   puts "Core Generator create cancelled."
}
exit $result
