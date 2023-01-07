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
	 * Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.Set Frozen Value Instant
	 */
	struct ABuff_FrozenEffect_Base_C_SetFrozenValueInstant_Params
	{
	public:
		float                                                      amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.GetFrozenValue
	 */
	struct ABuff_FrozenEffect_Base_C_GetFrozenValue_Params
	{
	public:
		float                                                      amount;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.SetFrozenValue
	 */
	struct ABuff_FrozenEffect_Base_C_SetFrozenValue_Params
	{
	public:
		float                                                      amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.ReceiveDestroyed
	 */
	struct ABuff_FrozenEffect_Base_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.BPSetupForInstigator
	 */
	struct ABuff_FrozenEffect_Base_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.BuffTickClient
	 */
	struct ABuff_FrozenEffect_Base_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6RV5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.BPDeactivated
	 */
	struct ABuff_FrozenEffect_Base_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.UserConstructionScript
	 */
	struct ABuff_FrozenEffect_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.ExecuteUbergraph_Buff_FrozenEffect_Base
	 */
	struct ABuff_FrozenEffect_Base_C_ExecuteUbergraph_Buff_FrozenEffect_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
