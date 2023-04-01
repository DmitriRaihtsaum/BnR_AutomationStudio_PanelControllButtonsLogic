(*//Pb Controll Start_							-1*)

TYPE
	tyPushButtonsControl : 	STRUCT 
		Outputs : tyOutputs;
		Inputs : tyInputs;
		StaticVar : tyStatic;
	END_STRUCT;
	tyOutputs : 	STRUCT 
		bGlobalReset : BOOL;
		bSystemInStopMode : BOOL;
		bSystemInRunMode : BOOL;
	END_STRUCT;
	tyInputs : 	STRUCT 
		bResetPb : BOOL;
		bStopPb : BOOL;
		bRunPb : BOOL;
	END_STRUCT;
	tyStatic : 	STRUCT 
		f_Trig_StopPb : f_trig;
		f_Trig_RunPb : f_trig;
	END_STRUCT;
END_TYPE

(*//Pb Controll End*)
