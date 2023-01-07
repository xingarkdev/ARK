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
	 * BlueprintGeneratedClass Buff_ChargeStun.Buff_ChargeStun_C
	 * Size -> 0x0129 (FullSize[0x0AC1] - InheritedSize[0x0998])
	 */
	class ABuff_ChargeStun_C : public ABuff_Stunned_C
	{
	public:
		float                                                      currentStunAmount;                                       // 0x0998(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      baseStunAmountPerSecond;                                 // 0x099C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UClass*>                                      ClassMultiplier;                                         // 0x09A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              stunAmountPerSecondMultipliers;                          // 0x09B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              dragWeightThresholdMultiplier;                           // 0x09C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		double                                                     lastTimeBuffWasAdded;                                    // 0x09D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      currentStunPerSecondMultiplier;                          // 0x09D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      currentDragWeightMultiplier;                             // 0x09DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isStunned;                                               // 0x09E0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XH5O[0x3];                                   // 0x09E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      damagePercentPerSecond;                                  // 0x09E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FHitResult                                          hitResultFake;                                           // 0x09E8(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      BaseDamagePerSecond;                                     // 0x0A70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      damageWhenShieldedMultiplier;                            // 0x0A74(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      extraTimeToReachStunPerArmorUnit;                        // 0x0A78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      stunPercentPerSecond;                                    // 0x0A7C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              immuneToStunBuff;                                        // 0x0A80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      maxStunDurationPlayer;                                   // 0x0A88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      maxStunDurationDino;                                     // 0x0A8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      stunDurationReductionPerArmorUnit;                       // 0x0A90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      stunTimeReductionPerDragWeightUnit;                      // 0x0A94(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      timeToReachStun;                                         // 0x0A98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      stunImmunityTimePlayer;                                  // 0x0A9C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      stunImmunityTimeToAddPerArmorUnit;                       // 0x0AA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      stunImmunityTimeDino;                                    // 0x0AA4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      stunImmunityTimeToAddPerDragWeightUnit;                  // 0x0AA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_38LW[0x4];                                   // 0x0AAC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     timeStunStarted;                                         // 0x0AB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     originalBuffStartTime;                                   // 0x0AB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       wasBeamRemoved;                                          // 0x0AC0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetImmunityTime(float* immunityTime);
		void GetMaxStunTime(float* maxStunTime);
		void BuffTickClient(float DeltaTime);
		void GetArmorRating(float* rating);
		void IsUsingShield(bool* usingShield);
		void GetInstigatorPlayer(class AShooterCharacter** instigatorPlayer);
		void ApplyDamage(float DeltaTime);
		bool BPCheckPreventInput(EPrimalCharacterInputType inputType);
		void BPDeactivated(class AActor* ForInstigator);
		void DoStun();
		void ShouldBeStunned(bool* canBeStunned);
		void CalculateMultipliers();
		void BPPostInitializeComponents();
		void AddStunAmount(float DeltaTime);
		void BPResetBuffStart();
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_ChargeStun(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
