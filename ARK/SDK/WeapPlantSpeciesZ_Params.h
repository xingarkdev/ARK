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
	 * Function WeapPlantSpeciesZ.WeapPlantSpeciesZ_C.UserConstructionScript
	 */
	struct AWeapPlantSpeciesZ_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapPlantSpeciesZ.WeapPlantSpeciesZ_C.StartSecondaryActionEvent
	 */
	struct AWeapPlantSpeciesZ_C_StartSecondaryActionEvent_Params
	{	};

	/**
	 * Function WeapPlantSpeciesZ.WeapPlantSpeciesZ_C.BPFiredWeapon
	 */
	struct AWeapPlantSpeciesZ_C_BPFiredWeapon_Params
	{	};

	/**
	 * Function WeapPlantSpeciesZ.WeapPlantSpeciesZ_C.ROS_UpdateQuickfire
	 */
	struct AWeapPlantSpeciesZ_C_ROS_UpdateQuickfire_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapPlantSpeciesZ.WeapPlantSpeciesZ_C.ExecuteUbergraph_WeapPlantSpeciesZ
	 */
	struct AWeapPlantSpeciesZ_C_ExecuteUbergraph_WeapPlantSpeciesZ_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
