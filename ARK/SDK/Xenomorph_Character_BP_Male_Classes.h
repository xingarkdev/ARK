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
	 * BlueprintGeneratedClass Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C
	 * Size -> 0x0028 (FullSize[0x2A20] - InheritedSize[0x29F8])
	 */
	class AXenomorph_Character_BP_Male_C : public AXenomorph_Character_BP_C
	{
	public:
		float                                                      OffspringExtraBabyMaxScale;                              // 0x29F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RNXB[0x4];                                   // 0x29FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  AdultMaterialOverride;                                   // 0x2A00(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue;                // 0x2A08(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HCER[0x3];                                   // 0x2A09(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_CustomEvent_DelayTime;                            // 0x2A0C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_DoAttack_ReturnValue;                           // 0x2A10(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x2A11(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x2A12(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x2A13(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J9WA[0x4];                                   // 0x2A14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            CallFunc_SpawnEmitterAttached_ReturnValue;               // 0x2A18(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void DiveEnd();
		void BPNotifyClaimed();
		void BPChangedActorTeam();
		bool BPPreventOrderAllowed(class APrimalCharacter* FromCharacter, EDinoTamedOrder OrderType, bool bForce, class AActor* enemyTarget, bool orderNotExecuted);
		float BlueprintExtraBabyScaling();
		bool BPShouldForceFlee();
		bool BPAllowClaiming(class AShooterPlayerController* ForPlayer);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		void DiveSetup();
		void DiveIdle();
		void OnRep_isUnderground();
		int32_t BPAdjustAttackIndex(int32_t AttackIndex);
		void OnRep_bIsOffspringMode();
		float BlueprintGetAttackWeight(int32_t AttackIndex, float inputWeight, float Distance, float attackRangeOffset, class AActor* OtherTarget);
		void BPNotifyBabyAgeIncrement(float PreviousAge, float NewAge);
		void GetDefaultMaleXeno(class AXenomorph_Character_BP_Male_C** AsXenomorph_Character_BP_Male_C);
		void SetupOffspringMeshAndSettings(bool OffspringMode);
		void InitializeDive();
		void BPBecomeAdult();
		void CanDive(bool* Return);
		void UserConstructionScript();
		void DelayedUnbury(float DelayTime);
		void BornDiveOut();
		void AnimNotify_EndBury();
		void BeginMaturationTransform();
		void AnimNotify_ChestBurst();
		void ExecuteUbergraph_Xenomorph_Character_BP_Male(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
