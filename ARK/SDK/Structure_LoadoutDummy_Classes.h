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
	 * BlueprintGeneratedClass Structure_LoadoutDummy.Structure_LoadoutDummy_C
	 * Size -> 0x007C (FullSize[0x0FE2] - InheritedSize[0x0F66])
	 */
	class AStructure_LoadoutDummy_C : public AStructure_TrainingDummy_C
	{
	public:
		unsigned char                                              UnknownData_6L99[0x2];                                   // 0x0F66(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                MyExtraStaticMesh;                                       // 0x0F68(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FLinearColor>                                SwapColors;                                              // 0x0F70(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class AStructure_LoadoutDummy_Hotbar_C*                    ServerHotbar;                                            // 0x0F80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    HotbarID;                                                // 0x0F88(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MJ6P[0x4];                                   // 0x0F8C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastInventoryFunctionUseTime;                            // 0x0F90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class FName>                                        IgnoreTransferCustomTags;                                // 0x0F98(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      HotbarOffsetDistance;                                    // 0x0FA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHotbarFillOverridesItems;                               // 0x0FAC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F7TH[0x3];                                   // 0x0FAD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentDefaultEInt;                                      // 0x0FB0(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L7S5[0x4];                                   // 0x0FB4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalStructureItemContainer*                       OverflowDroppedItemCache;                                // 0x0FB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDebugItemTransfers;                                     // 0x0FC0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7RAZ[0x3];                                   // 0x0FC1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ReservedHotbarItemSlotsDummy;                            // 0x0FC4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentMaxInventoryItems;                                // 0x0FC8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		int32_t                                                    ReservedHotbarItemSlotsChar;                             // 0x0FCC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UPrimalItem*>                                 CachedHotbarItems;                                       // 0x0FD0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		EEndPlayReason                                             K2Node_Event_EndPlayReason;                              // 0x0FE0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x0FE1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		bool BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams);
		void UpdateInventorySize();
		void GetCurrentlyUsedHotbarSlots(int32_t* OutUsedSlots);
		void OnRep_CurrentMaxInventoryItems();
		void AddItemSafe(class UPrimalItem* Item, class UPrimalInventoryComponent* toInventory, class UPrimalInventoryComponent* FromInventory, class AShooterCharacter* OwningPlayer, bool bDontStack, class UPrimalInventoryComponent* AnotherFallbackInventory, class UPrimalItem* InsertAfterItem, class UPrimalItem** OutItem, bool* bAddedToTarget);
		void AddAndEquipItem(class UPrimalItem* Item, class UPrimalInventoryComponent* toInventory, class UPrimalInventoryComponent* FromInventory, class APlayerController* ForPC);
		void AddToOverflowDroppedInventory(class UPrimalItem* anItem, class UPrimalItem** newItem);
		void BPNotifyInventoryItemChange(bool bIsItemAdd, class UPrimalItem* theItem, bool bEquipItem);
		void IsControllerValid(class APlayerController* Controller, bool* ret);
		void SetHotbarCurrentHealth();
		void ReceiveDestroyed();
		void BPPlacedStructure(class APlayerController* ForPC);
		void BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex);
		void BPOnDemolish(class APlayerController* ForPC, class AActor* DamageCauser);
		void SetTextRendererColor();
		void OnRep_HotbarID();
		void CreateHotbarStructure(class APlayerController* PC);
		void FillDummyEverything(class APlayerController* PC);
		void FillCharacterEverything(class APlayerController* PC);
		void FillDummyInventory(class APlayerController* PC);
		void FillCharacterInventory(class APlayerController* PC);
		void SwapEverything(class APlayerController* PC);
		void SwapAllInventory(class APlayerController* PC, bool bIncludingHotbar);
		void SwapAllHotbar(class APlayerController* PC, TArray<class UPrimalItem*>* CachedCharacterItems);
		void FillDummyHotbar(class APlayerController* PC);
		void FillCharacterHotbar(class APlayerController* PC);
		void FillDummyEquipment(class APlayerController* PC);
		void FillCharacterEquipment(class APlayerController* PC);
		void SwapAllEquipment(class APlayerController* PC);
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		void UserConstructionScript();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Structure_LoadoutDummy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
