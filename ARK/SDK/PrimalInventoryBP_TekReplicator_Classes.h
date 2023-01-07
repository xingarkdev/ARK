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
	 * BlueprintGeneratedClass PrimalInventoryBP_TekReplicator.PrimalInventoryBP_TekReplicator_C
	 * Size -> 0x0000 (FullSize[0x0598] - InheritedSize[0x0598])
	 */
	class UPrimalInventoryBP_TekReplicator_C : public UPrimalInventoryBP_BaseGasolineBurning_C
	{
	public:
		void BPCraftingFinishedNotification(class UPrimalItem* itemToBeCrafted);
		bool BPRemoteInventoryAllowViewing(class AShooterPlayerController* PC);
		void ExecuteUbergraph_PrimalInventoryBP_TekReplicator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
