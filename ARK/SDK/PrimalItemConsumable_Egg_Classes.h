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
	 * BlueprintGeneratedClass PrimalItemConsumable_Egg.PrimalItemConsumable_Egg_C
	 * Size -> 0x0018 (FullSize[0x0B00] - InheritedSize[0x0AE8])
	 */
	class UPrimalItemConsumable_Egg_C : public UPrimalItemConsumableEatable_C
	{
	public:
		struct FVector                                             IncubatorDisplay3DScale;                                 // 0x0AE8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             IncubatorLocationOffset;                                 // 0x0AF4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool BPAllowRemoteAddToInventory(class UPrimalInventoryComponent* invComp, class AShooterPlayerController* ByPC, bool bRequestedByPlayer);
		class FString BPGetCustomInventoryWidgetText();
		void ExecuteUbergraph_PrimalItemConsumable_Egg(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
