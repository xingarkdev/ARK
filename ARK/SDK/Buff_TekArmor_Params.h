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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.HasRequiredEngrams
	 */
	struct ABuff_TekArmor_C_HasRequiredEngrams_Params
	{
	public:
		bool                                                       HasEngrams;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.IsTekBuffDisabled
	 */
	struct ABuff_TekArmor_C_IsTekBuffDisabled_Params
	{
	public:
		bool                                                       bIsDisabled;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.check genesis restrictions for player
	 */
	struct ABuff_TekArmor_C_checkgenesisrestrictionsforplayer_Params
	{
	public:
		class APrimalCharacter*                                    Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isrestricted;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.BPActivated
	 */
	struct ABuff_TekArmor_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.Is Restricted Because Of Genesis Map
	 */
	struct ABuff_TekArmor_C_IsRestrictedBecauseOfGenesisMap_Params
	{
	public:
		bool                                                       restricted;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.Get Is Player in SealedSpace
	 */
	struct ABuff_TekArmor_C_GetIsPlayerinSealedSpace_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3RFU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.IsAbilityValid
	 */
	struct ABuff_TekArmor_C_IsAbilityValid_Params
	{
	public:
		bool                                                       OutValid;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.IsPlayerInWaterVolume
	 */
	struct ABuff_TekArmor_C_IsPlayerInWaterVolume_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3FRS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      waterVolumeTopZ;                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.SpawnFX
	 */
	struct ABuff_TekArmor_C_SpawnFX_Params
	{
	public:
		class UParticleSystem*                                     EmitterTemplate;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZCTU[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          InTransform;                                             // 0x0010(0x0030)  (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		class USoundBase*                                          Sound;                                                   // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      VolumeMultiplier;                                        // 0x0048(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      PitchMultiplier;                                         // 0x004C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.Should Damage Actor
	 */
	struct ABuff_TekArmor_C_ShouldDamageActor_Params
	{
	public:
		class AActor*                                              Victim;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.ResetPlayerFOV
	 */
	struct ABuff_TekArmor_C_ResetPlayerFOV_Params
	{	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.SetTekIgnoreLookInput
	 */
	struct ABuff_TekArmor_C_SetTekIgnoreLookInput_Params
	{
	public:
		bool                                                       newIgnore;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.SetTekIgnoreMoveInput
	 */
	struct ABuff_TekArmor_C_SetTekIgnoreMoveInput_Params
	{
	public:
		bool                                                       newIgnore;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.AllowPostProcessEffect
	 */
	struct ABuff_TekArmor_C_AllowPostProcessEffect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.BPDeactivated
	 */
	struct ABuff_TekArmor_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.ResetTargetFOV
	 */
	struct ABuff_TekArmor_C_ResetTargetFOV_Params
	{	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.IsWarping FOV
	 */
	struct ABuff_TekArmor_C_IsWarpingFOV_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IDQ3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.Get DefaultTekBuff
	 */
	struct ABuff_TekArmor_C_GetDefaultTekBuff_Params
	{
	public:
		class ABuff_TekArmor_C*                                    ref;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.GetDefaultPlayer
	 */
	struct ABuff_TekArmor_C_GetDefaultPlayer_Params
	{
	public:
		class APrimalCharacter*                                    ref;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.Client_Consume Element After Time
	 */
	struct ABuff_TekArmor_C_Client_ConsumeElementAfterTime_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ElementCost;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.BPSetupForInstigator
	 */
	struct ABuff_TekArmor_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.IsPlayerGrounded
	 */
	struct ABuff_TekArmor_C_IsPlayerGrounded_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DNM9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.Get RefOwningPlayer Camera Manager
	 */
	struct ABuff_TekArmor_C_GetRefOwningPlayerCameraManager_Params
	{
	public:
		class AShooterPlayerCameraManager*                         ref;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.UpdatePlayerFOV
	 */
	struct ABuff_TekArmor_C_UpdatePlayerFOV_Params
	{
	public:
		float                                                      intensityRatio;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       warpIn;                                                  // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2OZH[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.Get Ref Owning PlayerMovement
	 */
	struct ABuff_TekArmor_C_GetRefOwningPlayerMovement_Params
	{
	public:
		class UCharacterMovementComponent*                         movement;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.Get Ref Owning PlayerController
	 */
	struct ABuff_TekArmor_C_GetRefOwningPlayerController_Params
	{
	public:
		class AShooterPlayerController*                            Controller;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.GetRef_OwningPlayer
	 */
	struct ABuff_TekArmor_C_GetRef_OwningPlayer_Params
	{
	public:
		class AShooterCharacter*                                   Player;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.AreAnyTekAbilitiesActive
	 */
	struct ABuff_TekArmor_C_AreAnyTekAbilitiesActive_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.IsTekArmorUsingAbility?
	 */
	struct ABuff_TekArmor_C_IsTekArmorUsingAbility_Params
	{
	public:
		unsigned char                                              armorType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.DisplayTekArmorMessage
	 */
	struct ABuff_TekArmor_C_DisplayTekArmorMessage_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor)
		class USoundBase*                                          Sound;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.SetCastedArmorPieceRef
	 */
	struct ABuff_TekArmor_C_SetCastedArmorPieceRef_Params
	{	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.GetRelatedTekArmorRef
	 */
	struct ABuff_TekArmor_C_GetRelatedTekArmorRef_Params
	{
	public:
		class UPrimalItemArmor_Base_Tek_C*                         tekArmorRef;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.CanUseTekAbility
	 */
	struct ABuff_TekArmor_C_CanUseTekAbility_Params
	{
	public:
		bool                                                       bNotifyIfOutOfElement;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.UserConstructionScript
	 */
	struct ABuff_TekArmor_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_34
	 */
	struct ABuff_TekArmor_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_34_Params
	{	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_33
	 */
	struct ABuff_TekArmor_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_33_Params
	{	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.Equipped_TryToDecreaseElement
	 */
	struct ABuff_TekArmor_C_Equipped_TryToDecreaseElement_Params
	{
	public:
		int32_t                                                    AmountToDecreaseBy;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EPrimalEquipmentType                                       ItemSlot;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.Equipped_SetToMaxElement
	 */
	struct ABuff_TekArmor_C_Equipped_SetToMaxElement_Params
	{
	public:
		EPrimalEquipmentType                                       ItemSlot;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.Multi_SpawnFX
	 */
	struct ABuff_TekArmor_C_Multi_SpawnFX_Params
	{
	public:
		class UParticleSystem*                                     ParticleTemplate;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USoundBase*                                          Sound;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor)
		float                                                      soundVolume;                                             // 0x0040(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      soundPitch;                                              // 0x0044(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.CheckForArmorRef
	 */
	struct ABuff_TekArmor_C_CheckForArmorRef_Params
	{	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.Server_SetTekAbilityActive
	 */
	struct ABuff_TekArmor_C_Server_SetTekAbilityActive_Params
	{
	public:
		bool                                                       newActive;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.RateLimitedGenesisAbilityWarning
	 */
	struct ABuff_TekArmor_C_RateLimitedGenesisAbilityWarning_Params
	{	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.ReceiveBeginPlay
	 */
	struct ABuff_TekArmor_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.ReceiveDestroyed
	 */
	struct ABuff_TekArmor_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Buff_TekArmor.Buff_TekArmor_C.ExecuteUbergraph_Buff_TekArmor
	 */
	struct ABuff_TekArmor_C_ExecuteUbergraph_Buff_TekArmor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
