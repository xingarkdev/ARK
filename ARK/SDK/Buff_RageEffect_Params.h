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
	 * Function Buff_RageEffect.Buff_RageEffect_C.CanEnrageActor
	 */
	struct ABuff_RageEffect_C_CanEnrageActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canEnrage;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XWLG[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_RageEffect.Buff_RageEffect_C.BPExcludeAoEActor
	 */
	struct ABuff_RageEffect_C_BPExcludeAoEActor_Params
	{
	public:
		class AActor*                                              ActorToConsider;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RageEffect.Buff_RageEffect_C.UserConstructionScript
	 */
	struct ABuff_RageEffect_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_RageEffect.Buff_RageEffect_C.ReceiveBeginPlay
	 */
	struct ABuff_RageEffect_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_RageEffect.Buff_RageEffect_C.ExecuteUbergraph_Buff_RageEffect
	 */
	struct ABuff_RageEffect_C_ExecuteUbergraph_Buff_RageEffect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
