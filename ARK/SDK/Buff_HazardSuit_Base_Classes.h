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
	 * BlueprintGeneratedClass Buff_HazardSuit_Base.Buff_HazardSuit_Base_C
	 * Size -> 0x0020 (FullSize[0x09A0] - InheritedSize[0x0980])
	 */
	class ABuff_HazardSuit_Base_C : public ABuff_Base_OnlyRelevantToOwner_C
	{
	public:
		TArray<class UClass*>                                      PreventAddingBuffs;                                      // 0x0980(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<float>                                              DurabilityCostForPreventAddingBuff;                      // 0x0990(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		bool BPPreventAddingOtherBuff(class UClass* anotherBuffClass);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_HazardSuit_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
