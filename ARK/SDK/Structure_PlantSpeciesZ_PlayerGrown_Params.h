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
	 * Function Structure_PlantSpeciesZ_PlayerGrown.Structure_PlantSpeciesZ_PlayerGrown_C.BPOnDemolish
	 */
	struct AStructure_PlantSpeciesZ_PlayerGrown_C_BPOnDemolish_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesZ_PlayerGrown.Structure_PlantSpeciesZ_PlayerGrown_C.InitializeState
	 */
	struct AStructure_PlantSpeciesZ_PlayerGrown_C_InitializeState_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesZ_PlayerGrown.Structure_PlantSpeciesZ_PlayerGrown_C.UserConstructionScript
	 */
	struct AStructure_PlantSpeciesZ_PlayerGrown_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesZ_PlayerGrown.Structure_PlantSpeciesZ_PlayerGrown_C.ExecuteUbergraph_Structure_PlantSpeciesZ_PlayerGrown
	 */
	struct AStructure_PlantSpeciesZ_PlayerGrown_C_ExecuteUbergraph_Structure_PlantSpeciesZ_PlayerGrown_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
