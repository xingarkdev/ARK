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
	 * BlueprintGeneratedClass PrimalItem_Pliers.PrimalItem_Pliers_C
	 * Size -> 0x0024 (FullSize[0x0B0C] - InheritedSize[0x0AE8])
	 */
	class UPrimalItem_Pliers_C : public UPrimalItem_GenericMisc_C
	{
	public:
		float                                                      DurabilityLossForMaxRepair;                              // 0x0AE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7WK6[0x4];                                   // 0x0AEC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      AllowRepairingForInventoryClasses;                       // 0x0AF0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       bFoundClass;                                             // 0x0B00(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XHRN[0x3];                                   // 0x0B01(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RepairToPercent;                                         // 0x0B04(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RepairSpeedMult;                                         // 0x0B08(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPUsedOntoItem(class UPrimalItem* DestinationItem, int32_t AdditionalData);
		bool BPSupportUseOntoItem(class UPrimalItem* DestinationItem);
		void ExecuteUbergraph_PrimalItem_Pliers(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
