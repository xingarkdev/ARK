#pragma once

/**
 * Name: ARK
 * Version: 1.0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Buff_IsTameRiding.Buff_IsTameRiding_C.GetTimeBasedAlpha
	 */
	struct ABuff_IsTameRiding_C_GetTimeBasedAlpha_Params
	{
	public:
		float                                                      Alpha;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EF4U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_IsTameRiding.Buff_IsTameRiding_C.GetBuffDescription
	 */
	struct ABuff_IsTameRiding_C_GetBuffDescription_Params
	{
	public:
		struct FStatusValueModifierDescription                     ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Buff_IsTameRiding.Buff_IsTameRiding_C.DrawActiveStateText
	 */
	struct ABuff_IsTameRiding_C_DrawActiveStateText_Params
	{
	public:
		int32_t                                                    ActiveState;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YWGP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterHUD*                                         HUD;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      XPos;                                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      YPos;                                                    // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Scale;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_IsTameRiding.Buff_IsTameRiding_C.GetActiveTameState
	 */
	struct ABuff_IsTameRiding_C_GetActiveTameState_Params
	{
	public:
		class APrimalDinoCharacter*                                MyRidingDino;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    IsInState;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_63OE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_IsTameRiding.Buff_IsTameRiding_C.BPDrawBuffStatusHUD
	 */
	struct ABuff_IsTameRiding_C_BPDrawBuffStatusHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      XPos;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      YPos;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ScaleMult;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_IsTameRiding.Buff_IsTameRiding_C.BuffTickServer
	 */
	struct ABuff_IsTameRiding_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KU62[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_IsTameRiding.Buff_IsTameRiding_C.BPCheckPreventInput
	 */
	struct ABuff_IsTameRiding_C_BPCheckPreventInput_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_IsTameRiding.Buff_IsTameRiding_C.UserConstructionScript
	 */
	struct ABuff_IsTameRiding_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpActEvt_Jump_K2Node_InputActionEvent_170
	 */
	struct ABuff_IsTameRiding_C_InpActEvt_Jump_K2Node_InputActionEvent_170_Params
	{	};

	/**
	 * Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpActEvt_Use_K2Node_InputActionEvent_169
	 */
	struct ABuff_IsTameRiding_C_InpActEvt_Use_K2Node_InputActionEvent_169_Params
	{	};

	/**
	 * Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_64
	 */
	struct ABuff_IsTameRiding_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_64_Params
	{	};

	/**
	 * Function Buff_IsTameRiding.Buff_IsTameRiding_C.ReceiveBeginPlay
	 */
	struct ABuff_IsTameRiding_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_125
	 */
	struct ABuff_IsTameRiding_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_125_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_IsTameRiding.Buff_IsTameRiding_C.ServerTameEvent
	 */
	struct ABuff_IsTameRiding_C_ServerTameEvent_Params
	{	};

	/**
	 * Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_58
	 */
	struct ABuff_IsTameRiding_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_58_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_77
	 */
	struct ABuff_IsTameRiding_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_77_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_IsTameRiding.Buff_IsTameRiding_C.ExecuteUbergraph_Buff_IsTameRiding
	 */
	struct ABuff_IsTameRiding_C_ExecuteUbergraph_Buff_IsTameRiding_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
