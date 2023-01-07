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
	 * Function PrimalItemArmor_HazardSuitShirt.PrimalItemArmor_HazardSuitShirt_C.BlueprintUnequipped
	 */
	struct UPrimalItemArmor_HazardSuitShirt_C_BlueprintUnequipped_Params
	{	};

	/**
	 * Function PrimalItemArmor_HazardSuitShirt.PrimalItemArmor_HazardSuitShirt_C.BlueprintEquipped
	 */
	struct UPrimalItemArmor_HazardSuitShirt_C_BlueprintEquipped_Params
	{
	public:
		bool                                                       bIsFromSaveGame;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BSGB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemArmor_HazardSuitShirt.PrimalItemArmor_HazardSuitShirt_C.ExecuteUbergraph_PrimalItemArmor_HazardSuitShirt
	 */
	struct UPrimalItemArmor_HazardSuitShirt_C_ExecuteUbergraph_PrimalItemArmor_HazardSuitShirt_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
