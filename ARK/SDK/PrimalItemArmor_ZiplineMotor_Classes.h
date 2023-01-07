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
	 * BlueprintGeneratedClass PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C
	 * Size -> 0x0010 (FullSize[0x0AF8] - InheritedSize[0x0AE8])
	 */
	class UPrimalItemArmor_ZiplineMotor_C : public UPrimalItemSkinGeneric_C
	{
	public:
		float                                                      MaxGasoline;                                             // 0x0AE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UJUZ[0x4];                                   // 0x0AEC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimalItem*                                         ParentItem;                                              // 0x0AF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool GetGasolineValueFromItem(class UPrimalItem* TargetItem, float* Value);
		class FString BPGetCustomInventoryWidgetText();
		class FString BPGetSkinnedCustomInventoryWidgetText();
		void SetGasolineDescription(class UPrimalItem* Item, float Value);
		void BPInitFromItemNetInfo();
		void RemovedSkinFromItem(class UPrimalItem* FromOwnerItem, bool bIsFirstTime);
		void SkinEquippedBlueprintTick(class UPrimalItem* OwnerItem, float DeltaSeconds);
		void ApplyingSkinOntoItem(class UPrimalItem* ToOwnerItem, bool bIsFirstTime);
		void ExecuteUbergraph_PrimalItemArmor_ZiplineMotor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
