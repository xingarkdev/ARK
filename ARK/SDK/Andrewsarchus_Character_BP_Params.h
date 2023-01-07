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
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetMaterialIndicesToSupportNet
	 */
	struct AAndrewsarchus_Character_BP_C_GetMaterialIndicesToSupportNet_Params
	{
	public:
		TArray<int32_t>                                            MaterialIndices;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.HasNettedBuff
	 */
	struct AAndrewsarchus_Character_BP_C_HasNettedBuff_Params
	{
	public:
		bool                                                       bHasBuff;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_PreventUnmounting
	 */
	struct AAndrewsarchus_Character_BP_C_BP_PreventUnmounting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.DisableCC
	 */
	struct AAndrewsarchus_Character_BP_C_DisableCC_Params
	{
	public:
		class APrimalCharacter*                                    ForTaget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetDinoLevelUpAnimation
	 */
	struct AAndrewsarchus_Character_BP_C_GetDinoLevelUpAnimation_Params
	{
	public:
		class UAnimMontage*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_ToggleTurret
	 */
	struct AAndrewsarchus_Character_BP_C_Server_ToggleTurret_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateCanvasVisibility
	 */
	struct AAndrewsarchus_Character_BP_C_UpdateCanvasVisibility_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.SetTurretIsRotatingAudio
	 */
	struct AAndrewsarchus_Character_BP_C_SetTurretIsRotatingAudio_Params
	{
	public:
		bool                                                       IsRotating;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsFromInit;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QVFN[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_OnPaintingComponentInitialized
	 */
	struct AAndrewsarchus_Character_BP_C_BP_OnPaintingComponentInitialized_Params
	{
	public:
		class UStructurePaintingComponent*                         PaintingComp;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InitPaintTextures
	 */
	struct AAndrewsarchus_Character_BP_C_InitPaintTextures_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPTryMultiUse
	 */
	struct AAndrewsarchus_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AAndrewsarchus_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetPaintingMesh
	 */
	struct AAndrewsarchus_Character_BP_C_GetPaintingMesh_Params
	{
	public:
		class UMeshComponent*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.IsServerSafeFiringLocation
	 */
	struct AAndrewsarchus_Character_BP_C_IsServerSafeFiringLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsSafe;                                                  // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZEMP[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetDesiredTurretRotation
	 */
	struct AAndrewsarchus_Character_BP_C_GetDesiredTurretRotation_Params
	{
	public:
		struct FRotator                                            DesiredRotation;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I9PH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetMinigunLocationRotation
	 */
	struct AAndrewsarchus_Character_BP_C_GetMinigunLocationRotation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetBarrelPivotSocketLocationRotation
	 */
	struct AAndrewsarchus_Character_BP_C_GetBarrelPivotSocketLocationRotation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.DecOxygenIfMax
	 */
	struct AAndrewsarchus_Character_BP_C_DecOxygenIfMax_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.OverrideRandomWanderLocation
	 */
	struct AAndrewsarchus_Character_BP_C_OverrideRandomWanderLocation_Params
	{
	public:
		struct FVector                                             originalDestination;                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             inVec;                                                   // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPCharacterSleeped
	 */
	struct AAndrewsarchus_Character_BP_C_BPCharacterSleeped_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.OnRep_bShouldUnderwaterSink
	 */
	struct AAndrewsarchus_Character_BP_C_OnRep_bShouldUnderwaterSink_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPAddedAttachmentsForItem
	 */
	struct AAndrewsarchus_Character_BP_C_BPAddedAttachmentsForItem_Params
	{
	public:
		class UPrimalItem*                                         anItem;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.SetCameraTurretVisibility
	 */
	struct AAndrewsarchus_Character_BP_C_SetCameraTurretVisibility_Params
	{
	public:
		bool                                                       IsForFPV;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_OnCameraStyleChangedNotify
	 */
	struct AAndrewsarchus_Character_BP_C_BP_OnCameraStyleChangedNotify_Params
	{
	public:
		class FName                                                NewCameraStyle;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		class FName                                                OldCameraStyle;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 */
	struct AAndrewsarchus_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DAND[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UAnimMontage*>                                AnimationArray;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetRiderUnboardDirection
	 */
	struct AAndrewsarchus_Character_BP_C_BPGetRiderUnboardDirection_Params
	{
	public:
		class APrimalCharacter*                                    RidingCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPSetupTamed
	 */
	struct AAndrewsarchus_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CO58[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.SpawnJumpVFX
	 */
	struct AAndrewsarchus_Character_BP_C_SpawnJumpVFX_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.SpawnSlideVFX
	 */
	struct AAndrewsarchus_Character_BP_C_SpawnSlideVFX_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.IncreaseTamingIneffectivenessOnIncorrectInput
	 */
	struct AAndrewsarchus_Character_BP_C_IncreaseTamingIneffectivenessOnIncorrectInput_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetRiderSocket
	 */
	struct AAndrewsarchus_Character_BP_C_BPGetRiderSocket_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.AggroOntoActorAfterRiding
	 */
	struct AAndrewsarchus_Character_BP_C_AggroOntoActorAfterRiding_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPServerHandleNetExecCommand
	 */
	struct AAndrewsarchus_Character_BP_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InitAndy
	 */
	struct AAndrewsarchus_Character_BP_C_InitAndy_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.RegenSpeedBoost
	 */
	struct AAndrewsarchus_Character_BP_C_RegenSpeedBoost_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPAdjustDamage
	 */
	struct AAndrewsarchus_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IJE5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HYGU[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPHandleUseButtonPress
	 */
	struct AAndrewsarchus_Character_BP_C_BPHandleUseButtonPress_Params
	{
	public:
		class AShooterPlayerController*                            RiderController;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PKR4[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOverrideIsSubmergedForWaterTargeting
	 */
	struct AAndrewsarchus_Character_BP_C_BPOverrideIsSubmergedForWaterTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOverrideCharacterNewFallVelocity
	 */
	struct AAndrewsarchus_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearMinigunSlideDirIndex
	 */
	struct AAndrewsarchus_Character_BP_C_ClearMinigunSlideDirIndex_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearShouldAttemptMinigunSlide
	 */
	struct AAndrewsarchus_Character_BP_C_ClearShouldAttemptMinigunSlide_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPPreventFallDamage
	 */
	struct AAndrewsarchus_Character_BP_C_BPPreventFallDamage_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		float                                                      FallDamageAmount;                                        // 0x0088(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x008C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 */
	struct AAndrewsarchus_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetIsUnderwaterSinking
	 */
	struct AAndrewsarchus_Character_BP_C_GetIsUnderwaterSinking_Params
	{
	public:
		bool                                                       IsUnderwater;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HKKO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.AllowPlayMontage
	 */
	struct AAndrewsarchus_Character_BP_C_AllowPlayMontage_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct AAndrewsarchus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateLegIK
	 */
	struct AAndrewsarchus_Character_BP_C_UpdateLegIK_Params
	{
	public:
		bool                                                       TwoLegged;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateMovementVars
	 */
	struct AAndrewsarchus_Character_BP_C_UpdateMovementVars_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPTimerServer
	 */
	struct AAndrewsarchus_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BlueprintCanAttack
	 */
	struct AAndrewsarchus_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UYLD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1UUG[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOnMovementModeChangedNotify
	 */
	struct AAndrewsarchus_Character_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ScaledJump
	 */
	struct AAndrewsarchus_Character_BP_C_ScaledJump_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Alpha;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       WantsToMoveForward;                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_41K6[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             VelOverride;                                             // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOnStartJump
	 */
	struct AAndrewsarchus_Character_BP_C_BPOnStartJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_82PP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPHandlePoop
	 */
	struct AAndrewsarchus_Character_BP_C_BPHandlePoop_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_InterceptMoveForward
	 */
	struct AAndrewsarchus_Character_BP_C_BP_InterceptMoveForward_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SFL5[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.EndDriftTurn
	 */
	struct AAndrewsarchus_Character_BP_C_EndDriftTurn_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPShouldLimitForwardDirection
	 */
	struct AAndrewsarchus_Character_BP_C_BPShouldLimitForwardDirection_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.StartDriftTurn
	 */
	struct AAndrewsarchus_Character_BP_C_StartDriftTurn_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetRiderUnboardLocation
	 */
	struct AAndrewsarchus_Character_BP_C_BPGetRiderUnboardLocation_Params
	{
	public:
		class APrimalCharacter*                                    RidingCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.CheckTamingRiding
	 */
	struct AAndrewsarchus_Character_BP_C_CheckTamingRiding_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearTamingRider
	 */
	struct AAndrewsarchus_Character_BP_C_ClearTamingRider_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearAllowTamingRiding
	 */
	struct AAndrewsarchus_Character_BP_C_ClearAllowTamingRiding_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPPreventRiding
	 */
	struct AAndrewsarchus_Character_BP_C_BPPreventRiding_Params
	{
	public:
		class AShooterCharacter*                                   ByPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDontCheckDistance;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateTaming
	 */
	struct AAndrewsarchus_Character_BP_C_UpdateTaming_Params
	{
	public:
		class AShooterCharacter*                                   ForShooterChar;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPDoAttack
	 */
	struct AAndrewsarchus_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.OnRep_bIsSliding
	 */
	struct AAndrewsarchus_Character_BP_C_OnRep_bIsSliding_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.CheckUpdateSliding
	 */
	struct AAndrewsarchus_Character_BP_C_CheckUpdateSliding_Params
	{
	public:
		bool                                                       ShouldSlide;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W5XO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateSliding
	 */
	struct AAndrewsarchus_Character_BP_C_UpdateSliding_Params
	{
	public:
		bool                                                       EnableSliding;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ApplySpeedBoost
	 */
	struct AAndrewsarchus_Character_BP_C_ApplySpeedBoost_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearShouldAttemptSpeedBoost
	 */
	struct AAndrewsarchus_Character_BP_C_ClearShouldAttemptSpeedBoost_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.CheckCanSpeedBoost
	 */
	struct AAndrewsarchus_Character_BP_C_CheckCanSpeedBoost_Params
	{
	public:
		bool                                                       CanSpeedBoost;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPModifyAimOffsetNoTarget
	 */
	struct AAndrewsarchus_Character_BP_C_BPModifyAimOffsetNoTarget_Params
	{
	public:
		struct FRotator                                            Aim;                                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct AAndrewsarchus_Character_BP_C_BlueprintAdjustOutputDamage_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OriginalDamageAmount;                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              HitActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              OutDamageType;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OutDamageImpulse;                                        // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPModifyDesiredRotation
	 */
	struct AAndrewsarchus_Character_BP_C_BPModifyDesiredRotation_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            InDesiredRotation;                                       // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            OutDesiredRotation;                                      // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPNotifySetRider
	 */
	struct AAndrewsarchus_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetHUDElements
	 */
	struct AAndrewsarchus_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetCanShootMinigun
	 */
	struct AAndrewsarchus_Character_BP_C_GetCanShootMinigun_Params
	{
	public:
		bool                                                       CanShoot;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOverrideCameraViewTarget
	 */
	struct AAndrewsarchus_Character_BP_C_BPOverrideCameraViewTarget_Params
	{
	public:
		class FName                                                CurrentCameraMode;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             DesiredCameraLocation;                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            DesiredCameraRotation;                                   // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DesiredFOV;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraLocation;                                 // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FXU4[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CameraLocation;                                          // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraRotation;                                 // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CURM[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            CameraRotation;                                          // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraFOV;                                      // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0DPI[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CameraFOV;                                               // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPNotifyClearRider
	 */
	struct AAndrewsarchus_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.OnRep_bMinigunActive
	 */
	struct AAndrewsarchus_Character_BP_C_OnRep_bMinigunActive_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct AAndrewsarchus_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetCanEnableMinigun
	 */
	struct AAndrewsarchus_Character_BP_C_GetCanEnableMinigun_Params
	{
	public:
		bool                                                       CanEnable;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CXIO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct AAndrewsarchus_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct AAndrewsarchus_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.RidingTick
	 */
	struct AAndrewsarchus_Character_BP_C_RidingTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UserConstructionScript
	 */
	struct AAndrewsarchus_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_139
	 */
	struct AAndrewsarchus_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_139_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_138
	 */
	struct AAndrewsarchus_Character_BP_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_138_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_137
	 */
	struct AAndrewsarchus_Character_BP_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_137_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_136
	 */
	struct AAndrewsarchus_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_136_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_135
	 */
	struct AAndrewsarchus_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_135_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_FireMinigun
	 */
	struct AAndrewsarchus_Character_BP_C_Server_FireMinigun_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Direction;                                               // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Multi_SpawnFireVFX
	 */
	struct AAndrewsarchus_Character_BP_C_Multi_SpawnFireVFX_Params
	{
	public:
		struct FVector                                             EndLoc;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Start;                                                   // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ShootDir;                                                // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1H6E[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0028(0x0088)  (Parm)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_CancelMinigunFire
	 */
	struct AAndrewsarchus_Character_BP_C_Server_CancelMinigunFire_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_SetRepAimRot
	 */
	struct AAndrewsarchus_Character_BP_C_Server_SetRepAimRot_Params
	{
	public:
		struct FRotator                                            Rot;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_SetDesiredTurnIndex
	 */
	struct AAndrewsarchus_Character_BP_C_Server_SetDesiredTurnIndex_Params
	{
	public:
		int32_t                                                    TurnIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_AttemptSpeedBoost
	 */
	struct AAndrewsarchus_Character_BP_C_Server_AttemptSpeedBoost_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_UpdateSliding
	 */
	struct AAndrewsarchus_Character_BP_C_Server_UpdateSliding_Params
	{
	public:
		bool                                                       EnableSliding;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_StartSlideAnim
	 */
	struct AAndrewsarchus_Character_BP_C_MC_StartSlideAnim_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_EndSlideAnim
	 */
	struct AAndrewsarchus_Character_BP_C_MC_EndSlideAnim_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ReceiveBeginPlay
	 */
	struct AAndrewsarchus_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPUnstasis
	 */
	struct AAndrewsarchus_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_ScaledJump
	 */
	struct AAndrewsarchus_Character_BP_C_Server_ScaledJump_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Alpha;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       WantsToMoveForward;                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KM72[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             VelOverride;                                             // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_AttemptDoMinigunSlide
	 */
	struct AAndrewsarchus_Character_BP_C_Server_AttemptDoMinigunSlide_Params
	{
	public:
		int32_t                                                    DirIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_RefreshMovementVars
	 */
	struct AAndrewsarchus_Character_BP_C_MC_RefreshMovementVars_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_Dismount
	 */
	struct AAndrewsarchus_Character_BP_C_Server_Dismount_Params
	{
	public:
		float                                                      LastRightVal;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.PlayPreventDismountVFX
	 */
	struct AAndrewsarchus_Character_BP_C_PlayPreventDismountVFX_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_PreventMovement
	 */
	struct AAndrewsarchus_Character_BP_C_MC_PreventMovement_Params
	{
	public:
		bool                                                       Prevent;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_SetShouldUnderwaterSink
	 */
	struct AAndrewsarchus_Character_BP_C_Server_SetShouldUnderwaterSink_Params
	{
	public:
		bool                                                       ShouldSink;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_EndSLideVFX
	 */
	struct AAndrewsarchus_Character_BP_C_MC_EndSLideVFX_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.AnimNotify_Jump
	 */
	struct AAndrewsarchus_Character_BP_C_AnimNotify_Jump_Params
	{	};

	/**
	 * Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ExecuteUbergraph_Andrewsarchus_Character_BP
	 */
	struct AAndrewsarchus_Character_BP_C_ExecuteUbergraph_Andrewsarchus_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
