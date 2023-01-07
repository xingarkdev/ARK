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
	 * BlueprintGeneratedClass Buff_PoisonGrenade.Buff_PoisonGrenade_C
	 * Size -> 0x0068 (FullSize[0x09E8] - InheritedSize[0x0980])
	 */
	class ABuff_PoisonGrenade_C : public ABuff_Base_C
	{
	public:
		float                                                      durationPlayer;                                          // 0x0980(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      durationWildDino;                                        // 0x0984(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FDamagePrimalCharacterStatusValueModifier           playerSpeedModifier;                                     // 0x0988(0x0030) Edit, BlueprintVisible, DisableEditOnInstance
		struct FDamagePrimalCharacterStatusValueModifier           wildDinoSpeedModifier;                                   // 0x09B8(0x0030) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void BPPreSetupForInstigator(class AActor* ForInstigator);
		void BPDeactivated(class AActor* ForInstigator);
		bool BPCustomAllowAddBuff(class APrimalCharacter* forCharacter, class AActor* DamageCauser);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_PoisonGrenade(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
