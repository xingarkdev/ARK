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
	 * Function Scout_Character_BP.Scout_Character_BP_C.BPCanCryo
	 */
	struct AScout_Character_BP_C_BPCanCryo_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.BPOnRefreshColorization
	 */
	struct AScout_Character_BP_C_BPOnRefreshColorization_Params
	{
	public:
		TArray<struct FLinearColor>                                Colors;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.BP_PreventMovementMode
	 */
	struct AScout_Character_BP_C_BP_PreventMovementMode_Params
	{
	public:
		EMovementMode                                              NewMovementMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ServerIsFiringItemInInventory
	 */
	struct AScout_Character_BP_C_ServerIsFiringItemInInventory_Params
	{
	public:
		bool                                                       retVal;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ServerIsUsingTrackerBeam
	 */
	struct AScout_Character_BP_C_ServerIsUsingTrackerBeam_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZAB3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.OnCheckMek
	 */
	struct AScout_Character_BP_C_OnCheckMek_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.BP_InterceptTurnInput
	 */
	struct AScout_Character_BP_C_BP_InterceptTurnInput_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8P2W[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.Set StatsFromItem
	 */
	struct AScout_Character_BP_C_SetStatsFromItem_Params
	{
	public:
		TArray<float>                                              Stats;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.SetupScoutDisconnect
	 */
	struct AScout_Character_BP_C_SetupScoutDisconnect_Params
	{
	public:
		float                                                      DelayTimeSeconds;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.DestroyScout
	 */
	struct AScout_Character_BP_C_DestroyScout_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.BPModifyAimOffsetTargetLocation
	 */
	struct AScout_Character_BP_C_BPModifyAimOffsetTargetLocation_Params
	{
	public:
		struct FVector                                             AimTargetLocation;                                       // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ClearExpiredDinoAIData
	 */
	struct AScout_Character_BP_C_ClearExpiredDinoAIData_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.SetIsFleeingForDino
	 */
	struct AScout_Character_BP_C_SetIsFleeingForDino_Params
	{
	public:
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsFleeing;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.Is Dino Fleeing
	 */
	struct AScout_Character_BP_C_IsDinoFleeing_Params
	{
	public:
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsFleeing;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.BPOverrideStencilAllianceForTarget
	 */
	struct AScout_Character_BP_C_BPOverrideStencilAllianceForTarget_Params
	{
	public:
		class APrimalCharacter*                                    TargetDino;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 Component;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EStencilAlliance                                           ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XN0H[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.BPShouldCancelDoAttack
	 */
	struct AScout_Character_BP_C_BPShouldCancelDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.OnRep_LowStamina
	 */
	struct AScout_Character_BP_C_OnRep_LowStamina_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.IsDashing
	 */
	struct AScout_Character_BP_C_IsDashing_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0N8T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.BPGetHUDElements
	 */
	struct AScout_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ReceiveTick
	 */
	struct AScout_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ScoutIsFirstPerson
	 */
	struct AScout_Character_BP_C_ScoutIsFirstPerson_Params
	{
	public:
		bool                                                       retVal;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.InitBeamVFX
	 */
	struct AScout_Character_BP_C_InitBeamVFX_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.EndBeam VFX
	 */
	struct AScout_Character_BP_C_EndBeamVFX_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.SetBeamValidTarget
	 */
	struct AScout_Character_BP_C_SetBeamValidTarget_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TK61[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.BPHandleOnStopFire
	 */
	struct AScout_Character_BP_C_BPHandleOnStopFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.Update Target Impact VFX_Implementation
	 */
	struct AScout_Character_BP_C_UpdateTargetImpactVFX_Implementation_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.Update Beam VFX Implementation
	 */
	struct AScout_Character_BP_C_UpdateBeamVFXImplementation_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.SetTargetImpactMaterial
	 */
	struct AScout_Character_BP_C_SetTargetImpactMaterial_Params
	{
	public:
		float                                                      ImpactDistance;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.BPPreventStasis
	 */
	struct AScout_Character_BP_C_BPPreventStasis_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.BPHandleUseButtonPress
	 */
	struct AScout_Character_BP_C_BPHandleUseButtonPress_Params
	{
	public:
		class AShooterPlayerController*                            RiderController;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.IsScoutFirst Person
	 */
	struct AScout_Character_BP_C_IsScoutFirstPerson_Params
	{
	public:
		bool                                                       IsFirstPerson;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4USI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.SetFirstPersonMaterial
	 */
	struct AScout_Character_BP_C_SetFirstPersonMaterial_Params
	{
	public:
		bool                                                       IsFirstPerson;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J90L[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.IsServerOrSinglePlayer
	 */
	struct AScout_Character_BP_C_IsServerOrSinglePlayer_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.IsClientOrSinglePlayer
	 */
	struct AScout_Character_BP_C_IsClientOrSinglePlayer_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.Tracker Missed
	 */
	struct AScout_Character_BP_C_TrackerMissed_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.Update Scout Vision
	 */
	struct AScout_Character_BP_C_UpdateScoutVision_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.BPOverrideFPVViewLocation
	 */
	struct AScout_Character_BP_C_BPOverrideFPVViewLocation_Params
	{
	public:
		class APrimalCharacter*                                    viewingCharacter;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.BPGetFPVViewLocation
	 */
	struct AScout_Character_BP_C_BPGetFPVViewLocation_Params
	{
	public:
		class APrimalCharacter*                                    viewingCharacter;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LZJY[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.PrivateTracker Missed
	 */
	struct AScout_Character_BP_C_PrivateTrackerMissed_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.Dash
	 */
	struct AScout_Character_BP_C_Dash_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Impulse;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.BP_GetCustomModifier_RotationRate
	 */
	struct AScout_Character_BP_C_BP_GetCustomModifier_RotationRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P7DE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 */
	struct AScout_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9ZGH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.BlueprintCanAttack
	 */
	struct AScout_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VRU7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KATX[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ServerIs Tracked Target
	 */
	struct AScout_Character_BP_C_ServerIsTrackedTarget_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsTrackedTarget;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A3MA[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.Tracker Hit Character
	 */
	struct AScout_Character_BP_C_TrackerHitCharacter_Params
	{
	public:
		class APrimalCharacter*                                    HitCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ApplyTracker;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ValidTarget;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.BPAdjustDamage
	 */
	struct AScout_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KASU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I00W[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.BP_OnSetDeath
	 */
	struct AScout_Character_BP_C_BP_OnSetDeath_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct AScout_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.Release Possessing Survivor
	 */
	struct AScout_Character_BP_C_ReleasePossessingSurvivor_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.GetPossessedByPlayer
	 */
	struct AScout_Character_BP_C_GetPossessedByPlayer_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.Spawned From Projectile
	 */
	struct AScout_Character_BP_C_SpawnedFromProjectile_Params
	{
	public:
		class AShooterPlayerController*                            ShooterPlayerController;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      PossessDelay;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q3I5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalItem*                                         FiringItem;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.BPIsValidUnStasisCaster
	 */
	struct AScout_Character_BP_C_BPIsValidUnStasisCaster_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DN50[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.UserConstructionScript
	 */
	struct AScout_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_132
	 */
	struct AScout_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_132_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_131
	 */
	struct AScout_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_131_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Jump_K2Node_InputActionEvent_130
	 */
	struct AScout_Character_BP_C_InpActEvt_Jump_K2Node_InputActionEvent_130_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Jump_K2Node_InputActionEvent_129
	 */
	struct AScout_Character_BP_C_InpActEvt_Jump_K2Node_InputActionEvent_129_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_128
	 */
	struct AScout_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_128_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_127
	 */
	struct AScout_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_127_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.CrouchTick
	 */
	struct AScout_Character_BP_C_CrouchTick_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.JumpTick
	 */
	struct AScout_Character_BP_C_JumpTick_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.StopPossessingPlayerMovement
	 */
	struct AScout_Character_BP_C_StopPossessingPlayerMovement_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ReceiveHit
	 */
	struct AScout_Character_BP_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_47EZ[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.CheckMek
	 */
	struct AScout_Character_BP_C_CheckMek_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.AnimNotify_RepairHandLeft
	 */
	struct AScout_Character_BP_C_AnimNotify_RepairHandLeft_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.AnimNotify_RepairHandRight
	 */
	struct AScout_Character_BP_C_AnimNotify_RepairHandRight_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ReplicateInputVector
	 */
	struct AScout_Character_BP_C_ReplicateInputVector_Params
	{
	public:
		struct FVector                                             InputVector;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.MULTI_ReplairMek
	 */
	struct AScout_Character_BP_C_MULTI_ReplairMek_Params
	{
	public:
		class APrimalDinoCharacter*                                Mek;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.SERVER_SetScoutTargeting
	 */
	struct AScout_Character_BP_C_SERVER_SetScoutTargeting_Params
	{
	public:
		bool                                                       Targeting;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ReleasePossessingSurvivorAndDestroy
	 */
	struct AScout_Character_BP_C_ReleasePossessingSurvivorAndDestroy_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.RechargeShield
	 */
	struct AScout_Character_BP_C_RechargeShield_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ClientActivateAlertMode
	 */
	struct AScout_Character_BP_C_ClientActivateAlertMode_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ClientScoutDamaged
	 */
	struct AScout_Character_BP_C_ClientScoutDamaged_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (Parm)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ClientTickShieldDamageVFX
	 */
	struct AScout_Character_BP_C_ClientTickShieldDamageVFX_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ClientRechargeShield
	 */
	struct AScout_Character_BP_C_ClientRechargeShield_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ReceiveBeginPlay
	 */
	struct AScout_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.SpawnEnd
	 */
	struct AScout_Character_BP_C_SpawnEnd_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ReceiveEndPlay
	 */
	struct AScout_Character_BP_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.TriggerDisconnectFX
	 */
	struct AScout_Character_BP_C_TriggerDisconnectFX_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ScoutDied
	 */
	struct AScout_Character_BP_C_ScoutDied_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.PossessedByPlayer
	 */
	struct AScout_Character_BP_C_PossessedByPlayer_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.MULTI_ReleasePossessingSurvivor
	 */
	struct AScout_Character_BP_C_MULTI_ReleasePossessingSurvivor_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ServerDashAttack
	 */
	struct AScout_Character_BP_C_ServerDashAttack_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.VerifyPossessingSurvivor
	 */
	struct AScout_Character_BP_C_VerifyPossessingSurvivor_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ReleasePossessingSurvivorAndDelayedDestroy
	 */
	struct AScout_Character_BP_C_ReleasePossessingSurvivorAndDelayedDestroy_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.DelayedDestroyActor
	 */
	struct AScout_Character_BP_C_DelayedDestroyActor_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ClientTrackerMissed
	 */
	struct AScout_Character_BP_C_ClientTrackerMissed_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.BP_OnJumpPressed
	 */
	struct AScout_Character_BP_C_BP_OnJumpPressed_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.BP_OnJumpReleased
	 */
	struct AScout_Character_BP_C_BP_OnJumpReleased_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.CheckConsumeResource
	 */
	struct AScout_Character_BP_C_CheckConsumeResource_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ClientConsumeResource
	 */
	struct AScout_Character_BP_C_ClientConsumeResource_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.TickThrusterVFX
	 */
	struct AScout_Character_BP_C_TickThrusterVFX_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ClientTickAlertMode
	 */
	struct AScout_Character_BP_C_ClientTickAlertMode_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ClientDeactivateAlertMode
	 */
	struct AScout_Character_BP_C_ClientDeactivateAlertMode_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ClientRanOutOfStamina
	 */
	struct AScout_Character_BP_C_ClientRanOutOfStamina_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ClientScoutRangeCheck
	 */
	struct AScout_Character_BP_C_ClientScoutRangeCheck_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.CheckSubmerged
	 */
	struct AScout_Character_BP_C_CheckSubmerged_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ClientDashTick
	 */
	struct AScout_Character_BP_C_ClientDashTick_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ClientDashEnd
	 */
	struct AScout_Character_BP_C_ClientDashEnd_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ClientInitTrackerBeamFX
	 */
	struct AScout_Character_BP_C_ClientInitTrackerBeamFX_Params
	{
	public:
		float                                                      BeamDistance;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ValidTarget;                                             // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.UpdateTargetImpactVFX
	 */
	struct AScout_Character_BP_C_UpdateTargetImpactVFX_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.UpdateBeamVFX
	 */
	struct AScout_Character_BP_C_UpdateBeamVFX_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.StartImpactVFX
	 */
	struct AScout_Character_BP_C_StartImpactVFX_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ServerHandleOnStopFire
	 */
	struct AScout_Character_BP_C_ServerHandleOnStopFire_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ClientEndTrackerBeamFX
	 */
	struct AScout_Character_BP_C_ClientEndTrackerBeamFX_Params
	{
	public:
		bool                                                       ValidTargets;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YJ72[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ImpactDistance;                                          // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ApplyStaminaCost
	 */
	struct AScout_Character_BP_C_ApplyStaminaCost_Params
	{
	public:
		float                                                      amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.StaminaDrain
	 */
	struct AScout_Character_BP_C_StaminaDrain_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ClientLowStamina
	 */
	struct AScout_Character_BP_C_ClientLowStamina_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ReleasePossessingSurvivorAndLongDelayedDestroy
	 */
	struct AScout_Character_BP_C_ReleasePossessingSurvivorAndLongDelayedDestroy_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.TickStaminaMeter
	 */
	struct AScout_Character_BP_C_TickStaminaMeter_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.MULTI_InitAIStrafing
	 */
	struct AScout_Character_BP_C_MULTI_InitAIStrafing_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.MULTI_InitAINonStrafing
	 */
	struct AScout_Character_BP_C_MULTI_InitAINonStrafing_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.MULTI_AITargetAimingAtScout
	 */
	struct AScout_Character_BP_C_MULTI_AITargetAimingAtScout_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.MULTI_AITargetNoLongerAimingAtScout
	 */
	struct AScout_Character_BP_C_MULTI_AITargetNoLongerAimingAtScout_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ClientCheckClearExpiredDinoData
	 */
	struct AScout_Character_BP_C_ClientCheckClearExpiredDinoData_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.DisableAI
	 */
	struct AScout_Character_BP_C_DisableAI_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.MULTI_SpawnedFromProjectile
	 */
	struct AScout_Character_BP_C_MULTI_SpawnedFromProjectile_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.DelayedReleasePossessingSurvivorAndDelayedDestroy
	 */
	struct AScout_Character_BP_C_DelayedReleasePossessingSurvivorAndDelayedDestroy_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.UpdateScoutVisionBuff
	 */
	struct AScout_Character_BP_C_UpdateScoutVisionBuff_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.RequestRecallScout
	 */
	struct AScout_Character_BP_C_RequestRecallScout_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ClientHitTerrain
	 */
	struct AScout_Character_BP_C_ClientHitTerrain_Params
	{
	public:
		struct FVector                                             ImpactNormal;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.MULTI_SetStatsFromItem
	 */
	struct AScout_Character_BP_C_MULTI_SetStatsFromItem_Params
	{
	public:
		TArray<float>                                              Stats;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.OWNINGCLIENT_TrackerHitCharacter
	 */
	struct AScout_Character_BP_C_OWNINGCLIENT_TrackerHitCharacter_Params
	{	};

	/**
	 * Function Scout_Character_BP.Scout_Character_BP_C.ExecuteUbergraph_Scout_Character_BP
	 */
	struct AScout_Character_BP_C_ExecuteUbergraph_Scout_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
