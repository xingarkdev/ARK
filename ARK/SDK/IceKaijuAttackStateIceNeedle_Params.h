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
	 * Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.BPOnAttackStart
	 */
	struct UIceKaijuAttackStateIceNeedle_C_BPOnAttackStart_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.StartAnimationStateEvent
	 */
	struct UIceKaijuAttackStateIceNeedle_C_StartAnimationStateEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ENetRole                                                   Role;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.BPOnAttackTick
	 */
	struct UIceKaijuAttackStateIceNeedle_C_BPOnAttackTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.TickAnimationStateEvent
	 */
	struct UIceKaijuAttackStateIceNeedle_C_TickAnimationStateEvent_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CustomEventName;                                         // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ENetRole                                                   Role;                                                    // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.ExecuteUbergraph_IceKaijuAttackStateIceNeedle
	 */
	struct UIceKaijuAttackStateIceNeedle_C_ExecuteUbergraph_IceKaijuAttackStateIceNeedle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
