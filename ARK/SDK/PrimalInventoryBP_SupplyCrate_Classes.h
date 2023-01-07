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
	 * BlueprintGeneratedClass PrimalInventoryBP_SupplyCrate.PrimalInventoryBP_SupplyCrate_C
	 * Size -> 0x0008 (FullSize[0x05A0] - InheritedSize[0x0598])
	 */
	class UPrimalInventoryBP_SupplyCrate_C : public UPrimalInventoryComponent
	{
	public:
		class UClass*                                              SingleplayerDefaultItemToRemove;                         // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPPreInitDefaultInventory();
		void BPRequestedInventoryItems(class AShooterPlayerController* ForPC);
		void BPInventoryRefresh();
		void ExecuteUbergraph_PrimalInventoryBP_SupplyCrate(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
