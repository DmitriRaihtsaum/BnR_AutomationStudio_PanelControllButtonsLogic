
PROGRAM _CYCLIC
//=============================================================================
// Dmitri Raihtsaum - Copyright 2023
// Created By: Dmitri Raihtsaum
//-----------------------------------------------------------------------------
// Tested with:   X20cCP0410
// Engineering:   Automation Studio 4.12
// Functionality: Machine controll pushbuttons logic for training
// Date: 17.03.2023
// Rev 0.1
//=============================================================================

	///Mapping 
	DeviceModeControll.StaticVar.f_Trig_RunPb(CLK := DeviceModeControll.Inputs.bRunPb);
	DeviceModeControll.StaticVar.f_Trig_StopPb(CLK := DeviceModeControll.Inputs.bStopPb);
	
	//Protection 
	IF DeviceModeControll.Outputs.bSystemInRunMode AND DeviceModeControll.Outputs.bSystemInStopMode THEN 
		DeviceModeControll.Outputs.bSystemInStopMode :=TRUE; 
		DeviceModeControll.Outputs.bSystemInRunMode :=FALSE; 
		END_IF;
	IF NOT DeviceModeControll.Outputs.bSystemInRunMode AND NOT DeviceModeControll.Outputs.bSystemInStopMode THEN 
		DeviceModeControll.Outputs.bSystemInStopMode :=TRUE; 
		DeviceModeControll.Outputs.bSystemInRunMode :=FALSE; 
	END_IF;
	//Code
	//Butons Control
	//Run button pressed
	IF DeviceModeControll.StaticVar.f_Trig_RunPb.Q THEN 
		DeviceModeControll.Outputs.bSystemInStopMode :=FALSE; 
		DeviceModeControll.Outputs.bSystemInRunMode :=TRUE;
	END_IF;		
	//Stop button pressed	
	IF DeviceModeControll.StaticVar.f_Trig_StopPb.Q THEN
		DeviceModeControll.Outputs.bSystemInStopMode :=TRUE; 
		DeviceModeControll.Outputs.bSystemInRunMode :=FALSE;
	END_IF;
		//Global Reset can be pressed when system in stop mode
		IF DeviceModeControll.Outputs.bSystemInStopMode AND DeviceModeControll.Inputs.bResetPb THEN 
		DeviceModeControll.Outputs.bGlobalReset :=TRUE;
	ELSE
		DeviceModeControll.Outputs.bGlobalReset :=FALSE;
	END_IF;
	
	//////////////////////////////////////// END ////////////////////////////////////////	
END_PROGRAM
