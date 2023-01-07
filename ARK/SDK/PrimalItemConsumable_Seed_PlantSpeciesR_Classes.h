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
	 * BlueprintGeneratedClass PrimalItemConsumable_Seed_PlantSpeciesR.PrimalItemConsumable_Seed_PlantSpeciesR_C
	 * Size -> 0x0008 (FullSize[0x0AF0] - InheritedSize[0x0AE8])
	 */
	class UPrimalItemConsumable_Seed_PlantSpeciesR_C : public UPrimalItemConsumableSeed_C
	{
	public:
		class UTexture2D*                                          MeatCropIcon;                                            // 0x0AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPDrawItemIcon(class UCanvas* ItemCanvas, struct FVector2D* ItemCanvasSize, struct FVector2D* ItemCanvasScale, bool bItemEnabled, struct FLinearColor* TheTintColor);
		void ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesR(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
