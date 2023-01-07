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
	 * BlueprintGeneratedClass PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C
	 * Size -> 0x0020 (FullSize[0x0B08] - InheritedSize[0x0AE8])
	 */
	class UPrimalItem_ChargeBattery_C : public UPrimalItem_Base_Battery_C
	{
	public:
		class FName                                                IconParameterName;                                       // 0x0AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      minDurability;                                           // 0x0AF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KHCR[0x4];                                   // 0x0AF4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTexture2D*>                                  batteryIcons;                                            // 0x0AF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		float BPGetItemDurabilityPercentage();
		class UTexture2D* BPGetItemIcon(class AShooterPlayerController* ForPC);
		class FString BPGetCustomInventoryWidgetText();
		void AddDurabilitySafe(float amountToAdd, float* AmountAdded);
		void BPUsedOntoItem(class UPrimalItem* DestinationItem, int32_t AdditionalData);
		void ExecuteUbergraph_PrimalItem_ChargeBattery(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
