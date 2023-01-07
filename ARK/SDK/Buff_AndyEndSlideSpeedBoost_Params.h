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
	 * Function Buff_AndyEndSlideSpeedBoost.Buff_AndyEndSlideSpeedBoost_C.UserConstructionScript
	 */
	struct ABuff_AndyEndSlideSpeedBoost_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_AndyEndSlideSpeedBoost.Buff_AndyEndSlideSpeedBoost_C.BPSetupForInstigator
	 */
	struct ABuff_AndyEndSlideSpeedBoost_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_AndyEndSlideSpeedBoost.Buff_AndyEndSlideSpeedBoost_C.ReceiveTick
	 */
	struct ABuff_AndyEndSlideSpeedBoost_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_AndyEndSlideSpeedBoost.Buff_AndyEndSlideSpeedBoost_C.BPDeactivated
	 */
	struct ABuff_AndyEndSlideSpeedBoost_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_AndyEndSlideSpeedBoost.Buff_AndyEndSlideSpeedBoost_C.ExecuteUbergraph_Buff_AndyEndSlideSpeedBoost
	 */
	struct ABuff_AndyEndSlideSpeedBoost_C_ExecuteUbergraph_Buff_AndyEndSlideSpeedBoost_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
