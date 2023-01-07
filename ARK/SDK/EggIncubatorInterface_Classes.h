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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass EggIncubatorInterface.EggIncubatorInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEggIncubatorInterface_C : public UInterface
	{
	public:
		void IsEggItemAllowed(class UPrimalItemConsumable_Egg_C* eggItem, bool* IsAllowed);
		void GetItemDisplaySlot(class UPrimalItem* ForItem, int32_t* InSlot, bool* SlotFound);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
