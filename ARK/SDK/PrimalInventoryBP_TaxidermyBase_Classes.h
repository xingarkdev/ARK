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
	 * BlueprintGeneratedClass PrimalInventoryBP_TaxidermyBase.PrimalInventoryBP_TaxidermyBase_C
	 * Size -> 0x0001 (FullSize[0x0599] - InheritedSize[0x0598])
	 */
	class UPrimalInventoryBP_TaxidermyBase_C : public UPrimalInventoryComponent
	{
	public:
		bool                                                       bOnlyHumanDermisPermitted;                               // 0x0598(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool BPPreventEquipItem(class UPrimalItem* theItem);
		bool BPPreventEquipItemType(EPrimalEquipmentType equipmentType);
		void ExecuteUbergraph_PrimalInventoryBP_TaxidermyBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
