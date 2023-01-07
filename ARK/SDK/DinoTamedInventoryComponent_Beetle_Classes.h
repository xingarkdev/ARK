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
	 * BlueprintGeneratedClass DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C
	 * Size -> 0x0020 (FullSize[0x05B8] - InheritedSize[0x0598])
	 */
	class UDinoTamedInventoryComponent_Beetle_C : public UDinoTamedInventoryComponent_BP_Base_C
	{
	public:
		TArray<class UClass*>                                      CraftablePoo;                                            // 0x0598(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<double>                                             CraftingStartTimes;                                      // 0x05A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic

	public:
		void CraftItem(int32_t ItemToCraftIndex);
		void BPInventoryRefresh();
		void BPInitializeInventory();
		void CheckIfAnythingNewCanBeCrafted();
		void InitialSetCraftingTimes();
		void TryToCraft();
		void UnsetAll();
		void HasEnoughResources(int32_t IndexClassToCheck, bool* hasEnough, int32_t* NumberOfTimesCanCraft);
		void RemoveUncraftable();
		void BPNotifyItemAdded(class UPrimalItem* anItem, bool bEquipItem);
		void BPNotifyItemRemoved(class UPrimalItem* anItem);
		void ExecuteUbergraph_DinoTamedInventoryComponent_Beetle(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
