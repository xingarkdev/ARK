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
	 * BlueprintGeneratedClass PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C
	 * Size -> 0x0090 (FullSize[0x0B78] - InheritedSize[0x0AE8])
	 */
	class UPrimalItemConsumable_TekCanteenCraftable_C : public UPrimalItemConsumableEatable_WaterContainer_C
	{
	public:
		float                                                      MaxShardPower;                                           // 0x0AE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PowerCostPerUse;                                         // 0x0AEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UClass*>                                      UnpoweredBuffsToGive;                                    // 0x0AF0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      PoweredBuffsToGive_Cold;                                 // 0x0B00(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      PoweredBuffsToGive_Hot;                                  // 0x0B10(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FName                                                DefaultWaterMode;                                        // 0x0B20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                HotWaterBuffClearTag;                                    // 0x0B28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                ColdWaterBuffClearTag;                                   // 0x0B30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        HotWaterModeTextColor;                                   // 0x0B38(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        ColdWaterModeTextColor;                                  // 0x0B48(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        NormalWaterModeTextColor;                                // 0x0B58(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseShardPowerCost;                                       // 0x0B68(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6JZ0[0x7];                                   // 0x0B69(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              K2Node_Event_OptionalInitWorld;                          // 0x0B70(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		bool IsCustomContextMenuItemEnabled(class FName* ContextItem);
		struct FColor BPGetCustomInventoryWidgetTextColor();
		void HasEnoughPowerForUse(bool* bHasEnoughPower);
		void ApplyUnpoweredBuffs();
		void TryClearBuffs();
		void GetCurrentWaterMode(class FName* WaterMode);
		class FString BPGetCustomInventoryWidgetText();
		void SetWaterMode(const class FName& NewWaterMode);
		void SelectedCustomContextMenuItem(class FName* ContextItem, class AShooterPlayerController* ForPC);
		void TryConsumeWithPower();
		void BlueprintUsed();
		void SetShardDescription();
		void GetElementShardValue(bool* HasData, float* Value);
		void BPPostInitializeItem(class UWorld* OptionalInitWorld);
		void ExecuteUbergraph_PrimalItemConsumable_TekCanteenCraftable(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
