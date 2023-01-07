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
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineFaceUpDirection
	 */
	struct ABuff_Zipline_DinoBase_C_SetZiplineFaceUpDirection_Params
	{
	public:
		bool                                                       FaceUpDirection;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetDistanceToAnchor
	 */
	struct ABuff_Zipline_DinoBase_C_GetDistanceToAnchor_Params
	{
	public:
		bool                                                       GetLower;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_416P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CanZiplineFlip
	 */
	struct ABuff_Zipline_DinoBase_C_CanZiplineFlip_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_49KQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ResetZiplineSpeedAndAcceleration
	 */
	struct ABuff_Zipline_DinoBase_C_ResetZiplineSpeedAndAcceleration_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineSliding
	 */
	struct ABuff_Zipline_DinoBase_C_SetZiplineSliding_Params
	{
	public:
		bool                                                       Reset;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XK0Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineRunningSpeedAndAcceleration
	 */
	struct ABuff_Zipline_DinoBase_C_SetZiplineRunningSpeedAndAcceleration_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.RotationNearlyEqual
	 */
	struct ABuff_Zipline_DinoBase_C_RotationNearlyEqual_Params
	{
	public:
		struct FRotator                                            RotA;                                                    // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            rotB;                                                    // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ErrorTolerance;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Return;                                                  // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0XTD[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ReceiveBeginPlay
	 */
	struct ABuff_Zipline_DinoBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateActorZiplineOffset
	 */
	struct ABuff_Zipline_DinoBase_C_UpdateActorZiplineOffset_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetHurtAnim
	 */
	struct ABuff_Zipline_DinoBase_C_SetHurtAnim_Params
	{
	public:
		bool                                                       Hanging;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Reset;                                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZL69[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPInstigatorUnpossessed
	 */
	struct ABuff_Zipline_DinoBase_C_BPInstigatorUnpossessed_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BuffTickServer
	 */
	struct ABuff_Zipline_DinoBase_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G1C9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.Get Zipline Start and End Point NonPure
	 */
	struct ABuff_Zipline_DinoBase_C_GetZiplineStartandEndPointNonPure_Params
	{
	public:
		bool                                                       NoOffset;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UO0M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Start;                                                   // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetAttachedCharacterTransform
	 */
	struct ABuff_Zipline_DinoBase_C_SetAttachedCharacterTransform_Params
	{
	public:
		struct FTransform                                          NewTransform;                                            // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetupLocalClient
	 */
	struct ABuff_Zipline_DinoBase_C_SetupLocalClient_Params
	{
	public:
		class AActor*                                              Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.Deactivate Local Client
	 */
	struct ABuff_Zipline_DinoBase_C_DeactivateLocalClient_Params
	{
	public:
		class AActor*                                              Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.IsStillColliding
	 */
	struct ABuff_Zipline_DinoBase_C_IsStillColliding_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.HandleCollision
	 */
	struct ABuff_Zipline_DinoBase_C_HandleCollision_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.HitZiplineEndStop
	 */
	struct ABuff_Zipline_DinoBase_C_HitZiplineEndStop_Params
	{
	public:
		class UMovementComponent*                                  MovementComp;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalcZiplinePreservedStartVelocity
	 */
	struct ABuff_Zipline_DinoBase_C_CalcZiplinePreservedStartVelocity_Params
	{
	public:
		struct FVector                                             InVelocity;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Velocity;                                                // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalcZiplineVelocityMotorized
	 */
	struct ABuff_Zipline_DinoBase_C_CalcZiplineVelocityMotorized_Params
	{
	public:
		struct FVector                                             InVelocity;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OutVelocity;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalcZiplineVelocityNonMotorized
	 */
	struct ABuff_Zipline_DinoBase_C_CalcZiplineVelocityNonMotorized_Params
	{
	public:
		struct FVector                                             InVelocity;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OutVelocity;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ProcessMotorInput
	 */
	struct ABuff_Zipline_DinoBase_C_ProcessMotorInput_Params
	{
	public:
		float                                                      A;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8PIA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.IsZiplineStateBlockedOrStopped
	 */
	struct ABuff_Zipline_DinoBase_C_IsZiplineStateBlockedOrStopped_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.IsAnimBlockingZiplineMovement
	 */
	struct ABuff_Zipline_DinoBase_C_IsAnimBlockingZiplineMovement_Params
	{
	public:
		bool                                                       bLocked;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPIsCharacterHardAttached
	 */
	struct ABuff_Zipline_DinoBase_C_BPIsCharacterHardAttached_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPNonDedicatedPlayerPostAnimUpdate
	 */
	struct ABuff_Zipline_DinoBase_C_BPNonDedicatedPlayerPostAnimUpdate_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPCharacterDetach
	 */
	struct ABuff_Zipline_DinoBase_C_BPCharacterDetach_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineControlRotation
	 */
	struct ABuff_Zipline_DinoBase_C_SetZiplineControlRotation_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.PlayTurnAnimation
	 */
	struct ABuff_Zipline_DinoBase_C_PlayTurnAnimation_Params
	{
	public:
		class UAnimMontage*                                        override;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Duration;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BuffAdjustDamage
	 */
	struct ABuff_Zipline_DinoBase_C_BuffAdjustDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LGYP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitInfo;                                                 // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm)
		class AController*                                         EventInstigator;                                         // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              TheDamgeType;                                            // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x00A8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateFPVCameraAndMeshPosition
	 */
	struct ABuff_Zipline_DinoBase_C_UpdateFPVCameraAndMeshPosition_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetFPVViewLocation
	 */
	struct ABuff_Zipline_DinoBase_C_GetFPVViewLocation_Params
	{
	public:
		struct FVector                                             viewLoc;                                                 // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateHandleMeshLocationAndRotation
	 */
	struct ABuff_Zipline_DinoBase_C_UpdateHandleMeshLocationAndRotation_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateFPVAnims
	 */
	struct ABuff_Zipline_DinoBase_C_UpdateFPVAnims_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.VectorNearlyEqual
	 */
	struct ABuff_Zipline_DinoBase_C_VectorNearlyEqual_Params
	{
	public:
		float                                                      ErrorTolerance;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             inVec;                                                   // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             InVec2;                                                  // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9MIB[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ResetCamera
	 */
	struct ABuff_Zipline_DinoBase_C_ResetCamera_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateCamera
	 */
	struct ABuff_Zipline_DinoBase_C_UpdateCamera_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ResetFOV
	 */
	struct ABuff_Zipline_DinoBase_C_ResetFOV_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateFOV
	 */
	struct ABuff_Zipline_DinoBase_C_UpdateFOV_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ResetMeshPosition
	 */
	struct ABuff_Zipline_DinoBase_C_ResetMeshPosition_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.JumpImpulse
	 */
	struct ABuff_Zipline_DinoBase_C_JumpImpulse_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L6M4[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InterpolateCharacterMeshToLine
	 */
	struct ABuff_Zipline_DinoBase_C_InterpolateCharacterMeshToLine_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetZiplineStartAndEndPoint
	 */
	struct ABuff_Zipline_DinoBase_C_GetZiplineStartAndEndPoint_Params
	{
	public:
		bool                                                       NoOffset;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R40P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Start;                                                   // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalculateZiplineMaxVelocity
	 */
	struct ABuff_Zipline_DinoBase_C_CalculateZiplineMaxVelocity_Params
	{
	public:
		float                                                      Accleration;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Length;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      maxVelocity;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalculateZiplineAcceleration
	 */
	struct ABuff_Zipline_DinoBase_C_CalculateZiplineAcceleration_Params
	{
	public:
		struct FVector                                             StartPoint;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             EndPoint;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Acceleration;                                            // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.Play Detach Animation
	 */
	struct ABuff_Zipline_DinoBase_C_PlayDetachAnimation_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.PlayAttachAnimation
	 */
	struct ABuff_Zipline_DinoBase_C_PlayAttachAnimation_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9J57[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetCurrentDistanceOnLinePercent
	 */
	struct ABuff_Zipline_DinoBase_C_GetCurrentDistanceOnLinePercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetStartEndOffset
	 */
	struct ABuff_Zipline_DinoBase_C_GetStartEndOffset_Params
	{
	public:
		bool                                                       ReturnPercent;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RQ3J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    forChar;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetCurrentSpeedPercentageFromMax
	 */
	struct ABuff_Zipline_DinoBase_C_GetCurrentSpeedPercentageFromMax_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetMotorState
	 */
	struct ABuff_Zipline_DinoBase_C_SetMotorState_Params
	{
	public:
		E_ZiplineMotorState                                        NewMotorState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8LCH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetClosestPointOnLine
	 */
	struct ABuff_Zipline_DinoBase_C_GetClosestPointOnLine_Params
	{
	public:
		struct FVector                                             LineStart;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             LineEnd;                                                 // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Location;                                                // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Result;                                                  // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPCheckPreventInput
	 */
	struct ABuff_Zipline_DinoBase_C_BPCheckPreventInput_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateMeshAttachment
	 */
	struct ABuff_Zipline_DinoBase_C_UpdateMeshAttachment_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateFX
	 */
	struct ABuff_Zipline_DinoBase_C_UpdateFX_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BuffTickClient
	 */
	struct ABuff_Zipline_DinoBase_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetAttachOffset
	 */
	struct ABuff_Zipline_DinoBase_C_GetAttachOffset_Params
	{
	public:
		struct FVector                                             AttachOffset;                                            // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPSetupForInstigator
	 */
	struct ABuff_Zipline_DinoBase_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPDeactivated
	 */
	struct ABuff_Zipline_DinoBase_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPOverrideCharacterNewFallVelocity
	 */
	struct ABuff_Zipline_DinoBase_C_BPOverrideCharacterNewFallVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.AttachToZipline
	 */
	struct ABuff_Zipline_DinoBase_C_AttachToZipline_Params
	{
	public:
		struct FVector                                             StartLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y3UC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.End Move Along Zipline
	 */
	struct ABuff_Zipline_DinoBase_C_EndMoveAlongZipline_Params
	{
	public:
		bool                                                       AddImpulse;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.TickMoveAlongZipline
	 */
	struct ABuff_Zipline_DinoBase_C_TickMoveAlongZipline_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.StartMoveAlongZipline
	 */
	struct ABuff_Zipline_DinoBase_C_StartMoveAlongZipline_Params
	{
	public:
		struct FVector                                             StartLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FTR2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AZipline_Anchor_C*                                   UpperZiplineAnchor;                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AZipline_Anchor_C*                                   LowerZiplineAnchor;                                      // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Direction;                                               // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UserConstructionScript
	 */
	struct ABuff_Zipline_DinoBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Run_K2Node_InputActionEvent_114
	 */
	struct ABuff_Zipline_DinoBase_C_InpActEvt_Run_K2Node_InputActionEvent_114_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Run_K2Node_InputActionEvent_113
	 */
	struct ABuff_Zipline_DinoBase_C_InpActEvt_Run_K2Node_InputActionEvent_113_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Jump_K2Node_InputActionEvent_112
	 */
	struct ABuff_Zipline_DinoBase_C_InpActEvt_Jump_K2Node_InputActionEvent_112_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Crouch_K2Node_InputActionEvent_111
	 */
	struct ABuff_Zipline_DinoBase_C_InpActEvt_Crouch_K2Node_InputActionEvent_111_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_110
	 */
	struct ABuff_Zipline_DinoBase_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_110_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_50
	 */
	struct ABuff_Zipline_DinoBase_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_50_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_49
	 */
	struct ABuff_Zipline_DinoBase_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_49_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_109
	 */
	struct ABuff_Zipline_DinoBase_C_InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_109_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.EndMoveAlongZipline_RunOnServer
	 */
	struct ABuff_Zipline_DinoBase_C_EndMoveAlongZipline_RunOnServer_Params
	{
	public:
		bool                                                       AddImpulse;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_87
	 */
	struct ABuff_Zipline_DinoBase_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_87_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetMotorState_RunOnServer
	 */
	struct ABuff_Zipline_DinoBase_C_SetMotorState_RunOnServer_Params
	{
	public:
		E_ZiplineMotorState                                        NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BindToHit
	 */
	struct ABuff_Zipline_DinoBase_C_BindToHit_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.PlayCameraShake
	 */
	struct ABuff_Zipline_DinoBase_C_PlayCameraShake_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.PlayAttachDelayed
	 */
	struct ABuff_Zipline_DinoBase_C_PlayAttachDelayed_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.StopMoving_Multicast
	 */
	struct ABuff_Zipline_DinoBase_C_StopMoving_Multicast_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.OnComponentHit_Event
	 */
	struct ABuff_Zipline_DinoBase_C_OnComponentHit_Event_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NormalImpulse;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J9O4[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0020(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetInitialVelocity
	 */
	struct ABuff_Zipline_DinoBase_C_SetInitialVelocity_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SecondJumpImpulse
	 */
	struct ABuff_Zipline_DinoBase_C_SecondJumpImpulse_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.FlipOnZipline_Multicast
	 */
	struct ABuff_Zipline_DinoBase_C_FlipOnZipline_Multicast_Params
	{
	public:
		bool                                                       Fast;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CX47[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalDinoCharacter*                                attachedDino;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.FlipOnZipline_RunOnServer
	 */
	struct ABuff_Zipline_DinoBase_C_FlipOnZipline_RunOnServer_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetIsTurning
	 */
	struct ABuff_Zipline_DinoBase_C_SetIsTurning_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.DoZiplineTurn_RunOnServer
	 */
	struct ABuff_Zipline_DinoBase_C_DoZiplineTurn_RunOnServer_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.RunPressed
	 */
	struct ABuff_Zipline_DinoBase_C_RunPressed_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineRunningSpeedAndAcceleration_Multicast
	 */
	struct ABuff_Zipline_DinoBase_C_SetZiplineRunningSpeedAndAcceleration_Multicast_Params
	{
	public:
		bool                                                       Reset;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineRunningSpeedAndAcceleration_RunOnServer
	 */
	struct ABuff_Zipline_DinoBase_C_SetZiplineRunningSpeedAndAcceleration_RunOnServer_Params
	{
	public:
		bool                                                       Reset;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetRunning_RunOnClient
	 */
	struct ABuff_Zipline_DinoBase_C_SetRunning_RunOnClient_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetSliding_Multicast
	 */
	struct ABuff_Zipline_DinoBase_C_SetSliding_Multicast_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.AI_SetZiplineRunning_Multicast
	 */
	struct ABuff_Zipline_DinoBase_C_AI_SetZiplineRunning_Multicast_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetFinishedDetach
	 */
	struct ABuff_Zipline_DinoBase_C_SetFinishedDetach_Params
	{	};

	/**
	 * Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ExecuteUbergraph_Buff_Zipline_DinoBase
	 */
	struct ABuff_Zipline_DinoBase_C_ExecuteUbergraph_Buff_Zipline_DinoBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
