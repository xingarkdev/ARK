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
	 * BlueprintGeneratedClass PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C
	 * Size -> 0x0020 (FullSize[0x05B8] - InheritedSize[0x0598])
	 */
	class UPrimalInventoryBP_EggIncubator_C : public UPrimalInventoryBP_StorageBox_Base_C
	{
	public:
		class FScriptMulticastDelegate                             OnFertilizedEggAdded;                                    // 0x0598(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnFertilizedEggRemoved;                                  // 0x05A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		bool BPCustomRemoteInventoryAllowAddItems(class AShooterPlayerController* PC, class UPrimalItem* anItem, int32_t anItemQuantityOverride, bool bRequestedByPlayer);
		bool BPCustomRemoteInventoryAllowRemoveItems(class AShooterPlayerController* PC, class UPrimalItem* anItemToTransfer, int32_t RequestedQuantity, bool bRequestedByPlayer, bool bRequestDropping);
		bool InventoryCustomSortPredicate(class UPrimalItem* LeftItem, class UPrimalItem* RightItem);
		bool BPRemoteInventoryAllowRemoveItems(class AShooterPlayerController* PC, class UPrimalItem* anItemToTransfer);
		void BPNotifyItemRemoved(class UPrimalItem* anItem);
		void BPNotifyItemAdded(class UPrimalItem* anItem, bool bEquipItem);
		void ExecuteUbergraph_PrimalInventoryBP_EggIncubator(int32_t EntryPoint);
		void OnFertilizedEggRemoved__DelegateSignature(class UPrimalItemConsumable_Egg_C* eggItem);
		void OnFertilizedEggAdded__DelegateSignature(class UPrimalItemConsumable_Egg_C* eggItem);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
