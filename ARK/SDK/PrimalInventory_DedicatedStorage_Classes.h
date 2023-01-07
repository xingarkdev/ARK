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
	 * BlueprintGeneratedClass PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C
	 * Size -> 0x0010 (FullSize[0x05A8] - InheritedSize[0x0598])
	 */
	class UPrimalInventory_DedicatedStorage_C : public UPrimalInventoryBP_StorageBox_Base_C
	{
	public:
		class UClass*                                              SelectedResourceType;                                    // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentResourceCount;                                    // 0x05A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MaxResourceStacks;                                       // 0x05A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPOnTransferAll(class UPrimalInventoryComponent* toInventory);
		void BPGetExtraItemDisplay(bool* bShowExtraItem, class FString* Description, class FString* CustomString, class UTexture2D** EntryIcon, class UMaterialInterface** EntryMaterial);
		bool BPAllowAddInventoryItem(class UPrimalItem* Item, int32_t RequestedQuantity, bool bOnlyAddAll);
		int32_t BPRemoteInventoryGetMaxVisibleSlots(int32_t NumItems, class AShooterPlayerController* PC, bool bIsLocal);
		void ExecuteUbergraph_PrimalInventory_DedicatedStorage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
