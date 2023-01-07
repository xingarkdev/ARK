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
	 * Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.OnCanUseStateEvent
	 */
	struct UDinoAttackState_IceJumper_Dash_C_OnCanUseStateEvent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.BPCanAttack
	 */
	struct UDinoAttackState_IceJumper_Dash_C_BPCanAttack_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherTarget;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.OnEndEvent
	 */
	struct UDinoAttackState_IceJumper_Dash_C_OnEndEvent_Params
	{	};

	/**
	 * Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.OnTickEvent
	 */
	struct UDinoAttackState_IceJumper_Dash_C_OnTickEvent_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.OnBeginEvent
	 */
	struct UDinoAttackState_IceJumper_Dash_C_OnBeginEvent_Params
	{
	public:
		class UPrimalAIState*                                      InParentState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.IsAIControlled
	 */
	struct UDinoAttackState_IceJumper_Dash_C_IsAIControlled_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KP6N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.ExecuteUbergraph_DinoAttackState_IceJumper_Dash
	 */
	struct UDinoAttackState_IceJumper_Dash_C_ExecuteUbergraph_DinoAttackState_IceJumper_Dash_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
