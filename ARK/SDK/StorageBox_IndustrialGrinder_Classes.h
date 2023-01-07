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
	 * BlueprintGeneratedClass StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C
	 * Size -> 0x003C (FullSize[0x0E54] - InheritedSize[0x0E18])
	 */
	class AStorageBox_IndustrialGrinder_C : public ABaseFuelBurner_GasOnly_C
	{
	public:
		class UPrimalInventoryBP_IndustrialGrinder_C*              PrimalInventoryBP_IndustrialGrinder_C1;                  // 0x0E18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UChildActorComponent*                                ActivatedEmitter;                                        // 0x0E20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class UClass*>                                      GrindGiveItemFrom;                                       // 0x0E28(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      GrindGiveItemTo;                                         // 0x0E38(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    MaxQuantityToGrind;                                      // 0x0E48(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MaxItemsToGivePerGrind;                                  // 0x0E4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      GrindGiveItemsPercent;                                   // 0x0E50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GrindAllItems(class APlayerController* ForPC);
		void IsValidForGrindingAll(bool* IsValid);
		void BPPreGetMultiUseEntries(class APlayerController* ForPC);
		void HasCraftingRequirementsGreaterThanOne(class UPrimalItem* InItem, bool* _TRUE__);
		void GetReplacementItem(class UClass* InItemClass, class UClass** OutItemClass);
		void IsValidGrindingItem(class UPrimalItem* ItemToCheck, bool* IsValid);
		void GrindItem(class UPrimalItem* ItemToGrind, class AShooterPlayerController* ForPC, bool grindStack, bool MuteSound);
		bool BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams);
		void BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		void UserConstructionScript();
		void ExecuteUbergraph_StorageBox_IndustrialGrinder(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
