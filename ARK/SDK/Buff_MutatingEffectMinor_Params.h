﻿#pragma once

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
	 * Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.BPDeactivated
	 */
	struct ABuff_MutatingEffectMinor_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.ReceiveDestroyed
	 */
	struct ABuff_MutatingEffectMinor_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.BuffTickClient
	 */
	struct ABuff_MutatingEffectMinor_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.BPSetupForInstigator
	 */
	struct ABuff_MutatingEffectMinor_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.UserConstructionScript
	 */
	struct ABuff_MutatingEffectMinor_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.HideMesh
	 */
	struct ABuff_MutatingEffectMinor_C_HideMesh_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.ExecuteUbergraph_Buff_MutatingEffectMinor
	 */
	struct ABuff_MutatingEffectMinor_C_ExecuteUbergraph_Buff_MutatingEffectMinor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
