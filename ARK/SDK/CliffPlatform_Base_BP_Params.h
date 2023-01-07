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
	 * Function CliffPlatform_Base_BP.CliffPlatform_Base_BP_C.BPIsAllowedToBuild
	 */
	struct ACliffPlatform_Base_BP_C_BPIsAllowedToBuild_Params
	{
	public:
		struct FPlacementData                                      OutPlacementData;                                        // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		int32_t                                                    CurrentAllowedReason;                                    // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0064(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CliffPlatform_Base_BP.CliffPlatform_Base_BP_C.UserConstructionScript
	 */
	struct ACliffPlatform_Base_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function CliffPlatform_Base_BP.CliffPlatform_Base_BP_C.ExecuteUbergraph_CliffPlatform_Base_BP
	 */
	struct ACliffPlatform_Base_BP_C_ExecuteUbergraph_CliffPlatform_Base_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
