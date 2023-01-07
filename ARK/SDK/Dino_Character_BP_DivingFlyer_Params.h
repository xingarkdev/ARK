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
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.OnDiveCrash
	 */
	struct ADino_Character_BP_DivingFlyer_C_OnDiveCrash_Params
	{
	public:
		class AActor*                                              HitActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USceneComponent*                                     HitComp;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          HitResult;                                               // 0x0010(0x0088)  (Parm)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPForceTurretFastTargeting
	 */
	struct ADino_Character_BP_DivingFlyer_C_BPForceTurretFastTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ReturnDivingFlyerToZeroPitchRotation
	 */
	struct ADino_Character_BP_DivingFlyer_C_ReturnDivingFlyerToZeroPitchRotation_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ReduceDiverStamina
	 */
	struct ADino_Character_BP_DivingFlyer_C_ReduceDiverStamina_Params
	{
	public:
		float                                                      cost;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BP_OnStartLandingNotify
	 */
	struct ADino_Character_BP_DivingFlyer_C_BP_OnStartLandingNotify_Params
	{	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Diving Velocity Mult Ratio
	 */
	struct ADino_Character_BP_DivingFlyer_C_GetDivingVelocityMultRatio_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Flyer Dive Velocity Max
	 */
	struct ADino_Character_BP_DivingFlyer_C_GetFlyerDiveVelocityMax_Params
	{
	public:
		float                                                      maxVelocity;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Flyer Dive Velocity Ratio
	 */
	struct ADino_Character_BP_DivingFlyer_C_GetFlyerDiveVelocityRatio_Params
	{
	public:
		float                                                      Ratio;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Has Diving Momentum
	 */
	struct ADino_Character_BP_DivingFlyer_C_HasDivingMomentum_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.UpdateDivingFX
	 */
	struct ADino_Character_BP_DivingFlyer_C_UpdateDivingFX_Params
	{	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ResetDivingVars
	 */
	struct ADino_Character_BP_DivingFlyer_C_ResetDivingVars_Params
	{	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Is Diver Moving Forward
	 */
	struct ADino_Character_BP_DivingFlyer_C_IsDiverMovingForward_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QQW8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.GetDefaultMaxFlySpeed
	 */
	struct ADino_Character_BP_DivingFlyer_C_GetDefaultMaxFlySpeed_Params
	{
	public:
		float                                                      MaxFlySpeed;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Diving Required VelocityToStart
	 */
	struct ADino_Character_BP_DivingFlyer_C_GetDivingRequiredVelocityToStart_Params
	{
	public:
		float                                                      _float_;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.HasEnoughStaminaToDive
	 */
	struct ADino_Character_BP_DivingFlyer_C_HasEnoughStaminaToDive_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OR9F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BP_OnSetRunning
	 */
	struct ADino_Character_BP_DivingFlyer_C_BP_OnSetRunning_Params
	{
	public:
		bool                                                       bNewIsRunning;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BP_GetCustomModifier_RotationRate
	 */
	struct ADino_Character_BP_DivingFlyer_C_BP_GetCustomModifier_RotationRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BP_GetCustomModifier_MaxSpeed
	 */
	struct ADino_Character_BP_DivingFlyer_C_BP_GetCustomModifier_MaxSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPNotifyClearRider
	 */
	struct ADino_Character_BP_DivingFlyer_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.IsDiving
	 */
	struct ADino_Character_BP_DivingFlyer_C_IsDiving_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Has Diving Momentum_Pure
	 */
	struct ADino_Character_BP_DivingFlyer_C_HasDivingMomentum_Pure_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPOnMovementModeChangedNotify
	 */
	struct ADino_Character_BP_DivingFlyer_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R4QM[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Flyer Dive Velocity Ratio_Pure
	 */
	struct ADino_Character_BP_DivingFlyer_C_GetFlyerDiveVelocityRatio_Pure_Params
	{
	public:
		float                                                      Ratio;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Flyer Dive Velocity MaxPure
	 */
	struct ADino_Character_BP_DivingFlyer_C_GetFlyerDiveVelocityMaxPure_Params
	{
	public:
		float                                                      maxVelocity;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.CanFlyerDive
	 */
	struct ADino_Character_BP_DivingFlyer_C_CanFlyerDive_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q2I9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.AllowDiving
	 */
	struct ADino_Character_BP_DivingFlyer_C_AllowDiving_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YOJW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Diving_Tick
	 */
	struct ADino_Character_BP_DivingFlyer_C_Diving_Tick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Diving_Stop
	 */
	struct ADino_Character_BP_DivingFlyer_C_Diving_Stop_Params
	{	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Diving_Start
	 */
	struct ADino_Character_BP_DivingFlyer_C_Diving_Start_Params
	{	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Set Is Diving
	 */
	struct ADino_Character_BP_DivingFlyer_C_SetIsDiving_Params
	{
	public:
		bool                                                       newDiving;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ForceSet;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.OnRep_bIsDiving
	 */
	struct ADino_Character_BP_DivingFlyer_C_OnRep_bIsDiving_Params
	{	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Interp Diver Mesh
	 */
	struct ADino_Character_BP_DivingFlyer_C_InterpDiverMesh_Params
	{	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Diving Velocity Mult Ratio_Pure
	 */
	struct ADino_Character_BP_DivingFlyer_C_GetDivingVelocityMultRatio_Pure_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPNotifySetRider
	 */
	struct ADino_Character_BP_DivingFlyer_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPTimerNonDedicated
	 */
	struct ADino_Character_BP_DivingFlyer_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get DefaultDivingFlyer
	 */
	struct ADino_Character_BP_DivingFlyer_C_GetDefaultDivingFlyer_Params
	{
	public:
		class ADino_Character_BP_DivingFlyer_C*                    Default;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPModifyFOV
	 */
	struct ADino_Character_BP_DivingFlyer_C_BPModifyFOV_Params
	{
	public:
		float                                                      FOVIn;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ReceiveHit
	 */
	struct ADino_Character_BP_DivingFlyer_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RG0E[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.HasLocallyCarriedPlayer
	 */
	struct ADino_Character_BP_DivingFlyer_C_HasLocallyCarriedPlayer_Params
	{
	public:
		bool                                                       bLocallyCarried;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X0R7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.DebugDiveVals
	 */
	struct ADino_Character_BP_DivingFlyer_C_DebugDiveVals_Params
	{	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.GetCurrentAcceleration
	 */
	struct ADino_Character_BP_DivingFlyer_C_GetCurrentAcceleration_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_013J[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.UserConstructionScript
	 */
	struct ADino_Character_BP_DivingFlyer_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.AbortDive
	 */
	struct ADino_Character_BP_DivingFlyer_C_AbortDive_Params
	{
	public:
		bool                                                       bPlayAbortAnim;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.DiveBomb
	 */
	struct ADino_Character_BP_DivingFlyer_C_DiveBomb_Params
	{	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.OwningClientDiveBombCameraShake
	 */
	struct ADino_Character_BP_DivingFlyer_C_OwningClientDiveBombCameraShake_Params
	{
	public:
		float                                                      Intensity;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Multi_LandFromDive
	 */
	struct ADino_Character_BP_DivingFlyer_C_Multi_LandFromDive_Params
	{
	public:
		struct FRotator                                            MeshRotation;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Server_SetIsDiving
	 */
	struct ADino_Character_BP_DivingFlyer_C_Server_SetIsDiving_Params
	{
	public:
		bool                                                       newDiving;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ReceiveTick
	 */
	struct ADino_Character_BP_DivingFlyer_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ExecuteUbergraph_Dino_Character_BP_DivingFlyer
	 */
	struct ADino_Character_BP_DivingFlyer_C_ExecuteUbergraph_Dino_Character_BP_DivingFlyer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
