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
	 * BlueprintGeneratedClass PrimalInventoryBP_AmmoContainer.PrimalInventoryBP_AmmoContainer_C
	 * Size -> 0x0004 (FullSize[0x059C] - InheritedSize[0x0598])
	 */
	class UPrimalInventoryBP_AmmoContainer_C : public UPrimalInventoryBP_StorageBox_Base_C
	{
	public:
		float                                                      RadiusToCheckForStructures;                              // 0x0598(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPNotifyItemQuantityUpdated(class UPrimalItem* anItem, int32_t amount);
		void BPNotifyItemRemoved(class UPrimalItem* anItem);
		void BPNotifyItemAdded(class UPrimalItem* anItem, bool bEquipItem);
		void ExecuteUbergraph_PrimalInventoryBP_AmmoContainer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
