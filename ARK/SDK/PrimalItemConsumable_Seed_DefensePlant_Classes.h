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
	 * BlueprintGeneratedClass PrimalItemConsumable_Seed_DefensePlant.PrimalItemConsumable_Seed_DefensePlant_C
	 * Size -> 0x0004 (FullSize[0x0AEC] - InheritedSize[0x0AE8])
	 */
	class UPrimalItemConsumable_Seed_DefensePlant_C : public UPrimalItemConsumableSeed_C
	{
	public:
		int32_t                                                    NumTurrets;                                              // 0x0AE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool BPAllowRemoteAddToInventory(class UPrimalInventoryComponent* invComp, class AShooterPlayerController* ByPC, bool bRequestedByPlayer);
		bool BPCanAddToInventory(class UPrimalInventoryComponent* toInventory);
		void ExecuteUbergraph_PrimalItemConsumable_Seed_DefensePlant(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
