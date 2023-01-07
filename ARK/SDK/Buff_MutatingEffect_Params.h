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
	 * Function Buff_MutatingEffect.Buff_MutatingEffect_C.BPDeactivated
	 */
	struct ABuff_MutatingEffect_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MutatingEffect.Buff_MutatingEffect_C.ReceiveDestroyed
	 */
	struct ABuff_MutatingEffect_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Buff_MutatingEffect.Buff_MutatingEffect_C.BuffTickClient
	 */
	struct ABuff_MutatingEffect_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MutatingEffect.Buff_MutatingEffect_C.BPSetupForInstigator
	 */
	struct ABuff_MutatingEffect_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MutatingEffect.Buff_MutatingEffect_C.UserConstructionScript
	 */
	struct ABuff_MutatingEffect_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_MutatingEffect.Buff_MutatingEffect_C.HideMesh
	 */
	struct ABuff_MutatingEffect_C_HideMesh_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MutatingEffect.Buff_MutatingEffect_C.ExecuteUbergraph_Buff_MutatingEffect
	 */
	struct ABuff_MutatingEffect_C_ExecuteUbergraph_Buff_MutatingEffect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
