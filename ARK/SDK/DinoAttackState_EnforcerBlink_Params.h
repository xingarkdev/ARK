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
	 * Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.BPDoAttack
	 */
	struct UDinoAttackState_EnforcerBlink_C_BPDoAttack_Params
	{	};

	/**
	 * Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.OnEndEvent
	 */
	struct UDinoAttackState_EnforcerBlink_C_OnEndEvent_Params
	{	};

	/**
	 * Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.OnBeginEvent
	 */
	struct UDinoAttackState_EnforcerBlink_C_OnBeginEvent_Params
	{
	public:
		class UPrimalAIState*                                      InParentState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.BPShouldEndAttack
	 */
	struct UDinoAttackState_EnforcerBlink_C_BPShouldEndAttack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PYFW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.ExecuteUbergraph_DinoAttackState_EnforcerBlink
	 */
	struct UDinoAttackState_EnforcerBlink_C_ExecuteUbergraph_DinoAttackState_EnforcerBlink_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
