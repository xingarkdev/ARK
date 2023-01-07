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
	 * Function Otter_AIController_BP.Otter_AIController_BP_C.BPGetTargetingDesire
	 */
	struct AOtter_AIController_BP_C_BPGetTargetingDesire_Params
	{
	public:
		class AActor*                                              forTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ForTargetingDesireValue;                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Otter_AIController_BP.Otter_AIController_BP_C.UserConstructionScript
	 */
	struct AOtter_AIController_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Otter_AIController_BP.Otter_AIController_BP_C.ExecuteUbergraph_Otter_AIController_BP
	 */
	struct AOtter_AIController_BP_C_ExecuteUbergraph_Otter_AIController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
