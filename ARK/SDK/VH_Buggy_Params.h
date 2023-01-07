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
	 * Function VH_Buggy.VH_Buggy_C.BPPlayDying
	 */
	struct AVH_Buggy_C_BPPlayDying_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YUPC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class APawn*                                               InstigatingPawn;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_Buggy.VH_Buggy_C.UserConstructionScript
	 */
	struct AVH_Buggy_C_UserConstructionScript_Params
	{	};

	/**
	 * Function VH_Buggy.VH_Buggy_C.InpActEvt_Jump_K2Node_InputActionEvent_75
	 */
	struct AVH_Buggy_C_InpActEvt_Jump_K2Node_InputActionEvent_75_Params
	{	};

	/**
	 * Function VH_Buggy.VH_Buggy_C.InpActEvt_Jump_K2Node_InputActionEvent_74
	 */
	struct AVH_Buggy_C_InpActEvt_Jump_K2Node_InputActionEvent_74_Params
	{	};

	/**
	 * Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_32
	 */
	struct AVH_Buggy_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_32_Params
	{	};

	/**
	 * Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_31
	 */
	struct AVH_Buggy_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_31_Params
	{	};

	/**
	 * Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_30
	 */
	struct AVH_Buggy_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_30_Params
	{	};

	/**
	 * Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_29
	 */
	struct AVH_Buggy_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_29_Params
	{	};

	/**
	 * Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_28
	 */
	struct AVH_Buggy_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_28_Params
	{	};

	/**
	 * Function VH_Buggy.VH_Buggy_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_135
	 */
	struct AVH_Buggy_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_135_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_Buggy.VH_Buggy_C.ReceivePossessed
	 */
	struct AVH_Buggy_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_Buggy.VH_Buggy_C.ReceiveTick
	 */
	struct AVH_Buggy_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_Buggy.VH_Buggy_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_46
	 */
	struct AVH_Buggy_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_46_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_Buggy.VH_Buggy_C.ExecuteUbergraph_VH_Buggy
	 */
	struct AVH_Buggy_C_ExecuteUbergraph_VH_Buggy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
