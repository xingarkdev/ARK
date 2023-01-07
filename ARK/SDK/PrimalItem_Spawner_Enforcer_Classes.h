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
	 * BlueprintGeneratedClass PrimalItem_Spawner_Enforcer.PrimalItem_Spawner_Enforcer_C
	 * Size -> 0x0020 (FullSize[0x0D10] - InheritedSize[0x0CF0])
	 */
	class UPrimalItem_Spawner_Enforcer_C : public UPrimalItem_DinoSpawner_Base_C
	{
	public:
		class FString                                              FoodStatLabel;                                           // 0x0CF0(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FString                                              MeleeDamageStatLabel;                                    // 0x0D00(0x0010) Edit, BlueprintVisible, ZeroConstructor

	public:
		void PreDinoSpawned();
		void GetStatDisplayString(EPrimalCharacterStatusValue Stat, int32_t Value, int32_t StatConvertMapIndex, class FString* StatDisplay, class FString* ValueDisplay, bool* ShowInTooltip);
		void ExecuteUbergraph_PrimalItem_Spawner_Enforcer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
