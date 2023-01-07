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
	 * BlueprintGeneratedClass Buff_InsideMekShield.Buff_InsideMekShield_C
	 * Size -> 0x000D (FullSize[0x098D] - InheritedSize[0x0980])
	 */
	class ABuff_InsideMekShield_C : public ABuff_Base_C
	{
	public:
		class UClass*                                              DebuffClassWhenEnemyExitsShield;                         // 0x0980(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FriendlyReceiveDamageMultiplier;                         // 0x0988(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsFromFriendlyMek;                                      // 0x098C(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		class UClass* BPOverrideBuffToGiveOnDeactivation();
		void BuffTickClient(float DeltaTime);
		void BPDeactivated(class AActor* ForInstigator);
		void BPActivated(class AActor* ForInstigator);
		void BuffTickServer(float DeltaTime);
		struct FStatusValueModifierDescription GetBuffDescription();
		void GetOwnerMek(bool* IsValid, bool* IsFriendly, class AMek_Character_BP_C** Mek);
		bool IsOwnerMek();
		bool HideBuffFromHUD();
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_InsideMekShield(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
