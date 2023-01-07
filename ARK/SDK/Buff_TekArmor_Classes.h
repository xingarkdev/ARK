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
	 * BlueprintGeneratedClass Buff_TekArmor.Buff_TekArmor_C
	 * Size -> 0x01AA (FullSize[0x0B3A] - InheritedSize[0x0990])
	 */
	class ABuff_TekArmor_C : public ABuff_OverrideVelocity_C
	{
	public:
		class AShooterCharacter*                                   Ref_OwningPlayer;                                        // 0x0990(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EPrimalEquipmentType                                       currentEquipmentSlot;                                    // 0x0998(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U4ZL[0x7];                                   // 0x0999(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   Ref_OwningPlayerController;                              // 0x09A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ABuff_TekArmor_C*                                    SelfAsObj;                                               // 0x09A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AWeapFists_C*                                        FistWeapon;                                              // 0x09B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UPrimalItemArmor_Base_Tek_C*                         Ref_ArmorPiece;                                          // 0x09B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EPrimalEquipmentType                                       TekBuffEquipmentType;                                    // 0x09C0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsTekAbilityActive;                                     // 0x09C1(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VMQ4[0x2];                                   // 0x09C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        TekArmorMessage_Color;                                   // 0x09C4(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TekArmorMessage_DisplayScale;                            // 0x09D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TekArmorMessage_DisplayTime;                             // 0x09D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bInfiniteAmmo;                                           // 0x09DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9EP1[0x3];                                   // 0x09DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ATekArmor_EffectActor_C*>                     SpawnedFXActors;                                         // 0x09E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class FName                                                TekArmorName;                                            // 0x09F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTexture2D*                                          TekArmorIcon;                                            // 0x09F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bShouldWarpFOV;                                          // 0x0A00(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8PL8[0x3];                                   // 0x0A01(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      warpFOV_target;                                          // 0x0A04(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      warpFOV_MAX;                                             // 0x0A08(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      warpFOV_lag_in;                                          // 0x0A0C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      warpFOV_lag_out;                                         // 0x0A10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      warpFOV_start;                                           // 0x0A14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ConsumeElementInterval;                                  // 0x0A18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TimeSinceLastConsumeElement;                             // 0x0A1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EPrimalEquipmentType                                       preventAbilityActiveSlot;                                // 0x0A20(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bTekIgnoredMoveInput;                                    // 0x0A21(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bTekIgnoredLookInput;                                    // 0x0A22(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bLeftBumperHeld;                                         // 0x0A23(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsWeapon;                                               // 0x0A24(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G03M[0x3];                                   // 0x0A25(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Restrictedbecauseofgenesismapstring;                     // 0x0A28(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      GenesisAbilityErrorRateLimitSeconds;                     // 0x0A38(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       hassetwhethertekabilitiesareallowedingenesis;            // 0x0A3C(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       tekabilitiesareallowedingenesis;                         // 0x0A3D(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RZI6[0x2];                                   // 0x0A3E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              GenesisMapName;                                          // 0x0A40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      AbilityRequiresEngrams;                                  // 0x0A50(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		EPrimalEquipmentType                                       K2Node_CustomEvent_ItemSlot;                             // 0x0A60(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G6QP[0x7];                                   // 0x0A61(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     K2Node_CustomEvent_particleTemplate;                     // 0x0A68(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class USoundBase*                                          K2Node_CustomEvent_sound;                                // 0x0A70(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W5F2[0x8];                                   // 0x0A78(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          K2Node_CustomEvent_transform;                            // 0x0A80(0x0030) Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_soundVolume;                          // 0x0AB0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_soundPitch;                           // 0x0AB4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UPrimalItem*                                         CallFunc_GetEquippedItemOfType_ReturnValue;              // 0x0AB8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UPrimalItemArmor_Base_Tek_C*                         K2Node_DynamicCast_AsPrimalItemArmor_Base_Tek_C;         // 0x0AC0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0AC8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZNJ8[0x3];                                   // 0x0AC9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    K2Node_CustomEvent_AmountToDecreaseBy;                   // 0x0ACC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		EPrimalEquipmentType                                       K2Node_CustomEvent_ItemSlot2;                            // 0x0AD0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QNPF[0x7];                                   // 0x0AD1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimalItem*                                         CallFunc_GetEquippedItemOfType_ReturnValue2;             // 0x0AD8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UPrimalItemArmor_Base_Tek_C*                         K2Node_DynamicCast_AsPrimalItemArmor_Base_Tek_C2;        // 0x0AE0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0AE8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_newActive;                            // 0x0AE9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UWEB[0x6];                                   // 0x0AEA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue;                        // 0x0AF0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APlayerController*                                   CallFunc_GetOwnerController_ReturnValue;                 // 0x0AF8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_TimeSeconds_ReturnValue;                        // 0x0B00(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterPlayerController*                            K2Node_DynamicCast_AsShooterPlayerController;            // 0x0B08(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast3_CastSuccess;                         // 0x0B10(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8SHM[0x7];                                   // 0x0B11(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetOwner_ReturnValue;                           // 0x0B18(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter;                   // 0x0B20(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast4_CastSuccess;                         // 0x0B28(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5SGP[0x7];                                   // 0x0B29(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterPlayerState*                                 K2Node_DynamicCast_AsShooterPlayerState;                 // 0x0B30(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast5_CastSuccess;                         // 0x0B38(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsCooldownComplete_ReturnValue;                 // 0x0B39(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void HasRequiredEngrams(bool* HasEngrams);
		void IsTekBuffDisabled(bool* bIsDisabled);
		void checkgenesisrestrictionsforplayer(class APrimalCharacter* Player, bool* isrestricted);
		void BPActivated(class AActor* ForInstigator);
		void IsRestrictedBecauseOfGenesisMap(bool* restricted);
		void GetIsPlayerinSealedSpace(bool* Result);
		void IsAbilityValid(bool* OutValid);
		void IsPlayerInWaterVolume(bool* Result, float* waterVolumeTopZ);
		void SpawnFX(class UParticleSystem* EmitterTemplate, struct FTransform* InTransform, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier);
		void ShouldDamageActor(class AActor* Victim, bool* Result);
		void ResetPlayerFOV();
		void SetTekIgnoreLookInput(bool newIgnore);
		void SetTekIgnoreMoveInput(bool newIgnore);
		bool AllowPostProcessEffect();
		void BPDeactivated(class AActor* ForInstigator);
		void ResetTargetFOV();
		void IsWarpingFOV(bool* Result);
		void GetDefaultTekBuff(class ABuff_TekArmor_C** ref);
		void GetDefaultPlayer(class APrimalCharacter** ref);
		void Client_ConsumeElementAfterTime(float DeltaTime, int32_t ElementCost);
		void BPSetupForInstigator(class AActor* ForInstigator);
		void IsPlayerGrounded(bool* Result);
		void GetRefOwningPlayerCameraManager(class AShooterPlayerCameraManager** ref);
		void UpdatePlayerFOV(float intensityRatio, bool warpIn);
		void GetRefOwningPlayerMovement(class UCharacterMovementComponent** movement);
		void GetRefOwningPlayerController(class AShooterPlayerController** Controller);
		void GetRef_OwningPlayer(class AShooterCharacter** Player);
		void AreAnyTekAbilitiesActive(bool* Result);
		void IsTekArmorUsingAbility(unsigned char armorType, bool* Result);
		void DisplayTekArmorMessage(const class FString& Message, class USoundBase* Sound);
		void SetCastedArmorPieceRef();
		void GetRelatedTekArmorRef(class UPrimalItemArmor_Base_Tek_C** tekArmorRef);
		void CanUseTekAbility(bool bNotifyIfOutOfElement, bool* bResult);
		void UserConstructionScript();
		void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_34();
		void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_33();
		void Equipped_TryToDecreaseElement(int32_t AmountToDecreaseBy, EPrimalEquipmentType ItemSlot);
		void Equipped_SetToMaxElement(EPrimalEquipmentType ItemSlot);
		void Multi_SpawnFX(class UParticleSystem* ParticleTemplate, class USoundBase* Sound, const struct FTransform& Transform, float soundVolume, float soundPitch);
		void CheckForArmorRef();
		void Server_SetTekAbilityActive(bool newActive);
		void RateLimitedGenesisAbilityWarning();
		void ReceiveBeginPlay();
		void ReceiveDestroyed();
		void ExecuteUbergraph_Buff_TekArmor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
