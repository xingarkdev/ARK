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
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPIsHidden
	 */
	struct ARockDrake_Character_BP_C_BPIsHidden_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyIfPassengerLaunchShoulderMount
	 */
	struct ARockDrake_Character_BP_C_BPNotifyIfPassengerLaunchShoulderMount_Params
	{
	public:
		class APrimalCharacter*                                    launchedCharacter;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPGetAddForwardVelocityOnJump
	 */
	struct ARockDrake_Character_BP_C_BPGetAddForwardVelocityOnJump_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPDinoARKDownloadedBegin
	 */
	struct ARockDrake_Character_BP_C_BPDinoARKDownloadedBegin_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReceiveDestroyed
	 */
	struct ARockDrake_Character_BP_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.CanClimberStopNonDediTick_Controlled
	 */
	struct ARockDrake_Character_BP_C_CanClimberStopNonDediTick_Controlled_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.OnJumped
	 */
	struct ARockDrake_Character_BP_C_OnJumped_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Climber_AI_ClimbingCanAttack
	 */
	struct ARockDrake_Character_BP_C_Climber_AI_ClimbingCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0BOY[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPOnStartJump
	 */
	struct ARockDrake_Character_BP_C_BPOnStartJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Climber_AI_CheckForAttackWhileClimbing
	 */
	struct ARockDrake_Character_BP_C_Climber_AI_CheckForAttackWhileClimbing_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPHandleRightShoulderButton
	 */
	struct ARockDrake_Character_BP_C_BPHandleRightShoulderButton_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberAI_UpdateHasTargetWhileClimbing
	 */
	struct ARockDrake_Character_BP_C_ClimberAI_UpdateHasTargetWhileClimbing_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPCharacterSleeped
	 */
	struct ARockDrake_Character_BP_C_BPCharacterSleeped_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.HideSaddleMesh
	 */
	struct ARockDrake_Character_BP_C_HideSaddleMesh_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyInventoryItemChange
	 */
	struct ARockDrake_Character_BP_C_BPNotifyInventoryItemChange_Params
	{
	public:
		bool                                                       bIsItemAdd;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EQGQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalItem*                                         theItem;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipItem;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V9EW[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.SetAllRidersHidden
	 */
	struct ARockDrake_Character_BP_C_SetAllRidersHidden_Params
	{
	public:
		bool                                                       bNewHidden;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L9EA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct ARockDrake_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPModifyFOV
	 */
	struct ARockDrake_Character_BP_C_BPModifyFOV_Params
	{
	public:
		float                                                      FOVIn;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct ARockDrake_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberTick_Server
	 */
	struct ARockDrake_Character_BP_C_ClimberTick_Server_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrakeTick_Gliding_BraceForImpact
	 */
	struct ARockDrake_Character_BP_C_RockDrakeTick_Gliding_BraceForImpact_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrakeTick_Server
	 */
	struct ARockDrake_Character_BP_C_RockDrakeTick_Server_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrakeTick_NonDedi
	 */
	struct ARockDrake_Character_BP_C_RockDrakeTick_NonDedi_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyAddPassenger
	 */
	struct ARockDrake_Character_BP_C_BPNotifyAddPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyClearPassenger
	 */
	struct ARockDrake_Character_BP_C_BPNotifyClearPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_REUT[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberTick_NonDedi
	 */
	struct ARockDrake_Character_BP_C_ClimberTick_NonDedi_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrake_AI_CheckForPounce
	 */
	struct ARockDrake_Character_BP_C_RockDrake_AI_CheckForPounce_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CH5J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             pounceDir;                                               // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BeginPounceAnims
	 */
	struct ARockDrake_Character_BP_C_BeginPounceAnims_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.AllowTraceForPounce
	 */
	struct ARockDrake_Character_BP_C_AllowTraceForPounce_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HEHT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdatePounceTargetLocation
	 */
	struct ARockDrake_Character_BP_C_UpdatePounceTargetLocation_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnSetDeath
	 */
	struct ARockDrake_Character_BP_C_BP_OnSetDeath_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.TraceForPounce
	 */
	struct ARockDrake_Character_BP_C_TraceForPounce_Params
	{
	public:
		bool                                                       foundValidLocation;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5G5I[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             validLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateServerClimberByClimbingIndex
	 */
	struct ARockDrake_Character_BP_C_UpdateServerClimberByClimbingIndex_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateNonControlledClimber
	 */
	struct ARockDrake_Character_BP_C_UpdateNonControlledClimber_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPBecomeAdult
	 */
	struct ARockDrake_Character_BP_C_BPBecomeAdult_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPBecomeBaby
	 */
	struct ARockDrake_Character_BP_C_BPBecomeBaby_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.CanClimberStopNonDediTick_NonControlled
	 */
	struct ARockDrake_Character_BP_C_CanClimberStopNonDediTick_NonControlled_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.SpawnNestEgg
	 */
	struct ARockDrake_Character_BP_C_SpawnNestEgg_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.CheckForSpawnEggs
	 */
	struct ARockDrake_Character_BP_C_CheckForSpawnEggs_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.CleanAllowTargetWhenUsingCamoArray
	 */
	struct ARockDrake_Character_BP_C_CleanAllowTargetWhenUsingCamoArray_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnTargetedByTamedOrder
	 */
	struct ARockDrake_Character_BP_C_BP_OnTargetedByTamedOrder_Params
	{
	public:
		class APrimalCharacter*                                    OrderingCharacter;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalDinoCharacter*                                AttackingDino;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForced;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4CE5[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetCorrectWallJumpAnim
	 */
	struct ARockDrake_Character_BP_C_GetCorrectWallJumpAnim_Params
	{
	public:
		struct FVector                                             wallJumpVelocity;                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NM2M[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        Anim;                                                    // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Get CorrectClimber Rotation
	 */
	struct ARockDrake_Character_BP_C_GetCorrectClimberRotation_Params
	{
	public:
		bool                                                       updateRotation;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2U34[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            Rotation;                                                // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.ShouldAlignWithVelocityOnImpact
	 */
	struct ARockDrake_Character_BP_C_ShouldAlignWithVelocityOnImpact_Params
	{
	public:
		struct FHitResult                                          ImpactHit;                                               // 0x0000(0x0088)  (Parm)
		bool                                                       Result;                                                  // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I1BN[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.ServerTick_Override
	 */
	struct ARockDrake_Character_BP_C_ServerTick_Override_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.OnWallJump
	 */
	struct ARockDrake_Character_BP_C_OnWallJump_Params
	{
	public:
		struct FVector                                             wallJumpVelocity;                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.OnStartSeeking
	 */
	struct ARockDrake_Character_BP_C_OnStartSeeking_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReceiveHit
	 */
	struct ARockDrake_Character_BP_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2Y6P[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ARockDrake_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Get Rock Drake Anim BP
	 */
	struct ARockDrake_Character_BP_C_GetRockDrakeAnimBP_Params
	{
	public:
		class URockDrake_AnimBlueprint_C*                          animBP;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.SpawnGlideImpactVFX
	 */
	struct ARockDrake_Character_BP_C_SpawnGlideImpactVFX_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetCurrentGlidingRotationRateMult
	 */
	struct ARockDrake_Character_BP_C_GetCurrentGlidingRotationRateMult_Params
	{
	public:
		float                                                      mult;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct ARockDrake_Character_BP_C_BlueprintAdjustOutputDamage_Params
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
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Is Rock Drake Gliding
	 */
	struct ARockDrake_Character_BP_C_IsRockDrakeGliding_Params
	{
	public:
		bool                                                       checkPrevious;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Stop All Climber Logic
	 */
	struct ARockDrake_Character_BP_C_StopAllClimberLogic_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.PounceStart
	 */
	struct ARockDrake_Character_BP_C_PounceStart_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Climber_AI_OnSetTarget
	 */
	struct ARockDrake_Character_BP_C_Climber_AI_OnSetTarget_Params
	{
	public:
		class AActor*                                              NewTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnRiderChangeWeapons
	 */
	struct ARockDrake_Character_BP_C_BP_OnRiderChangeWeapons_Params
	{
	public:
		class AShooterCharacter*                                   theRider;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalItem*                                         newWeapon;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberOn Server Run Released
	 */
	struct ARockDrake_Character_BP_C_ClimberOnServerRunReleased_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.ShouldRockDrakeGlideFall
	 */
	struct ARockDrake_Character_BP_C_ShouldRockDrakeGlideFall_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MNXL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberStopSeeking
	 */
	struct ARockDrake_Character_BP_C_ClimberStopSeeking_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberStartSeeking
	 */
	struct ARockDrake_Character_BP_C_ClimberStartSeeking_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.IsRockDrakeGliding_Pure
	 */
	struct ARockDrake_Character_BP_C_IsRockDrakeGliding_Pure_Params
	{
	public:
		bool                                                       checkPrev;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Update Gliding_Feathers
	 */
	struct ARockDrake_Character_BP_C_UpdateGliding_Feathers_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Update Gliding_VFX
	 */
	struct ARockDrake_Character_BP_C_UpdateGliding_VFX_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateGliding_Audio
	 */
	struct ARockDrake_Character_BP_C_UpdateGliding_Audio_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateGlidingFX
	 */
	struct ARockDrake_Character_BP_C_UpdateGlidingFX_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Climber_OnServerRunPressed
	 */
	struct ARockDrake_Character_BP_C_Climber_OnServerRunPressed_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClientTick_UpdateClimberTarget FOV
	 */
	struct ARockDrake_Character_BP_C_ClientTick_UpdateClimberTargetFOV_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Replicate Index Update Target TPV_Camera Offset
	 */
	struct ARockDrake_Character_BP_C_ReplicateIndexUpdateTargetTPV_CameraOffset_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.AddRiderToCamoFadeQueue
	 */
	struct ARockDrake_Character_BP_C_AddRiderToCamoFadeQueue_Params
	{
	public:
		class AShooterCharacter*                                   Rider;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       EnterCamo;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInstant;                                                // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VYGG[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.ActivateRiderCamoParticles
	 */
	struct ARockDrake_Character_BP_C_ActivateRiderCamoParticles_Params
	{
	public:
		bool                                                       EnterCamo;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GXCJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   specificRider;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifySetRider
	 */
	struct ARockDrake_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyClearRider
	 */
	struct ARockDrake_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReceiveAnyDamage
	 */
	struct ARockDrake_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S08J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetGlidingSpeedRatio_
	 */
	struct ARockDrake_Character_BP_C_GetGlidingSpeedRatio__Params
	{
	public:
		float                                                      Ratio;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPUnstasis
	 */
	struct ARockDrake_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.InitRockDrake
	 */
	struct ARockDrake_Character_BP_C_InitRockDrake_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetGlidingSpeedRatio_Pure
	 */
	struct ARockDrake_Character_BP_C_GetGlidingSpeedRatio_Pure_Params
	{
	public:
		float                                                      Ratio;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_GetCustomModifier_RotationRate
	 */
	struct ARockDrake_Character_BP_C_BP_GetCustomModifier_RotationRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Replicate Index Update Non Dedi Climber
	 */
	struct ARockDrake_Character_BP_C_ReplicateIndexUpdateNonDediClimber_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Replicate Index Update Server And Client Climber
	 */
	struct ARockDrake_Character_BP_C_ReplicateIndexUpdateServerAndClientClimber_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateClimberMovementMode
	 */
	struct ARockDrake_Character_BP_C_UpdateClimberMovementMode_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPOnMovementModeChangedNotify
	 */
	struct ARockDrake_Character_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetRockDrakeStateOverrideIndex
	 */
	struct ARockDrake_Character_BP_C_GetRockDrakeStateOverrideIndex_Params
	{
	public:
		E_DinoClimberState_RockDrake                               State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              index;                                                   // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetCorrectSurfaceTraceDistance
	 */
	struct ARockDrake_Character_BP_C_GetCorrectSurfaceTraceDistance_Params
	{
	public:
		bool                                                       isForRetry;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O9FW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      traceDist;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Tick Force Forward Input
	 */
	struct ARockDrake_Character_BP_C_TickForceForwardInput_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 */
	struct ARockDrake_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.GlideStart
	 */
	struct ARockDrake_Character_BP_C_GlideStart_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.PrepareToPounce
	 */
	struct ARockDrake_Character_BP_C_PrepareToPounce_Params
	{
	public:
		struct FVector                                             pounceDir;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Net Set Climber State
	 */
	struct ARockDrake_Character_BP_C_NetSetClimberState_Params
	{
	public:
		unsigned char                                              newStateIndex;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_750G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.SetCamoActive
	 */
	struct ARockDrake_Character_BP_C_SetCamoActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.CanGlide
	 */
	struct ARockDrake_Character_BP_C_CanGlide_Params
	{
	public:
		bool                                                       isToStart;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.CanPounce
	 */
	struct ARockDrake_Character_BP_C_CanPounce_Params
	{
	public:
		bool                                                       isToStart;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.ServerTick_Gliding
	 */
	struct ARockDrake_Character_BP_C_ServerTick_Gliding_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.ServerTick_Pouncing
	 */
	struct ARockDrake_Character_BP_C_ServerTick_Pouncing_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateClimberStateByClimbingIndex
	 */
	struct ARockDrake_Character_BP_C_UpdateClimberStateByClimbingIndex_Params
	{
	public:
		unsigned char                                              newIndex;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.ShouldClimberDraw CrosshairWhileClimbing
	 */
	struct ARockDrake_Character_BP_C_ShouldClimberDrawCrosshairWhileClimbing_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.OnRep_bIsUsingCamo
	 */
	struct ARockDrake_Character_BP_C_OnRep_bIsUsingCamo_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Can Use Camo
	 */
	struct ARockDrake_Character_BP_C_CanUseCamo_Params
	{
	public:
		bool                                                       isForStart;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DFXX[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.NetSetUseCamo
	 */
	struct ARockDrake_Character_BP_C_NetSetUseCamo_Params
	{
	public:
		bool                                                       newUse;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GLMX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.IsNormalClimbable
	 */
	struct ARockDrake_Character_BP_C_IsNormalClimbable_Params
	{
	public:
		struct FVector                                             Normal;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isAverageNormal;                                         // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Get Correct Surface Trace OffsetTransforms
	 */
	struct ARockDrake_Character_BP_C_GetCorrectSurfaceTraceOffsetTransforms_Params
	{
	public:
		bool                                                       overrideUseMap;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TC51[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<bool>                                               newUseMp;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FTransform>                                  offsetTransforms;                                        // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor)
		TArray<int32_t>                                            TraceIndeces;                                            // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Check For Prevent Stop Climbing
	 */
	struct ARockDrake_Character_BP_C_CheckForPreventStopClimbing_Params
	{
	public:
		TArray<bool>                                               traceHitsArray;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    numValidHits;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    numTraces;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       allowClimbing;                                           // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BlueprintCanAttack
	 */
	struct ARockDrake_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YPFF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct ARockDrake_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.UserConstructionScript
	 */
	struct ARockDrake_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.FadeCamo_RockDrake__FinishedFunc
	 */
	struct ARockDrake_Character_BP_C_FadeCamo_RockDrake__FinishedFunc_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.FadeCamo_RockDrake__UpdateFunc
	 */
	struct ARockDrake_Character_BP_C_FadeCamo_RockDrake__UpdateFunc_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.FadeToInvisible_Rider__FinishedFunc
	 */
	struct ARockDrake_Character_BP_C_FadeToInvisible_Rider__FinishedFunc_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.FadeToInvisible_Rider__UpdateFunc
	 */
	struct ARockDrake_Character_BP_C_FadeToInvisible_Rider__UpdateFunc_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_126
	 */
	struct ARockDrake_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_126_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnJumpPressed
	 */
	struct ARockDrake_Character_BP_C_BP_OnJumpPressed_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnJumpReleased
	 */
	struct ARockDrake_Character_BP_C_BP_OnJumpReleased_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_GlideStart
	 */
	struct ARockDrake_Character_BP_C_Multi_GlideStart_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      newSpeedMult;                                            // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_PounceStart
	 */
	struct ARockDrake_Character_BP_C_Multi_PounceStart_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isFromClimbing;                                          // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Play_FadeCamo_RockDrake
	 */
	struct ARockDrake_Character_BP_C_Play_FadeCamo_RockDrake_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Reverse_FadeCamo_RockDrake
	 */
	struct ARockDrake_Character_BP_C_Reverse_FadeCamo_RockDrake_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReceiveBeginPlay
	 */
	struct ARockDrake_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.SetNewTime_FadeCamo_RockDrake
	 */
	struct ARockDrake_Character_BP_C_SetNewTime_FadeCamo_RockDrake_Params
	{
	public:
		float                                                      NewTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_SetNewTime_FadeCamo_RockDrake
	 */
	struct ARockDrake_Character_BP_C_Multi_SetNewTime_FadeCamo_RockDrake_Params
	{
	public:
		float                                                      NewTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.SetNewTime_FadeCamo_Rider
	 */
	struct ARockDrake_Character_BP_C_SetNewTime_FadeCamo_Rider_Params
	{
	public:
		float                                                      NewTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReverseFromEnd_FadeCamo_Rider
	 */
	struct ARockDrake_Character_BP_C_ReverseFromEnd_FadeCamo_Rider_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.PlayFromStart_FadeCamo_Rider
	 */
	struct ARockDrake_Character_BP_C_PlayFromStart_FadeCamo_Rider_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_OnRiderEquipWeapon
	 */
	struct ARockDrake_Character_BP_C_Multi_OnRiderEquipWeapon_Params
	{
	public:
		class AShooterCharacter*                                   theRider;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.InitRockDrake_Event
	 */
	struct ARockDrake_Character_BP_C_InitRockDrake_Event_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.InitRockDrake_NextTick
	 */
	struct ARockDrake_Character_BP_C_InitRockDrake_NextTick_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_HardSetCamoActive
	 */
	struct ARockDrake_Character_BP_C_Multi_HardSetCamoActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.PounceAfterDelay
	 */
	struct ARockDrake_Character_BP_C_PounceAfterDelay_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Event_CleanAllowTargetWhenUsingCamoArray
	 */
	struct ARockDrake_Character_BP_C_Event_CleanAllowTargetWhenUsingCamoArray_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Event_RestartCheckTargetArrayTimer
	 */
	struct ARockDrake_Character_BP_C_Event_RestartCheckTargetArrayTimer_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.TrySpawnEggAfterDelay
	 */
	struct ARockDrake_Character_BP_C_TrySpawnEggAfterDelay_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Server_RequestSetJumpMovementMode
	 */
	struct ARockDrake_Character_BP_C_Server_RequestSetJumpMovementMode_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.ResetIsInAirFromJumpAfterDelay
	 */
	struct ARockDrake_Character_BP_C_ResetIsInAirFromJumpAfterDelay_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.OwningClient_SyncAllowPouncing
	 */
	struct ARockDrake_Character_BP_C_OwningClient_SyncAllowPouncing_Params
	{
	public:
		bool                                                       Newval;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Server_SyncHasValidPounceTarget
	 */
	struct ARockDrake_Character_BP_C_Server_SyncHasValidPounceTarget_Params
	{
	public:
		bool                                                       Newval;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WXTB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             NewTargetLocation;                                       // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrake_AI_AnticipatePounce
	 */
	struct ARockDrake_Character_BP_C_RockDrake_AI_AnticipatePounce_Params
	{
	public:
		bool                                                       isFromSetTarget;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.CheckForGlideStartTimer
	 */
	struct ARockDrake_Character_BP_C_CheckForGlideStartTimer_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.CheckForGlideStartTimer_EnableTick
	 */
	struct ARockDrake_Character_BP_C_CheckForGlideStartTimer_EnableTick_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.CheckForGlideStartTimer_StopTick
	 */
	struct ARockDrake_Character_BP_C_CheckForGlideStartTimer_StopTick_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_PlayFade
	 */
	struct ARockDrake_Character_BP_C_Multi_PlayFade_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.Server_RequestWaterJump
	 */
	struct ARockDrake_Character_BP_C_Server_RequestWaterJump_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.WaterJump
	 */
	struct ARockDrake_Character_BP_C_WaterJump_Params
	{	};

	/**
	 * Function RockDrake_Character_BP.RockDrake_Character_BP_C.ExecuteUbergraph_RockDrake_Character_BP
	 */
	struct ARockDrake_Character_BP_C_ExecuteUbergraph_RockDrake_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
