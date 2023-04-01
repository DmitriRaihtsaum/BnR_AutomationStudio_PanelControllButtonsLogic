/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1679943749_1_
#define _BUR_1679943749_1_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef struct tyOutputs
{	plcbit bGlobalReset;
	plcbit bSystemInStopMode;
	plcbit bSystemInRunMode;
} tyOutputs;

typedef struct tyInputs
{	plcbit bResetPb;
	plcbit bStopPb;
	plcbit bRunPb;
} tyInputs;

typedef struct tyStatic
{	struct f_trig f_Trig_StopPb;
	struct f_trig f_Trig_RunPb;
} tyStatic;

typedef struct tyPushButtonsControl
{	struct tyOutputs Outputs;
	struct tyInputs Inputs;
	struct tyStatic StaticVar;
} tyPushButtonsControl;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Global.typ\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1679943749_1_ */

