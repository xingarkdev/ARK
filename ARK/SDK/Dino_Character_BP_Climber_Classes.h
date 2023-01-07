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
	 * BlueprintGeneratedClass Dino_Character_BP_Climber.Dino_Character_BP_Climber_C
	 * Size -> 0x0D28 (FullSize[0x2FC0] - InheritedSize[0x2298])
	 */
	class ADino_Character_BP_Climber_C : public ADino_Character_BP_NoBossArena_C
	{
	public:
		bool                                                       bAllowClimber_RotateToLookDirWhileClimbing;              // 0x2298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bAllowClimber_AttachFromGround;                          // 0x2299(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bAllowClimber_ClimbAroundCorners;                        // 0x229A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bAllowClimber_ClimbOutOfWater;                           // 0x229B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DistanceFromWaterSurfaceToAllowClimbing;                 // 0x229C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bClimbingConsumesStamina;                                // 0x22A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bPreventRiderWeaponsWhenClimbing;                        // 0x22A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bShouldBoostUpAtTopOfClimb;                              // 0x22A2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MUI1[0x1];                                   // 0x22A3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             reachedTopOfClimbImpulse;                                // 0x22A4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPreventAimOffsetsWhileClimbing;                         // 0x22B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		E_DinoClimberState                                         CurrentClimberState_Base;                                // 0x22B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B38C[0x6];                                   // 0x22B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ETraceTypeQuery>                                    ClimbableObjectTypes;                                    // 0x22B8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      GravityScale_Climbing;                                   // 0x22C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimerInterval_Seeking_Rider;                             // 0x22CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimerInterval_Seeking_NoRider_MIN;                       // 0x22D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimerInterval_Seeking_NoRider_MAX;                       // 0x22D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimerInterval_Climbing_Rider;                            // 0x22D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimerInterval_Climbing_NoRider_MIN;                      // 0x22DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimerInterval_Climbing_NoRider_MAX;                      // 0x22E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimerInterval_Attaching;                                 // 0x22E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimerInterval_Skidding;                                  // 0x22E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimerInterval_Attached_NoRider_MIN;                      // 0x22EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimerInterval_Attached_NoRider_MAX;                      // 0x22F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimerInterval_Attached_Rider;                            // 0x22F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_AttachingMontage_Ground;                             // 0x22F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_AttachingMontage_Air;                                // 0x2300(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bAllowClimber_OrientTPVCameraToCurrentSurface;           // 0x2308(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bClimber_AutoPlayCameraShake_Jump;                       // 0x2309(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bClimber_AutoPlayCameraShake_Land;                       // 0x230A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bClimber_AutoPlayCameraShake_Attach_Air;                 // 0x230B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bClimber_AutoPlayCameraShake_Detach;                     // 0x230C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bClimber_AutoPlayCameraShake_WallJump;                   // 0x230D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YGOQ[0x2];                                   // 0x230E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClimberTPVCameraOffsetInterpSpeed;                       // 0x2310(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4T0A[0x4];                                   // 0x2314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        Ref_DetachMontage;                                       // 0x2318(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbableSurfaceMinDot;                                  // 0x2320(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FlipPastDotWithFlipAxis;                                 // 0x2324(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class FName>                                        TraceMap_SocketNames_Server;                             // 0x2328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      SurfaceTraceDistance_Climbing;                           // 0x2338(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsReadyToClimb;                                         // 0x233C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsRestoringToAttached;                                  // 0x233D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bClimber_PreventUpdateClimbingRotationWhileAttached;     // 0x233E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HG57[0x1];                                   // 0x233F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      startClimbingDelay;                                      // 0x2340(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      requiredDistanceAboveNonClimbableSurface;                // 0x2344(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bClimber_AI_AttachedToSurface;                           // 0x2348(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDebugClimber_General;                                   // 0x2349(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bAllowClimber_HoldJumpToSeekWhileFalling;                // 0x234A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAllowClimber_PressJumpToToggleSeek;                     // 0x234B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bAllowClimber_RotateToLookDirOnSeekStart;                // 0x234C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bClimber_RequireDistanceAboveNonWalkableSurface_Seeking; // 0x234D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bClimberRestoreToAttached;                               // 0x234E(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5K5A[0x1];                                   // 0x234F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      requiredNormalDotToClimb_MAX;                            // 0x2350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      requiredNormalDotToClimb_MIN;                            // 0x2354(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      currentDistanceToSurface;                                // 0x2358(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RequiredDistanceFromSurface_MAX;                         // 0x235C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimberAi_Spawning_LookForSurfaceRadius;                 // 0x2360(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bClimber_isMeshInterpolating;                            // 0x2364(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F6PB[0x3];                                   // 0x2365(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentMeshInterpSpeed_rotation;                         // 0x2368(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CurrentMeshInterpSpeed_location;                         // 0x236C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAllowClimberWallJump;                                   // 0x2370(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDidWallJump;                                            // 0x2371(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AOCZ[0x2];                                   // 0x2372(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            WallJumpRotation;                                        // 0x2374(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      wallJumpVelocity;                                        // 0x2380(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             meshTargetLocation;                                      // 0x2384(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            meshTargetRotation;                                      // 0x2390(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CW21[0x4];                                   // 0x239C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     lastWallJumpStartTime;                                   // 0x23A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      noClimbTimeAfterWallJump;                                // 0x23A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingStaminaCost_Attached;                            // 0x23AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingStaminaCost_Skidding;                            // 0x23B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingStaminaCost_Climbing;                            // 0x23B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingStaminaCost_Climbing_RunMultiplier;              // 0x23B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RequiredStaminaToClimb;                                  // 0x23BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     lastJumpFromGroundTime;                                  // 0x23C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      jumpFromGroundClimbDelay;                                // 0x23C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingStaminaCost_WallJump;                            // 0x23CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     lastStaminaCostTime;                                     // 0x23D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              LowStaminaMessage_Climbing;                              // 0x23D8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FString                                              LowStaminaMessage_WallJump;                              // 0x23E8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       bCanClimberPlayLandingAnim;                              // 0x23F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q5X2[0x3];                                   // 0x23F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             MeshClimbingOffset;                                      // 0x23FC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		E_DinoClimberState                                         PreviousClimberState_Base;                               // 0x2408(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              CurrentClimberStateIndex;                                // 0x2409(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       bAllowClimber_Skid;                                      // 0x240A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bClimber_OnlySkidOnAttach;                               // 0x240B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AttachBelowAbsSkiddingVelocity;                          // 0x240C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    minRequiredClimbableTraceHits;                           // 0x2410(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2W1O[0x4];                                   // 0x2414(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAnimMontage*>                                ClimbingAnimsToClean;                                    // 0x2418(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UParticleSystem*                                     Ref_Climber_AttachVFX;                                   // 0x2428(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      JumpDelay;                                               // 0x2430(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Climber_AllowForwardInputAboveForwardSkiddingVelocity;   // 0x2434(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     lastAttachToSurfaceStartTime;                            // 0x2438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      maxTimeToAttachToSurface;                                // 0x2440(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      StayOnSurfaceVelocity_Failsafe;                          // 0x2444(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     lastServerTickTime;                                      // 0x2448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ClimbingVelocity_Walk;                                   // 0x2450(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingVelocity_RunMultiplier;                          // 0x2454(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     lastDetachStartTime;                                     // 0x2458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      currentDetachDuration;                                   // 0x2460(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AnimPercent_ToAttach_Ground;                             // 0x2464(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AnimPercent_ToAttach_Air;                                // 0x2468(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AnimPercent_ToDetach;                                    // 0x246C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              IsClimbingIndex_MAX;                                     // 0x2470(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CC4E[0x3];                                   // 0x2471(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CurrentClimbableSurfaceLocation;                         // 0x2474(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             CurrentClimbableSurfaceLocation_Move;                    // 0x2480(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             currentClimbableSurfaceNormal;                           // 0x248C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             CurrentClimbableSurfaceFwdMoveDir;                       // 0x2498(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxClimbVelocity_ReachedError;                           // 0x24A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              IsClimbingIndex_MIN;                                     // 0x24A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAllowClimbingClimberFlipWithLookDir;                    // 0x24A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X6A6[0x2];                                   // 0x24AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ignoreControlRotationForFlipBelowUpDot;                  // 0x24AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimSequence*                                       RiderAnim_Climbing_Idle;                                 // 0x24B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimSequence*                                       RiderAnim_Climbing_Move;                                 // 0x24B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      attachAroundCornerPadding;                               // 0x24C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bClimber_CanRotateToLookDirWhileClimbingBackwards;       // 0x24C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bAllowClimber_RotateInPlaceWhileAttached;                // 0x24C5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7FPB[0x2];                                   // 0x24C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        Ref_FlipMontage_Left;                                    // 0x24C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_FlipMontage_Right;                                   // 0x24D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             MeshClimbingOffset_Attaching_Ground;                     // 0x24D8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             MeshClimbingOffset_Attaching_Air;                        // 0x24E4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AttachFromGroundHeight_Depricated;                       // 0x24F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsClimberFlipped;                                       // 0x24F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_96GD[0x3];                                   // 0x24F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RequiredDistanceFromSurface_MIN;                         // 0x24F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AnimPercent_AllowClimbInput_Flip;                        // 0x24FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bForceNetUpdateThisServerTick;                           // 0x2500(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PITO[0x3];                                   // 0x2501(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            currentRiderViewRotation;                                // 0x2504(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SyncControlRotationInterval;                             // 0x2510(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J9OL[0x4];                                   // 0x2514(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     lastSyncControlRotationTime;                             // 0x2518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                ClimbingRiderFPVSocketName;                              // 0x2520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             OnDetachImpulse;                                         // 0x2528(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AnimPercent_ToAlignToSurface_AttachGround;               // 0x2534(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Climber_MovementCalc_UseClimbingTraceHitsAboveDotToVelocity; // 0x2538(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            NonControlledClimberRotation_Previous;                   // 0x253C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bForceClimberFlipHardSetRotation;                        // 0x2548(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FOLL[0x7];                                   // 0x2549(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTransform>                                  SurfaceTraceOffsetTransforms;                            // 0x2550(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FString>                                      TraceMap_SocketNames_ClimbingIK;                         // 0x2560(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<E_DinoClimber_TraceType>                            TraceMap_TraceTypes;                                     // 0x2570(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              TraceMap_NormalWeights;                                  // 0x2580(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              TraceMap_NormalWeights_NoRider;                          // 0x2590(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              TraceMap_NormalWeights_Seeking;                          // 0x25A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              TraceMap_NormalWeights_Climbing_Forward;                 // 0x25B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              TraceMap_NormalWeights_Climbing_Backward;                // 0x25C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              TraceMap_NormalWeights_ReplaceFailure;                   // 0x25D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              TraceMap_LookLockDots;                                   // 0x25E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              TraceMap_CustomTraceDistances;                           // 0x25F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            TraceMap_MaxRetries;                                     // 0x2600(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               UseTraceMap_Seeking_Idle;                                // 0x2610(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               UseTraceMap_Seeking_Forward;                             // 0x2620(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               UseTraceMap_Seeking_Backward;                            // 0x2630(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               UseTraceMap_Seeking_Falling;                             // 0x2640(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               UseTraceMap_Seeking_Swimming;                            // 0x2650(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               UseTraceMap_Climbing_Attaching;                          // 0x2660(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               UseTraceMap_Climbing_Skidding;                           // 0x2670(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               UseTraceMap_Climbing_Forward;                            // 0x2680(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               UseTraceMap_Climbing_Forward_NoRider;                    // 0x2690(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               UseTraceMap_Climbing_Backward;                           // 0x26A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               UseTraceMap_Climbing_Backward_NoRider;                   // 0x26B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               UseTraceMap_Attached_Rider;                              // 0x26C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               UseTraceMap_Attached_NoRider;                            // 0x26D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      RequiredClimbingTurnDeltaForTurnAnims;                   // 0x26E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XOP1[0x4];                                   // 0x26E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<bool>                                               UseTraceMap_CheckForGround;                              // 0x26E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      StayOnSurfaceVelocity_MAX;                               // 0x26F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      StayOnSurfaceVelocity_MIN;                               // 0x26FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Climber_ClimbingClientDesyncErrorToleranceOverride;      // 0x2700(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DistanceBelowClimberToCheckForCorners_Seeking;           // 0x2704(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DistanceBelowClimberToCheckForCorners_MAX;               // 0x2708(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Climber_AutoDetachOnFlatGroundAboveUpDot;                // 0x270C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PreventLandingAnimDuration;                              // 0x2710(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PreventLandingAnimDuration_NoRider;                      // 0x2714(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PreventUpdateTargetOrientationBelowDotToSurface;         // 0x2718(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LerpTargetOrientationMaxSpeed;                           // 0x271C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bRequireDistanceAboveNonWalkableSurface_Climbing;        // 0x2720(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VOAT[0x3];                                   // 0x2721(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MeshInterpSpeed_Location_Climbing;                       // 0x2724(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MeshInterpSpeed_Rotation_GroundAttach;                   // 0x2728(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MeshInterpSpeed_Rotation_AirAttach;                      // 0x272C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MeshInterpSpeed_Rotation_Climbing;                       // 0x2730(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MeshInterpSpeed_Rotation_Climbing_Running;               // 0x2734(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MeshInterpSpeed_Location_Climbing_Running;               // 0x2738(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MeshInterpSpeed_Location_NotClimbing;                    // 0x273C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bClimberUseDetachImpulse;                                // 0x2740(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bClimberHasPassedAttachFromGroundDot;                    // 0x2741(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LS1Y[0x2];                                   // 0x2742(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Climber_ForceDetachAboveUpDot;                           // 0x2744(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RemoteClientClimber_RotationInterpSpeed_Climbing;        // 0x2748(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bClimberInput_Server_Run_Pressed;                        // 0x274C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAllowClimber_RunBackwardsWhileClimbing;                 // 0x274D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bClimberInput_Client_Run_Pressed;                        // 0x274E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bClimber_IgnoreLookLockTracesWhenClimbingBackwards;      // 0x274F(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             previousWorldLocation;                                   // 0x2750(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            CurrentClimbingCameraOrientation;                        // 0x275C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            TargetClimbingCameraOrientation;                         // 0x2768(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ClimberCameraOrientationInterpSpeed;                     // 0x2774(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TraceDistance_CheckForGround;                            // 0x2778(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ClimberCameraFinalRotationLerpTime_MAX_Current;          // 0x277C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             NonDediClimberClimbingVelocity;                          // 0x2780(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6XG7[0x4];                                   // 0x278C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalBuff*                                         Ref_IsClimbingBuff;                                      // 0x2790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              Ref_IsClimbingBuffClass;                                 // 0x2798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             ClimberTPVCameraOffset_Seeking;                          // 0x27A0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             ClimberTPVCameraOffset_Attached;                         // 0x27AC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             ClimberTPVCameraOffset_Climbing;                         // 0x27B8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             ClimberTPVCameraOffset_CurrTarget;                       // 0x27C4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RequiredClimbingTurnDeltaForTurnAnims_RemoteClient;      // 0x27D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DistanceBelowClimberToCheckForCorners_MIN;               // 0x27D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CurrentCornerStartCheckDistanceBelowClimber;             // 0x27D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ClimbingCostsStaminaBelowClimberUpDot;                   // 0x27DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ClimberClampRiderControlRotationYawToAngleRange;         // 0x27E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bClimbingClampArmedFPVRiderControlRotationYaw;           // 0x27E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O7WM[0x3];                                   // 0x27E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimerInterval_Flipping;                                  // 0x27E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimerInterval_Detaching;                                 // 0x27EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<bool>                                               TraceMap_ReplaceFailure;                                 // 0x27F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       bSeekingClimberPlayClimbingAnims_Idle;                   // 0x2800(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bSeekingClimberPlayClimbingAnims_Move;                   // 0x2801(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bSeekingClimberPlayClimbingAnims_Run;                    // 0x2802(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K8Q1[0x1];                                   // 0x2803(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CenterSphereTraceForSurfaceLocation_Distance;            // 0x2804(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            NonControlledClimberResetRotation;                       // 0x2808(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RemoteClientClimber_RotationInterpSpeed_Reset;           // 0x2814(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RemoteClientClimber_RotationInterpSpeed_Reset_Detaching; // 0x2818(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MeshInterpSpeed_Rotation_WallJump;                       // 0x281C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MeshInterpSpeed_Rotation_Detaching;                      // 0x2820(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MeshInterpSpeed_Rotation_NotClimbing;                    // 0x2824(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CenterSphereTraceForSurface_RelativeRadiusMultiplier;    // 0x2828(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bClimberInput_Server_Seek_Pressed;                       // 0x282C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bRestoreToSeeking;                                       // 0x282D(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2BQP[0x2];                                   // 0x282E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SurfaceTraceDistance_Seeking;                            // 0x2830(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDebugClimber_ClimbingIK;                                // 0x2834(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDebugClimber_ClimbingAI;                                // 0x2835(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDebugClimber_DrawClimbingTraces;                        // 0x2836(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDebugClimber_WildSpawnAttaching;                        // 0x2837(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDebugClimber_PreventAllClimbingLogicStaminaLoss;        // 0x2838(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDebugClimber_PreventAiAttachOnSpawn;                    // 0x2839(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDebugClimber_SimulateClimbLogicBetweenFrames;           // 0x283A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LWJM[0x1];                                   // 0x283B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DebugClimber_Duration_ClimbingTrace;                     // 0x283C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TimeAfterStopClimbingToPreventSeeking;                   // 0x2840(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      NonDediClimberClimbingVelocity_InterpSpeed;              // 0x2844(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PreventDetachAnimWhenDetachingAboveUpDot;                // 0x2848(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ClimberGroundAttachDuration;                             // 0x284C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAllowClimber_AI_WanderWhileClimbing;                    // 0x2850(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bAllowClimber_AI_PursueTargetWhileClimbing;              // 0x2851(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bClimber_AI_ClimbWander_OnlyWhenUntamed;                 // 0x2852(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bClimber_AI_ClimbWander_CanWanderOntoWalls;              // 0x2853(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bClimber_AI_DetachWhenDamaged;                           // 0x2854(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsClimberClimbWandering;                                // 0x2855(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KM0I[0x2];                                   // 0x2856(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Climber_AI_Spawning_MaxAllowedDistanceFromOrigin;        // 0x2858(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimberAi_Spawning_CheckForGroundDistance;               // 0x285C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             RiderDismountOffset;                                     // 0x2860(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ClimberOverrideRiderDismountLocationBelowUpDot;          // 0x286C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ListenServerClimberOrientToLookSpeedScale;               // 0x2870(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Climber_MovementCalc_UseClimbingTraceHitsBelowAngleDeltaToVelocity; // 0x2874(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bClimber_PreventClimbingMovement;                        // 0x2878(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPreventAiClimberDetachForDeadTarget_Wild;               // 0x2879(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPreventAiClimberDetachForDeadTarget_Tamed;              // 0x287A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RHPU[0x1];                                   // 0x287B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            ClimberRestoreToClimbingRotation;                        // 0x287C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             ClimbingNewFallVelocity;                                 // 0x2888(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DebugClimber_Thickness_SurfaceTrace_ValidHit;            // 0x2894(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DebugClimber_Thickness_SurfaceTrace_Retry_Success;       // 0x2898(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DebugClimber_Thickness_SurfaceTrace_Initial;             // 0x289C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DebugClimber_Thickness_Velocity_StayOnSurface;           // 0x28A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DebugClimber_Thickness_CurrentNormal;                    // 0x28A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DebugClimber_Thickness_CurrentNormal_Move;               // 0x28A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DebugClimber_Length_CurrentNormal_Move;                  // 0x28AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DebugClimber_Thickness_DesiredClimbingDir;               // 0x28B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DebugClimber_Thickness_Velocity_AntiSkid;                // 0x28B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DebugClimber_Thickness_RotationAxes;                     // 0x28B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DebugClimber_Thickness_SurfaceTrace_GroundCheck;         // 0x28BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DebugClimber_Thickness_SurfaceTrace_Retry_Attempt;       // 0x28C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              Climber_AttachedCustomMovementMode;                      // 0x28C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y5PX[0x3];                                   // 0x28C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ClimberAttachVFX_SocketName;                             // 0x28C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Climber_AttachVFX_Scale;                                 // 0x28D0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UEEU[0x4];                                   // 0x28DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     Ref_VFX_ClimbingFootstep;                                // 0x28E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USoundBase*                                          Ref_SFX_ClimbingFootstep;                                // 0x28E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      VFX_Scale_ClimbingFootstep;                              // 0x28F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              MaxClimberStateIndex;                                    // 0x28F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KMOU[0x3];                                   // 0x28F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentAttachDuration;                                   // 0x28F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CurrentFlipDuration;                                     // 0x28FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     lastFlipStartTime;                                       // 0x2900(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Climber_AllowBackwardsInputBelowForwardSkiddingVelocity; // 0x2908(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SkidIntensity_Forward;                                   // 0x290C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SkidIntensity_Right;                                     // 0x2910(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RequiredDistanceFromSurface_ToAttach;                    // 0x2914(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bLockClimbingMeshRotationInterpSpeed;                    // 0x2918(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZIQW[0x3];                                   // 0x2919(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DebugClimber_Length_DesiredMoveDir;                      // 0x291C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            ClimberClimbingRotation_Current;                         // 0x2920(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            NonControlledClimberRotation_Target;                     // 0x292C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FRotator>                                    recentClimbingRotations;                                 // 0x2938(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      ClimbingClimberRotationRate;                             // 0x2948(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingClimberRotationRate_NoRider_NoTarget;            // 0x294C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingClimberRotationRate_NoRider_Target;              // 0x2950(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingClimberRotationRate_RunMultiplier_Rider;         // 0x2954(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      UpdateClimberRotationPastError_Attached;                 // 0x2958(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      UpdateClimberRotationPastError_Climbing_CurrentRotation_Pitch; // 0x295C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      UpdateClimberRotationPastError_Climbing_CurrentRotation_Roll; // 0x2960(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      UpdateClimberRotationPastError_Climbing_PrevRotations_Pitch; // 0x2964(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      UpdateClimberRotationPastError_Climbing_PrevRotations_Roll; // 0x2968(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Climber_ReachedClimbingRotationBelowError;               // 0x296C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LerpTargetRotationAboveLookDotToUp;                      // 0x2970(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      IgnoreClimberRotationAboveAttachViewRotationDot;         // 0x2974(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   Ref_LastSetRider;                                        // 0x2978(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   Ref_LastClearedRider;                                    // 0x2980(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             ClimberTPVCameraOffset_Skidding;                         // 0x2988(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Climber_FOV_WarpMultiplier_Target;                       // 0x2994(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Climber_FOV_WarpPercent;                                 // 0x2998(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Climber_RiderStartFOV;                                   // 0x299C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAllowClimber_WarpFOV;                                   // 0x29A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7O6Q[0x3];                                   // 0x29A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Climber_FOV_InterpSpeed;                                 // 0x29A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsClimberWarpingFOV;                                    // 0x29A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BIFL[0x3];                                   // 0x29A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Climber_FOV_WarpMultiplier_Current;                      // 0x29AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WorldSpaceCameraOverride_ActivateAboveCameraAbsUpDots;   // 0x29B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      WorldSpaceCameraOverride_PreventAboveAbsUpDots;          // 0x29B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      WorldSpaceCameraOverride_ActivateBelowClimberUpVectorDownDot; // 0x29B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            ClimberAttachViewRotation;                               // 0x29BC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Climber_AI_ChanceToAttachOnSpawn;                        // 0x29C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CSR7[0x4];                                   // 0x29CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        Ref_JumpMontage;                                         // 0x29D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_LandingMontage;                                      // 0x29D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AnimPercent_ToJump;                                      // 0x29E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AnimPercent_ToWallJump;                                  // 0x29E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Ref_WallJumpMontage;                                     // 0x29E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FRotator>                                    ClimbingCameraFinalRotationRiderTargets;                 // 0x29F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              ClimbingCameraFinalRotationLerpTimes;                    // 0x2A00(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      ResetControlRotationOnZoomWhenAboveDotToClimbingNormal_ZoomOut; // 0x2A10(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ResetControlRotationOnZoomWhenAboveDotToClimbingNormal_ZoomIn; // 0x2A14(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<bool>                                               ClimbingCameraFinalRotationsReached;                     // 0x2A18(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      ClimberCameraFinalRotationLerpTime_MAX_Attach;           // 0x2A28(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimberCameraFinalRotationLerpTime_MAX_Detach;           // 0x2A2C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Climber_AnimPlayRate_Attach;                             // 0x2A30(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Climber_AnimPlayRate_Detach;                             // 0x2A34(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    maxNumPrevClimbingRotationSamples;                       // 0x2A38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NA68[0x4];                                   // 0x2A3C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CameraShake_Jump;                                        // 0x2A40(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CameraShake_Jump_Scale;                                  // 0x2A48(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CameraShake_Jump_Speed;                                  // 0x2A4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              CameraShake_Land;                                        // 0x2A50(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CameraShake_Land_Scale;                                  // 0x2A58(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CameraShake_Land_Speed;                                  // 0x2A5C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              CameraShake_Attach_Air;                                  // 0x2A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CameraShake_Attach_Air_Scale;                            // 0x2A68(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CameraShake_Attach_Air_Speed;                            // 0x2A6C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              CameraShake_Detach;                                      // 0x2A70(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CameraShake_Detach_Scale;                                // 0x2A78(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CameraShake_Detach_Speed;                                // 0x2A7C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              CameraShake_WallJump;                                    // 0x2A80(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CameraShake_WallJump_Scale;                              // 0x2A88(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CameraShake_WallJump_Speed;                              // 0x2A8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Climber_AttachFromGroundUpDotThreshold;                  // 0x2A90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bClimberInput_Client_Seek_Pressed;                       // 0x2A94(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsClimber_Jumping_Client;                               // 0x2A95(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AJWT[0x2];                                   // 0x2A96(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ChangeWallJumpToNormalJumpAboveUpDot;                    // 0x2A98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxWallJumpToSurfaceNormalLerpPercent;                   // 0x2A9C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAllowClimber_UseClimbingIK;                             // 0x2AA0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UTR7[0x7];                                   // 0x2AA1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      ClimbingIK_SocketName_Substring_Groups;                  // 0x2AA8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FString                                              ClimbingIK_SocketName_Substring_UseFloorLocationOverride; // 0x2AB8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		struct FVector2D                                           ClimbingIK_CurrentBlendspaceAxes_Front;                  // 0x2AC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           ClimbingIK_CurrentBlendspaceAxes_Back;                   // 0x2AD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ClimbingIK_MeshHeightOffset_Current;                     // 0x2AD8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ClimbingIK_MeshHeightOffset_InterpSpeed;                 // 0x2ADC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingIK_MeshHeightOffsetTrace_Length;                 // 0x2AE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingIK_MeshHeightOffsetTraceRadius_CapsulePercent;   // 0x2AE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingIK_MeshHeightOffset_FromBend_Up;                 // 0x2AE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingIK_MeshHeightOffset_FromBend_Running_Up;         // 0x2AEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingIK_MeshHeightOffset_FromBend_Down;               // 0x2AF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingIK_MeshHeightOffset_FromBend_Running_Down;       // 0x2AF4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingIK_MeshHeightOffset_AdditionalZ;                 // 0x2AF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingIK_CanUpdateAxesPastErrorWithPrev;               // 0x2AFC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingIK_CanUpdateAxesAboveDotToSurfaceNormal;         // 0x2B00(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingIK_MaxDotToSurfaceNormal;                        // 0x2B04(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingIK_MaxAxisClamp;                                 // 0x2B08(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingIK_TraceRadius;                                  // 0x2B0C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingIK_TraceLength;                                  // 0x2B10(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingIK_TraceStartOffset_X;                           // 0x2B14(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbingIK_TraceStartOffset_Z;                           // 0x2B18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RequiredVelocity_StartUsingMovingSeekTraces;             // 0x2B1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     lastStopClimbingTime;                                    // 0x2B20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Climber_TimeAfterStopClimbingToPreventFallDamage;        // 0x2B28(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsClimber_WallJumping;                                  // 0x2B2C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EFAV[0x3];                                   // 0x2B2D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     lastUpVectorAboveForceStopClimbingDotTime;               // 0x2B30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsClimberCheckingForForceDetach;                        // 0x2B38(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1OBA[0x3];                                   // 0x2B39(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Climber_AllowedTimeAboveForceDetachDot;                  // 0x2B3C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Climber_AI_ClimbingWander_PercentChanceToWander;         // 0x2B40(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Climber_AI_ClimbingWander_PercentChanceToUpdateTargetRotation; // 0x2B44(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Climber_AI_ClimbingWander_TargetForward;                 // 0x2B48(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4U5Q[0x4];                                   // 0x2B54(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     lastUpdateClimbWanderingTime;                            // 0x2B58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Climber_AI_ClimbWandering_Duration_Current;              // 0x2B60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Climber_AI_ClimbWandering_Duration_MIN;                  // 0x2B64(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Climber_AI_ClimbWandering_Duration_MAX;                  // 0x2B68(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SMPD[0x4];                                   // 0x2B6C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              Climber_AI_AttachedSpawnTraceDirArray_Pitch;             // 0x2B70(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<float>                                              Climber_AI_AttachedSpawnTraceDirArray_Yaw;               // 0x2B80(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      Climber_AI_RequiredClearRadiusForAttachedSpawn;          // 0x2B90(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C9NR[0x4];                                   // 0x2B94(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              ClimbingIK_CurrentMeshBendDotProducts;                   // 0x2B98(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		double                                                     lastRestoreToSeekingTime;                                // 0x2BA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Climber_AI_RestartSeekingDelay_MIN;                      // 0x2BB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Climber_AI_RestartSeekingDelay_MAX;                      // 0x2BB4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DebugClimber_Length_RotationAxes;                        // 0x2BB8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DebugClimber_ClimbingIK_TraceLength_BendHitDir;          // 0x2BBC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DebugClimber_ClimbingIK_TraceThickness_BendHitDir;       // 0x2BC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DebugClimber_ClimbingIK_BoxExtent_TraceFloor;            // 0x2BC4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DebugClimber_ClimbingIK_SphereRadius_HeightOffsetHit;    // 0x2BC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             ClimbingIK_MeshBendOffset_Current;                       // 0x2BCC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NonRiddenClimber_ListenServer_RotationInterpSpeed_Climbing; // 0x2BD8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NonRiddenClimber_ListenServer_RotationInterpSpeed_Reset; // 0x2BDC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NonRiddenClimber_ListenServer_RotationInterpSpeed_Reset_Detaching; // 0x2BE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ClimbingIK_MeshHeightOffset_InterpSpeed_Running;         // 0x2BE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DebugClimber_Radius_CurrentLocation;                     // 0x2BE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DebugClimber_Radius_CurrentLocation_Move;                // 0x2BEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Climber_StayOnSurfaceVelocity_RunMultiplier;             // 0x2BF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bLockSeeking;                                            // 0x2BF4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsClimberCheckingForAutoDetach;                         // 0x2BF5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NFLR[0x2];                                   // 0x2BF6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     lastUpVectorAboveAutoDetachDotTime;                      // 0x2BF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Climber_AllowedTimeAboveAutoDetachDot;                   // 0x2C00(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsRealJump;                                             // 0x2C04(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SDWZ[0x3];                                   // 0x2C05(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClimbingClimberRotationRate_RunMultiplier_NoRider;       // 0x2C08(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bClimber_AI_AllowAILogicWhileClimbing;                   // 0x2C0C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bClimber_AI_ForceSeekWhilePursuingTarget;                // 0x2C0D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LAFJ[0x2];                                   // 0x2C0E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Climber_CurrReplicatedLoc;                               // 0x2C10(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            Climber_CurrReplicatedRot;                               // 0x2C1C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NonControlledClimber_CorrectLocation_ErrorTolerance;     // 0x2C28(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NonControlledClimber_CorrectLocation_InterpSpeed;        // 0x2C2C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsClimber_Jumping_Server;                               // 0x2C30(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bClimber_PreventSeekTraces;                              // 0x2C31(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9C4M[0x6];                                   // 0x2C32(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EncumberedMessage_Climbing;                              // 0x2C38(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FString                                              EncumberedMessage_WallJump;                              // 0x2C48(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       bClimber_OverrideStateIsMovement;                        // 0x2C58(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bClimber_AllowClimbRunAnim;                              // 0x2C59(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8WL0[0x2];                                   // 0x2C5A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClimberLookRotationDeadzoneAngle;                        // 0x2C5C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SimulateLogicBetweenFrames_Climbing_StepDeltaTime;       // 0x2C60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SimulateLogicBetweenFrames_Climbing_PositionErrorToleranceSqrd; // 0x2C64(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAllowClimber_SimulateClimbLogicBetweenFrames;           // 0x2C68(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EKNZ[0x3];                                   // 0x2C69(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStruct_ClimberSimulatedMoveData                    LastCachedServerClimberMoveData;                         // 0x2C6C(0x0024) Edit, BlueprintVisible, Transient, DisableEditOnInstance
		struct FVector                                             CurrentClimbableSurfaceNormal_Move;                      // 0x2C90(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SimulateLogicBetweenFrames_Seeking_StepDeltaTime;        // 0x2C9C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_NewLoc;                               // 0x2CA0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            K2Node_CustomEvent_NewRot;                               // 0x2CAC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_bSoftSet;                             // 0x2CB8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BSSR[0x7];                                   // 0x2CB9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          CallFunc_MakeTransform_ReturnValue;                      // 0x2CC0(0x0030) Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_SetActorLocationAndRotation_ReturnValue;        // 0x2CF0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N3P9[0x3];                                   // 0x2CF1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x2CF4(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue;                // 0x2D04(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x2D05(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x2D06(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              K2Node_CustomEvent_newState;                             // 0x2D07(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_delay3;                               // 0x2D08(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3QB7[0x4];                                   // 0x2D0C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADino_AIController_BP_Climber_C*                     CallFunc_Get_Climber_Ai_Controller_ref;                  // 0x2D10(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x2D18(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NVB6[0x3];                                   // 0x2D19(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate2;                   // 0x2D1C(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x2D2C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x2D2D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x2D2E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DZML[0x1];                                   // 0x2D2F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue;                        // 0x2D30(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x2D38(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetActorForwardVector_ReturnValue;              // 0x2D44(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_Conv_VectorToRotator_ReturnValue;               // 0x2D50(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue2;               // 0x2D5C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue3;                       // 0x2D5D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue2;                         // 0x2D5E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue4;                       // 0x2D5F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            K2Node_CustomEvent_viewRotation;                         // 0x2D60(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_climbingVelocity;                     // 0x2D6C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AController*                                         CallFunc_GetController_ReturnValue;                      // 0x2D78(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_GetControlRotation_ReturnValue;                 // 0x2D80(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Pitch;                                 // 0x2D8C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Yaw;                                   // 0x2D90(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Roll;                                  // 0x2D94(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_MakeRot_ReturnValue;                            // 0x2D98(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Get_Climber_Capsule_BottomWorldLocation_bottom; // 0x2DA4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BPFastTrace_ReturnValue;                        // 0x2DB0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MPCS[0x3];                                   // 0x2DB1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_CustomEvent_Duration4;                            // 0x2DB4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            K2Node_CustomEvent_desiredRotation;                      // 0x2DB8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue2;               // 0x2DC4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLoadingSaveGame_ReturnValue;                  // 0x2DD0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DR7O[0x3];                                   // 0x2DD1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_CustomEvent_wallJumpVelocity;                     // 0x2DD4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue5;                       // 0x2DE0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue2;                           // 0x2DE1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MW7L[0x2];                                   // 0x2DE2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate3;                   // 0x2DE4(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate4;                   // 0x2DF4(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		struct FVector                                             K2Node_CustomEvent_lineStart;                            // 0x2E04(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_lineEnd;                              // 0x2E10(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FLinearColor                                        K2Node_CustomEvent_Color3;                               // 0x2E1C(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Duration3;                            // 0x2E2C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Thickness;                            // 0x2E30(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Delay2;                               // 0x2E34(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayAnimEx_ReturnValue;                         // 0x2E38(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            K2Node_CustomEvent_newRotation2;                         // 0x2E3C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_delay;                                // 0x2E48(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_Velocity;                             // 0x2E4C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_SetActorRotation_ReturnValue;                   // 0x2E58(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EU7B[0x7];                                   // 0x2E59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue;               // 0x2E60(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsClimberClimbingSimple_Pure_result;            // 0x2E68(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsClimberClimbingSimple_Pure_result2;           // 0x2E69(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue2;                          // 0x2E6A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsClimberClimbingSimple_Pure_result3;           // 0x2E6B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue6;                       // 0x2E6C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_CanJumpInternal_ReturnValue;                    // 0x2E6D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FSW3[0x2];                                   // 0x2E6E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_GetSocketLocation_ReturnValue;                  // 0x2E70(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MG04[0x4];                                   // 0x2E7C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            CallFunc_SpawnEmitterAtLocation_ReturnValue;             // 0x2E80(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_forceSuccess2;                        // 0x2E88(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_forceSuccess;                         // 0x2E89(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UK6U[0x2];                                   // 0x2E8A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_CustomEvent_center2;                              // 0x2E8C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Radius;                               // 0x2E98(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_segments;                             // 0x2E9C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FLinearColor                                        K2Node_CustomEvent_Color2;                               // 0x2EA0(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Duration2;                            // 0x2EB0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_center;                               // 0x2EB4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_extent;                               // 0x2EC0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FLinearColor                                        K2Node_CustomEvent_color;                                // 0x2ECC(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            K2Node_CustomEvent_rotation;                             // 0x2EDC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_duration;                             // 0x2EE8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsClimberClimbingSimple_Pure_result4;           // 0x2EEC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZRO3[0x3];                                   // 0x2EED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_RandomFloatInRange_ReturnValue;                 // 0x2EF0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JYYC[0x4];                                   // 0x2EF4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CallFunc_Conv_BoolToString_ReturnValue;                  // 0x2EF8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class FString                                              CallFunc_Concat_StrStr_ReturnValue;                      // 0x2F08(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue2;                 // 0x2F18(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue7;                       // 0x2F19(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5J9C[0x2];                                   // 0x2F1A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_SelectFloat_ReturnValue;                        // 0x2F1C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            K2Node_CustomEvent_newRotation;                          // 0x2F20(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_SelectFloat_ReturnValue2;                       // 0x2F2C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_SelectFloat_ReturnValue3;                       // 0x2F30(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_SelectFloat_ReturnValue4;                       // 0x2F34(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_SelectFloat_ReturnValue5;                       // 0x2F38(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsClimberFalling_Pure_result;                   // 0x2F3C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue8;                       // 0x2F3D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x2F3E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue3;                         // 0x2F3F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue9;                       // 0x2F40(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_CanClimberSeek_result;                          // 0x2F41(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_newVal;                               // 0x2F42(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue3;                          // 0x2F43(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsClimberClimbingSimple_Pure_result5;           // 0x2F44(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L8DV[0x3];                                   // 0x2F45(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue3;               // 0x2F48(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_K2_GetActorRotation_ReturnValue;                // 0x2F54(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_Find_ItemToFind_RefProperty;              // 0x2F60(0x0001) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_Set_Item_RefProperty;                     // 0x2F61(0x0001) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DMAM[0x6];                                   // 0x2F62(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_CapsuleTraceMulti_NEW_ActorsToIgnore_RefProperty; // 0x2F68(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		bool                                                       CallFunc_Array_Set_Item2_RefProperty;                    // 0x2F78(0x0001) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RESC[0x3];                                   // 0x2F79(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Array_Set_Item3_RefProperty;                    // 0x2F7C(0x0004) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_Insert_NewItem_RefProperty;               // 0x2F80(0x0001) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6YH4[0x3];                                   // 0x2F81(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Array_Insert_NewItem2_RefProperty;              // 0x2F84(0x0004) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_Set_Item4_RefProperty;                    // 0x2F88(0x0001) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZWA5[0x7];                                   // 0x2F89(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_SphereTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x2F90(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<class AActor*>                                      CallFunc_SphereTraceSingle_NEW_ActorsToIgnore2_RefProperty; // 0x2FA0(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<class AActor*>                                      CallFunc_SphereTraceSingle_NEW_ActorsToIgnore3_RefProperty; // 0x2FB0(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void OnClimberFinishedAttaching();
		void IsClimbingTraceHitResultValid(bool bValidHit, struct FHitResult* Hit, const struct FVector& TraceStart, const struct FVector& TraceEnd, int32_t TraceIndex, int32_t TraceRetryNum, bool* bResult);
		void CanClimberOverrideRetriedTraceResult(struct FHitResult* WithHit, bool* bResult);
		void AdjustClimbTraceTransform(const class FName& WithSocketName, struct FTransform* WithTraceTransform, struct FTransform* climberTransform, struct FTransform* AdjustedTransform);
		void Tick_SimulateSeekingBetweenFrames(bool* bFoundSurface);
		void ClearCachedServerClimberMoveData();
		void CacheServerClimberMoveData();
		void Tick_SimulateClimbingBetweenFrames();
		void OnWalkableGroundFoundWhileClimbing();
		void GetDesiredMoveDirection(struct FVector* Direction);
		void GetCorrectSurfaceTraceOffsetUseTraceMapOverride(TArray<bool>* UseTraceMap);
		void GetCorrectClimbingTraceWeightOverride(bool* UseResult, TArray<float>* Weights);
		void ClimberUpdateServerTimerByClimberStateOverride();
		void CalcCurrentClimbingVelocityOverrideState(const struct FVector& CurrentVelocity, bool* ShouldOverrideVelocity, struct FVector* Velocity);
		void Climber_AllowMovementWhileClimbing(bool* Result);
		void IsClimberDetaching_Pure(bool checkPrevious, bool* Result);
		void ClimberCanEverJump_Pure(bool* Result);
		void Climber_CanEverJump(bool* Result);
		void OnJumped();
		void NetSync_ClimberIsJumping(bool Newval);
		void BP_OnPostNetReplication(const struct FVector& ReplicatedLoc, const struct FRotator& ReplicatedRot);
		void Climber_AI_OnPreventStopServerTick();
		void Climber_AI_CanStopServerTick(bool* Result);
		void ShouldClimberLockInputsWhileAttached(bool* Result);
		void Climber_AI_ClimbingCanAttack(int32_t AttackIndex, bool* Result);
		void Climber_AI_OnFlee();
		void Climber_AI_CheckForAttackWhileClimbing();
		bool BPOnStartJump();
		void Climber_OnRunReleased();
		void Climber_OnRunPressed();
		void BPCharacterUnsleeped();
		void BPCharacterSleeped();
		void ClimberAI_UpdateHasTargetWhileClimbing();
		void IsClimberPlayingPreventInputAnim(bool* Result);
		void BP_OnSetDeath();
		void IsClimberInClimbingStateRange(E_DinoClimberState startState, E_DinoClimberState EndState, bool checkPrevious, bool* Result);
		void BPOrderedMoveToLoc(struct FVector* DestLoc);
		bool BP_IsCharacterHardAttached(bool bIgnoreRiding, bool bIgnoreCarried);
		void BPCharacterDetach();
		void IsClimberNearWaterSurface(float Distance, bool* Result);
		void IsClimberClimbing_Pure(bool isFinishedAttaching, bool includeSeekingwhenabovefalse, bool includeDetaching, bool checkPrevious, bool* Result);
		void GetCorrectWallJumpAnim(const struct FVector& wallJumpVelocity, class UAnimMontage** Anim);
		void ShouldUseTraceHitForClimbingMovement(const struct FVector& HitLocation, bool* Result);
		void ShouldClimberCheckNewClimbingRotation(const struct FRotator& climbingRotation, bool* Result);
		void IsClimberMovingOnSurface_Pure(bool checkPrevious, bool* Result);
		void CanClimberSoftSetRotation(bool* Result);
		void ConvertClimberSpaceVectorToWorld_Pure(const struct FVector& climberSpaceVector, struct FVector* WorldVector);
		void ConvertClimberSpaceVectorToWorld(const struct FVector& climberSpaceVector, struct FVector* WorldVector);
		void ConvertVectorToWorld_Pure(const struct FVector& localVector, struct FVector* WorldVector);
		void ConvertRotatorToWorld_Pure(const struct FRotator& localRotator, struct FRotator* worldRotator);
		void ConvertRotatorToWorld(const struct FRotator& localRotator, struct FRotator* worldRotator);
		void ConvertVectorToWorld(const struct FVector& localVector, struct FVector* WorldVector);
		void ClimberUpdateServerTimer(float newMin, float newMAX);
		void IsClimberFalling_Pure(bool* Result);
		void IsClimberFalling(bool* Result);
		void Climber_TraceForMoveNormal(const struct FVector& TargetLocation, bool* foundHit, struct FVector* newMoveNormal);
		bool CanClimberRestoreToSeeking();
		void Climber_AI_CanWanderOntoWalls(bool* Result);
		void ClimbingIK_SetNewBlendspaceAxes();
		void DebugClimber_NetDrawDebug_Box(const struct FVector& Center, const struct FVector& Extent, const struct FLinearColor& Color, const struct FRotator& Rotation, float Duration, bool allowDraw, bool forceDebug, bool preventReplication);
		void DebugClimber_NetDrawDebug_Sphere(const struct FVector& Center, float Radius, int32_t Segments, const struct FLinearColor& Color, float Duration, bool allowDraw, bool forceDebug, bool preventReplication);
		void ClimberUpdateServerTimerByClimberState();
		void Climber_AI_CanStopAttachedServerTick(bool* Result);
		void Climber_AI_Update_ClimbWandering_Duration();
		void Climber_AI_CanUpdateClimbWandering(bool* Result);
		void UpdateClimbingClimber_AI();
		void Climber_AI_Update_IsClimbWandering(bool forceStartWandering);
		void Climber_AI_Update_ClimbWander_TargetRotation();
		void ConvertRotatorToLocal(const struct FRotator& Rotator, struct FRotator* localRotator);
		void ClimbingIK_UpdateMeshBendDotProducts();
		void Climber_AI_CanWanderWhileClimbing(bool* Result);
		void GetCorrectClimbingTraceMaxRetryCount_Pure(int32_t index, int32_t* Count);
		void GetCorrectClimbingTraceMaxRetryCount(int32_t index, int32_t* Count);
		void GetCorrectClimbingTraceType_Pure(int32_t index, E_DinoClimber_TraceType* Type);
		void GetCorrectClimbingTraceType(int32_t index, E_DinoClimber_TraceType* Type);
		void GetCorrectLookLockDot_Pure(int32_t TraceIndex, float* dot);
		void GetCorrectLookLockDot(int32_t TraceIndex, float* dot);
		void GetCorrectClimbingTraceWeight_Pure(int32_t TraceIndex, bool isForReplace, float* Weight);
		void GetCorrectClimbingTraceWeight(int32_t TraceIndex, bool isForReplace, float* Weight);
		void ShouldClimberUseClimbingTraceHit(int32_t TraceIndex, const struct FVector& HitLocation, const struct FVector& HitNormal, bool* Result);
		void CanClimberRetryClimbingTrace(int32_t TraceIndex, bool* Result);
		void ProcessResultsOfClimbingTraces(int32_t numValidTraceHits, TArray<int32_t>* traceIndecesArray, bool requireAllTraceHitsValid, int32_t numTraceSockets, const struct FTransform& currentClimberTransform, TArray<bool>* traceHitsArray, TArray<struct FVector>* traceHitLocationsArray, TArray<struct FVector>* traceNormalsArray, bool centerTraceHit, const struct FVector& desiredSurfaceLocation, bool* isSurfaceValid, struct FVector* SurfaceLocation, struct FVector* SurfaceNormal, struct FVector* surfaceLocation_Move, struct FVector* surfaceNormal_Move);
		void CenterSphereTraceForSurfaceLocation(const struct FTransform& currTransform, bool* foundSurface, struct FVector* SurfaceLocation);
		void TraceForClimbableSurface(TArray<struct FTransform>* traceSocketOffsetTransforms, const struct FTransform& climberTransform, float TraceLength, bool preventTraceRetries, TArray<int32_t>* currSurfaceTraceIndecesArray, bool* foundAnyValidTraceHits, int32_t* numValidTraceHits, TArray<bool>* validTraceHits, TArray<struct FVector>* traceHitLocations, TArray<struct FVector>* traceHitNormals);
		void ConvertRotatorToLocal_Pure(const struct FRotator& Rotator, struct FRotator* localRotator);
		void ClimbingIK_TraceForNewSurfaceNormals(const class FString& socketGroupSubstring, float* dot);
		void ClimbingIK_UpdateMeshHeightOffset();
		void UpdateClimbingIK();
		void GetClimberDesiredWallJumpDir(struct FVector* desiredDir);
		void OnStartSeeking();
		void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult* Hit);
		void BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject);
		void OnClimberAttached();
		void Climber_PlayCameraShake_Client(class UClass* Shake, float Scale, float Speed);
		void BP_OnZoomOut();
		void BP_OnZoomIn();
		void GetAverageMaxDeltawithRotatorArray(TArray<struct FRotator>* Array, const struct FRotator& Rotator, float* averageDelta);
		void GetAverageMeanDeltawithRotatorArray(TArray<struct FRotator>* Array, const struct FRotator& Rotator, float* averageDelta);
		void GetMaxDeltaBetweenRotators(const struct FRotator& A, const struct FRotator& B, float* Delta);
		void GetAverageDeltaBetweenRotators(const struct FRotator& A, const struct FRotator& B, float* Delta);
		void AddRiderToFinalCameraRotationArrays(class AShooterCharacter* RiderToAdd);
		void DetermineNewRiderFinalCameraRotationIndex(class AShooterCharacter* theRider, int32_t* index);
		void RemoveRiderFromFinalCameraRotationArrays(class AShooterCharacter* RiderToRemove);
		void GetClimberLookDirDotToClimbingNormal_Pure(float* dot);
		void GetClimberLookDirDotToClimbingNormal(float* dot);
		void GetClimberUpVector_Pure(struct FVector* Up);
		void GetCurrentRiderFinalCameraRotationArrayIndex(class AShooterCharacter* thisRider, int32_t* index);
		void UpdateRidingPlayersFinalCameraRotations(bool startedClimbing);
		void BPDoAttack(int32_t AttackIndex);
		void CanNonControlledClimberNotClimbingOverrideTransformInterpolation(bool* Result);
		void CanClimberStopNonDediTick_NonControlled(bool* Result);
		void Input_Jump_Released();
		void Input_Jump_Pressed();
		void Climber_AI_CanAttachOnSpawn(bool* Result);
		void GetClimberLookDir(struct FVector* lookDir);
		void IsPrimalCharacterFriendly(class APrimalCharacter* Character, bool* Result);
		void GetClimberLookDirDottoNormal(const struct FVector& Normal, float* dot);
		void GetClimberViewLocation_Pure(struct FVector* Location);
		void GetClimberViewLocation(struct FVector* Location);
		void CanClimberSeek(bool isForStart, bool* Result);
		void IsClimberClimbingSimple_Pure(bool excludeDetaching, bool checkPrev, bool* Result);
		void IsClimberClimbing_Simple(bool excludeDetaching, bool checkPrev, bool* Result);
		void ClimberOnServerRunReleased();
		void Climber_OnServerRunPressed();
		void ClientTick_UpdateClimberTargetFOV();
		void CanClimberStopNonDediTick_Controlled(bool* Result);
		float BPModifyFOV(float FOVIn);
		void HasClimberResetTPVCamera(bool* Result);
		void StopAllClimberLogic();
		void GetClimbingSurfaceNormalFromRotation(const struct FRotator& climbingRotation, struct FVector* SurfaceNormal);
		void GetAngleDeltaBetweenVectors(const struct FVector& VectorA, const struct FVector& VectorB, const struct FVector& AroundAxis, float* theta);
		void RotateRotatorForwardVectortoTargetConstant(const struct FRotator& currentRotator, const struct FVector& targetForward, float RotationRate, struct FRotator* newRotator);
		void RemoveAxisFromVector(const struct FVector& Vector, const struct FVector& Axis, struct FVector* newVector);
		void IsClimberSwimming_Pure(bool* Result);
		void CanClimberFinishAttaching(bool* Result);
		void CanClimberFinishSkidding(bool* Result);
		void CanClimberSkid(bool* Result);
		void ServerTick_Flipping();
		void DoesClimberHaveEnoughStaminaPure(float needsStamina, bool* Result);
		void DoesClimberHaveEnoughStamina(float needsStamina, bool* Result);
		void CanClimberCallServerRunInputEvents(bool newRunPressed, bool* Result);
		void IsClimberGrounded_Pure(bool* Result);
		void Input_Run_Toggle();
		void Input_Run_Released();
		void Input_Run_Pressed();
		void ResetShouldDrawCrosshair();
		void ClimberCheckforObstaclesInDir(const struct FVector& checkDir, float checkTrace_Distance, float checkTrace_Padding, ETraceTypeQuery checkTrace_Channel, bool forceDebug, bool* NoObstacles, struct FHitResult* obstacleHit);
		void DebugClimber_NetDrawDebug_Line(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FLinearColor& Color, float Duration, float Thickness, bool allowDraw, bool forceDebug, bool preventReplication);
		void GetClimberRightVector_Pure(struct FVector* Right);
		void GetClimberForwardVector_Pure(struct FVector* Forward);
		void OnWallJump(const struct FVector& wallJumpVelocity);
		void CanWallJump(bool* Result);
		bool BP_PreventMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode);
		struct FVector BPOverrideCharacterNewFallVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float DeltaTime);
		void GetCurrentClimberLookRotation(bool bIgnoreDeadzone, struct FRotator* lookRot);
		void IsRemoteClientClimber(bool* Result);
		void Climber_AI_OnSetTamedFollowTarget();
		bool AllowGrappling();
		void Climber_AI_OnSetTarget(class AActor* NewTarget);
		void ClimberStartSeeking();
		void ClimberStopSeeking();
		void SetClimberIK_Active(bool newActive);
		void GetClimbingIK_BlendspaceAxes_Back(struct FVector2D* axes);
		void GetClimbingIK_BlendspaceAxes_Front(struct FVector2D* axes);
		void UpdateNonDediClimberMesh();
		bool BPDesiredRotationIsLocalSpace();
		void ClimberCheckForAboveWalkableGround(bool* Result);
		bool BPModifyDesiredRotation(float DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation);
		void BPSetupTamed(bool bWasJustTamed);
		void IsClimberSeeking(bool checkPrevious, bool* Result);
		void DidClimberJustStartorStopClimbing(bool* Result);
		void IsClimberSwimming(bool* Result);
		void ResetClimbingVars();
		void UpdateClimberInputs();
		void IsOwningClientClimber(bool* Result);
		void CanClimberUpdateClimbingCameraFinalOrientation(class AShooterCharacter* viewingRider, bool* Result);
		void CanUpdateClimberTPV_CameraOffset(bool* Result);
		void ClientTickUpdateClimberTPV_CameraOffset();
		void UpdateOwningClientIsClimbingBuff();
		void StoreNonDediClimberClimbingVelocity();
		struct FRotator BPCameraRotationFinal(class APrimalCharacter* viewingCharacter, struct FRotator* InCurrentFinalRot);
		void GetClimberCapsuleBottomWorldLocation(float offsetTowardsCenter, struct FVector* Bottom);
		void GetClimberVelocityPure(bool forceUseWorldDeltaSeconds, struct FVector* Velocity);
		bool BPOverrideFPVViewLocation(class APrimalCharacter* viewingCharacter);
		struct FVector BPGetFPVViewLocation(class APrimalCharacter* viewingCharacter);
		struct FRotator BPLimitPlayerRotation(class APrimalCharacter* viewingCharacter, const struct FRotator& InViewRotation);
		float BPModifyViewHitDir(class APrimalCharacter* viewingCharacter, float InViewHitDir);
		struct FRotator BPCameraBaseOrientation(class APrimalCharacter* viewingCharacter);
		void GetClimberVelocityAlongNormal(const struct FVector& Normal, float* Velocity);
		void GetClimberVelocity(bool forceUseWorldDeltaSeconds, struct FVector* Velocity);
		void GetCurrentClimbingStaminaCost(float* cost);
		void GetCurrentClimbingRotationSpeed(float* RotationSpeed);
		void GetCurrentClimbingMoveVector(const struct FVector& OverrideMoveDir, struct FVector* moveVector);
		void GetCurrentClimbingVelocityMax(float* Velocity);
		void OnSeekReleased(bool toggle);
		void OnSeekPressed(bool toggle);
		void Climber_OnClientRunReleased();
		void Climber_OnClientRunPressed();
		void OnClimbingTracesFoundNoValidSurface(TArray<bool>* hitMap);
		void GetNewTraceVectorsForAroundCornerCheck(const struct FVector& TraceStart, const struct FVector& TraceEnd, int32_t TraceIndex, int32_t retryNum, bool didLastTraceHit, const struct FHitResult& lastTraceHitResult, bool* retryTrace, struct FVector* updatedTraceStart, struct FVector* updatedTraceEnd, bool* overrideTraceHit, struct FVector* newHitLoc, struct FVector* newHitNormal);
		void GetCustomSurfaceTraceDistance(int32_t TraceIndex, float* customDistance);
		void ShouldClimber_CenterSphereTraceForSurfaceLocation(bool* Result);
		void SetNewClimbingRotation(const struct FRotator& NewRotation);
		void ForceStopClimbingNow();
		void CanClimberApplyDetachImpulse(bool* Result);
		void LerpRotatorToTarget(const struct FRotator& currentRotator, const struct FRotator& targetRotator, float LerpSpeed, struct FRotator* lerpedRotator);
		void TraceforNonClimbableSurface(const struct FVector& traceDir, bool* found);
		void GetSurfaceTraceOffsetArrayfromUseTraceMap(TArray<bool>* useMap, TArray<struct FTransform>* Result, TArray<int32_t>* indexArray);
		void MakeClimbingRotationFromForwardVector(const struct FVector& newForward, struct FRotator* NewRotation);
		void GetCurrentClimbingTurnAngleDelta(float* Delta);
		void DebugClimber_NetDrawDebug_RotationAxes(const struct FRotator& Rotator, const struct FVector& Origin, float Length, float Duration, float Thickness, bool allowDraw, bool forceDebug, bool preventReplication);
		void SetClimbableSurfaceVars(const struct FVector& newSurfaceNormal, const struct FVector& newSurfaceNormal_Move, const struct FVector& newSurfaceLocation, const struct FVector& newSurfaceLocation_Move);
		void SnapClimberToSurface();
		void GetClimberStateIndex(bool getPrevious, unsigned char* index);
		void CanClimberUpdateClimbingRotation(const struct FRotator& NewRotation, bool* Result, struct FRotator* approvedRotation);
		void CheckForRetrySurfaceTrace(const struct FVector& TraceStart, const struct FVector& TraceEnd, int32_t TraceIndex, int32_t retryNum, bool didLastTraceHit, const struct FHitResult& lastTraceHitResult, bool* retry, struct FVector* retryStart, struct FVector* retryEnd, bool* overrideTraceHit, struct FVector* NewLocation, struct FVector* newNormal);
		void GetClimbingTurnDirection(int32_t* turnDir);
		void GetClimberFlippedRotation(struct FRotator* flipRotation);
		void GetClimberFlipAxis(struct FVector* Axis);
		void GetClimbingMoveDirFromRotation(const struct FRotator& Rotation, struct FVector* moveDir);
		void MakeClimbingRotationfromSurfaceNormal(const struct FVector& SurfaceNormal, struct FRotator* Rotation);
		void GetClimberRightVector(struct FVector* Right);
		void GetClimberForwardVector(struct FVector* Forward);
		void GetClimberUpVector(struct FVector* Up);
		void SetClimberCanIgnoreWater(bool restoreToDefault, bool Newval);
		void CanClimberCurrentlyClimbOutOfWater(bool* Result);
		void CheckForClimbOutOfWater(bool* allowClimbing);
		void UpdateControlledClientClimber();
		void ClimberTick_Server();
		void ClimberTick_NonDedi();
		void UpdateNonControlledClimber();
		void UpdateClimberMovementMode();
		void OnClimberDetached();
		void UpdateClimberOverrideFallVelocity();
		void CanClimberRotatetoTargetRotation(bool* Result);
		void IsClimberDetaching(bool checkPrevious, bool* Result);
		void SyncRiderLookDirection();
		void OnRep_CurrentClimberStateIndex();
		void CanClimberMeshInterpolate(bool* Result);
		void GetClimberFlipCheckNormal(struct FVector* Normal);
		void GetCorrectFlippingAnim(class UAnimMontage** Anim);
		void CanClimberAttachFromGround(bool* Result);
		void GetCorrectClimberRotation(bool* updateRotation, struct FRotator* Rotation);
		void CanReceiveClimbingInputBackward(bool* Result);
		void CanReceiveClimbingInput_Forward(bool* Result);
		void GetCorrectSurfaceTraceDistance(bool isForRetry, float* traceDist);
		void UpdateClimbingClimber(bool IgnoreFailure, bool* canKeepClimbing);
		void GetCorrectSurfaceTraceOffsetTransforms(bool overrideUseMap, TArray<bool>* newUseMp, TArray<struct FTransform>* offsetTransforms, TArray<int32_t>* TraceIndeces);
		void GetCorrectDetachAnim(class UAnimMontage** Anim);
		void IsClimberPlayingAnim(class UAnimMontage* checkAnim, bool* Result);
		void InterpClimbertoTransform(const struct FTransform& Transform, float LocationInterpSpeed, float RotationInterpSpeed, float DeltaTime, bool* reachedTransform);
		void SoftSetClimberTransform(const struct FTransform& NewTransform);
		void GetCorrectAttachAnim(class UAnimMontage** Anim);
		void GetCorrectMeshOffset(struct FVector* Offset);
		void StoreClimbTraceSocketOffsets();
		void IsClimberAttaching(bool checkPrevious, bool* Result);
		void RotateClimberToLookRotation();
		void CheckForPreventStopClimbing(TArray<bool>* traceHitsArray, int32_t numValidHits, int32_t numTraces, bool* allowClimbing);
		void UpdateRiderWithClimberState();
		void IsClimberInAnyClimberState(bool checkPrevious, bool* Result);
		void FlipAttachedClimber();
		void CanAttachedClimberFlip(bool* Result);
		void CheckforAttachedClimberFlip();
		void IsClimberMovingonSurface(bool checkPrevious, bool* Result);
		void GetClimbingForwardVelocity(float* ForwardVelocity);
		void GetClimbingRightVelocity(float* RightVelocity);
		void DetachClimberfromSurface();
		void ServerTick_Detaching();
		void GetServerTickDeltaTime(float* DeltaTime);
		void Skid(const struct FVector& currVelocity, const struct FVector& Dir, float InterpSpeed, struct FVector* NewVelocity);
		void GetMoveonSurfaceVelocity(struct FVector* Velocity);
		void CanClimberContinueAttaching(bool* Result);
		void RotateClimberToTargetClimbingRotation();
		void UpdateClimberTargetClimbingRotation();
		void AttachClimbertoSurface();
		void IsClimbingIndexEqualToCurrent(unsigned char index, bool* Result);
		void IsClimberMovingAbsoluteUp(bool* Result);
		void ServerTick_Override();
		void StopClimbing(bool resetRestoreToSeeking, bool skipDetach);
		void ReplicateIndexUpdateNonDediClimber();
		void FindValidAiSpawnTransform(bool* canSpawn, struct FTransform* validTransform);
		void ReplicateIndexUpdateTargetTPV_CameraOffset();
		void ReplicateIndexUpdateServerAndClientClimber();
		void ReachedTopOfClimb();
		void UpdateClimbingVars(bool validSurfaceFound, const struct FVector& SurfaceNormal, const struct FVector& surfaceNormal_Move, const struct FVector& SurfaceLocation, const struct FVector& surfaceLocation_Move, TArray<bool>* hitMap, TArray<int32_t>* traceIndexArray);
		void IsHitSurfaceClimbable(const struct FHitResult& Hit, bool* Result);
		void ReplicateClimbingIndex();
		void UpdateServerClimberByClimbingIndex();
		void UpdateClimberStateByClimbingIndex(unsigned char newIndex);
		void UpdateClimbingVelocity();
		void CalcCurrentClimbingVelocity(struct FVector* newClimbingVel);
		void ServerTick_Climbing();
		void ServerTick_Attached();
		void ServerTick_Skidding();
		void ServerTick_Attaching();
		void ServerTick_Seeking();
		void ClientTick_NoInput();
		void ClientTickInputBackward();
		void ClientTick_Input_Forward();
		void ShouldClimberDrawCrosshairWhileClimbing(bool* Result);
		void IsNormalClimbable(const struct FVector& Normal, bool isAverageNormal, bool* Result);
		float BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo);
		void ReduceClimberStamina(float amount);
		void DisplayMessage(const class FString& Message);
		void ClimberHasEnoughStaminatoClimb(bool HUD_NotifyOnFailure, bool* Result);
		void IsClimberClimbing(bool isFinishedAttaching, bool includeSeekingwhenabovefalse, bool includeDetaching, bool checkPrevious, bool* Result);
		void ReduceStaminaWhileClimbing();
		void ClimberPlayLandAnim(bool forceSuccess);
		void BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode);
		void HardSetClimberRotationButInterpMeshLocation(const struct FRotator& NewRotation);
		void CleanUpClimbingAnims(bool* animsClean);
		void SetShouldRestoretoAttached(bool Newval);
		void SoftSetClimberRotation(const struct FRotator& NewRotation);
		void WallJump();
		void InterpolateClimberMesh(class USkeletalMeshComponent* meshToInterpolate);
		void UpdateClimberCilmbingAnims(bool ensureAnimsPlaying);
		void SetUseAimOffsets(bool newUse);
		void GetStayOnSurfaceVelocity(bool bOverrideVars, const struct FVector& OverrideSurfaceLoc, float OverrideDistFromSurface, const struct FVector& OverrideClimberLoc, bool bPreventUpdatingServerTimer, struct FVector* Velocity);
		void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void InitClimber();
		void BPUnstasis();
		void Climber_AI_CheckForAttachToSurfaceOnSpawn();
		void ClientSetClimberState(unsigned char NewState);
		void CanClimberContinueClimbing(bool* Result);
		void Climber_AI_SetAttachedToSurface(bool Newval, bool forceSuccess);
		void GetClimberAiController(class ADino_AIController_BP_Climber_C** ref);
		void Climber_AI_DetachFromSurface();
		void IsClimberAttached(bool checkPrevious, bool* Result);
		void BPNotifyClearRider(class AShooterCharacter* RiderClearing);
		void BPNotifySetRider(class AShooterCharacter* RiderSetting);
		void BPTimerNonDedicated();
		void UpdateClimberTransforms();
		void GetDefaultClimber(class ADino_Character_BP_Climber_C** ref);
		void IsClimberGrounded(bool* Result);
		void CalcCurrentClimbableSurface(float TraceDistance, bool preventTraceRetries, bool requireAllTraceHitsAreValid, bool OverrideClimberTransform, const struct FTransform& NewTransform, bool OverrideTraceUseMap, TArray<bool>* newUseMap, bool* validSurfaceFound, struct FVector* SurfaceNormal, struct FVector* surfaceNormal_Move, struct FVector* SurfaceLocation, struct FVector* surfaceLocation_Move, TArray<bool>* hitMap, TArray<int32_t>* traceIndexArray);
		void NetSetClimberState(unsigned char newStateIndex);
		void BPTimerServer();
		void UserConstructionScript();
		void InpActEvt_Run_K2Node_InputActionEvent_125();
		void InpActEvt_Run_K2Node_InputActionEvent_124();
		void InpActEvt_RunToggle_K2Node_InputActionEvent_123();
		void InpActEvt_Jump_K2Node_InputActionEvent_122();
		void Server_StartSeeking();
		void Server_StopSeeking();
		void Server_NetSetClimberState(unsigned char NewState);
		void SetReadyToClimbAfterDelay(float Delay);
		void CheckUntil_SetAiAttachedToSurface();
		void PlayAttachParticleWhenCloseToSurface();
		void PreventLandingAnimBriefly();
		void CheckOnJumpStateAfterJumpDelay();
		void BP_OnJumpPressed();
		void BP_OnJumpReleased();
		void SyncToServer_RiderViewRotation(const struct FRotator& ViewRotation);
		void SyncToOwningClient_ClimbingVelocity(const struct FVector& climbingVelocity);
		void Server_OnRunPressed();
		void Server_OnRunReleased();
		void Multi_Climber_OnRunPressed();
		void Multi_Climber_OnRunReleased();
		void ClearClimberControlRotationRoll();
		void ClearClimberControlRotationRoll_NextTick();
		void ReceiveBeginPlay();
		void LockClimbingMeshRotationInterpSpeedForDuration(float Duration);
		void Multi_SyncClimberDesiredRotationOnDetach(const struct FRotator& DesiredRotation);
		void InitClimber_NextTick();
		void InitClimber_Now();
		void Multi_OnWallJump(const struct FVector& wallJumpVelocity);
		void Multi_DrawDebug_Line(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FLinearColor& Color, float Duration, float Thickness);
		void Server_OnJumpPresssed();
		void Climber_JumpAfterDelay(float Delay);
		void Multi_HardSetClimberActorRotation(const struct FRotator& NewRotation);
		void Climber_WallJumpAfterDelay(float Delay, const struct FVector& Velocity);
		void Multi_ClimberPlayLandAnim(bool forceSuccess);
		void Client_Jump(bool forceSuccess);
		void Multi_DrawDebug_Sphere(const struct FVector& Center, float Radius, int32_t Segments, const struct FLinearColor& Color, float Duration);
		void Multi_DrawDebug_Box(const struct FVector& Center, const struct FVector& Extent, const struct FLinearColor& Color, const struct FRotator& Rotation, float Duration);
		void ClimberAIRestartSeekingAfterDelay();
		void Multi_SoftSetClimberActorRotation(const struct FRotator& NewRotation);
		void Server_SetIsClimberJumping(bool Newval);
		void Client_SetActorLocAndRot(const struct FVector& NewLoc, const struct FRotator& newRot, bool bSoftSet);
		void ExecuteUbergraph_Dino_Character_BP_Climber(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
