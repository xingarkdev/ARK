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
	 * Function Xenomorph_AIController_BP.Xenomorph_AIController_BP_C.ShouldIgnoreAggression
	 */
	struct AXenomorph_AIController_BP_C_ShouldIgnoreAggression_Params
	{
	public:
		class UObject*                                             Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1C5L[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Xenomorph_AIController_BP.Xenomorph_AIController_BP_C.BPGetTargetingDesire
	 */
	struct AXenomorph_AIController_BP_C_BPGetTargetingDesire_Params
	{
	public:
		class AActor*                                              forTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ForTargetingDesireValue;                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_AIController_BP.Xenomorph_AIController_BP_C.UserConstructionScript
	 */
	struct AXenomorph_AIController_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Xenomorph_AIController_BP.Xenomorph_AIController_BP_C.ReceiveBeginPlay
	 */
	struct AXenomorph_AIController_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Xenomorph_AIController_BP.Xenomorph_AIController_BP_C.ExecuteUbergraph_Xenomorph_AIController_BP
	 */
	struct AXenomorph_AIController_BP_C_ExecuteUbergraph_Xenomorph_AIController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
