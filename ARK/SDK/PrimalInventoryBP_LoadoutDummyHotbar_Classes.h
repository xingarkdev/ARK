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
	 * BlueprintGeneratedClass PrimalInventoryBP_LoadoutDummyHotbar.PrimalInventoryBP_LoadoutDummyHotbar_C
	 * Size -> 0x0000 (FullSize[0x0598] - InheritedSize[0x0598])
	 */
	class UPrimalInventoryBP_LoadoutDummyHotbar_C : public UPrimalInventoryComponent
	{
	public:
		bool BPRemoteInventoryAllowRemoveItems(class AShooterPlayerController* PC, class UPrimalItem* anItemToTransfer);
		bool BPAllowAddInventoryItem(class UPrimalItem* Item, int32_t RequestedQuantity, bool bOnlyAddAll);
		void ExecuteUbergraph_PrimalInventoryBP_LoadoutDummyHotbar(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
