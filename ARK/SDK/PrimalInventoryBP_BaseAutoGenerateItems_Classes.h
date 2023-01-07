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
	 * BlueprintGeneratedClass PrimalInventoryBP_BaseAutoGenerateItems.PrimalInventoryBP_BaseAutoGenerateItems_C
	 * Size -> 0x0025 (FullSize[0x05BD] - InheritedSize[0x0598])
	 */
	class UPrimalInventoryBP_BaseAutoGenerateItems_C : public UPrimalInventoryComponent
	{
	public:
		TArray<class UClass*>                                      AutoGenerateItems;                                       // 0x0598(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      AutoGenerateItemsTimeInterval;                           // 0x05A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7ITI[0x4];                                   // 0x05AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastAddItemTime;                                         // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AutoGenerateItemsMultiplier;                             // 0x05B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsSetAutoGenerateItemsMultiplier;                       // 0x05BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GeneratedItems();
		void BPInitializeInventory();
		void BPInventoryRefresh();
		void ExecuteUbergraph_PrimalInventoryBP_BaseAutoGenerateItems(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
