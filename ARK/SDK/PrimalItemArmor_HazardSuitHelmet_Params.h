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
	 * Function PrimalItemArmor_HazardSuitHelmet.PrimalItemArmor_HazardSuitHelmet_C.BlueprintEquipped
	 */
	struct UPrimalItemArmor_HazardSuitHelmet_C_BlueprintEquipped_Params
	{
	public:
		bool                                                       bIsFromSaveGame;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6Z1Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemArmor_HazardSuitHelmet.PrimalItemArmor_HazardSuitHelmet_C.EquippedBlueprintTick
	 */
	struct UPrimalItemArmor_HazardSuitHelmet_C_EquippedBlueprintTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KCJ2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemArmor_HazardSuitHelmet.PrimalItemArmor_HazardSuitHelmet_C.SetForceGainOxygen
	 */
	struct UPrimalItemArmor_HazardSuitHelmet_C_SetForceGainOxygen_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZT41[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemArmor_HazardSuitHelmet.PrimalItemArmor_HazardSuitHelmet_C.BlueprintUnequipped
	 */
	struct UPrimalItemArmor_HazardSuitHelmet_C_BlueprintUnequipped_Params
	{	};

	/**
	 * Function PrimalItemArmor_HazardSuitHelmet.PrimalItemArmor_HazardSuitHelmet_C.ExecuteUbergraph_PrimalItemArmor_HazardSuitHelmet
	 */
	struct UPrimalItemArmor_HazardSuitHelmet_C_ExecuteUbergraph_PrimalItemArmor_HazardSuitHelmet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
