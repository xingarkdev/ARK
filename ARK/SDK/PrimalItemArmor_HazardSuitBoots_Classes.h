﻿#pragma once

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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass PrimalItemArmor_HazardSuitBoots.PrimalItemArmor_HazardSuitBoots_C
	 * Size -> 0x0008 (FullSize[0x0AF0] - InheritedSize[0x0AE8])
	 */
	class UPrimalItemArmor_HazardSuitBoots_C : public UPrimalItemArmor_BaseBoots_C
	{
	public:
		class UClass*                                              BuffWhileEquipped;                                       // 0x0AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void BlueprintUnequipped();
		void BlueprintEquipped(bool bIsFromSaveGame);
		void ExecuteUbergraph_PrimalItemArmor_HazardSuitBoots(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
