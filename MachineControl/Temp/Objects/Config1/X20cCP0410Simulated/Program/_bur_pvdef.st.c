#define _BUR_LOCAL _BUR_PUBLIC __attribute__((__section__(".bss.vol")))
#define _BUR_LOCAL_RETAIN _BUR_PUBLIC __attribute__((__section__(".bss.rem")))
#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "G:/AutomationProjects/BnR/Training/MachineControl/MachineControl/Temp/Objects/Config1/X20cCP0410/Program/_bur_pvdefst.h"
#line 9 "C:/BRAutomation/AS412/AS/gnuinst/V4.1.2/4.9/i386-elf/include/bur/_bur_pvdef.nodebug"
void __AS__ImplInitCyclic_st(void);
void __AS__ImplInitInit_st(void);
void __AS__ImplInitExit_st(void);
void _INIT __BUR__ENTRY_INIT_BRELF_FUNCT__(void){__AS__ImplInitCyclic_st();
__AS__ImplInitInit_st();
__AS__ImplInitExit_st();
}

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
__asm__(".ascii \"iecfile \\\"G:/AutomationProjects/BnR/Training/MachineControl/MachineControl/Temp/Objects/Config1/X20cCP0410/Program/_bur_pvdef.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"G:/AutomationProjects/BnR/Training/MachineControl/MachineControl/Temp/Objects/Config1/X20cCP0410/Program/_bur_pvdef.st.c\\\" \\\"C:/BRAutomation/AS412/AS/gnuinst/V4.1.2/4.9/i386-elf/include/bur/_bur_pvdef.st\\\"\\n\"");
__asm__(".previous");
