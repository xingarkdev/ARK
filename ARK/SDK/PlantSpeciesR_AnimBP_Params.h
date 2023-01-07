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
	 * Function PlantSpeciesR_AnimBP.PlantSpeciesR_AnimBP_C.BlueprintPlayAnimationEvent
	 */
	struct UPlantSpeciesR_AnimBP_C_BlueprintPlayAnimationEvent_Params
	{
	public:
		class UAnimMontage*                                        AnimationMontage;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      PlayRate;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      playedAnimLength;                                        // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlantSpeciesR_AnimBP.PlantSpeciesR_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PlantSpeciesR_AnimBP_AnimGraphNode_BlendListByBool_0A6C822C43025BCF30DEB19D9CA04C11
	 */
	struct UPlantSpeciesR_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PlantSpeciesR_AnimBP_AnimGraphNode_BlendListByBool_0A6C822C43025BCF30DEB19D9CA04C11_Params
	{	};

	/**
	 * Function PlantSpeciesR_AnimBP.PlantSpeciesR_AnimBP_C.BlueprintUpdateAnimation
	 */
	struct UPlantSpeciesR_AnimBP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlantSpeciesR_AnimBP.PlantSpeciesR_AnimBP_C.ExecuteUbergraph_PlantSpeciesR_AnimBP
	 */
	struct UPlantSpeciesR_AnimBP_C_ExecuteUbergraph_PlantSpeciesR_AnimBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
