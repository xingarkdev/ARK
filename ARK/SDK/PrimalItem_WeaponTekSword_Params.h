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
	 * Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.BlueprintUnequipped
	 */
	struct UPrimalItem_WeaponTekSword_C_BlueprintUnequipped_Params
	{	};

	/**
	 * Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.BlueprintOwnerPosssessed
	 */
	struct UPrimalItem_WeaponTekSword_C_BlueprintOwnerPosssessed_Params
	{
	public:
		class AController*                                         PossessedByController;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.InitBuff
	 */
	struct UPrimalItem_WeaponTekSword_C_InitBuff_Params
	{	};

	/**
	 * Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.BlueprintEquipped
	 */
	struct UPrimalItem_WeaponTekSword_C_BlueprintEquipped_Params
	{
	public:
		bool                                                       bIsFromSaveGame;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.ExecuteUbergraph_PrimalItem_WeaponTekSword
	 */
	struct UPrimalItem_WeaponTekSword_C_ExecuteUbergraph_PrimalItem_WeaponTekSword_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
