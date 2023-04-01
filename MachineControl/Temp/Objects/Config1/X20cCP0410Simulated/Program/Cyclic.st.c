#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "G:/AutomationProjects/BnR/Training/MachineControl/MachineControl/Temp/Objects/Config1/X20cCP0410/Program/Cyclicst.h"
#line 1 "G:/AutomationProjects/BnR/Training/MachineControl/MachineControl/Logical/Program/Cyclic.nodebug"
#line 2 "G:/AutomationProjects/BnR/Training/MachineControl/MachineControl/Logical/Program/Cyclic.st"
void _CYCLIC __BUR__ENTRY_CYCLIC_FUNCT__(void){{


(DeviceModeControll.StaticVar.f_Trig_RunPb.CLK=DeviceModeControll.Inputs.bRunPb);;f_trig(&DeviceModeControll.StaticVar.f_Trig_RunPb);
(DeviceModeControll.StaticVar.f_Trig_StopPb.CLK=DeviceModeControll.Inputs.bStopPb);;f_trig(&DeviceModeControll.StaticVar.f_Trig_StopPb);


if((DeviceModeControll.Outputs.bSystemInRunMode&DeviceModeControll.Outputs.bSystemInStopMode)){
(DeviceModeControll.Outputs.bSystemInStopMode=1);
(DeviceModeControll.Outputs.bSystemInRunMode=0);
}
if(((DeviceModeControll.Outputs.bSystemInRunMode^1)&(DeviceModeControll.Outputs.bSystemInStopMode^1))){
(DeviceModeControll.Outputs.bSystemInStopMode=1);
(DeviceModeControll.Outputs.bSystemInRunMode=0);
}



if(DeviceModeControll.StaticVar.f_Trig_RunPb.Q){
(DeviceModeControll.Outputs.bSystemInStopMode=0);
(DeviceModeControll.Outputs.bSystemInRunMode=1);
}

if(DeviceModeControll.StaticVar.f_Trig_StopPb.Q){
(DeviceModeControll.Outputs.bSystemInStopMode=1);
(DeviceModeControll.Outputs.bSystemInRunMode=0);
}

if((DeviceModeControll.Outputs.bSystemInStopMode&DeviceModeControll.Inputs.bResetPb)){
(DeviceModeControll.Outputs.bGlobalReset=1);
}else{
(DeviceModeControll.Outputs.bGlobalReset=0);
}


}imp1_end4_0:;}
#line 37 "G:/AutomationProjects/BnR/Training/MachineControl/MachineControl/Logical/Program/Cyclic.nodebug"

void __AS__ImplInitCyclic_st(void){}

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
__asm__(".ascii \"iecfile \\\"G:/AutomationProjects/BnR/Training/MachineControl/MachineControl/Temp/Objects/Config1/X20cCP0410/Program/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"G:/AutomationProjects/BnR/Training/MachineControl/MachineControl/Temp/Objects/Config1/X20cCP0410/Program/Cyclic.st.c\\\" \\\"G:/AutomationProjects/BnR/Training/MachineControl/MachineControl/Logical/Program/Cyclic.st\\\"\\n\"");
__asm__(".previous");
