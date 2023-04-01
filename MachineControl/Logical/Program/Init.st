

PROGRAM _INIT
	DeviceModeControll.Outputs.bSystemInRunMode :=FALSE;
	DeviceModeControll.Outputs.bSystemInStopMode :=TRUE;
	DeviceModeControll.StaticVar.f_Trig_RunPb.CLK := FALSE;
	DeviceModeControll.StaticVar.f_Trig_StopPb.CLK := FALSE;	
END_PROGRAM