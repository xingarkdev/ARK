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
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPInstigatorUnpossessed
	 */
	struct ABuff_Zipline_Base_C_BPInstigatorUnpossessed_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.BuffTickServer
	 */
	struct ABuff_Zipline_Base_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L5IG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.Get Zipline Start and End Point NonPure
	 */
	struct ABuff_Zipline_Base_C_GetZiplineStartandEndPointNonPure_Params
	{
	public:
		bool                                                       NoOffset;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EI3J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Start;                                                   // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.SetAttachedCharacterTransform
	 */
	struct ABuff_Zipline_Base_C_SetAttachedCharacterTransform_Params
	{
	public:
		struct FTransform                                          NewTransform;                                            // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.SetupLocalClient
	 */
	struct ABuff_Zipline_Base_C_SetupLocalClient_Params
	{
	public:
		class AActor*                                              Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.Deactivate Local Client
	 */
	struct ABuff_Zipline_Base_C_DeactivateLocalClient_Params
	{
	public:
		class AActor*                                              Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.IsStillColliding
	 */
	struct ABuff_Zipline_Base_C_IsStillColliding_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.HandleCollision
	 */
	struct ABuff_Zipline_Base_C_HandleCollision_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.HitZiplineEndStop
	 */
	struct ABuff_Zipline_Base_C_HitZiplineEndStop_Params
	{
	public:
		class UMovementComponent*                                  MovementComp;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.CalcZiplinePreservedStartVelocity
	 */
	struct ABuff_Zipline_Base_C_CalcZiplinePreservedStartVelocity_Params
	{
	public:
		struct FVector                                             InVelocity;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Velocity;                                                // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.CalcZiplineVelocityMotorized
	 */
	struct ABuff_Zipline_Base_C_CalcZiplineVelocityMotorized_Params
	{
	public:
		struct FVector                                             InVelocity;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OutVelocity;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.CalcZiplineVelocityNonMotorized
	 */
	struct ABuff_Zipline_Base_C_CalcZiplineVelocityNonMotorized_Params
	{
	public:
		struct FVector                                             InVelocity;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OutVelocity;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.ProcessMotorInput
	 */
	struct ABuff_Zipline_Base_C_ProcessMotorInput_Params
	{
	public:
		float                                                      A;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.IsZiplineStateBlockedOrStopped
	 */
	struct ABuff_Zipline_Base_C_IsZiplineStateBlockedOrStopped_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.IsAnimBlockingZiplineMovement
	 */
	struct ABuff_Zipline_Base_C_IsAnimBlockingZiplineMovement_Params
	{
	public:
		bool                                                       bLocked;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPIsCharacterHardAttached
	 */
	struct ABuff_Zipline_Base_C_BPIsCharacterHardAttached_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPNonDedicatedPlayerPostAnimUpdate
	 */
	struct ABuff_Zipline_Base_C_BPNonDedicatedPlayerPostAnimUpdate_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPCharacterDetach
	 */
	struct ABuff_Zipline_Base_C_BPCharacterDetach_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.SetZiplineControlRotation
	 */
	struct ABuff_Zipline_Base_C_SetZiplineControlRotation_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.PlayTurnAnimation
	 */
	struct ABuff_Zipline_Base_C_PlayTurnAnimation_Params
	{
	public:
		class UAnimMontage*                                        override;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Duration;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.BuffAdjustDamage
	 */
	struct ABuff_Zipline_Base_C_BuffAdjustDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y098[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitInfo;                                                 // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm)
		class AController*                                         EventInstigator;                                         // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              TheDamgeType;                                            // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x00A8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateFPVCameraAndMeshPosition
	 */
	struct ABuff_Zipline_Base_C_UpdateFPVCameraAndMeshPosition_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetFPVViewLocation
	 */
	struct ABuff_Zipline_Base_C_GetFPVViewLocation_Params
	{
	public:
		struct FVector                                             viewLoc;                                                 // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateHandleMeshLocationAndRotation
	 */
	struct ABuff_Zipline_Base_C_UpdateHandleMeshLocationAndRotation_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateFPVAnims
	 */
	struct ABuff_Zipline_Base_C_UpdateFPVAnims_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.VectorNearlyEqual
	 */
	struct ABuff_Zipline_Base_C_VectorNearlyEqual_Params
	{
	public:
		float                                                      ErrorTolerance;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             inVec;                                                   // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             InVec2;                                                  // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BT6Z[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.ResetCamera
	 */
	struct ABuff_Zipline_Base_C_ResetCamera_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateCamera
	 */
	struct ABuff_Zipline_Base_C_UpdateCamera_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.ResetFOV
	 */
	struct ABuff_Zipline_Base_C_ResetFOV_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateFOV
	 */
	struct ABuff_Zipline_Base_C_UpdateFOV_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.ResetMeshPosition
	 */
	struct ABuff_Zipline_Base_C_ResetMeshPosition_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.JumpImpulse
	 */
	struct ABuff_Zipline_Base_C_JumpImpulse_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.InterpolateCharacterMeshToLine
	 */
	struct ABuff_Zipline_Base_C_InterpolateCharacterMeshToLine_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetZiplineStartAndEndPoint
	 */
	struct ABuff_Zipline_Base_C_GetZiplineStartAndEndPoint_Params
	{
	public:
		bool                                                       NoOffset;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SRXO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Start;                                                   // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.CalculateZiplineMaxVelocity
	 */
	struct ABuff_Zipline_Base_C_CalculateZiplineMaxVelocity_Params
	{
	public:
		float                                                      Accleration;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Length;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      maxVelocity;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.CalculateZiplineAcceleration
	 */
	struct ABuff_Zipline_Base_C_CalculateZiplineAcceleration_Params
	{
	public:
		struct FVector                                             StartPoint;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             EndPoint;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Acceleration;                                            // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.Play Detach Animation
	 */
	struct ABuff_Zipline_Base_C_PlayDetachAnimation_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T6BB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.PlayAttachAnimation
	 */
	struct ABuff_Zipline_Base_C_PlayAttachAnimation_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AO9C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetCurrentDistanceOnLinePercent
	 */
	struct ABuff_Zipline_Base_C_GetCurrentDistanceOnLinePercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetStartEndOffset
	 */
	struct ABuff_Zipline_Base_C_GetStartEndOffset_Params
	{
	public:
		bool                                                       ReturnPercent;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OC6B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    forChar;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetCurrentSpeedPercentageFromMax
	 */
	struct ABuff_Zipline_Base_C_GetCurrentSpeedPercentageFromMax_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.SetMotorState
	 */
	struct ABuff_Zipline_Base_C_SetMotorState_Params
	{
	public:
		E_ZiplineMotorState                                        NewMotorState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1JMP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetClosestPointOnLine
	 */
	struct ABuff_Zipline_Base_C_GetClosestPointOnLine_Params
	{
	public:
		struct FVector                                             LineStart;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             LineEnd;                                                 // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Location;                                                // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Result;                                                  // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPCheckPreventInput
	 */
	struct ABuff_Zipline_Base_C_BPCheckPreventInput_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateMeshAttachment
	 */
	struct ABuff_Zipline_Base_C_UpdateMeshAttachment_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateFX
	 */
	struct ABuff_Zipline_Base_C_UpdateFX_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.BuffTickClient
	 */
	struct ABuff_Zipline_Base_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetAttachOffset
	 */
	struct ABuff_Zipline_Base_C_GetAttachOffset_Params
	{
	public:
		struct FVector                                             AttachOffset;                                            // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPSetupForInstigator
	 */
	struct ABuff_Zipline_Base_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GTW2[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPDeactivated
	 */
	struct ABuff_Zipline_Base_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPOverrideCharacterNewFallVelocity
	 */
	struct ABuff_Zipline_Base_C_BPOverrideCharacterNewFallVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.AttachToZipline
	 */
	struct ABuff_Zipline_Base_C_AttachToZipline_Params
	{
	public:
		struct FVector                                             StartLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.End Move Along Zipline
	 */
	struct ABuff_Zipline_Base_C_EndMoveAlongZipline_Params
	{
	public:
		bool                                                       AddImpulse;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.TickMoveAlongZipline
	 */
	struct ABuff_Zipline_Base_C_TickMoveAlongZipline_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.StartMoveAlongZipline
	 */
	struct ABuff_Zipline_Base_C_StartMoveAlongZipline_Params
	{
	public:
		struct FVector                                             StartLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8CM1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AZipline_Anchor_C*                                   UpperZiplineAnchor;                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AZipline_Anchor_C*                                   LowerZiplineAnchor;                                      // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Direction;                                               // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.UserConstructionScript
	 */
	struct ABuff_Zipline_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Use_K2Node_InputActionEvent_108
	 */
	struct ABuff_Zipline_Base_C_InpActEvt_Use_K2Node_InputActionEvent_108_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Prone_K2Node_InputActionEvent_107
	 */
	struct ABuff_Zipline_Base_C_InpActEvt_Prone_K2Node_InputActionEvent_107_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Crouch_K2Node_InputActionEvent_106
	 */
	struct ABuff_Zipline_Base_C_InpActEvt_Crouch_K2Node_InputActionEvent_106_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Jump_K2Node_InputActionEvent_105
	 */
	struct ABuff_Zipline_Base_C_InpActEvt_Jump_K2Node_InputActionEvent_105_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_48
	 */
	struct ABuff_Zipline_Base_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_48_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_47
	 */
	struct ABuff_Zipline_Base_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_47_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_46
	 */
	struct ABuff_Zipline_Base_C_InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_46_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.EndMoveAlongZipline_RunOnServer
	 */
	struct ABuff_Zipline_Base_C_EndMoveAlongZipline_RunOnServer_Params
	{
	public:
		bool                                                       AddImpulse;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_87
	 */
	struct ABuff_Zipline_Base_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_87_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.SetMotorState_RunOnServer
	 */
	struct ABuff_Zipline_Base_C_SetMotorState_RunOnServer_Params
	{
	public:
		E_ZiplineMotorState                                        NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.BindToHit
	 */
	struct ABuff_Zipline_Base_C_BindToHit_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.PlayCameraShake
	 */
	struct ABuff_Zipline_Base_C_PlayCameraShake_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.PlayAttachDelayed
	 */
	struct ABuff_Zipline_Base_C_PlayAttachDelayed_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.StopMoving_Multicast
	 */
	struct ABuff_Zipline_Base_C_StopMoving_Multicast_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.OnComponentHit_Event
	 */
	struct ABuff_Zipline_Base_C_OnComponentHit_Event_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NormalImpulse;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_54QQ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0020(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.SetInitialVelocity
	 */
	struct ABuff_Zipline_Base_C_SetInitialVelocity_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.SecondJumpImpulse
	 */
	struct ABuff_Zipline_Base_C_SecondJumpImpulse_Params
	{	};

	/**
	 * Function Buff_Zipline_Base.Buff_Zipline_Base_C.ExecuteUbergraph_Buff_Zipline_Base
	 */
	struct ABuff_Zipline_Base_C_ExecuteUbergraph_Buff_Zipline_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
