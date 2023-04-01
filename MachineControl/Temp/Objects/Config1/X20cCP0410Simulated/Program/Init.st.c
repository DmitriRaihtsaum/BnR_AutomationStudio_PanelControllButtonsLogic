#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "G:/AutomationProjects/BnR/Training/MachineControl/MachineControl/Temp/Objects/Config1/X20cCP0410/Program/Initst.h"
#line 1 "G:/AutomationProjects/BnR/Training/MachineControl/MachineControl/Logical/Program/Init.nodebug"
#line 3 "G:/AutomationProjects/BnR/Training/MachineControl/MachineControl/Logical/Program/Init.st"
void __BUR__ENTRY_INIT_FUNCT__(void){{
(DeviceModeControll.Outputs.bSystemInRunMode=0);
(DeviceModeControll.Outputs.bSystemInStopMode=1);
(DeviceModeControll.StaticVar.f_Trig_RunPb.CLK=0);
(DeviceModeControll.StaticVar.f_Trig_StopPb.CLK=0);
}}
#line 8 "G:/AutomationProjects/BnR/Training/MachineControl/MachineControl/Logical/Program/Init.nodebug"

void __AS__ImplInitInit_st(void){__BUR__ENTRY_INIT_FUNCT__();}

__asm__(".section \".plc\"");
__asm__(".ascii \"iecfile \\\"Logical/Global.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Global.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Program/Types.typ\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Program/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"G:/AutomationProjects/BnR/Training/MachineControl/MachineControl/Temp/Objects/Config1/X20cCP0410/Program/Init.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"G:/AutomationProjects/BnR/Training/MachineControl/MachineControl/Temp/Objects/Config1/X20cCP0410/Program/Init.st.c\\\" \\\"G:/AutomationProjects/BnR/Training/MachineControl/MachineControl/Logical/Program/Init.st\\\"\\n\"");
__asm__(".previous");
