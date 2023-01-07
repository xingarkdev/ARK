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
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnClimberFinishedAttaching
	 */
	struct ADino_Character_BP_Climber_C_OnClimberFinishedAttaching_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimbingTraceHitResultValid
	 */
	struct ADino_Character_BP_Climber_C_IsClimbingTraceHitResultValid_Params
	{
	public:
		bool                                                       bValidHit;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G0P8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm)
		struct FVector                                             TraceStart;                                              // 0x0090(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             TraceEnd;                                                // 0x009C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    TraceIndex;                                              // 0x00A8(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    TraceRetryNum;                                           // 0x00AC(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberOverrideRetriedTraceResult
	 */
	struct ADino_Character_BP_Climber_C_CanClimberOverrideRetriedTraceResult_Params
	{
	public:
		struct FHitResult                                          WithHit;                                                 // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		bool                                                       bResult;                                                 // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ULUP[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.AdjustClimbTraceTransform
	 */
	struct ADino_Character_BP_Climber_C_AdjustClimbTraceTransform_Params
	{
	public:
		class FName                                                WithSocketName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XO9Z[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          WithTraceTransform;                                      // 0x0010(0x0030)  (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FTransform                                          climberTransform;                                        // 0x0040(0x0030)  (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FTransform                                          AdjustedTransform;                                       // 0x0070(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Tick_SimulateSeekingBetweenFrames
	 */
	struct ADino_Character_BP_Climber_C_Tick_SimulateSeekingBetweenFrames_Params
	{
	public:
		bool                                                       bFoundSurface;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClearCachedServerClimberMoveData
	 */
	struct ADino_Character_BP_Climber_C_ClearCachedServerClimberMoveData_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CacheServerClimberMoveData
	 */
	struct ADino_Character_BP_Climber_C_CacheServerClimberMoveData_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Tick_SimulateClimbingBetweenFrames
	 */
	struct ADino_Character_BP_Climber_C_Tick_SimulateClimbingBetweenFrames_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnWalkableGroundFoundWhileClimbing
	 */
	struct ADino_Character_BP_Climber_C_OnWalkableGroundFoundWhileClimbing_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetDesiredMoveDirection
	 */
	struct ADino_Character_BP_Climber_C_GetDesiredMoveDirection_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Correct Surface Trace Offset Use Trace Map Override
	 */
	struct ADino_Character_BP_Climber_C_GetCorrectSurfaceTraceOffsetUseTraceMapOverride_Params
	{
	public:
		TArray<bool>                                               UseTraceMap;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceWeightOverride
	 */
	struct ADino_Character_BP_Climber_C_GetCorrectClimbingTraceWeightOverride_Params
	{
	public:
		bool                                                       UseResult;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_URZU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<float>                                              Weights;                                                 // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberUpdateServerTimerByClimberStateOverride
	 */
	struct ADino_Character_BP_Climber_C_ClimberUpdateServerTimerByClimberStateOverride_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Calc Current Climbing Velocity Override State
	 */
	struct ADino_Character_BP_Climber_C_CalcCurrentClimbingVelocityOverrideState_Params
	{
	public:
		struct FVector                                             CurrentVelocity;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShouldOverrideVelocity;                                  // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y7FU[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Velocity;                                                // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AllowMovementWhileClimbing
	 */
	struct ADino_Character_BP_Climber_C_Climber_AllowMovementWhileClimbing_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberDetaching_Pure
	 */
	struct ADino_Character_BP_Climber_C_IsClimberDetaching_Pure_Params
	{
	public:
		bool                                                       checkPrevious;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberCanEverJump_Pure
	 */
	struct ADino_Character_BP_Climber_C_ClimberCanEverJump_Pure_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_CanEverJump
	 */
	struct ADino_Character_BP_Climber_C_Climber_CanEverJump_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnJumped
	 */
	struct ADino_Character_BP_Climber_C_OnJumped_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.NetSync_ClimberIsJumping
	 */
	struct ADino_Character_BP_Climber_C_NetSync_ClimberIsJumping_Params
	{
	public:
		bool                                                       Newval;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnPostNetReplication
	 */
	struct ADino_Character_BP_Climber_C_BP_OnPostNetReplication_Params
	{
	public:
		struct FVector                                             ReplicatedLoc;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            ReplicatedRot;                                           // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_OnPreventStopServerTick
	 */
	struct ADino_Character_BP_Climber_C_Climber_AI_OnPreventStopServerTick_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanStopServerTick
	 */
	struct ADino_Character_BP_Climber_C_Climber_AI_CanStopServerTick_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldClimberLockInputsWhileAttached
	 */
	struct ADino_Character_BP_Climber_C_ShouldClimberLockInputsWhileAttached_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_ClimbingCanAttack
	 */
	struct ADino_Character_BP_Climber_C_Climber_AI_ClimbingCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_OnFlee
	 */
	struct ADino_Character_BP_Climber_C_Climber_AI_OnFlee_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CheckForAttackWhileClimbing
	 */
	struct ADino_Character_BP_Climber_C_Climber_AI_CheckForAttackWhileClimbing_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOnStartJump
	 */
	struct ADino_Character_BP_Climber_C_BPOnStartJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnRunReleased
	 */
	struct ADino_Character_BP_Climber_C_Climber_OnRunReleased_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnRunPressed
	 */
	struct ADino_Character_BP_Climber_C_Climber_OnRunPressed_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCharacterUnsleeped
	 */
	struct ADino_Character_BP_Climber_C_BPCharacterUnsleeped_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCharacterSleeped
	 */
	struct ADino_Character_BP_Climber_C_BPCharacterSleeped_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberAI_UpdateHasTargetWhileClimbing
	 */
	struct ADino_Character_BP_Climber_C_ClimberAI_UpdateHasTargetWhileClimbing_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberPlayingPreventInputAnim
	 */
	struct ADino_Character_BP_Climber_C_IsClimberPlayingPreventInputAnim_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnSetDeath
	 */
	struct ADino_Character_BP_Climber_C_BP_OnSetDeath_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberInClimbingStateRange
	 */
	struct ADino_Character_BP_Climber_C_IsClimberInClimbingStateRange_Params
	{
	public:
		E_DinoClimberState                                         startState;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_DinoClimberState                                         EndState;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       checkPrevious;                                           // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0003(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOrderedMoveToLoc
	 */
	struct ADino_Character_BP_Climber_C_BPOrderedMoveToLoc_Params
	{
	public:
		struct FVector                                             DestLoc;                                                 // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_IsCharacterHardAttached
	 */
	struct ADino_Character_BP_Climber_C_BP_IsCharacterHardAttached_Params
	{
	public:
		bool                                                       bIgnoreRiding;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIgnoreCarried;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCharacterDetach
	 */
	struct ADino_Character_BP_Climber_C_BPCharacterDetach_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberNearWaterSurface
	 */
	struct ADino_Character_BP_Climber_C_IsClimberNearWaterSurface_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8S7I[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberClimbing_Pure
	 */
	struct ADino_Character_BP_Climber_C_IsClimberClimbing_Pure_Params
	{
	public:
		bool                                                       isFinishedAttaching;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       includeSeekingwhenabovefalse;                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       includeDetaching;                                        // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       checkPrevious;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectWallJumpAnim
	 */
	struct ADino_Character_BP_Climber_C_GetCorrectWallJumpAnim_Params
	{
	public:
		struct FVector                                             wallJumpVelocity;                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_83RK[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        Anim;                                                    // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldUseTraceHitForClimbingMovement
	 */
	struct ADino_Character_BP_Climber_C_ShouldUseTraceHitForClimbingMovement_Params
	{
	public:
		struct FVector                                             HitLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5G33[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldClimberCheckNewClimbingRotation
	 */
	struct ADino_Character_BP_Climber_C_ShouldClimberCheckNewClimbingRotation_Params
	{
	public:
		struct FRotator                                            climbingRotation;                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LPWT[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberMovingOnSurface_Pure
	 */
	struct ADino_Character_BP_Climber_C_IsClimberMovingOnSurface_Pure_Params
	{
	public:
		bool                                                       checkPrevious;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberSoftSetRotation
	 */
	struct ADino_Character_BP_Climber_C_CanClimberSoftSetRotation_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertClimberSpaceVectorToWorld_Pure
	 */
	struct ADino_Character_BP_Climber_C_ConvertClimberSpaceVectorToWorld_Pure_Params
	{
	public:
		struct FVector                                             climberSpaceVector;                                      // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WorldVector;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertClimberSpaceVectorToWorld
	 */
	struct ADino_Character_BP_Climber_C_ConvertClimberSpaceVectorToWorld_Params
	{
	public:
		struct FVector                                             climberSpaceVector;                                      // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WorldVector;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertVectorToWorld_Pure
	 */
	struct ADino_Character_BP_Climber_C_ConvertVectorToWorld_Pure_Params
	{
	public:
		struct FVector                                             localVector;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WorldVector;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertRotatorToWorld_Pure
	 */
	struct ADino_Character_BP_Climber_C_ConvertRotatorToWorld_Pure_Params
	{
	public:
		struct FRotator                                            localRotator;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            worldRotator;                                            // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertRotatorToWorld
	 */
	struct ADino_Character_BP_Climber_C_ConvertRotatorToWorld_Params
	{
	public:
		struct FRotator                                            localRotator;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            worldRotator;                                            // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_44PU[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertVectorToWorld
	 */
	struct ADino_Character_BP_Climber_C_ConvertVectorToWorld_Params
	{
	public:
		struct FVector                                             localVector;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WorldVector;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AQHL[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberUpdateServerTimer
	 */
	struct ADino_Character_BP_Climber_C_ClimberUpdateServerTimer_Params
	{
	public:
		float                                                      newMin;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      newMAX;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberFalling_Pure
	 */
	struct ADino_Character_BP_Climber_C_IsClimberFalling_Pure_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberFalling
	 */
	struct ADino_Character_BP_Climber_C_IsClimberFalling_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_TraceForMoveNormal
	 */
	struct ADino_Character_BP_Climber_C_Climber_TraceForMoveNormal_Params
	{
	public:
		struct FVector                                             TargetLocation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       foundHit;                                                // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GIEF[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             newMoveNormal;                                           // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_66F8[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberRestoreToSeeking
	 */
	struct ADino_Character_BP_Climber_C_CanClimberRestoreToSeeking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L1MH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanWanderOntoWalls
	 */
	struct ADino_Character_BP_Climber_C_Climber_AI_CanWanderOntoWalls_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimbingIK_SetNewBlendspaceAxes
	 */
	struct ADino_Character_BP_Climber_C_ClimbingIK_SetNewBlendspaceAxes_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DebugClimber_NetDrawDebug_Box
	 */
	struct ADino_Character_BP_Climber_C_DebugClimber_NetDrawDebug_Box_Params
	{
	public:
		struct FVector                                             Center;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Extent;                                                  // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Duration;                                                // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       allowDraw;                                               // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       forceDebug;                                              // 0x0039(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       preventReplication;                                      // 0x003A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DebugClimber_NetDrawDebug_Sphere
	 */
	struct ADino_Character_BP_Climber_C_DebugClimber_NetDrawDebug_Sphere_Params
	{
	public:
		struct FVector                                             Center;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Radius;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Segments;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        Color;                                                   // 0x0014(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Duration;                                                // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       allowDraw;                                               // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       forceDebug;                                              // 0x0029(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       preventReplication;                                      // 0x002A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberUpdateServerTimerByClimberState
	 */
	struct ADino_Character_BP_Climber_C_ClimberUpdateServerTimerByClimberState_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanStopAttachedServerTick
	 */
	struct ADino_Character_BP_Climber_C_Climber_AI_CanStopAttachedServerTick_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_Update_ClimbWandering_Duration
	 */
	struct ADino_Character_BP_Climber_C_Climber_AI_Update_ClimbWandering_Duration_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanUpdateClimbWandering
	 */
	struct ADino_Character_BP_Climber_C_Climber_AI_CanUpdateClimbWandering_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JVT6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbingClimber_AI
	 */
	struct ADino_Character_BP_Climber_C_UpdateClimbingClimber_AI_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_Update_IsClimbWandering
	 */
	struct ADino_Character_BP_Climber_C_Climber_AI_Update_IsClimbWandering_Params
	{
	public:
		bool                                                       forceStartWandering;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_Update_ClimbWander_TargetRotation
	 */
	struct ADino_Character_BP_Climber_C_Climber_AI_Update_ClimbWander_TargetRotation_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertRotatorToLocal
	 */
	struct ADino_Character_BP_Climber_C_ConvertRotatorToLocal_Params
	{
	public:
		struct FRotator                                            Rotator;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            localRotator;                                            // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O1FF[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimbingIK_UpdateMeshBendDotProducts
	 */
	struct ADino_Character_BP_Climber_C_ClimbingIK_UpdateMeshBendDotProducts_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanWanderWhileClimbing
	 */
	struct ADino_Character_BP_Climber_C_Climber_AI_CanWanderWhileClimbing_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceMaxRetryCount_Pure
	 */
	struct ADino_Character_BP_Climber_C_GetCorrectClimbingTraceMaxRetryCount_Pure_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Count;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceMaxRetryCount
	 */
	struct ADino_Character_BP_Climber_C_GetCorrectClimbingTraceMaxRetryCount_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Count;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceType_Pure
	 */
	struct ADino_Character_BP_Climber_C_GetCorrectClimbingTraceType_Pure_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_DinoClimber_TraceType                                    Type;                                                    // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceType
	 */
	struct ADino_Character_BP_Climber_C_GetCorrectClimbingTraceType_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_DinoClimber_TraceType                                    Type;                                                    // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectLookLockDot_Pure
	 */
	struct ADino_Character_BP_Climber_C_GetCorrectLookLockDot_Pure_Params
	{
	public:
		int32_t                                                    TraceIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      dot;                                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectLookLockDot
	 */
	struct ADino_Character_BP_Climber_C_GetCorrectLookLockDot_Params
	{
	public:
		int32_t                                                    TraceIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      dot;                                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceWeight_Pure
	 */
	struct ADino_Character_BP_Climber_C_GetCorrectClimbingTraceWeight_Pure_Params
	{
	public:
		int32_t                                                    TraceIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isForReplace;                                            // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1CRB[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Weight;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceWeight
	 */
	struct ADino_Character_BP_Climber_C_GetCorrectClimbingTraceWeight_Params
	{
	public:
		int32_t                                                    TraceIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isForReplace;                                            // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OY7J[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Weight;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Should Climber Use Climbing Trace Hit
	 */
	struct ADino_Character_BP_Climber_C_ShouldClimberUseClimbingTraceHit_Params
	{
	public:
		int32_t                                                    TraceIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitLocation;                                             // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitNormal;                                               // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZO7M[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberRetryClimbingTrace
	 */
	struct ADino_Character_BP_Climber_C_CanClimberRetryClimbingTrace_Params
	{
	public:
		int32_t                                                    TraceIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ProcessResultsOfClimbingTraces
	 */
	struct ADino_Character_BP_Climber_C_ProcessResultsOfClimbingTraces_Params
	{
	public:
		int32_t                                                    numValidTraceHits;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O7AK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            traceIndecesArray;                                       // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       requireAllTraceHitsValid;                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EMD1[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    numTraceSockets;                                         // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FTransform                                          currentClimberTransform;                                 // 0x0020(0x0030)  (Parm, IsPlainOldData, NoDestructor)
		TArray<bool>                                               traceHitsArray;                                          // 0x0050(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FVector>                                     traceHitLocationsArray;                                  // 0x0060(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FVector>                                     traceNormalsArray;                                       // 0x0070(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       centerTraceHit;                                          // 0x0080(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AW2O[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             desiredSurfaceLocation;                                  // 0x0084(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isSurfaceValid;                                          // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F6T0[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SurfaceLocation;                                         // 0x0094(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             SurfaceNormal;                                           // 0x00A0(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             surfaceLocation_Move;                                    // 0x00AC(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             surfaceNormal_Move;                                      // 0x00B8(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CenterSphereTraceForSurfaceLocation
	 */
	struct ADino_Character_BP_Climber_C_CenterSphereTraceForSurfaceLocation_Params
	{
	public:
		struct FTransform                                          currTransform;                                           // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
		bool                                                       foundSurface;                                            // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7DZ3[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SurfaceLocation;                                         // 0x0034(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.TraceForClimbableSurface
	 */
	struct ADino_Character_BP_Climber_C_TraceForClimbableSurface_Params
	{
	public:
		TArray<struct FTransform>                                  traceSocketOffsetTransforms;                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		struct FTransform                                          climberTransform;                                        // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor)
		float                                                      TraceLength;                                             // 0x0040(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       preventTraceRetries;                                     // 0x0044(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XVDE[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            currSurfaceTraceIndecesArray;                            // 0x0048(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       foundAnyValidTraceHits;                                  // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VQUW[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    numValidTraceHits;                                       // 0x005C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<bool>                                               validTraceHits;                                          // 0x0060(0x0010)  (Parm, OutParm, ZeroConstructor)
		TArray<struct FVector>                                     traceHitLocations;                                       // 0x0070(0x0010)  (Parm, OutParm, ZeroConstructor)
		TArray<struct FVector>                                     traceHitNormals;                                         // 0x0080(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertRotatorToLocal_Pure
	 */
	struct ADino_Character_BP_Climber_C_ConvertRotatorToLocal_Pure_Params
	{
	public:
		struct FRotator                                            Rotator;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            localRotator;                                            // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimbingIK_TraceForNewSurfaceNormals
	 */
	struct ADino_Character_BP_Climber_C_ClimbingIK_TraceForNewSurfaceNormals_Params
	{
	public:
		class FString                                              socketGroupSubstring;                                    // 0x0000(0x0010)  (Parm, ZeroConstructor)
		float                                                      dot;                                                     // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimbingIK_UpdateMeshHeightOffset
	 */
	struct ADino_Character_BP_Climber_C_ClimbingIK_UpdateMeshHeightOffset_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbingIK
	 */
	struct ADino_Character_BP_Climber_C_UpdateClimbingIK_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberDesiredWallJumpDir
	 */
	struct ADino_Character_BP_Climber_C_GetClimberDesiredWallJumpDir_Params
	{
	public:
		struct FVector                                             desiredDir;                                              // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnStartSeeking
	 */
	struct ADino_Character_BP_Climber_C_OnStartSeeking_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReceiveHit
	 */
	struct ADino_Character_BP_Climber_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RT16[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ADino_Character_BP_Climber_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.On ClimberAttached
	 */
	struct ADino_Character_BP_Climber_C_OnClimberAttached_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_PlayCameraShake_Client
	 */
	struct ADino_Character_BP_Climber_C_Climber_PlayCameraShake_Client_Params
	{
	public:
		class UClass*                                              Shake;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Scale;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Speed;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnZoomOut
	 */
	struct ADino_Character_BP_Climber_C_BP_OnZoomOut_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnZoomIn
	 */
	struct ADino_Character_BP_Climber_C_BP_OnZoomIn_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Average Max Delta with Rotator Array
	 */
	struct ADino_Character_BP_Climber_C_GetAverageMaxDeltawithRotatorArray_Params
	{
	public:
		TArray<struct FRotator>                                    Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		struct FRotator                                            Rotator;                                                 // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      averageDelta;                                            // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get AverageMeanDelta with Rotator Array
	 */
	struct ADino_Character_BP_Climber_C_GetAverageMeanDeltawithRotatorArray_Params
	{
	public:
		TArray<struct FRotator>                                    Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		struct FRotator                                            Rotator;                                                 // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      averageDelta;                                            // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetMaxDeltaBetweenRotators
	 */
	struct ADino_Character_BP_Climber_C_GetMaxDeltaBetweenRotators_Params
	{
	public:
		struct FRotator                                            A;                                                       // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            B;                                                       // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Delta;                                                   // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetAverageDeltaBetweenRotators
	 */
	struct ADino_Character_BP_Climber_C_GetAverageDeltaBetweenRotators_Params
	{
	public:
		struct FRotator                                            A;                                                       // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            B;                                                       // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Delta;                                                   // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.AddRiderToFinalCameraRotationArrays
	 */
	struct ADino_Character_BP_Climber_C_AddRiderToFinalCameraRotationArrays_Params
	{
	public:
		class AShooterCharacter*                                   RiderToAdd;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DetermineNewRiderFinalCameraRotationIndex
	 */
	struct ADino_Character_BP_Climber_C_DetermineNewRiderFinalCameraRotationIndex_Params
	{
	public:
		class AShooterCharacter*                                   theRider;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    index;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.RemoveRiderFromFinalCameraRotationArrays
	 */
	struct ADino_Character_BP_Climber_C_RemoveRiderFromFinalCameraRotationArrays_Params
	{
	public:
		class AShooterCharacter*                                   RiderToRemove;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberLookDirDotToClimbingNormal_Pure
	 */
	struct ADino_Character_BP_Climber_C_GetClimberLookDirDotToClimbingNormal_Pure_Params
	{
	public:
		float                                                      dot;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberLookDirDotToClimbingNormal
	 */
	struct ADino_Character_BP_Climber_C_GetClimberLookDirDotToClimbingNormal_Params
	{
	public:
		float                                                      dot;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberUpVector_Pure
	 */
	struct ADino_Character_BP_Climber_C_GetClimberUpVector_Pure_Params
	{
	public:
		struct FVector                                             Up;                                                      // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentRiderFinalCameraRotationArrayIndex
	 */
	struct ADino_Character_BP_Climber_C_GetCurrentRiderFinalCameraRotationArrayIndex_Params
	{
	public:
		class AShooterCharacter*                                   thisRider;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    index;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update Riding Players Final Camera Rotations
	 */
	struct ADino_Character_BP_Climber_C_UpdateRidingPlayersFinalCameraRotations_Params
	{
	public:
		bool                                                       startedClimbing;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K5PX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPDoAttack
	 */
	struct ADino_Character_BP_Climber_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanNonControlledClimberNotClimbingOverrideTransformInterpolation
	 */
	struct ADino_Character_BP_Climber_C_CanNonControlledClimberNotClimbingOverrideTransformInterpolation_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberStopNonDediTick_NonControlled
	 */
	struct ADino_Character_BP_Climber_C_CanClimberStopNonDediTick_NonControlled_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Jump_Released
	 */
	struct ADino_Character_BP_Climber_C_Input_Jump_Released_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Jump_Pressed
	 */
	struct ADino_Character_BP_Climber_C_Input_Jump_Pressed_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanAttachOnSpawn
	 */
	struct ADino_Character_BP_Climber_C_Climber_AI_CanAttachOnSpawn_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7Q26[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberLookDir
	 */
	struct ADino_Character_BP_Climber_C_GetClimberLookDir_Params
	{
	public:
		struct FVector                                             lookDir;                                                 // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsPrimalCharacterFriendly
	 */
	struct ADino_Character_BP_Climber_C_IsPrimalCharacterFriendly_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZN75[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Look Dir Dot to Normal
	 */
	struct ADino_Character_BP_Climber_C_GetClimberLookDirDottoNormal_Params
	{
	public:
		struct FVector                                             Normal;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      dot;                                                     // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberViewLocation_Pure
	 */
	struct ADino_Character_BP_Climber_C_GetClimberViewLocation_Pure_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberViewLocation
	 */
	struct ADino_Character_BP_Climber_C_GetClimberViewLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YIQW[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberSeek
	 */
	struct ADino_Character_BP_Climber_C_CanClimberSeek_Params
	{
	public:
		bool                                                       isForStart;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberClimbingSimple_Pure
	 */
	struct ADino_Character_BP_Climber_C_IsClimberClimbingSimple_Pure_Params
	{
	public:
		bool                                                       excludeDetaching;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       checkPrev;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberClimbing_Simple
	 */
	struct ADino_Character_BP_Climber_C_IsClimberClimbing_Simple_Params
	{
	public:
		bool                                                       excludeDetaching;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       checkPrev;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberOn Server Run Released
	 */
	struct ADino_Character_BP_Climber_C_ClimberOnServerRunReleased_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnServerRunPressed
	 */
	struct ADino_Character_BP_Climber_C_Climber_OnServerRunPressed_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClientTick_UpdateClimberTarget FOV
	 */
	struct ADino_Character_BP_Climber_C_ClientTick_UpdateClimberTargetFOV_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberStopNonDediTick_Controlled
	 */
	struct ADino_Character_BP_Climber_C_CanClimberStopNonDediTick_Controlled_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPModifyFOV
	 */
	struct ADino_Character_BP_Climber_C_BPModifyFOV_Params
	{
	public:
		float                                                      FOVIn;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.HasClimberResetTPVCamera
	 */
	struct ADino_Character_BP_Climber_C_HasClimberResetTPVCamera_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_00SL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Stop All Climber Logic
	 */
	struct ADino_Character_BP_Climber_C_StopAllClimberLogic_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingSurfaceNormalFromRotation
	 */
	struct ADino_Character_BP_Climber_C_GetClimbingSurfaceNormalFromRotation_Params
	{
	public:
		struct FRotator                                            climbingRotation;                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             SurfaceNormal;                                           // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetAngleDeltaBetweenVectors
	 */
	struct ADino_Character_BP_Climber_C_GetAngleDeltaBetweenVectors_Params
	{
	public:
		struct FVector                                             VectorA;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             VectorB;                                                 // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             AroundAxis;                                              // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      theta;                                                   // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Rotate RotatorForwardVector to Target Constant
	 */
	struct ADino_Character_BP_Climber_C_RotateRotatorForwardVectortoTargetConstant_Params
	{
	public:
		struct FRotator                                            currentRotator;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             targetForward;                                           // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      RotationRate;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            newRotator;                                              // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.RemoveAxisFromVector
	 */
	struct ADino_Character_BP_Climber_C_RemoveAxisFromVector_Params
	{
	public:
		struct FVector                                             Vector;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Axis;                                                    // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             newVector;                                               // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberSwimming_Pure
	 */
	struct ADino_Character_BP_Climber_C_IsClimberSwimming_Pure_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Finish Attaching
	 */
	struct ADino_Character_BP_Climber_C_CanClimberFinishAttaching_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Finish Skidding
	 */
	struct ADino_Character_BP_Climber_C_CanClimberFinishSkidding_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HW5K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberSkid
	 */
	struct ADino_Character_BP_Climber_C_CanClimberSkid_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Flipping
	 */
	struct ADino_Character_BP_Climber_C_ServerTick_Flipping_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DoesClimberHaveEnough Stamina Pure
	 */
	struct ADino_Character_BP_Climber_C_DoesClimberHaveEnoughStaminaPure_Params
	{
	public:
		float                                                      needsStamina;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DoesClimberHave Enough Stamina
	 */
	struct ADino_Character_BP_Climber_C_DoesClimberHaveEnoughStamina_Params
	{
	public:
		float                                                      needsStamina;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SKJS[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberCallServerRunInputEvents
	 */
	struct ADino_Character_BP_Climber_C_CanClimberCallServerRunInputEvents_Params
	{
	public:
		bool                                                       newRunPressed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is Climber Grounded_Pure
	 */
	struct ADino_Character_BP_Climber_C_IsClimberGrounded_Pure_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Run_Toggle
	 */
	struct ADino_Character_BP_Climber_C_Input_Run_Toggle_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Run_Released
	 */
	struct ADino_Character_BP_Climber_C_Input_Run_Released_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Run_Pressed
	 */
	struct ADino_Character_BP_Climber_C_Input_Run_Pressed_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ResetShouldDrawCrosshair
	 */
	struct ADino_Character_BP_Climber_C_ResetShouldDrawCrosshair_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber Check for ObstaclesInDir
	 */
	struct ADino_Character_BP_Climber_C_ClimberCheckforObstaclesInDir_Params
	{
	public:
		struct FVector                                             checkDir;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      checkTrace_Distance;                                     // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      checkTrace_Padding;                                      // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ETraceTypeQuery                                            checkTrace_Channel;                                      // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       forceDebug;                                              // 0x0015(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NoObstacles;                                             // 0x0016(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WR0J[0x1];                                   // 0x0017(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          obstacleHit;                                             // 0x0018(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DebugClimber_NetDrawDebug_Line
	 */
	struct ADino_Character_BP_Climber_C_DebugClimber_NetDrawDebug_Line_Params
	{
	public:
		struct FVector                                             LineStart;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             LineEnd;                                                 // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Duration;                                                // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Thickness;                                               // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       allowDraw;                                               // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       forceDebug;                                              // 0x0031(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       preventReplication;                                      // 0x0032(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Right Vector_Pure
	 */
	struct ADino_Character_BP_Climber_C_GetClimberRightVector_Pure_Params
	{
	public:
		struct FVector                                             Right;                                                   // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Forward Vector_Pure
	 */
	struct ADino_Character_BP_Climber_C_GetClimberForwardVector_Pure_Params
	{
	public:
		struct FVector                                             Forward;                                                 // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnWallJump
	 */
	struct ADino_Character_BP_Climber_C_OnWallJump_Params
	{
	public:
		struct FVector                                             wallJumpVelocity;                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanWallJump
	 */
	struct ADino_Character_BP_Climber_C_CanWallJump_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_PreventMovementMode
	 */
	struct ADino_Character_BP_Climber_C_BP_PreventMovementMode_Params
	{
	public:
		EMovementMode                                              NewMovementMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOverrideCharacterNewFallVelocity
	 */
	struct ADino_Character_BP_Climber_C_BPOverrideCharacterNewFallVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Current Climber LookRotation
	 */
	struct ADino_Character_BP_Climber_C_GetCurrentClimberLookRotation_Params
	{
	public:
		bool                                                       bIgnoreDeadzone;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FRRC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            lookRot;                                                 // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsRemoteClientClimber
	 */
	struct ADino_Character_BP_Climber_C_IsRemoteClientClimber_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_OnSetTamedFollowTarget
	 */
	struct ADino_Character_BP_Climber_C_Climber_AI_OnSetTamedFollowTarget_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.AllowGrappling
	 */
	struct ADino_Character_BP_Climber_C_AllowGrappling_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_OnSetTarget
	 */
	struct ADino_Character_BP_Climber_C_Climber_AI_OnSetTarget_Params
	{
	public:
		class AActor*                                              NewTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberStartSeeking
	 */
	struct ADino_Character_BP_Climber_C_ClimberStartSeeking_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberStopSeeking
	 */
	struct ADino_Character_BP_Climber_C_ClimberStopSeeking_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Set Climber IK_Active
	 */
	struct ADino_Character_BP_Climber_C_SetClimberIK_Active_Params
	{
	public:
		bool                                                       newActive;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_66EE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingIK_BlendspaceAxes_Back
	 */
	struct ADino_Character_BP_Climber_C_GetClimbingIK_BlendspaceAxes_Back_Params
	{
	public:
		struct FVector2D                                           axes;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingIK_BlendspaceAxes_Front
	 */
	struct ADino_Character_BP_Climber_C_GetClimbingIK_BlendspaceAxes_Front_Params
	{
	public:
		struct FVector2D                                           axes;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update NonDedi Climber Mesh
	 */
	struct ADino_Character_BP_Climber_C_UpdateNonDediClimberMesh_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPDesiredRotationIsLocalSpace
	 */
	struct ADino_Character_BP_Climber_C_BPDesiredRotationIsLocalSpace_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberCheckForAboveWalkableGround
	 */
	struct ADino_Character_BP_Climber_C_ClimberCheckForAboveWalkableGround_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPModifyDesiredRotation
	 */
	struct ADino_Character_BP_Climber_C_BPModifyDesiredRotation_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            InDesiredRotation;                                       // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            OutDesiredRotation;                                      // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPSetupTamed
	 */
	struct ADino_Character_BP_Climber_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberSeeking
	 */
	struct ADino_Character_BP_Climber_C_IsClimberSeeking_Params
	{
	public:
		bool                                                       checkPrevious;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Did Climber Just Start or Stop Climbing
	 */
	struct ADino_Character_BP_Climber_C_DidClimberJustStartorStopClimbing_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberSwimming
	 */
	struct ADino_Character_BP_Climber_C_IsClimberSwimming_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ResetClimbingVars
	 */
	struct ADino_Character_BP_Climber_C_ResetClimbingVars_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimber Inputs
	 */
	struct ADino_Character_BP_Climber_C_UpdateClimberInputs_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsOwningClientClimber
	 */
	struct ADino_Character_BP_Climber_C_IsOwningClientClimber_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Update ClimbingCamera Final Orientation
	 */
	struct ADino_Character_BP_Climber_C_CanClimberUpdateClimbingCameraFinalOrientation_Params
	{
	public:
		class AShooterCharacter*                                   viewingRider;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Update Climber TPV_Camera Offset
	 */
	struct ADino_Character_BP_Climber_C_CanUpdateClimberTPV_CameraOffset_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1X11[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client Tick Update Climber TPV_Camera Offset
	 */
	struct ADino_Character_BP_Climber_C_ClientTickUpdateClimberTPV_CameraOffset_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateOwningClientIsClimbingBuff
	 */
	struct ADino_Character_BP_Climber_C_UpdateOwningClientIsClimbingBuff_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Store NonDedi Climber Climbing Velocity
	 */
	struct ADino_Character_BP_Climber_C_StoreNonDediClimberClimbingVelocity_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCameraRotationFinal
	 */
	struct ADino_Character_BP_Climber_C_BPCameraRotationFinal_Params
	{
	public:
		class APrimalCharacter*                                    viewingCharacter;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            InCurrentFinalRot;                                       // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            ReturnValue;                                             // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Capsule BottomWorldLocation
	 */
	struct ADino_Character_BP_Climber_C_GetClimberCapsuleBottomWorldLocation_Params
	{
	public:
		float                                                      offsetTowardsCenter;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Bottom;                                                  // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get ClimberVelocity Pure
	 */
	struct ADino_Character_BP_Climber_C_GetClimberVelocityPure_Params
	{
	public:
		bool                                                       forceUseWorldDeltaSeconds;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DD6M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Velocity;                                                // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOverrideFPVViewLocation
	 */
	struct ADino_Character_BP_Climber_C_BPOverrideFPVViewLocation_Params
	{
	public:
		class APrimalCharacter*                                    viewingCharacter;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPGetFPVViewLocation
	 */
	struct ADino_Character_BP_Climber_C_BPGetFPVViewLocation_Params
	{
	public:
		class APrimalCharacter*                                    viewingCharacter;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPLimitPlayerRotation
	 */
	struct ADino_Character_BP_Climber_C_BPLimitPlayerRotation_Params
	{
	public:
		class APrimalCharacter*                                    viewingCharacter;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            InViewRotation;                                          // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            ReturnValue;                                             // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPModifyViewHitDir
	 */
	struct ADino_Character_BP_Climber_C_BPModifyViewHitDir_Params
	{
	public:
		class APrimalCharacter*                                    viewingCharacter;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      InViewHitDir;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCameraBaseOrientation
	 */
	struct ADino_Character_BP_Climber_C_BPCameraBaseOrientation_Params
	{
	public:
		class APrimalCharacter*                                    viewingCharacter;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberVelocityAlongNormal
	 */
	struct ADino_Character_BP_Climber_C_GetClimberVelocityAlongNormal_Params
	{
	public:
		struct FVector                                             Normal;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Velocity;                                                // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Velocity
	 */
	struct ADino_Character_BP_Climber_C_GetClimberVelocity_Params
	{
	public:
		bool                                                       forceUseWorldDeltaSeconds;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HGYK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Velocity;                                                // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentClimbingStaminaCost
	 */
	struct ADino_Character_BP_Climber_C_GetCurrentClimbingStaminaCost_Params
	{
	public:
		float                                                      cost;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentClimbingRotationSpeed
	 */
	struct ADino_Character_BP_Climber_C_GetCurrentClimbingRotationSpeed_Params
	{
	public:
		float                                                      RotationSpeed;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentClimbingMoveVector
	 */
	struct ADino_Character_BP_Climber_C_GetCurrentClimbingMoveVector_Params
	{
	public:
		struct FVector                                             OverrideMoveDir;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             moveVector;                                              // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get CurrentClimbingVelocityMax
	 */
	struct ADino_Character_BP_Climber_C_GetCurrentClimbingVelocityMax_Params
	{
	public:
		float                                                      Velocity;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnSeek Released
	 */
	struct ADino_Character_BP_Climber_C_OnSeekReleased_Params
	{
	public:
		bool                                                       toggle;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnSeek Pressed
	 */
	struct ADino_Character_BP_Climber_C_OnSeekPressed_Params
	{
	public:
		bool                                                       toggle;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnClientRunReleased
	 */
	struct ADino_Character_BP_Climber_C_Climber_OnClientRunReleased_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnClientRunPressed
	 */
	struct ADino_Character_BP_Climber_C_Climber_OnClientRunPressed_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.On Climbing Traces Found No Valid Surface
	 */
	struct ADino_Character_BP_Climber_C_OnClimbingTracesFoundNoValidSurface_Params
	{
	public:
		TArray<bool>                                               hitMap;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get New Trace Vectors For AroundCornerCheck
	 */
	struct ADino_Character_BP_Climber_C_GetNewTraceVectorsForAroundCornerCheck_Params
	{
	public:
		struct FVector                                             TraceStart;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             TraceEnd;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    TraceIndex;                                              // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    retryNum;                                                // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       didLastTraceHit;                                         // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LZIA[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          lastTraceHitResult;                                      // 0x0028(0x0088)  (Parm)
		bool                                                       retryTrace;                                              // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_96WK[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             updatedTraceStart;                                       // 0x00B4(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             updatedTraceEnd;                                         // 0x00C0(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       overrideTraceHit;                                        // 0x00CC(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RMGB[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             newHitLoc;                                               // 0x00D0(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             newHitNormal;                                            // 0x00DC(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCustomSurfaceTraceDistance
	 */
	struct ADino_Character_BP_Climber_C_GetCustomSurfaceTraceDistance_Params
	{
	public:
		int32_t                                                    TraceIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      customDistance;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldClimber_CenterSphereTraceForSurfaceLocation
	 */
	struct ADino_Character_BP_Climber_C_ShouldClimber_CenterSphereTraceForSurfaceLocation_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetNewClimbingRotation
	 */
	struct ADino_Character_BP_Climber_C_SetNewClimbingRotation_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BQF7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ForceStopClimbingNow
	 */
	struct ADino_Character_BP_Climber_C_ForceStopClimbingNow_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Apply Detach Impulse
	 */
	struct ADino_Character_BP_Climber_C_CanClimberApplyDetachImpulse_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0PNK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.LerpRotatorToTarget
	 */
	struct ADino_Character_BP_Climber_C_LerpRotatorToTarget_Params
	{
	public:
		struct FRotator                                            currentRotator;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            targetRotator;                                           // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      LerpSpeed;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            lerpedRotator;                                           // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Trace for Non Climbable Surface
	 */
	struct ADino_Character_BP_Climber_C_TraceforNonClimbableSurface_Params
	{
	public:
		struct FVector                                             traceDir;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       found;                                                   // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L1N6[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Surface Trace Offset Array from UseTraceMap
	 */
	struct ADino_Character_BP_Climber_C_GetSurfaceTraceOffsetArrayfromUseTraceMap_Params
	{
	public:
		TArray<bool>                                               useMap;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FTransform>                                  Result;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
		TArray<int32_t>                                            indexArray;                                              // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.MakeClimbingRotationFromForwardVector
	 */
	struct ADino_Character_BP_Climber_C_MakeClimbingRotationFromForwardVector_Params
	{
	public:
		struct FVector                                             newForward;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            NewRotation;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentClimbingTurnAngleDelta
	 */
	struct ADino_Character_BP_Climber_C_GetCurrentClimbingTurnAngleDelta_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DebugClimber_NetDrawDebug_RotationAxes
	 */
	struct ADino_Character_BP_Climber_C_DebugClimber_NetDrawDebug_RotationAxes_Params
	{
	public:
		struct FRotator                                            Rotator;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Origin;                                                  // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Length;                                                  // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Duration;                                                // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Thickness;                                               // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       allowDraw;                                               // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       forceDebug;                                              // 0x0025(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       preventReplication;                                      // 0x0026(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetClimbableSurfaceVars
	 */
	struct ADino_Character_BP_Climber_C_SetClimbableSurfaceVars_Params
	{
	public:
		struct FVector                                             newSurfaceNormal;                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             newSurfaceNormal_Move;                                   // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             newSurfaceLocation;                                      // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             newSurfaceLocation_Move;                                 // 0x0024(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SnapClimberToSurface
	 */
	struct ADino_Character_BP_Climber_C_SnapClimberToSurface_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get ClimberState Index
	 */
	struct ADino_Character_BP_Climber_C_GetClimberStateIndex_Params
	{
	public:
		bool                                                       getPrevious;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              index;                                                   // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimber Update Climbing Rotation
	 */
	struct ADino_Character_BP_Climber_C_CanClimberUpdateClimbingRotation_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2HBV[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            approvedRotation;                                        // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CheckForRetrySurfaceTrace
	 */
	struct ADino_Character_BP_Climber_C_CheckForRetrySurfaceTrace_Params
	{
	public:
		struct FVector                                             TraceStart;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             TraceEnd;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    TraceIndex;                                              // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    retryNum;                                                // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       didLastTraceHit;                                         // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J3HZ[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          lastTraceHitResult;                                      // 0x0028(0x0088)  (Parm)
		bool                                                       retry;                                                   // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RTA8[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             retryStart;                                              // 0x00B4(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             retryEnd;                                                // 0x00C0(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       overrideTraceHit;                                        // 0x00CC(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZB23[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             NewLocation;                                             // 0x00D0(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             newNormal;                                               // 0x00DC(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingTurnDirection
	 */
	struct ADino_Character_BP_Climber_C_GetClimbingTurnDirection_Params
	{
	public:
		int32_t                                                    turnDir;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Flipped Rotation
	 */
	struct ADino_Character_BP_Climber_C_GetClimberFlippedRotation_Params
	{
	public:
		struct FRotator                                            flipRotation;                                            // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberFlipAxis
	 */
	struct ADino_Character_BP_Climber_C_GetClimberFlipAxis_Params
	{
	public:
		struct FVector                                             Axis;                                                    // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingMoveDirFromRotation
	 */
	struct ADino_Character_BP_Climber_C_GetClimbingMoveDirFromRotation_Params
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             moveDir;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Make Climbing Rotation fromSurfaceNormal
	 */
	struct ADino_Character_BP_Climber_C_MakeClimbingRotationfromSurfaceNormal_Params
	{
	public:
		struct FVector                                             SurfaceNormal;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Right Vector
	 */
	struct ADino_Character_BP_Climber_C_GetClimberRightVector_Params
	{
	public:
		struct FVector                                             Right;                                                   // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Forward Vector
	 */
	struct ADino_Character_BP_Climber_C_GetClimberForwardVector_Params
	{
	public:
		struct FVector                                             Forward;                                                 // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Up Vector
	 */
	struct ADino_Character_BP_Climber_C_GetClimberUpVector_Params
	{
	public:
		struct FVector                                             Up;                                                      // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetClimberCanIgnoreWater
	 */
	struct ADino_Character_BP_Climber_C_SetClimberCanIgnoreWater_Params
	{
	public:
		bool                                                       restoreToDefault;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Newval;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WAJT[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Currently Climb Out Of Water
	 */
	struct ADino_Character_BP_Climber_C_CanClimberCurrentlyClimbOutOfWater_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CheckForClimbOutOfWater
	 */
	struct ADino_Character_BP_Climber_C_CheckForClimbOutOfWater_Params
	{
	public:
		bool                                                       allowClimbing;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateControlledClientClimber
	 */
	struct ADino_Character_BP_Climber_C_UpdateControlledClientClimber_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberTick_Server
	 */
	struct ADino_Character_BP_Climber_C_ClimberTick_Server_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberTick_NonDedi
	 */
	struct ADino_Character_BP_Climber_C_ClimberTick_NonDedi_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateNonControlledClimber
	 */
	struct ADino_Character_BP_Climber_C_UpdateNonControlledClimber_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimberMovementMode
	 */
	struct ADino_Character_BP_Climber_C_UpdateClimberMovementMode_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnClimberDetached
	 */
	struct ADino_Character_BP_Climber_C_OnClimberDetached_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimberOverrideFallVelocity
	 */
	struct ADino_Character_BP_Climber_C_UpdateClimberOverrideFallVelocity_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Rotate to Target Rotation
	 */
	struct ADino_Character_BP_Climber_C_CanClimberRotatetoTargetRotation_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberDetaching
	 */
	struct ADino_Character_BP_Climber_C_IsClimberDetaching_Params
	{
	public:
		bool                                                       checkPrevious;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Sync RiderLookDirection
	 */
	struct ADino_Character_BP_Climber_C_SyncRiderLookDirection_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnRep_CurrentClimberStateIndex
	 */
	struct ADino_Character_BP_Climber_C_OnRep_CurrentClimberStateIndex_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberMeshInterpolate
	 */
	struct ADino_Character_BP_Climber_C_CanClimberMeshInterpolate_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Flip CheckNormal
	 */
	struct ADino_Character_BP_Climber_C_GetClimberFlipCheckNormal_Params
	{
	public:
		struct FVector                                             Normal;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectFlippingAnim
	 */
	struct ADino_Character_BP_Climber_C_GetCorrectFlippingAnim_Params
	{
	public:
		class UAnimMontage*                                        Anim;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberAttachFromGround
	 */
	struct ADino_Character_BP_Climber_C_CanClimberAttachFromGround_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get CorrectClimber Rotation
	 */
	struct ADino_Character_BP_Climber_C_GetCorrectClimberRotation_Params
	{
	public:
		bool                                                       updateRotation;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VRDP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            Rotation;                                                // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Receive Climbing Input Backward
	 */
	struct ADino_Character_BP_Climber_C_CanReceiveClimbingInputBackward_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanReceiveClimbingInput_Forward
	 */
	struct ADino_Character_BP_Climber_C_CanReceiveClimbingInput_Forward_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JQ75[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectSurfaceTraceDistance
	 */
	struct ADino_Character_BP_Climber_C_GetCorrectSurfaceTraceDistance_Params
	{
	public:
		bool                                                       isForRetry;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0IYY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      traceDist;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbingClimber
	 */
	struct ADino_Character_BP_Climber_C_UpdateClimbingClimber_Params
	{
	public:
		bool                                                       IgnoreFailure;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canKeepClimbing;                                         // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Correct Surface Trace OffsetTransforms
	 */
	struct ADino_Character_BP_Climber_C_GetCorrectSurfaceTraceOffsetTransforms_Params
	{
	public:
		bool                                                       overrideUseMap;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZV90[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<bool>                                               newUseMp;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FTransform>                                  offsetTransforms;                                        // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor)
		TArray<int32_t>                                            TraceIndeces;                                            // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get CorrectDetachAnim
	 */
	struct ADino_Character_BP_Climber_C_GetCorrectDetachAnim_Params
	{
	public:
		class UAnimMontage*                                        Anim;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberPlayingAnim
	 */
	struct ADino_Character_BP_Climber_C_IsClimberPlayingAnim_Params
	{
	public:
		class UAnimMontage*                                        checkAnim;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_75R0[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Interp Climber toTransform
	 */
	struct ADino_Character_BP_Climber_C_InterpClimbertoTransform_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
		float                                                      LocationInterpSpeed;                                     // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      RotationInterpSpeed;                                     // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       reachedTransform;                                        // 0x003C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UEDU[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SoftSetClimberTransform
	 */
	struct ADino_Character_BP_Climber_C_SoftSetClimberTransform_Params
	{
	public:
		struct FTransform                                          NewTransform;                                            // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectAttachAnim
	 */
	struct ADino_Character_BP_Climber_C_GetCorrectAttachAnim_Params
	{
	public:
		class UAnimMontage*                                        Anim;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Correct Mesh Offset
	 */
	struct ADino_Character_BP_Climber_C_GetCorrectMeshOffset_Params
	{
	public:
		struct FVector                                             Offset;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RCKB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.StoreClimb Trace Socket Offsets
	 */
	struct ADino_Character_BP_Climber_C_StoreClimbTraceSocketOffsets_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is Climber Attaching
	 */
	struct ADino_Character_BP_Climber_C_IsClimberAttaching_Params
	{
	public:
		bool                                                       checkPrevious;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.RotateClimber To Look Rotation
	 */
	struct ADino_Character_BP_Climber_C_RotateClimberToLookRotation_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Check For Prevent Stop Climbing
	 */
	struct ADino_Character_BP_Climber_C_CheckForPreventStopClimbing_Params
	{
	public:
		TArray<bool>                                               traceHitsArray;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    numValidHits;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    numTraces;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       allowClimbing;                                           // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update RiderWithClimberState
	 */
	struct ADino_Character_BP_Climber_C_UpdateRiderWithClimberState_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberInAnyClimberState
	 */
	struct ADino_Character_BP_Climber_C_IsClimberInAnyClimberState_Params
	{
	public:
		bool                                                       checkPrevious;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Flip Attached Climber
	 */
	struct ADino_Character_BP_Climber_C_FlipAttachedClimber_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanAttached Climber Flip
	 */
	struct ADino_Character_BP_Climber_C_CanAttachedClimberFlip_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U38I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Check for Attached Climber Flip
	 */
	struct ADino_Character_BP_Climber_C_CheckforAttachedClimberFlip_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is Climber Moving on Surface
	 */
	struct ADino_Character_BP_Climber_C_IsClimberMovingonSurface_Params
	{
	public:
		bool                                                       checkPrevious;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climbing Forward Velocity
	 */
	struct ADino_Character_BP_Climber_C_GetClimbingForwardVelocity_Params
	{
	public:
		float                                                      ForwardVelocity;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climbing Right Velocity
	 */
	struct ADino_Character_BP_Climber_C_GetClimbingRightVelocity_Params
	{
	public:
		float                                                      RightVelocity;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Detach Climber from Surface
	 */
	struct ADino_Character_BP_Climber_C_DetachClimberfromSurface_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Detaching
	 */
	struct ADino_Character_BP_Climber_C_ServerTick_Detaching_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetServerTickDeltaTime
	 */
	struct ADino_Character_BP_Climber_C_GetServerTickDeltaTime_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Skid
	 */
	struct ADino_Character_BP_Climber_C_Skid_Params
	{
	public:
		struct FVector                                             currVelocity;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Dir;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      InterpSpeed;                                             // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewVelocity;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Move on Surface Velocity
	 */
	struct ADino_Character_BP_Climber_C_GetMoveonSurfaceVelocity_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Continue Attaching
	 */
	struct ADino_Character_BP_Climber_C_CanClimberContinueAttaching_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Rotate Climber To TargetClimbingRotation
	 */
	struct ADino_Character_BP_Climber_C_RotateClimberToTargetClimbingRotation_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update Climber TargetClimbingRotation
	 */
	struct ADino_Character_BP_Climber_C_UpdateClimberTargetClimbingRotation_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Attach Climber to Surface
	 */
	struct ADino_Character_BP_Climber_C_AttachClimbertoSurface_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimbingIndexEqualToCurrent
	 */
	struct ADino_Character_BP_Climber_C_IsClimbingIndexEqualToCurrent_Params
	{
	public:
		unsigned char                                              index;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberMoving Absolute Up
	 */
	struct ADino_Character_BP_Climber_C_IsClimberMovingAbsoluteUp_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HE68[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Override
	 */
	struct ADino_Character_BP_Climber_C_ServerTick_Override_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.StopClimbing
	 */
	struct ADino_Character_BP_Climber_C_StopClimbing_Params
	{
	public:
		bool                                                       resetRestoreToSeeking;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       skipDetach;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Replicate Index Update Non Dedi Climber
	 */
	struct ADino_Character_BP_Climber_C_ReplicateIndexUpdateNonDediClimber_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Find Valid AiSpawn Transform
	 */
	struct ADino_Character_BP_Climber_C_FindValidAiSpawnTransform_Params
	{
	public:
		bool                                                       canSpawn;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L9BC[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          validTransform;                                          // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Replicate Index Update Target TPV_Camera Offset
	 */
	struct ADino_Character_BP_Climber_C_ReplicateIndexUpdateTargetTPV_CameraOffset_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Replicate Index Update Server And Client Climber
	 */
	struct ADino_Character_BP_Climber_C_ReplicateIndexUpdateServerAndClientClimber_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReachedTop Of Climb
	 */
	struct ADino_Character_BP_Climber_C_ReachedTopOfClimb_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbingVars
	 */
	struct ADino_Character_BP_Climber_C_UpdateClimbingVars_Params
	{
	public:
		bool                                                       validSurfaceFound;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8W7J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SurfaceNormal;                                           // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             surfaceNormal_Move;                                      // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             SurfaceLocation;                                         // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             surfaceLocation_Move;                                    // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JJAF[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<bool>                                               hitMap;                                                  // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<int32_t>                                            traceIndexArray;                                         // 0x0048(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsHitSurfaceClimbable
	 */
	struct ADino_Character_BP_Climber_C_IsHitSurfaceClimbable_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (Parm)
		bool                                                       Result;                                                  // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2LD5[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReplicateClimbing Index
	 */
	struct ADino_Character_BP_Climber_C_ReplicateClimbingIndex_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateServerClimberByClimbingIndex
	 */
	struct ADino_Character_BP_Climber_C_UpdateServerClimberByClimbingIndex_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimberStateByClimbingIndex
	 */
	struct ADino_Character_BP_Climber_C_UpdateClimberStateByClimbingIndex_Params
	{
	public:
		unsigned char                                              newIndex;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbing Velocity
	 */
	struct ADino_Character_BP_Climber_C_UpdateClimbingVelocity_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Calc Current Climbing Velocity
	 */
	struct ADino_Character_BP_Climber_C_CalcCurrentClimbingVelocity_Params
	{
	public:
		struct FVector                                             newClimbingVel;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Climbing
	 */
	struct ADino_Character_BP_Climber_C_ServerTick_Climbing_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Attached
	 */
	struct ADino_Character_BP_Climber_C_ServerTick_Attached_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Skidding
	 */
	struct ADino_Character_BP_Climber_C_ServerTick_Skidding_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Attaching
	 */
	struct ADino_Character_BP_Climber_C_ServerTick_Attaching_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Seeking
	 */
	struct ADino_Character_BP_Climber_C_ServerTick_Seeking_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClientTick_NoInput
	 */
	struct ADino_Character_BP_Climber_C_ClientTick_NoInput_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client Tick Input Backward
	 */
	struct ADino_Character_BP_Climber_C_ClientTickInputBackward_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClientTick_Input_Forward
	 */
	struct ADino_Character_BP_Climber_C_ClientTick_Input_Forward_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldClimberDraw CrosshairWhileClimbing
	 */
	struct ADino_Character_BP_Climber_C_ShouldClimberDrawCrosshairWhileClimbing_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsNormalClimbable
	 */
	struct ADino_Character_BP_Climber_C_IsNormalClimbable_Params
	{
	public:
		struct FVector                                             Normal;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isAverageNormal;                                         // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6TCG[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPAdjustDamage
	 */
	struct ADino_Character_BP_Climber_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DOEK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AYGW[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReduceClimberStamina
	 */
	struct ADino_Character_BP_Climber_C_ReduceClimberStamina_Params
	{
	public:
		float                                                      amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DisplayMessage
	 */
	struct ADino_Character_BP_Climber_C_DisplayMessage_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberHas Enough Stamina to Climb
	 */
	struct ADino_Character_BP_Climber_C_ClimberHasEnoughStaminatoClimb_Params
	{
	public:
		bool                                                       HUD_NotifyOnFailure;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is ClimberClimbing
	 */
	struct ADino_Character_BP_Climber_C_IsClimberClimbing_Params
	{
	public:
		bool                                                       isFinishedAttaching;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       includeSeekingwhenabovefalse;                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       includeDetaching;                                        // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       checkPrevious;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Reduce StaminaWhileClimbing
	 */
	struct ADino_Character_BP_Climber_C_ReduceStaminaWhileClimbing_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberPlayLandAnim
	 */
	struct ADino_Character_BP_Climber_C_ClimberPlayLandAnim_Params
	{
	public:
		bool                                                       forceSuccess;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOnMovementModeChangedNotify
	 */
	struct ADino_Character_BP_Climber_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Hard Set Climber RotationBut Interp Mesh Location
	 */
	struct ADino_Character_BP_Climber_C_HardSetClimberRotationButInterpMeshLocation_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CleanUpClimbingAnims
	 */
	struct ADino_Character_BP_Climber_C_CleanUpClimbingAnims_Params
	{
	public:
		bool                                                       animsClean;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MAIS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Set Should Restore to Attached
	 */
	struct ADino_Character_BP_Climber_C_SetShouldRestoretoAttached_Params
	{
	public:
		bool                                                       Newval;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SoftSetClimberRotation
	 */
	struct ADino_Character_BP_Climber_C_SoftSetClimberRotation_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.WallJump
	 */
	struct ADino_Character_BP_Climber_C_WallJump_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InterpolateClimberMesh
	 */
	struct ADino_Character_BP_Climber_C_InterpolateClimberMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              meshToInterpolate;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update Climber Cilmbing Anims
	 */
	struct ADino_Character_BP_Climber_C_UpdateClimberCilmbingAnims_Params
	{
	public:
		bool                                                       ensureAnimsPlaying;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G280[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetUse Aim Offsets
	 */
	struct ADino_Character_BP_Climber_C_SetUseAimOffsets_Params
	{
	public:
		bool                                                       newUse;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CKUJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetStayOnSurfaceVelocity
	 */
	struct ADino_Character_BP_Climber_C_GetStayOnSurfaceVelocity_Params
	{
	public:
		bool                                                       bOverrideVars;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_218B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OverrideSurfaceLoc;                                      // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OverrideDistFromSurface;                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OverrideClimberLoc;                                      // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bPreventUpdatingServerTimer;                             // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_28TS[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Velocity;                                                // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReceiveAnyDamage
	 */
	struct ADino_Character_BP_Climber_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ULNA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Init Climber
	 */
	struct ADino_Character_BP_Climber_C_InitClimber_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPUnstasis
	 */
	struct ADino_Character_BP_Climber_C_BPUnstasis_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CheckForAttachToSurfaceOnSpawn
	 */
	struct ADino_Character_BP_Climber_C_Climber_AI_CheckForAttachToSurfaceOnSpawn_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client Set Climber State
	 */
	struct ADino_Character_BP_Climber_C_ClientSetClimberState_Params
	{
	public:
		unsigned char                                              NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can ClimberContinueClimbing
	 */
	struct ADino_Character_BP_Climber_C_CanClimberContinueClimbing_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_SetAttachedToSurface
	 */
	struct ADino_Character_BP_Climber_C_Climber_AI_SetAttachedToSurface_Params
	{
	public:
		bool                                                       Newval;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       forceSuccess;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Ai Controller
	 */
	struct ADino_Character_BP_Climber_C_GetClimberAiController_Params
	{
	public:
		class ADino_AIController_BP_Climber_C*                     ref;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_DetachFromSurface
	 */
	struct ADino_Character_BP_Climber_C_Climber_AI_DetachFromSurface_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is Climber Attached
	 */
	struct ADino_Character_BP_Climber_C_IsClimberAttached_Params
	{
	public:
		bool                                                       checkPrevious;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPNotifyClearRider
	 */
	struct ADino_Character_BP_Climber_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPNotifySetRider
	 */
	struct ADino_Character_BP_Climber_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPTimerNonDedicated
	 */
	struct ADino_Character_BP_Climber_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update Climber Transforms
	 */
	struct ADino_Character_BP_Climber_C_UpdateClimberTransforms_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Default Climber
	 */
	struct ADino_Character_BP_Climber_C_GetDefaultClimber_Params
	{
	public:
		class ADino_Character_BP_Climber_C*                        ref;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberGrounded
	 */
	struct ADino_Character_BP_Climber_C_IsClimberGrounded_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CalcCurrentClimbableSurface
	 */
	struct ADino_Character_BP_Climber_C_CalcCurrentClimbableSurface_Params
	{
	public:
		float                                                      TraceDistance;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       preventTraceRetries;                                     // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       requireAllTraceHitsAreValid;                             // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OverrideClimberTransform;                                // 0x0006(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E6IF[0x9];                                   // 0x0007(0x0009) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          NewTransform;                                            // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor)
		bool                                                       OverrideTraceUseMap;                                     // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0JY4[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<bool>                                               newUseMap;                                               // 0x0048(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       validSurfaceFound;                                       // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0BUE[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SurfaceNormal;                                           // 0x005C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             surfaceNormal_Move;                                      // 0x0068(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             SurfaceLocation;                                         // 0x0074(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             surfaceLocation_Move;                                    // 0x0080(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8C48[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<bool>                                               hitMap;                                                  // 0x0090(0x0010)  (Parm, OutParm, ZeroConstructor)
		TArray<int32_t>                                            traceIndexArray;                                         // 0x00A0(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Net Set Climber State
	 */
	struct ADino_Character_BP_Climber_C_NetSetClimberState_Params
	{
	public:
		unsigned char                                              newStateIndex;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPTimerServer
	 */
	struct ADino_Character_BP_Climber_C_BPTimerServer_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UserConstructionScript
	 */
	struct ADino_Character_BP_Climber_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InpActEvt_Run_K2Node_InputActionEvent_125
	 */
	struct ADino_Character_BP_Climber_C_InpActEvt_Run_K2Node_InputActionEvent_125_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InpActEvt_Run_K2Node_InputActionEvent_124
	 */
	struct ADino_Character_BP_Climber_C_InpActEvt_Run_K2Node_InputActionEvent_124_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InpActEvt_RunToggle_K2Node_InputActionEvent_123
	 */
	struct ADino_Character_BP_Climber_C_InpActEvt_RunToggle_K2Node_InputActionEvent_123_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InpActEvt_Jump_K2Node_InputActionEvent_122
	 */
	struct ADino_Character_BP_Climber_C_InpActEvt_Jump_K2Node_InputActionEvent_122_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_StartSeeking
	 */
	struct ADino_Character_BP_Climber_C_Server_StartSeeking_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_StopSeeking
	 */
	struct ADino_Character_BP_Climber_C_Server_StopSeeking_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_NetSetClimberState
	 */
	struct ADino_Character_BP_Climber_C_Server_NetSetClimberState_Params
	{
	public:
		unsigned char                                              NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetReadyToClimbAfterDelay
	 */
	struct ADino_Character_BP_Climber_C_SetReadyToClimbAfterDelay_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CheckUntil_SetAiAttachedToSurface
	 */
	struct ADino_Character_BP_Climber_C_CheckUntil_SetAiAttachedToSurface_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.PlayAttachParticleWhenCloseToSurface
	 */
	struct ADino_Character_BP_Climber_C_PlayAttachParticleWhenCloseToSurface_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.PreventLandingAnimBriefly
	 */
	struct ADino_Character_BP_Climber_C_PreventLandingAnimBriefly_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CheckOnJumpStateAfterJumpDelay
	 */
	struct ADino_Character_BP_Climber_C_CheckOnJumpStateAfterJumpDelay_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnJumpPressed
	 */
	struct ADino_Character_BP_Climber_C_BP_OnJumpPressed_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnJumpReleased
	 */
	struct ADino_Character_BP_Climber_C_BP_OnJumpReleased_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SyncToServer_RiderViewRotation
	 */
	struct ADino_Character_BP_Climber_C_SyncToServer_RiderViewRotation_Params
	{
	public:
		struct FRotator                                            ViewRotation;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SyncToOwningClient_ClimbingVelocity
	 */
	struct ADino_Character_BP_Climber_C_SyncToOwningClient_ClimbingVelocity_Params
	{
	public:
		struct FVector                                             climbingVelocity;                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_OnRunPressed
	 */
	struct ADino_Character_BP_Climber_C_Server_OnRunPressed_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_OnRunReleased
	 */
	struct ADino_Character_BP_Climber_C_Server_OnRunReleased_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_Climber_OnRunPressed
	 */
	struct ADino_Character_BP_Climber_C_Multi_Climber_OnRunPressed_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_Climber_OnRunReleased
	 */
	struct ADino_Character_BP_Climber_C_Multi_Climber_OnRunReleased_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClearClimberControlRotationRoll
	 */
	struct ADino_Character_BP_Climber_C_ClearClimberControlRotationRoll_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClearClimberControlRotationRoll_NextTick
	 */
	struct ADino_Character_BP_Climber_C_ClearClimberControlRotationRoll_NextTick_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReceiveBeginPlay
	 */
	struct ADino_Character_BP_Climber_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.LockClimbingMeshRotationInterpSpeedForDuration
	 */
	struct ADino_Character_BP_Climber_C_LockClimbingMeshRotationInterpSpeedForDuration_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_SyncClimberDesiredRotationOnDetach
	 */
	struct ADino_Character_BP_Climber_C_Multi_SyncClimberDesiredRotationOnDetach_Params
	{
	public:
		struct FRotator                                            DesiredRotation;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InitClimber_NextTick
	 */
	struct ADino_Character_BP_Climber_C_InitClimber_NextTick_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InitClimber_Now
	 */
	struct ADino_Character_BP_Climber_C_InitClimber_Now_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_OnWallJump
	 */
	struct ADino_Character_BP_Climber_C_Multi_OnWallJump_Params
	{
	public:
		struct FVector                                             wallJumpVelocity;                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_DrawDebug_Line
	 */
	struct ADino_Character_BP_Climber_C_Multi_DrawDebug_Line_Params
	{
	public:
		struct FVector                                             LineStart;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             LineEnd;                                                 // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Duration;                                                // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Thickness;                                               // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_OnJumpPresssed
	 */
	struct ADino_Character_BP_Climber_C_Server_OnJumpPresssed_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_JumpAfterDelay
	 */
	struct ADino_Character_BP_Climber_C_Climber_JumpAfterDelay_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_HardSetClimberActorRotation
	 */
	struct ADino_Character_BP_Climber_C_Multi_HardSetClimberActorRotation_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_WallJumpAfterDelay
	 */
	struct ADino_Character_BP_Climber_C_Climber_WallJumpAfterDelay_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Velocity;                                                // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_ClimberPlayLandAnim
	 */
	struct ADino_Character_BP_Climber_C_Multi_ClimberPlayLandAnim_Params
	{
	public:
		bool                                                       forceSuccess;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client_Jump
	 */
	struct ADino_Character_BP_Climber_C_Client_Jump_Params
	{
	public:
		bool                                                       forceSuccess;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_DrawDebug_Sphere
	 */
	struct ADino_Character_BP_Climber_C_Multi_DrawDebug_Sphere_Params
	{
	public:
		struct FVector                                             Center;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Radius;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Segments;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        Color;                                                   // 0x0014(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Duration;                                                // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_DrawDebug_Box
	 */
	struct ADino_Character_BP_Climber_C_Multi_DrawDebug_Box_Params
	{
	public:
		struct FVector                                             Center;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Extent;                                                  // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Duration;                                                // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber AI Restart Seeking After Delay
	 */
	struct ADino_Character_BP_Climber_C_ClimberAIRestartSeekingAfterDelay_Params
	{	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_SoftSetClimberActorRotation
	 */
	struct ADino_Character_BP_Climber_C_Multi_SoftSetClimberActorRotation_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_SetIsClimberJumping
	 */
	struct ADino_Character_BP_Climber_C_Server_SetIsClimberJumping_Params
	{
	public:
		bool                                                       Newval;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client_SetActorLocAndRot
	 */
	struct ADino_Character_BP_Climber_C_Client_SetActorLocAndRot_Params
	{
	public:
		struct FVector                                             NewLoc;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            newRot;                                                  // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSoftSet;                                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ExecuteUbergraph_Dino_Character_BP_Climber
	 */
	struct ADino_Character_BP_Climber_C_ExecuteUbergraph_Dino_Character_BP_Climber_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
