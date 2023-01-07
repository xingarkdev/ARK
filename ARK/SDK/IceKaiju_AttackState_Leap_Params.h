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
	 * Function IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C.BPOnClearAttackState
	 */
	struct UIceKaiju_AttackState_Leap_C_BPOnClearAttackState_Params
	{	};

	/**
	 * Function IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C.BPOnAttackEnd
	 */
	struct UIceKaiju_AttackState_Leap_C_BPOnAttackEnd_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C.BPOnAttackStart
	 */
	struct UIceKaiju_AttackState_Leap_C_BPOnAttackStart_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C.ExecuteUbergraph_IceKaiju_AttackState_Leap
	 */
	struct UIceKaiju_AttackState_Leap_C_ExecuteUbergraph_IceKaiju_AttackState_Leap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
