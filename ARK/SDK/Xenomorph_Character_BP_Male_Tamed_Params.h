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
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPNotifySetRider
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPTimerNonDedicated
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPCharacterSleeped
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_BPCharacterSleeped_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPOnMovementModeChangedNotify
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPNotifyClearRider
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Server Stop Jump
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_ServerStopJump_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPDoAttack
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.GetLaunchDirection
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_GetLaunchDirection_Params
	{
	public:
		class AActor*                                              CalcActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.LaunchAtTracePoint
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_LaunchAtTracePoint_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Process Launch
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_ProcessLaunch_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ProcessJump
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_ProcessJump_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Jump Trace
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_JumpTrace_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ShouldStopJumpRotation
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_ShouldStopJumpRotation_Params
	{
	public:
		bool                                                       returnvalue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5UWP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ShortestAngleDistance
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_ShortestAngleDistance_Params
	{
	public:
		float                                                      AngleCurrent;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      AngleTarget;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Difference;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.GetClampedLookDir
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_GetClampedLookDir_Params
	{
	public:
		bool                                                       LimitLowerPitch;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XWW7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.UserConstructionScript
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BP_OnJumpPressed
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_BP_OnJumpPressed_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BP_OnJumpReleased
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_BP_OnJumpReleased_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.DelayedPress
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_DelayedPress_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Request Jump Response
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_RequestJumpResponse_Params
	{
	public:
		bool                                                       isHoldingJump;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Multi_SetPreventMovement
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_Multi_SetPreventMovement_Params
	{
	public:
		bool                                                       NewPreventMovement;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.DelayedClearJumping
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_DelayedClearJumping_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Server_TraceTargetDir
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_Server_TraceTargetDir_Params
	{
	public:
		struct FVector                                             AimLoc;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AimHit;                                                  // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       JumpInstant;                                             // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.StartJumpIdle
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_StartJumpIdle_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ClearJump
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_ClearJump_Params
	{
	public:
		bool                                                       ForceImmediateClear;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Multi_TraceTargetDir
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_Multi_TraceTargetDir_Params
	{
	public:
		struct FVector                                             AimLoc;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AimHit;                                                  // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.UpdateAllJumpRotation
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_UpdateAllJumpRotation_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.UpdateJumpRotation
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_UpdateJumpRotation_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.AnimNotify_JumpStart
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_AnimNotify_JumpStart_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ServerArrestMovement
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_ServerArrestMovement_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ResetArrestMovement
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_ResetArrestMovement_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ExecuteUbergraph_Xenomorph_Character_BP_Male_Tamed
	 */
	struct AXenomorph_Character_BP_Male_Tamed_C_ExecuteUbergraph_Xenomorph_Character_BP_Male_Tamed_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
