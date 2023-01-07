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
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPInstigatorUnpossessed
	 */
	struct ABuff_Zipline_CaveWolf_C_BPInstigatorUnpossessed_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineFaceUpDirection
	 */
	struct ABuff_Zipline_CaveWolf_C_SetZiplineFaceUpDirection_Params
	{
	public:
		bool                                                       FacingUpDirection;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.Get Distance to Anchor
	 */
	struct ABuff_Zipline_CaveWolf_C_GetDistancetoAnchor_Params
	{
	public:
		bool                                                       GetLower;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GG0Z[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineSliding
	 */
	struct ABuff_Zipline_CaveWolf_C_SetZiplineSliding_Params
	{
	public:
		bool                                                       Reset;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.PlayAttachDelayed
	 */
	struct ABuff_Zipline_CaveWolf_C_PlayAttachDelayed_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetAttachedCharacterTransform
	 */
	struct ABuff_Zipline_CaveWolf_C_SetAttachedCharacterTransform_Params
	{
	public:
		struct FTransform                                          NewTransform;                                            // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.PlayAttachAnimation
	 */
	struct ABuff_Zipline_CaveWolf_C_PlayAttachAnimation_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SXDC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.CalcZiplineVelocityMotorized
	 */
	struct ABuff_Zipline_CaveWolf_C_CalcZiplineVelocityMotorized_Params
	{
	public:
		struct FVector                                             InVelocity;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OutVelocity;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ReceiveBeginPlay
	 */
	struct ABuff_Zipline_CaveWolf_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.GetAttachOffset
	 */
	struct ABuff_Zipline_CaveWolf_C_GetAttachOffset_Params
	{
	public:
		struct FVector                                             AttachOffset;                                            // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.Play Detach Animation
	 */
	struct ABuff_Zipline_CaveWolf_C_PlayDetachAnimation_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.IsStillColliding
	 */
	struct ABuff_Zipline_CaveWolf_C_IsStillColliding_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.CanZiplineFlip
	 */
	struct ABuff_Zipline_CaveWolf_C_CanZiplineFlip_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YR9H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ResetCamera
	 */
	struct ABuff_Zipline_CaveWolf_C_ResetCamera_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.HandleCollision
	 */
	struct ABuff_Zipline_CaveWolf_C_HandleCollision_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.HitZiplineEndStop
	 */
	struct ABuff_Zipline_CaveWolf_C_HitZiplineEndStop_Params
	{
	public:
		class UMovementComponent*                                  MovementComp;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.CalcZiplinePreservedStartVelocity
	 */
	struct ABuff_Zipline_CaveWolf_C_CalcZiplinePreservedStartVelocity_Params
	{
	public:
		struct FVector                                             InVelocity;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Velocity;                                                // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineRunningSpeedAndAcceleration
	 */
	struct ABuff_Zipline_CaveWolf_C_SetZiplineRunningSpeedAndAcceleration_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ResetZiplineSpeedAndAcceleration
	 */
	struct ABuff_Zipline_CaveWolf_C_ResetZiplineSpeedAndAcceleration_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.End Move Along Zipline
	 */
	struct ABuff_Zipline_CaveWolf_C_EndMoveAlongZipline_Params
	{
	public:
		bool                                                       AddImpulse;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.CalcZiplineVelocityNonMotorized
	 */
	struct ABuff_Zipline_CaveWolf_C_CalcZiplineVelocityNonMotorized_Params
	{
	public:
		struct FVector                                             InVelocity;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OutVelocity;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.UpdateFX
	 */
	struct ABuff_Zipline_CaveWolf_C_UpdateFX_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ProcessMotorInput
	 */
	struct ABuff_Zipline_CaveWolf_C_ProcessMotorInput_Params
	{
	public:
		float                                                      A;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.JumpImpulse
	 */
	struct ABuff_Zipline_CaveWolf_C_JumpImpulse_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GKHZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.UpdateActorZiplineOffset
	 */
	struct ABuff_Zipline_CaveWolf_C_UpdateActorZiplineOffset_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.TickMoveAlongZipline
	 */
	struct ABuff_Zipline_CaveWolf_C_TickMoveAlongZipline_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetHurtAnim
	 */
	struct ABuff_Zipline_CaveWolf_C_SetHurtAnim_Params
	{
	public:
		bool                                                       Hanging;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Reset;                                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1QKD[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.AttachToZipline
	 */
	struct ABuff_Zipline_CaveWolf_C_AttachToZipline_Params
	{
	public:
		struct FVector                                             StartLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BuffTickClient
	 */
	struct ABuff_Zipline_CaveWolf_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.UpdateFPVCameraAndMeshPosition
	 */
	struct ABuff_Zipline_CaveWolf_C_UpdateFPVCameraAndMeshPosition_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPOverrideCharacterNewFallVelocity
	 */
	struct ABuff_Zipline_CaveWolf_C_BPOverrideCharacterNewFallVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPCheckPreventInput
	 */
	struct ABuff_Zipline_CaveWolf_C_BPCheckPreventInput_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.PlayTurnAnimation
	 */
	struct ABuff_Zipline_CaveWolf_C_PlayTurnAnimation_Params
	{
	public:
		class UAnimMontage*                                        override;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Duration;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C1S8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineControlRotation
	 */
	struct ABuff_Zipline_CaveWolf_C_SetZiplineControlRotation_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.RotationNearlyEqual
	 */
	struct ABuff_Zipline_CaveWolf_C_RotationNearlyEqual_Params
	{
	public:
		struct FRotator                                            RotA;                                                    // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            rotB;                                                    // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ErrorTolerance;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Return;                                                  // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J4PI[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPDeactivated
	 */
	struct ABuff_Zipline_CaveWolf_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPSetupForInstigator
	 */
	struct ABuff_Zipline_CaveWolf_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ResetMeshPosition
	 */
	struct ABuff_Zipline_CaveWolf_C_ResetMeshPosition_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InterpolateCharacterMeshToLine
	 */
	struct ABuff_Zipline_CaveWolf_C_InterpolateCharacterMeshToLine_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.UserConstructionScript
	 */
	struct ABuff_Zipline_CaveWolf_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Run_K2Node_InputActionEvent_121
	 */
	struct ABuff_Zipline_CaveWolf_C_InpActEvt_Run_K2Node_InputActionEvent_121_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Run_K2Node_InputActionEvent_120
	 */
	struct ABuff_Zipline_CaveWolf_C_InpActEvt_Run_K2Node_InputActionEvent_120_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Jump_K2Node_InputActionEvent_119
	 */
	struct ABuff_Zipline_CaveWolf_C_InpActEvt_Jump_K2Node_InputActionEvent_119_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Use_K2Node_InputActionEvent_118
	 */
	struct ABuff_Zipline_CaveWolf_C_InpActEvt_Use_K2Node_InputActionEvent_118_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Crouch_K2Node_InputActionEvent_117
	 */
	struct ABuff_Zipline_CaveWolf_C_InpActEvt_Crouch_K2Node_InputActionEvent_117_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_116
	 */
	struct ABuff_Zipline_CaveWolf_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_116_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_53
	 */
	struct ABuff_Zipline_CaveWolf_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_53_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_52
	 */
	struct ABuff_Zipline_CaveWolf_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_52_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_115
	 */
	struct ABuff_Zipline_CaveWolf_C_InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_115_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_51
	 */
	struct ABuff_Zipline_CaveWolf_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_51_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.FlipOnZipline_Multicast
	 */
	struct ABuff_Zipline_CaveWolf_C_FlipOnZipline_Multicast_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.FlipOnZipline_RunOnServer
	 */
	struct ABuff_Zipline_CaveWolf_C_FlipOnZipline_RunOnServer_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetIsTurning
	 */
	struct ABuff_Zipline_CaveWolf_C_SetIsTurning_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.DoZiplineTurn_RunOnServer
	 */
	struct ABuff_Zipline_CaveWolf_C_DoZiplineTurn_RunOnServer_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.RunPressed
	 */
	struct ABuff_Zipline_CaveWolf_C_RunPressed_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineRunningSpeedAndAcceleration_Multicast
	 */
	struct ABuff_Zipline_CaveWolf_C_SetZiplineRunningSpeedAndAcceleration_Multicast_Params
	{
	public:
		bool                                                       Reset;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineRunningSpeedAndAcceleration_RunOnServer
	 */
	struct ABuff_Zipline_CaveWolf_C_SetZiplineRunningSpeedAndAcceleration_RunOnServer_Params
	{
	public:
		bool                                                       Reset;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetRunning_RunOnClient
	 */
	struct ABuff_Zipline_CaveWolf_C_SetRunning_RunOnClient_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.DoNothing
	 */
	struct ABuff_Zipline_CaveWolf_C_DoNothing_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetSliding_Multicast
	 */
	struct ABuff_Zipline_CaveWolf_C_SetSliding_Multicast_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.AI_SetZiplineRunning_Multicast
	 */
	struct ABuff_Zipline_CaveWolf_C_AI_SetZiplineRunning_Multicast_Params
	{	};

	/**
	 * Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ExecuteUbergraph_Buff_Zipline_CaveWolf
	 */
	struct ABuff_Zipline_CaveWolf_C_ExecuteUbergraph_Buff_Zipline_CaveWolf_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
