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
	 * BlueprintGeneratedClass PrimalItem_Spawner_Exosuit.PrimalItem_Spawner_Exosuit_C
	 * Size -> 0x0000 (FullSize[0x0CF0] - InheritedSize[0x0CF0])
	 */
	class UPrimalItem_Spawner_Exosuit_C : public UPrimalItem_DinoSpawner_Base_C
	{
	public:
		bool BPCanUse(bool bIgnoreCooldown);
		void GetStatDisplayString(EPrimalCharacterStatusValue Stat, int32_t Value, int32_t StatConvertMapIndex, class FString* StatDisplay, class FString* ValueDisplay, bool* ShowInTooltip);
		void ExecuteUbergraph_PrimalItem_Spawner_Exosuit(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
