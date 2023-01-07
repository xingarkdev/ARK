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
	 * BlueprintGeneratedClass Buff_TekArmor_Pants.Buff_TekArmor_Pants_C
	 * Size -> 0x01DF (FullSize[0x0D19] - InheritedSize[0x0B3A])
	 */
	class ABuff_TekArmor_Pants_C : public ABuff_TekArmor_C
	{
	public:
		unsigned char                                              UnknownData_VOWW[0x6];                                   // 0x0B3A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimalItemArmor_TekPants_C*                         Ref_TekPants;                                            // 0x0B40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsTEKRunCharging;                                       // 0x0B48(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WCG4[0x3];                                   // 0x0B49(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentPlayerRunSpeed;                                   // 0x0B4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxAllowedTexRunVelocity;                                // 0x0B50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RunSpeedMult_AdditionRate;                               // 0x0B54(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              TEKRunDamageType;                                        // 0x0B58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              TEKRunFoliageDamageType;                                 // 0x0B60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TEKRunBaseDamage;                                        // 0x0B68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TEKRunDamageRadius;                                      // 0x0B6C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TEKRunImpulseStrength;                                   // 0x0B70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TEKRunImpulseWeightLimit;                                // 0x0B74(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TEKRunningDamageUpdateRate;                              // 0x0B78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TEKRunningSecondsPerElementConsumed;                     // 0x0B7C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TEKRunningHitPawnRefreshRate;                            // 0x0B80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AdditionalRunSpeedMult;                                  // 0x0B84(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             ForwardLocRelativeToSpeed;                               // 0x0B88(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TekRunDamage_current;                                    // 0x0B94(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class APrimalCharacter*>                            ChargeHitPawns;                                          // 0x0B98(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class APrimalStructure*>                            ChargeHitStructures;                                     // 0x0BA8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       bDebug;                                                  // 0x0BB8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QWGB[0x3];                                   // 0x0BB9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StructureBoxTraceZModifier;                              // 0x0BBC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PawnBoxTraceModifier;                                    // 0x0BC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    damageStructureElementCost;                              // 0x0BC4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     WallUnbrokenImpactParticle;                              // 0x0BC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          WallUnbrokenImpactSound;                                 // 0x0BD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TEKRunningPostProcessIntensityScale;                     // 0x0BD8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WallUnbrokenImpactDamage;                                // 0x0BDC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WallUnbrokenBounceImpulse;                               // 0x0BE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RunSpeedMult_Base;                                       // 0x0BE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bWantsToCharge;                                          // 0x0BE8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XPGW[0x3];                                   // 0x0BE9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      currentPlayerVelocityLength;                             // 0x0BEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             PreviousTekRunDir;                                       // 0x0BF0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPreventVelocityConservationThisFrame;                   // 0x0BFC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N19S[0x3];                                   // 0x0BFD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            interpControlRotation_target;                            // 0x0C00(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      interpControlRotation_speed;                             // 0x0C0C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      accumulatedRunningTimeForElementCost;                    // 0x0C10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      runningTimeForElementCost;                               // 0x0C14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    damageEnemyElementCost;                                  // 0x0C18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    runningElementCost;                                      // 0x0C1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     HitPawn_Particle;                                        // 0x0C20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          HitPawn_Sound;                                           // 0x0C28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             lastStructureImpactNormal;                               // 0x0C30(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DustParticleIntensity;                                   // 0x0C3C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsDustTrailActive;                                      // 0x0C40(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAltFirePressed;                                         // 0x0C41(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QARI[0x2];                                   // 0x0C42(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TekRunServerTickInterval;                                // 0x0C44(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		E_TekRunningState                                          CurrentTekRunState;                                      // 0x0C48(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		E_TekRunningState                                          PreviousTekRunState;                                     // 0x0C49(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DRX2[0x2];                                   // 0x0C4A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      requiredTekRunMaxVelocityRatio;                          // 0x0C4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Anim_WaterRun_TPV;                                       // 0x0C50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      runOnWaterImpulse;                                       // 0x0C58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6BSL[0x4];                                   // 0x0C5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APhysicsVolume*                                      Ref_AboveWaterVolume;                                    // 0x0C60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      aboveWaterClientTickInterval;                            // 0x0C68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2LMD[0x4];                                   // 0x0C6C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     lastCheckForWaterTime;                                   // 0x0C70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      waterCheckInterval;                                      // 0x0C78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bRightFoot;                                              // 0x0C7C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MNJR[0x3];                                   // 0x0C7D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      footSplashOffset;                                        // 0x0C80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2YJY[0x4];                                   // 0x0C84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     lastFootSplashTime;                                      // 0x0C88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      footSplashInterval;                                      // 0x0C90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bWasRunningOnWater;                                      // 0x0C94(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BAEQ[0x3];                                   // 0x0C95(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        Ref_WaterRun_FPV;                                        // 0x0C98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      waterRunDownCheckDistance;                               // 0x0CA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCanRunOnWater;                                          // 0x0CA4(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       bAllowRunningOnWater;                                    // 0x0CA5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NFPA[0x2];                                   // 0x0CA6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewVar_1;                                                // 0x0CA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MoveSpeedModifierScale;                                  // 0x0CAC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TekRunningWaterSubmergedThreshold;                       // 0x0CB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RestoreFullTekSpeedVelocityRatio;                        // 0x0CB4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bShouldSonicBoom;                                        // 0x0CB8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsTooSlowForTekRun;                                     // 0x0CB9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QWP3[0x6];                                   // 0x0CBA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     lastTooSlowForTekRunStartTime;                           // 0x0CC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      timeAfterTooSlowToCancelTekRun;                          // 0x0CC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAllowJetpackStartTekRun;                                // 0x0CCC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RBWH[0x3];                                   // 0x0CCD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      JetpackThrustImpulse;                                    // 0x0CD0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      sonicBoomTekVelocityRatio;                               // 0x0CD4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SonicBoomRequiredVelocityForwardDot;                     // 0x0CD8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    startRunningElementCost;                                 // 0x0CDC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      waterRunRequiredForwardVelocityDot;                      // 0x0CE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JKHZ[0x4];                                   // 0x0CE4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     WaterImpactTemplate;                                     // 0x0CE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		E_TekRunningState                                          K2Node_CustomEvent_newRunState;                          // 0x0CF0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AUBL[0x3];                                   // 0x0CF1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_CustomEvent_newModifier;                          // 0x0CF4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_CanStartTekRun_result;                          // 0x0CF8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_AreGlovesEquippedAndActive_result;              // 0x0CF9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OF89[0x6];                                   // 0x0CFA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABuff_TekArmor_Gloves_C*                             CallFunc_AreGlovesEquippedAndActive_glovesRef;           // 0x0D00(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsPlayerGrappled_result;                        // 0x0D08(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0D09(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_PlayerHasFistsEquipped_result;                  // 0x0D0A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3D2Z[0x5];                                   // 0x0D0B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   CallFunc_GetRef_OwningPlayer_player;                     // 0x0D10(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x0D18(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void IsPlayerUsingJetpack(bool* Result);
		void SetPlayerIgnoreSpeedModifiers(bool newIgnore);
		void PlayerHasFistsEquipped(bool* Result);
		void IsPlayerGrappled(bool* Result);
		bool BPCheckPreventInput(EPrimalCharacterInputType inputType);
		void GetPlayerMoveSpeedModifier(float* Result);
		void OnRep_bCanRunOnWater();
		void SetRunningOnWater(bool IsRunning);
		void OnRep_CurrentTekRunState();
		void AreGlovesEquippedAndActive(bool* Result, class ABuff_TekArmor_Gloves_C** glovesRef);
		void GetPlayerMaxTekRunVelocity(float* MaxSpeed);
		float GetBuffPostprocessIntensity();
		void CanStartTekRun(bool* Result);
		void NetSetRunningSpeedModifier(float newModifier);
		void RunDamageActor(class AActor* HitActor, bool* DidRebound);
		void NetSetTekRunningState(E_TekRunningState NewState);
		void SetDustParticlesActive(bool newActive);
		void UpdateLocalVarsByState(E_TekRunningState NewState);
		void LocalSetTekRunningState(E_TekRunningState NewState);
		void BuffTickServer(float DeltaTime);
		void InitGloves();
		void ForceWalkForward();
		void UpdatePlayerControlRotation(float DeltaSeconds);
		void BPDeactivated(class AActor* ForInstigator);
		void GetPlayerTekRunVelocityRatio(float* Ratio);
		void GetPlayerMaxRunVelocity(float* MaxSpeed);
		void MaintainFullSpeed(bool bUsePlayerForward, const struct FVector& OverrideDirection, bool* wasMaintained);
		void GetPlayerMaxTekRunVelocity_Pure(float* MaxSpeed);
		void StoreCurrentVelocityLength();
		void SetChargeStartVariables();
		void GetDefaultPlayerRunSpeedMult(float* SpeedMult);
		void TickUpdateTekRun(float DeltaSeconds);
		void RedirectPlayerVelocity(const struct FVector& newForward);
		void BuffTickClient(float DeltaTime);
		void SetPreventEquipWeapons(bool Prevent);
		struct FVector CalculateDeflectingImpulse(class AActor* TargetCharacter, float Impulse);
		void SetPlayerRunSpeed(float NewSpeed);
		void ClearHitActors();
		void TraceandDamageForwardPawns();
		void GetModifiedForward(float forwardScale, const struct FVector& AdditionalOffset, struct FVector* newForward);
		void TraceAndDamageForwardStationaryActors();
		void CalculateForwardRelativeToSpeed(float DeltaSeconds);
		void CanUseTekAbility(bool bNotifyIfOutOfElement, bool* bResult);
		void SetCastedArmorPieceRef();
		void UserConstructionScript();
		void InpActEvt_AltFire_K2Node_InputActionEvent_89();
		void InpActEvt_AltFire_K2Node_InputActionEvent_88();
		void Server_SetTekRunningState(E_TekRunningState newRunState);
		void Client_SyncRunModifier(float newModifier);
		void Pants_AltFirePressed();
		void Pants_AltFireReleased();
		void ExecuteUbergraph_Buff_TekArmor_Pants(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
