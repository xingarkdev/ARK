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
	 * BlueprintGeneratedClass Structure_CropPlot_Tek.Structure_CropPlot_Tek_C
	 * Size -> 0x0018 (FullSize[0x0F20] - InheritedSize[0x0F08])
	 */
	class AStructure_CropPlot_Tek_C : public ACropPlotBaseBP_C
	{
	public:
		class UPrimalInventoryBP_CropPlot_Tek_C*                   PrimalInventoryBP_CropPlot_Tek_C1;                       // 0x0F08(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UBoxComponent*                                       Box1;                                                    // 0x0F10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PoweredGrowthModifier;                                   // 0x0F18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UnpoweredGrowthModifier;                                 // 0x0F1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ResetRefreshInterval();
		void BPInventoryItemUsed(class UObject* InventoryItemObject);
		void CheckInstantGrow();
		void BPNotifyInventoryItemChange(bool bIsItemAdd, class UPrimalItem* theItem, bool bEquipItem);
		float BPGetAdditionalGrowthMultiplier();
		void UserConstructionScript();
		void ExecuteUbergraph_Structure_CropPlot_Tek(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
