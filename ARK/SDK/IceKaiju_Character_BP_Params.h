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
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
	 */
	struct AIceKaiju_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOverrideHealthBarOffset
	 */
	struct AIceKaiju_Character_BP_C_BPOverrideHealthBarOffset_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8MOQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPDinoARKDownloadedBegin
	 */
	struct AIceKaiju_Character_BP_C_BPDinoARKDownloadedBegin_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetDebugInfoString
	 */
	struct AIceKaiju_Character_BP_C_BPGetDebugInfoString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPPreventRiding
	 */
	struct AIceKaiju_Character_BP_C_BPPreventRiding_Params
	{
	public:
		class AShooterCharacter*                                   ByPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDontCheckDistance;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOnDinoCheat
	 */
	struct AIceKaiju_Character_BP_C_BPOnDinoCheat_Params
	{
	public:
		class FName                                                CheatName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSetValue;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_62PN[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPCanBaseOnCharacter
	 */
	struct AIceKaiju_Character_BP_C_BPCanBaseOnCharacter_Params
	{
	public:
		class APrimalCharacter*                                    BaseCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ActorIsKaiju
	 */
	struct AIceKaiju_Character_BP_C_ActorIsKaiju_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsKaiju;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPDinoARKDownloadedEnd
	 */
	struct AIceKaiju_Character_BP_C_BPDinoARKDownloadedEnd_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.OnRep_UseTamedPhysics
	 */
	struct AIceKaiju_Character_BP_C_OnRep_UseTamedPhysics_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent
	 */
	struct AIceKaiju_Character_BP_C_BPGetHUDOverrideBuffProgressBarPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H31T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOverrideCharacterSound
	 */
	struct AIceKaiju_Character_BP_C_BPOverrideCharacterSound_Params
	{
	public:
		class USoundBase*                                          SoundIn;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USoundBase*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct AIceKaiju_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.HealNodesAndHealthFromLeashing
	 */
	struct AIceKaiju_Character_BP_C_HealNodesAndHealthFromLeashing_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOverrideDamageCauserHitMarker
	 */
	struct AIceKaiju_Character_BP_C_BPOverrideDamageCauserHitMarker_Params
	{
	public:
		class AShooterPlayerController*                            DamageCauserController;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bHitFriendlyTarget;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U85H[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      PreDamageHealth;                                         // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DamageAmount;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DQ8X[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0018(0x0020)  (Parm, OutParm, ReferenceParm)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H59H[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointDamageHitResult;                                    // 0x0040(0x0088)  (Parm, OutParm, ReferenceParm)
		struct FHitMarkerSettings                                  ReturnValue;                                             // 0x00C8(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.K2_OnMovementModeChanged
	 */
	struct AIceKaiju_Character_BP_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOverrideCharacterNewFallVelocity
	 */
	struct AIceKaiju_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.InterpSpawnInMICs
	 */
	struct AIceKaiju_Character_BP_C_InterpSpawnInMICs_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetHealthBarColor
	 */
	struct AIceKaiju_Character_BP_C_BPGetHealthBarColor_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetRiderUnboardLocation
	 */
	struct AIceKaiju_Character_BP_C_BPGetRiderUnboardLocation_Params
	{
	public:
		class APrimalCharacter*                                    RidingCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.IsLocomotionBlocked
	 */
	struct AIceKaiju_Character_BP_C_IsLocomotionBlocked_Params
	{
	public:
		bool                                                       bLocked;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetMovementMontage
	 */
	struct AIceKaiju_Character_BP_C_GetMovementMontage_Params
	{
	public:
		ERootMotionMovementMode                                    Mode;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EBHF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        Montage;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.InterpNodeActiveStates
	 */
	struct AIceKaiju_Character_BP_C_InterpNodeActiveStates_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ClientUpdateNodeStatus
	 */
	struct AIceKaiju_Character_BP_C_ClientUpdateNodeStatus_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPHandleUseButtonPress
	 */
	struct AIceKaiju_Character_BP_C_BPHandleUseButtonPress_Params
	{
	public:
		class AShooterPlayerController*                            RiderController;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J46E[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPNotifyClearRider
	 */
	struct AIceKaiju_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPOnAnimPlayedNotify
	 */
	struct AIceKaiju_Character_BP_C_BPOnAnimPlayedNotify_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      InPlayRate;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                StartSectionName;                                        // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bReplicate;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bReplicateToOwner;                                       // 0x0015(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForceTickPoseAndServerUpdateMesh;                       // 0x0016(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForceTickPoseOnServer;                                  // 0x0017(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPSetupTamed
	 */
	struct AIceKaiju_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPPreventFirstPerson
	 */
	struct AIceKaiju_Character_BP_C_BPPreventFirstPerson_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetCrosshairColor
	 */
	struct AIceKaiju_Character_BP_C_BPGetCrosshairColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPPreventInputType
	 */
	struct AIceKaiju_Character_BP_C_BPPreventInputType_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetTPVCamOffset
	 */
	struct AIceKaiju_Character_BP_C_SetTPVCamOffset_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BlinkDamageNodeInterp
	 */
	struct AIceKaiju_Character_BP_C_BlinkDamageNodeInterp_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TXBZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPModifyRootMotionDeltaRotation
	 */
	struct AIceKaiju_Character_BP_C_BPModifyRootMotionDeltaRotation_Params
	{
	public:
		struct FRotator                                            Delta;                                                   // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPModifyRootMotionDeltaTranslation
	 */
	struct AIceKaiju_Character_BP_C_BPModifyRootMotionDeltaTranslation_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetGravityZScale
	 */
	struct AIceKaiju_Character_BP_C_BPGetGravityZScale_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XKL2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DealAOECollisionDamage
	 */
	struct AIceKaiju_Character_BP_C_DealAOECollisionDamage_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Init Fur
	 */
	struct AIceKaiju_Character_BP_C_InitFur_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.InitFurRestDistance
	 */
	struct AIceKaiju_Character_BP_C_InitFurRestDistance_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetLastTransforms
	 */
	struct AIceKaiju_Character_BP_C_SetLastTransforms_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateFur
	 */
	struct AIceKaiju_Character_BP_C_UpdateFur_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SimulateFur
	 */
	struct AIceKaiju_Character_BP_C_SimulateFur_Params
	{
	public:
		TArray<struct FTransform>                                  InSocketTransforms;                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		float                                                      DeltaTime;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OKTB[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FTransform>                                  InLastSubstepSocketTransforms;                           // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetFurParams
	 */
	struct AIceKaiju_Character_BP_C_SetFurParams_Params
	{
	public:
		TArray<struct FTransform>                                  InSocketTransforms;                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.CreateNodeDynamicMATs
	 */
	struct AIceKaiju_Character_BP_C_CreateNodeDynamicMATs_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Get Launch DirectionForWildLeap
	 */
	struct AIceKaiju_Character_BP_C_GetLaunchDirectionForWildLeap_Params
	{
	public:
		class AActor*                                              CalcActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Return;                                                  // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPHandleOnStopFire
	 */
	struct AIceKaiju_Character_BP_C_BPHandleOnStopFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BP_OnSetDeath
	 */
	struct AIceKaiju_Character_BP_C_BP_OnSetDeath_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.TraceForLeapCollisionDamage
	 */
	struct AIceKaiju_Character_BP_C_TraceForLeapCollisionDamage_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AngryAOEDmg
	 */
	struct AIceKaiju_Character_BP_C_AngryAOEDmg_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ShouldStopJumpRotation
	 */
	struct AIceKaiju_Character_BP_C_ShouldStopJumpRotation_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LJNO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LaunchLiquidBomb
	 */
	struct AIceKaiju_Character_BP_C_LaunchLiquidBomb_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LiquidBombTrace
	 */
	struct AIceKaiju_Character_BP_C_LiquidBombTrace_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.FinishLeapTamed
	 */
	struct AIceKaiju_Character_BP_C_FinishLeapTamed_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetLaunchDirection
	 */
	struct AIceKaiju_Character_BP_C_GetLaunchDirection_Params
	{
	public:
		class AActor*                                              CalcActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Return;                                                  // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LaunchAtTracePoint
	 */
	struct AIceKaiju_Character_BP_C_LaunchAtTracePoint_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ShortestAngleDistance
	 */
	struct AIceKaiju_Character_BP_C_ShortestAngleDistance_Params
	{
	public:
		float                                                      AngleCurrent;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      AngleTarget;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Difference;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetClampedLookDir
	 */
	struct AIceKaiju_Character_BP_C_GetClampedLookDir_Params
	{
	public:
		bool                                                       LimitLowerPitch;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6JS1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Return;                                                  // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LeapingTrace
	 */
	struct AIceKaiju_Character_BP_C_LeapingTrace_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ExecuteTamedLEap
	 */
	struct AIceKaiju_Character_BP_C_ExecuteTamedLEap_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct AIceKaiju_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateLeapTargetVFXLocation
	 */
	struct AIceKaiju_Character_BP_C_UpdateLeapTargetVFXLocation_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DWUX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             WorldLoc;                                                // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            WorldRot;                                                // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GOVY[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitResult;                                               // 0x0020(0x0088)  (Parm)
		struct FVector                                             SurfaceNormal;                                           // 0x00A8(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Calc Leap TargetTamed
	 */
	struct AIceKaiju_Character_BP_C_CalcLeapTargetTamed_Params
	{
	public:
		struct FProjectileArc                                      Arc;                                                     // 0x0000(0x0030)  (Parm)
		float                                                      DebugDrawDuration;                                       // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FoundValidTarget;                                        // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsAirTarget;                                             // 0x0035(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OD99[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x0044(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             TargetNormal;                                            // 0x0050(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ArcTime;                                                 // 0x005C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          HitResult;                                               // 0x0060(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.GetVerticalViewAngle
	 */
	struct AIceKaiju_Character_BP_C_GetVerticalViewAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct AIceKaiju_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.MoveBlocked
	 */
	struct AIceKaiju_Character_BP_C_MoveBlocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BSetupDinoTameable
	 */
	struct AIceKaiju_Character_BP_C_BSetupDinoTameable_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPClientDoMultiUse
	 */
	struct AIceKaiju_Character_BP_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DHZZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AIceKaiju_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPTryMultiUse
	 */
	struct AIceKaiju_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ILNZ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.CreateIceSpearTargetArray
	 */
	struct AIceKaiju_Character_BP_C_CreateIceSpearTargetArray_Params
	{
	public:
		TArray<class AActor*>                                      NewParam;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class AActor*>                                      NewParam1;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetImmuneToDamage
	 */
	struct AIceKaiju_Character_BP_C_SetImmuneToDamage_Params
	{
	public:
		bool                                                       Immune;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.StartTorpid
	 */
	struct AIceKaiju_Character_BP_C_StartTorpid_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DestroyChestNode
	 */
	struct AIceKaiju_Character_BP_C_DestroyChestNode_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DamageChestNode
	 */
	struct AIceKaiju_Character_BP_C_DamageChestNode_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPCanTargetCorpse
	 */
	struct AIceKaiju_Character_BP_C_BPCanTargetCorpse_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ExposeChestNode
	 */
	struct AIceKaiju_Character_BP_C_ExposeChestNode_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DestroyRightShoulderNode
	 */
	struct AIceKaiju_Character_BP_C_DestroyRightShoulderNode_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.RightLegNode Destroyed
	 */
	struct AIceKaiju_Character_BP_C_RightLegNodeDestroyed_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.HideLegNodes
	 */
	struct AIceKaiju_Character_BP_C_HideLegNodes_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ExposeLegNodes
	 */
	struct AIceKaiju_Character_BP_C_ExposeLegNodes_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RightLeg;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPDoAttack
	 */
	struct AIceKaiju_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DamageRightShoulderNode
	 */
	struct AIceKaiju_Character_BP_C_DamageRightShoulderNode_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DamageRightLegNode
	 */
	struct AIceKaiju_Character_BP_C_DamageRightLegNode_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QY7A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPAdjustDamage
	 */
	struct AIceKaiju_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7V4V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2QVE[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct AIceKaiju_Character_BP_C_BlueprintAdjustOutputDamage_Params
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
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ClearLeapTarget
	 */
	struct AIceKaiju_Character_BP_C_ClearLeapTarget_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPShouldLimitForwardDirection
	 */
	struct AIceKaiju_Character_BP_C_BPShouldLimitForwardDirection_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPTimerNonDedicated
	 */
	struct AIceKaiju_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.CheckLeapAttackEnd
	 */
	struct AIceKaiju_Character_BP_C_CheckLeapAttackEnd_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPTimerServer
	 */
	struct AIceKaiju_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.FinishLeap
	 */
	struct AIceKaiju_Character_BP_C_FinishLeap_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.OnRep_bDoingLeap
	 */
	struct AIceKaiju_Character_BP_C_OnRep_bDoingLeap_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.StartLeap
	 */
	struct AIceKaiju_Character_BP_C_StartLeap_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.IceKaijuShakePlayersOff
	 */
	struct AIceKaiju_Character_BP_C_IceKaijuShakePlayersOff_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PE9G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPCanBeBaseForCharacter
	 */
	struct AIceKaiju_Character_BP_C_BPCanBeBaseForCharacter_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BPAdjustAttackIndex
	 */
	struct AIceKaiju_Character_BP_C_BPAdjustAttackIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Ice Kaiju Perform Attack
	 */
	struct AIceKaiju_Character_BP_C_IceKaijuPerformAttack_Params
	{
	public:
		EIceKaijuAttackList                                        Attack;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7M98[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BlueprintCanAttack
	 */
	struct AIceKaiju_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_07K6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EKHE[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UserConstructionScript
	 */
	struct AIceKaiju_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.CallFunc_StunKaiju
	 */
	struct AIceKaiju_Character_BP_C_CallFunc_StunKaiju_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetVar_IKArenaManager
	 */
	struct AIceKaiju_Character_BP_C_SetVar_IKArenaManager_Params
	{
	public:
		class AActor*                                              ArenaManager;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ReceiveTick
	 */
	struct AIceKaiju_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.SetAngry
	 */
	struct AIceKaiju_Character_BP_C_SetAngry_Params
	{
	public:
		bool                                                       IsAngry;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.MulticastApplyLeapDownForce
	 */
	struct AIceKaiju_Character_BP_C_MulticastApplyLeapDownForce_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BndEvt__AttackCheckSphere_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AIceKaiju_Character_BP_C_BndEvt__AttackCheckSphere_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromSweep;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QCK5[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0018(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.PlayLeapAttackHitFX
	 */
	struct AIceKaiju_Character_BP_C_PlayLeapAttackHitFX_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ReceiveBeginPlay
	 */
	struct AIceKaiju_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Rep_ExposeLegNodesWithDelay
	 */
	struct AIceKaiju_Character_BP_C_Rep_ExposeLegNodesWithDelay_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_63JH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Delay;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RightLeg;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Rep_ExposeLegNodes
	 */
	struct AIceKaiju_Character_BP_C_Rep_ExposeLegNodes_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RightLeg;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_TurnForAttack
	 */
	struct AIceKaiju_Character_BP_C_AnimNotify_TurnForAttack_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.RotateAttack
	 */
	struct AIceKaiju_Character_BP_C_RotateAttack_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_AttackTurnFinished
	 */
	struct AIceKaiju_Character_BP_C_AnimNotify_AttackTurnFinished_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Rep_ExposeChestNodeWithDelay
	 */
	struct AIceKaiju_Character_BP_C_Rep_ExposeChestNodeWithDelay_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5SID[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Delay;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Rep_ExposeChestNode
	 */
	struct AIceKaiju_Character_BP_C_Rep_ExposeChestNode_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_LeapAttackBegin
	 */
	struct AIceKaiju_Character_BP_C_AnimNotify_LeapAttackBegin_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.LaunchIceSpears
	 */
	struct AIceKaiju_Character_BP_C_LaunchIceSpears_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.FreezeAOE
	 */
	struct AIceKaiju_Character_BP_C_FreezeAOE_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DelayedPress
	 */
	struct AIceKaiju_Character_BP_C_DelayedPress_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Server_TraceTargetDir
	 */
	struct AIceKaiju_Character_BP_C_Server_TraceTargetDir_Params
	{
	public:
		struct FVector                                             AimLoc;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AimHit;                                                  // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       LeapInstant;                                             // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X0WI[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             MaxDistLeapTraceGroundLoc;                               // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FailedtoFindMaxdistLeapTraceGroundLoc;                   // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_TraceTargetDir
	 */
	struct AIceKaiju_Character_BP_C_Multi_TraceTargetDir_Params
	{
	public:
		struct FVector                                             AimLoc;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AimHit;                                                  // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5L8I[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             MaxDistLeapTraceGroundLoc;                               // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FailedtoFindMaxdistLeapTraceGroundLoc;                   // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.RequestLeapResponse
	 */
	struct AIceKaiju_Character_BP_C_RequestLeapResponse_Params
	{
	public:
		bool                                                       IsHoldingLeap;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BP_OnJumpReleased
	 */
	struct AIceKaiju_Character_BP_C_BP_OnJumpReleased_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BP_OnJumpPressed
	 */
	struct AIceKaiju_Character_BP_C_BP_OnJumpPressed_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multicast_SetInput
	 */
	struct AIceKaiju_Character_BP_C_Multicast_SetInput_Params
	{
	public:
		bool                                                       PreventInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ServerDoAttack
	 */
	struct AIceKaiju_Character_BP_C_ServerDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_LaunchBomb
	 */
	struct AIceKaiju_Character_BP_C_AnimNotify_LaunchBomb_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.DelayedClearLeap
	 */
	struct AIceKaiju_Character_BP_C_DelayedClearLeap_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ClearLeap
	 */
	struct AIceKaiju_Character_BP_C_ClearLeap_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateAllJumpRotation
	 */
	struct AIceKaiju_Character_BP_C_UpdateAllJumpRotation_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateJumpRotation
	 */
	struct AIceKaiju_Character_BP_C_UpdateJumpRotation_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.MultiRestoreInput
	 */
	struct AIceKaiju_Character_BP_C_MultiRestoreInput_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_TamedLeapDamage
	 */
	struct AIceKaiju_Character_BP_C_AnimNotify_TamedLeapDamage_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_ApplyFreezeFromIceAura
	 */
	struct AIceKaiju_Character_BP_C_Multi_ApplyFreezeFromIceAura_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.IceAuraCheck
	 */
	struct AIceKaiju_Character_BP_C_IceAuraCheck_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.BndEvt__LeapCheckSphere_K2Node_ComponentBoundEvent_215_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AIceKaiju_Character_BP_C_BndEvt__LeapCheckSphere_K2Node_ComponentBoundEvent_215_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromSweep;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5IXR[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0018(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.MultiToggleIceAuraVFX
	 */
	struct AIceKaiju_Character_BP_C_MultiToggleIceAuraVFX_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.AnimNotify_EnableIK
	 */
	struct AIceKaiju_Character_BP_C_AnimNotify_EnableIK_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.IsDoneAttacking
	 */
	struct AIceKaiju_Character_BP_C_IsDoneAttacking_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_SetNodeColor
	 */
	struct AIceKaiju_Character_BP_C_Multi_SetNodeColor_Params
	{
	public:
		int32_t                                                    Node;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Alpha;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multicast_IceKaijuDebugInfo
	 */
	struct AIceKaiju_Character_BP_C_Multicast_IceKaijuDebugInfo_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multicast_DrawDebugSphere
	 */
	struct AIceKaiju_Character_BP_C_Multicast_DrawDebugSphere_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        LineColor;                                               // 0x000C(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Duration;                                                // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Radius;                                                  // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_InterpRightLegNode
	 */
	struct AIceKaiju_Character_BP_C_Multi_InterpRightLegNode_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_InterpRightShoulderNode
	 */
	struct AIceKaiju_Character_BP_C_Multi_InterpRightShoulderNode_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Server_SetHoldLeftClick
	 */
	struct AIceKaiju_Character_BP_C_Server_SetHoldLeftClick_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.StunKaiju
	 */
	struct AIceKaiju_Character_BP_C_StunKaiju_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.EquipSaddle
	 */
	struct AIceKaiju_Character_BP_C_EquipSaddle_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_PlayNodeDestroyFX
	 */
	struct AIceKaiju_Character_BP_C_Multi_PlayNodeDestroyFX_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.UpdateSaddlePhysics
	 */
	struct AIceKaiju_Character_BP_C_UpdateSaddlePhysics_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.Multi_DelayedTurnOffHealthRegen
	 */
	struct AIceKaiju_Character_BP_C_Multi_DelayedTurnOffHealthRegen_Params
	{	};

	/**
	 * Function IceKaiju_Character_BP.IceKaiju_Character_BP_C.ExecuteUbergraph_IceKaiju_Character_BP
	 */
	struct AIceKaiju_Character_BP_C_ExecuteUbergraph_IceKaiju_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
