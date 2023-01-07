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
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.Shortly After Detaching Prevent Reattach
	 */
	struct AEnforcer_Character_BP_C_ShortlyAfterDetachingPreventReattach_Params
	{	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.Shortly After Jumping From A Non Climbing State
	 */
	struct AEnforcer_Character_BP_C_ShortlyAfterJumpingFromANonClimbingState_Params
	{	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.Disable Wall Detach Input Shortly After Attach Input
	 */
	struct AEnforcer_Character_BP_C_DisableWallDetachInputShortlyAfterAttachInput_Params
	{	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.CanEnforcerRunSeek
	 */
	struct AEnforcer_Character_BP_C_CanEnforcerRunSeek_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.UpdateEnforcerSeeking
	 */
	struct AEnforcer_Character_BP_C_UpdateEnforcerSeeking_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.Client Tick Update Climber TPV_Camera Offset
	 */
	struct AEnforcer_Character_BP_C_ClientTickUpdateClimberTPV_CameraOffset_Params
	{	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsHostileTekShield
	 */
	struct AEnforcer_Character_BP_C_IsHostileTekShield_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsShield;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J74R[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.ProjectileArcSweep
	 */
	struct AEnforcer_Character_BP_C_ProjectileArcSweep_Params
	{
	public:
		struct FProjectileArc                                      Arc;                                                     // 0x0000(0x0030)  (Parm)
		struct FRotator                                            CapsuleRotation;                                         // 0x0030(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CapsuleRadius;                                           // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CapsuleHalfHeight;                                       // 0x0040(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      MaxArcLength;                                            // 0x0044(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class AActor*>                                      ActorsToIgnore;                                          // 0x0048(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		ECollisionChannel                                          CollisionChannel;                                        // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDrawDebug;                                              // 0x0059(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZUHH[0x2];                                   // 0x005A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DebugDrawDuration;                                       // 0x005C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          HitResult;                                               // 0x0060(0x0088)  (Parm, OutParm)
		struct FVector                                             EndLocation;                                             // 0x00E8(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      EndArcTime;                                              // 0x00F4(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x00F8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PVCP[0x3];                                   // 0x00F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.CanNonControlledClimberNotClimbingOverrideTransformInterpolation
	 */
	struct AEnforcer_Character_BP_C_CanNonControlledClimberNotClimbingOverrideTransformInterpolation_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOnRefreshColorization
	 */
	struct AEnforcer_Character_BP_C_BPOnRefreshColorization_Params
	{
	public:
		TArray<struct FLinearColor>                                Colors;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOnLethalDamage
	 */
	struct AEnforcer_Character_BP_C_BPOnLethalDamage_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_68XZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class AController*                                         Killer;                                                  // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bPreventDeath;                                           // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.ReceiveAnyDamage
	 */
	struct AEnforcer_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YHTV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.OnRep_WildAlertEnabled
	 */
	struct AEnforcer_Character_BP_C_OnRep_WildAlertEnabled_Params
	{	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetRiderVisibility
	 */
	struct AEnforcer_Character_BP_C_GetRiderVisibility_Params
	{
	public:
		class AShooterCharacter*                                   Rider;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsVisible;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.SetRiderVisibility
	 */
	struct AEnforcer_Character_BP_C_SetRiderVisibility_Params
	{
	public:
		class AShooterCharacter*                                   Rider;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Visible;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.SetupBlinkCooldowns
	 */
	struct AEnforcer_Character_BP_C_SetupBlinkCooldowns_Params
	{
	public:
		int32_t                                                    OverrideNumCooldowns;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPNotifyLevelUp
	 */
	struct AEnforcer_Character_BP_C_BPNotifyLevelUp_Params
	{
	public:
		int32_t                                                    ExtraCharacterLevel;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.On ClimberAttached
	 */
	struct AEnforcer_Character_BP_C_OnClimberAttached_Params
	{	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPUnstasis
	 */
	struct AEnforcer_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.BlueprintPlayDying
	 */
	struct AEnforcer_Character_BP_C_BlueprintPlayDying_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QW7H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class APawn*                                               InstigatingPawn;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPNotifySetRider
	 */
	struct AEnforcer_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.StopClimbing
	 */
	struct AEnforcer_Character_BP_C_StopClimbing_Params
	{
	public:
		bool                                                       resetRestoreToSeeking;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       skipDetach;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPGetRiderUnboardLocation
	 */
	struct AEnforcer_Character_BP_C_BPGetRiderUnboardLocation_Params
	{
	public:
		class APrimalCharacter*                                    RidingCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.BP_PreventMovementMode
	 */
	struct AEnforcer_Character_BP_C_BP_PreventMovementMode_Params
	{
	public:
		EMovementMode                                              NewMovementMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.HasEnoughStaminaToBlink
	 */
	struct AEnforcer_Character_BP_C_HasEnoughStaminaToBlink_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_788L[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.SweepTestBlinkClimbPoint
	 */
	struct AEnforcer_Character_BP_C_SweepTestBlinkClimbPoint_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Normal;                                                  // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            TargetRot;                                               // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DebugDrawTime;                                           // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsValid;                                                 // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsSurfaceNormalClimbable
	 */
	struct AEnforcer_Character_BP_C_IsSurfaceNormalClimbable_Params
	{
	public:
		struct FVector                                             SurfaceNormal;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShouldClimb;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1NVX[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetCustomSurfaceTraceDistance
	 */
	struct AEnforcer_Character_BP_C_GetCustomSurfaceTraceDistance_Params
	{
	public:
		int32_t                                                    TraceIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      customDistance;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsNormalClimbable
	 */
	struct AEnforcer_Character_BP_C_IsNormalClimbable_Params
	{
	public:
		struct FVector                                             Normal;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isAverageNormal;                                         // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_79TD[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClimbingIK_SetNewBlendspaceAxes
	 */
	struct AEnforcer_Character_BP_C_ClimbingIK_SetNewBlendspaceAxes_Params
	{	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetClimbingIK_BlendspaceAxes_Front
	 */
	struct AEnforcer_Character_BP_C_GetClimbingIK_BlendspaceAxes_Front_Params
	{
	public:
		struct FVector2D                                           axes;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent
	 */
	struct AEnforcer_Character_BP_C_BPGetHUDOverrideBuffProgressBarPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V4LA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetDesiredMoveDirection
	 */
	struct AEnforcer_Character_BP_C_GetDesiredMoveDirection_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.BlinkCooldownToString
	 */
	struct AEnforcer_Character_BP_C_BlinkCooldownToString_Params
	{
	public:
		double                                                     LastUsedTime;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Cooldown;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VYDD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReadyString;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor)
		class FString                                              returnvalue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPGrabDebugSnapshot
	 */
	struct AEnforcer_Character_BP_C_BPGrabDebugSnapshot_Params
	{
	public:
		TArray<struct FBlueprintVisualLogEntry>                    ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsBlinkOnCooldownNonPure
	 */
	struct AEnforcer_Character_BP_C_IsBlinkOnCooldownNonPure_Params
	{
	public:
		bool                                                       OnCooldown;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOnDinoCheat
	 */
	struct AEnforcer_Character_BP_C_BPOnDinoCheat_Params
	{
	public:
		class FName                                                CheatName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSetValue;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ASWO[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.Get CurrentClimbingVelocityMax
	 */
	struct AEnforcer_Character_BP_C_GetCurrentClimbingVelocityMax_Params
	{
	public:
		float                                                      Velocity;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.UseBlinkCooldown
	 */
	struct AEnforcer_Character_BP_C_UseBlinkCooldown_Params
	{
	public:
		bool                                                       TestOnly;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsBlinkOnCooldown
	 */
	struct AEnforcer_Character_BP_C_IsBlinkOnCooldown_Params
	{
	public:
		bool                                                       OnCooldown;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8ZDS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    FirstAvailableCooldown;                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPGetHUDElements
	 */
	struct AEnforcer_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPNotifyClearRider
	 */
	struct AEnforcer_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.Get Blink Ramp Delay Status
	 */
	struct AEnforcer_Character_BP_C_GetBlinkRampDelayStatus_Params
	{
	public:
		bool                                                       InDelay;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9O5W[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Time;                                                    // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Alpha;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.Get Controller Latency
	 */
	struct AEnforcer_Character_BP_C_GetControllerLatency_Params
	{
	public:
		float                                                      Ping;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientStartBlink
	 */
	struct AEnforcer_Character_BP_C_ClientStartBlink_Params
	{	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPModifyFOV
	 */
	struct AEnforcer_Character_BP_C_BPModifyFOV_Params
	{
	public:
		float                                                      FOVIn;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.K2_OnMovementModeChanged
	 */
	struct AEnforcer_Character_BP_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetClimbingMoveDirFromRotation
	 */
	struct AEnforcer_Character_BP_C_GetClimbingMoveDirFromRotation_Params
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             moveDir;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.Can Receive Climbing Input Strafe
	 */
	struct AEnforcer_Character_BP_C_CanReceiveClimbingInputStrafe_Params
	{
	public:
		bool                                                       returnvalue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FPU8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.ReceiveBeginPlay
	 */
	struct AEnforcer_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.IsBlinkInProgress
	 */
	struct AEnforcer_Character_BP_C_IsBlinkInProgress_Params
	{
	public:
		bool                                                       InBlinkDelay;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsBlinking;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.Check For Prevent Stop Climbing
	 */
	struct AEnforcer_Character_BP_C_CheckForPreventStopClimbing_Params
	{
	public:
		TArray<bool>                                               traceHitsArray;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    numValidHits;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    numTraces;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       allowClimbing;                                           // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.GetCurrentCameraLoc
	 */
	struct AEnforcer_Character_BP_C_GetCurrentCameraLoc_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOverrideCameraViewTarget
	 */
	struct AEnforcer_Character_BP_C_BPOverrideCameraViewTarget_Params
	{
	public:
		class FName                                                CurrentCameraMode;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             DesiredCameraLocation;                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            DesiredCameraRotation;                                   // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DesiredFOV;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraLocation;                                 // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SLGZ[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CameraLocation;                                          // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraRotation;                                 // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4POR[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            CameraRotation;                                          // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraFOV;                                      // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BM1Y[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CameraFOV;                                               // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientSetBlinkStatus
	 */
	struct AEnforcer_Character_BP_C_ClientSetBlinkStatus_Params
	{
	public:
		bool                                                       BlinkInProgress;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_USPD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.CalcBlinkTarget
	 */
	struct AEnforcer_Character_BP_C_CalcBlinkTarget_Params
	{
	public:
		struct FProjectileArc                                      Arc;                                                     // 0x0000(0x0030)  (Parm)
		bool                                                       ForVFX;                                                  // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EE7O[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DebugDrawDuration;                                       // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FoundValidTarget;                                        // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsAirTarget;                                             // 0x0039(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsClimbTarget;                                           // 0x003A(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z1YO[0x1];                                   // 0x003B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x003C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x0048(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             TargetNormal;                                            // 0x0054(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ArcTime;                                                 // 0x0060(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PFAU[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitResult;                                               // 0x0068(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.Update Blink Target VFX Location
	 */
	struct AEnforcer_Character_BP_C_UpdateBlinkTargetVFXLocation_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsInvalid;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_78I9[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            WorldRotation;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SAT5[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitResult;                                               // 0x0020(0x0088)  (Parm)
		struct FVector                                             SurfaceNormal;                                           // 0x00A8(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct AEnforcer_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GFLV[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct AEnforcer_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.Get Vertical View Angle
	 */
	struct AEnforcer_Character_BP_C_GetVerticalViewAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.ReceiveTick
	 */
	struct AEnforcer_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.Do Blink
	 */
	struct AEnforcer_Character_BP_C_DoBlink_Params
	{
	public:
		struct FVector                                             BlinkLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            BlinkRotation;                                           // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       StartClimbing;                                           // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0MRT[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OrigLocation;                                            // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            OrigRotation;                                            // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct AEnforcer_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.UserConstructionScript
	 */
	struct AEnforcer_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.ServerRequestBlink
	 */
	struct AEnforcer_Character_BP_C_ServerRequestBlink_Params
	{
	public:
		struct FVector                                             BlinkStartLocation;                                      // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             BlinkDirection;                                          // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             RequestedDestination;                                    // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            RequestedRotation;                                       // 0x0024(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ClientVerticalViewAngle;                                 // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.MulticastOnBlinkCompleted
	 */
	struct AEnforcer_Character_BP_C_MulticastOnBlinkCompleted_Params
	{
	public:
		struct FVector                                             OrigLocation;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            OrigRotation;                                            // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             BlinkLocation;                                           // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            BlinkRotation;                                           // 0x0024(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       startedClimbing;                                         // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.MulticastBlinkAcknowledged
	 */
	struct AEnforcer_Character_BP_C_MulticastBlinkAcknowledged_Params
	{	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.BP_OnJumpPressed
	 */
	struct AEnforcer_Character_BP_C_BP_OnJumpPressed_Params
	{	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.BP_OnJumpReleased
	 */
	struct AEnforcer_Character_BP_C_BP_OnJumpReleased_Params
	{	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.ServerUpdateMoveDir
	 */
	struct AEnforcer_Character_BP_C_ServerUpdateMoveDir_Params
	{
	public:
		float                                                      Forward;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Right;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.UpdateMoveDir
	 */
	struct AEnforcer_Character_BP_C_UpdateMoveDir_Params
	{	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.DrawDebugDirection
	 */
	struct AEnforcer_Character_BP_C_DrawDebugDirection_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ArrowSize;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Duration;                                                // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientDrawDebugDirection
	 */
	struct AEnforcer_Character_BP_C_ClientDrawDebugDirection_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ArrowSize;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Duration;                                                // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.MultiBlinkFailed
	 */
	struct AEnforcer_Character_BP_C_MultiBlinkFailed_Params
	{	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.MultiOnClimbDetach
	 */
	struct AEnforcer_Character_BP_C_MultiOnClimbDetach_Params
	{	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.MulticastUpdateDesiredMoveDirection
	 */
	struct AEnforcer_Character_BP_C_MulticastUpdateDesiredMoveDirection_Params
	{
	public:
		struct FVector                                             Dir;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.OnBlastAttack
	 */
	struct AEnforcer_Character_BP_C_OnBlastAttack_Params
	{	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientOnBlastAttack
	 */
	struct AEnforcer_Character_BP_C_ClientOnBlastAttack_Params
	{	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.ServerRequestClimbDetatchWithJump
	 */
	struct AEnforcer_Character_BP_C_ServerRequestClimbDetatchWithJump_Params
	{	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.OnWalkableGroundFoundWhileClimbing
	 */
	struct AEnforcer_Character_BP_C_OnWalkableGroundFoundWhileClimbing_Params
	{	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.FixBlinkMaterials
	 */
	struct AEnforcer_Character_BP_C_FixBlinkMaterials_Params
	{	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.MultiSetBlinkValue
	 */
	struct AEnforcer_Character_BP_C_MultiSetBlinkValue_Params
	{
	public:
		bool                                                       Forwards;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VJC2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Alpha;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsCheatOverride;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.MultiOnClimberAttached
	 */
	struct AEnforcer_Character_BP_C_MultiOnClimberAttached_Params
	{	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.ClientUpdateBlinkCooldownTimes
	 */
	struct AEnforcer_Character_BP_C_ClientUpdateBlinkCooldownTimes_Params
	{
	public:
		TArray<double>                                             CooldownTimes;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.SetupBlinkCooldowns_Initial
	 */
	struct AEnforcer_Character_BP_C_SetupBlinkCooldowns_Initial_Params
	{	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.BPOnDinoStartled
	 */
	struct AEnforcer_Character_BP_C_BPOnDinoStartled_Params
	{
	public:
		class UAnimMontage*                                        StartledAnimPlayed;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromAIController;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Enforcer_Character_BP.Enforcer_Character_BP_C.ExecuteUbergraph_Enforcer_Character_BP
	 */
	struct AEnforcer_Character_BP_C_ExecuteUbergraph_Enforcer_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
