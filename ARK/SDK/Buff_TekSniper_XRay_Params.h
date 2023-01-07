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
	 * Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.GetFriendOrFoe
	 */
	struct ABuff_TekSniper_XRay_C_GetFriendOrFoe_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E0TX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.BPDeactivated
	 */
	struct ABuff_TekSniper_XRay_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.BuffTickClient
	 */
	struct ABuff_TekSniper_XRay_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.GetBuffPostprocessIntensity
	 */
	struct ABuff_TekSniper_XRay_C_GetBuffPostprocessIntensity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.Smooth Overheating Amount
	 */
	struct ABuff_TekSniper_XRay_C_SmoothOverheatingAmount_Params
	{
	public:
		float                                                      amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.Set Overheating Amount
	 */
	struct ABuff_TekSniper_XRay_C_SetOverheatingAmount_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.BPActivated
	 */
	struct ABuff_TekSniper_XRay_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.ReceiveBeginPlay
	 */
	struct ABuff_TekSniper_XRay_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.UserConstructionScript
	 */
	struct ABuff_TekSniper_XRay_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.ExecuteUbergraph_Buff_TekSniper_XRay
	 */
	struct ABuff_TekSniper_XRay_C_ExecuteUbergraph_Buff_TekSniper_XRay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
