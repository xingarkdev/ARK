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
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOnTamedProcessOrder
	 */
	struct AIceJumper_Character_BP_C_BPOnTamedProcessOrder_Params
	{
	public:
		class APrimalCharacter*                                    FromCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EDinoTamedOrder                                            OrderType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForce;                                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4TAA[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              enemyTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       orderNotExecuted;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.IsLowServerFPS
	 */
	struct AIceJumper_Character_BP_C_IsLowServerFPS_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V8EN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetPositionErrorTolerance
	 */
	struct AIceJumper_Character_BP_C_SetPositionErrorTolerance_Params
	{
	public:
		float                                                      Tolerance;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      FlyingTolerance;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.Queue Random Boredom
	 */
	struct AIceJumper_Character_BP_C_QueueRandomBoredom_Params
	{
	public:
		bool                                                       IncludePossibleInstantBoredom;                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetIsBored
	 */
	struct AIceJumper_Character_BP_C_SetIsBored_Params
	{
	public:
		bool                                                       IsBored;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPTryMultiUse
	 */
	struct AIceJumper_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AIceJumper_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPUnstasis
	 */
	struct AIceJumper_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPGetDebugInfoString
	 */
	struct AIceJumper_Character_BP_C_BPGetDebugInfoString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPTriggerStasisEvent
	 */
	struct AIceJumper_Character_BP_C_BPTriggerStasisEvent_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPModifyFOV
	 */
	struct AIceJumper_Character_BP_C_BPModifyFOV_Params
	{
	public:
		float                                                      FOVIn;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPModifyFOVInterpSpeed
	 */
	struct AIceJumper_Character_BP_C_BPModifyFOVInterpSpeed_Params
	{
	public:
		float                                                      FOVInterpSpeedIn;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.PlayTiredAnim
	 */
	struct AIceJumper_Character_BP_C_PlayTiredAnim_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPModifyAimOffsetNoTarget
	 */
	struct AIceJumper_Character_BP_C_BPModifyAimOffsetNoTarget_Params
	{
	public:
		struct FRotator                                            Aim;                                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_PreventMovementMode
	 */
	struct AIceJumper_Character_BP_C_BP_PreventMovementMode_Params
	{
	public:
		EMovementMode                                              NewMovementMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.Spawn Ice Breath
	 */
	struct AIceJumper_Character_BP_C_SpawnIceBreath_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPHandlePoop
	 */
	struct AIceJumper_Character_BP_C_BPHandlePoop_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetForwardDashMaxDistance2D
	 */
	struct AIceJumper_Character_BP_C_GetForwardDashMaxDistance2D_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_ClientLocationInterpSpeedReplicated
	 */
	struct AIceJumper_Character_BP_C_OnRep_ClientLocationInterpSpeedReplicated_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.IceBreathStateIsActive
	 */
	struct AIceJumper_Character_BP_C_IceBreathStateIsActive_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J6G6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetIceBreathInputPressed
	 */
	struct AIceJumper_Character_BP_C_SetIceBreathInputPressed_Params
	{
	public:
		bool                                                       Pressed;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct AIceJumper_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_OnSetDeath
	 */
	struct AIceJumper_Character_BP_C_BP_OnSetDeath_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPNotifySetRider
	 */
	struct AIceJumper_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPNotifyClearRider
	 */
	struct AIceJumper_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReceiveAnyDamage
	 */
	struct AIceJumper_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UI0M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.Get AbilityStamina Cost
	 */
	struct AIceJumper_Character_BP_C_GetAbilityStaminaCost_Params
	{
	public:
		float                                                      Base;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Result;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.Is AIControlled
	 */
	struct AIceJumper_Character_BP_C_IsAIControlled_Params
	{
	public:
		bool                                                       AIControlled;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V100[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 */
	struct AIceJumper_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BM33[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UAnimMontage*>                                AnimationArray;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.Set AITargetLocation
	 */
	struct AIceJumper_Character_BP_C_SetAITargetLocation_Params
	{
	public:
		struct FVector                                             TargetLoc;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.InAirStateIsResultOfJump
	 */
	struct AIceJumper_Character_BP_C_InAirStateIsResultOfJump_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y860[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.K2_OnMovementModeChanged
	 */
	struct AIceJumper_Character_BP_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.IsOutOfStamina
	 */
	struct AIceJumper_Character_BP_C_IsOutOfStamina_Params
	{
	public:
		bool                                                       OutOfStamina;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YZW5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetIceBreathRange
	 */
	struct AIceJumper_Character_BP_C_GetIceBreathRange_Params
	{
	public:
		float                                                      Range;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L5GF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetForwardDashDamage
	 */
	struct AIceJumper_Character_BP_C_GetForwardDashDamage_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetThawSpeed
	 */
	struct AIceJumper_Character_BP_C_GetThawSpeed_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      FrozenThawAmountPerRate;                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IIVD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.IsLowStamina
	 */
	struct AIceJumper_Character_BP_C_IsLowStamina_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IYPS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPAdjustAttackIndex
	 */
	struct AIceJumper_Character_BP_C_BPAdjustAttackIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_PreviousAbilityReplicated
	 */
	struct AIceJumper_Character_BP_C_OnRep_PreviousAbilityReplicated_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_InterceptMoveForward
	 */
	struct AIceJumper_Character_BP_C_BP_InterceptMoveForward_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KT8I[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.Is DecendingRapidly
	 */
	struct AIceJumper_Character_BP_C_IsDecendingRapidly_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BTLS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.ActivateWingTrails
	 */
	struct AIceJumper_Character_BP_C_ActivateWingTrails_Params
	{
	public:
		bool                                                       Deactivate;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RightWing;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReceiveTick
	 */
	struct AIceJumper_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOnDinoCheat
	 */
	struct AIceJumper_Character_BP_C_BPOnDinoCheat_Params
	{
	public:
		class FName                                                CheatName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSetValue;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W3QI[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOnStaminaDrained
	 */
	struct AIceJumper_Character_BP_C_BPOnStaminaDrained_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_bOverrideNewFallVelocityReplicated
	 */
	struct AIceJumper_Character_BP_C_OnRep_bOverrideNewFallVelocityReplicated_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPOverrideCharacterNewFallVelocity
	 */
	struct AIceJumper_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetActiveAbility
	 */
	struct AIceJumper_Character_BP_C_SetActiveAbility_Params
	{
	public:
		EIceJumperAbilities_Enum                                   Ability;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6G6M[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_ActiveAbilityByte
	 */
	struct AIceJumper_Character_BP_C_OnRep_ActiveAbilityByte_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.IsAscending
	 */
	struct AIceJumper_Character_BP_C_IsAscending_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPDoAttack
	 */
	struct AIceJumper_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IMXX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetDinoCollisionState
	 */
	struct AIceJumper_Character_BP_C_SetDinoCollisionState_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_UseControlRotation
	 */
	struct AIceJumper_Character_BP_C_OnRep_UseControlRotation_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnRep_TargetYaw
	 */
	struct AIceJumper_Character_BP_C_OnRep_TargetYaw_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPGetHUDElements
	 */
	struct AIceJumper_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BlueprintCanAttack
	 */
	struct AIceJumper_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4PUP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.DeductStamina
	 */
	struct AIceJumper_Character_BP_C_DeductStamina_Params
	{
	public:
		float                                                      Stamina;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XXK5[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetIceBreathProjectile
	 */
	struct AIceJumper_Character_BP_C_SetIceBreathProjectile_Params
	{
	public:
		class AIceJumperProjIceBreath_C*                           Projectile;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.UpdateDashCollider
	 */
	struct AIceJumper_Character_BP_C_UpdateDashCollider_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      damageMult;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HitTarget;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YHKM[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.GetStartTimeForMovementAbility
	 */
	struct AIceJumper_Character_BP_C_GetStartTimeForMovementAbility_Params
	{
	public:
		EIceJumperAbilities_Enum                                   Ability;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_54SR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     StartTime;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPGetCrosshairColor
	 */
	struct AIceJumper_Character_BP_C_BPGetCrosshairColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct AIceJumper_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.Clear Any Active Ability State
	 */
	struct AIceJumper_Character_BP_C_ClearAnyActiveAbilityState_Params
	{
	public:
		EIceJumperAbilities_Enum                                   TriggeredAbility;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ClearVelocity;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EIceJumperAbilities_Enum                                   ExcludingAbility;                                        // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.RidingTick
	 */
	struct AIceJumper_Character_BP_C_RidingTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ENZH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_InterceptMoveRight
	 */
	struct AIceJumper_Character_BP_C_BP_InterceptMoveRight_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5CGJ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReceiveBeginPlay
	 */
	struct AIceJumper_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnLanded
	 */
	struct AIceJumper_Character_BP_C_OnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.UserConstructionScript
	 */
	struct AIceJumper_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_OnLanded
	 */
	struct AIceJumper_Character_BP_C_MULTI_OnLanded_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_OnLandedValidated
	 */
	struct AIceJumper_Character_BP_C_MULTI_OnLandedValidated_Params
	{
	public:
		struct FVector                                             GroundImpactLoc;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             GroundImpactNormal;                                      // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.BP_OnJumpReleased
	 */
	struct AIceJumper_Character_BP_C_BP_OnJumpReleased_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnIceBreathBegin
	 */
	struct AIceJumper_Character_BP_C_OnIceBreathBegin_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.MultiOnIceBreathBegin
	 */
	struct AIceJumper_Character_BP_C_MultiOnIceBreathBegin_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.SERVER_SetIceBreathInputPressed
	 */
	struct AIceJumper_Character_BP_C_SERVER_SetIceBreathInputPressed_Params
	{
	public:
		bool                                                       Pressed;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.ForwardDashTick
	 */
	struct AIceJumper_Character_BP_C_ForwardDashTick_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_ForwardDashEnd
	 */
	struct AIceJumper_Character_BP_C_MULTI_ForwardDashEnd_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.TickThrusterVFX
	 */
	struct AIceJumper_Character_BP_C_TickThrusterVFX_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.FailsafeEndForestDash
	 */
	struct AIceJumper_Character_BP_C_FailsafeEndForestDash_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.UpdatePositionErrorTolerance
	 */
	struct AIceJumper_Character_BP_C_UpdatePositionErrorTolerance_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.EndJump
	 */
	struct AIceJumper_Character_BP_C_EndJump_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerInputActionJump
	 */
	struct AIceJumper_Character_BP_C_ServerInputActionJump_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.RotateToTargetYawTick
	 */
	struct AIceJumper_Character_BP_C_RotateToTargetYawTick_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartThrusterVFX
	 */
	struct AIceJumper_Character_BP_C_StartThrusterVFX_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartForwardDash
	 */
	struct AIceJumper_Character_BP_C_StartForwardDash_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Speed;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetAndReplicateGravityScale
	 */
	struct AIceJumper_Character_BP_C_SetAndReplicateGravityScale_Params
	{
	public:
		float                                                      GravityScale;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetVelocity
	 */
	struct AIceJumper_Character_BP_C_SetVelocity_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetAndReplicateMovementMode
	 */
	struct AIceJumper_Character_BP_C_SetAndReplicateMovementMode_Params
	{
	public:
		EMovementMode                                              Mode;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.SetAndReplicateControlRotation
	 */
	struct AIceJumper_Character_BP_C_SetAndReplicateControlRotation_Params
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartSideDash
	 */
	struct AIceJumper_Character_BP_C_StartSideDash_Params
	{
	public:
		unsigned char                                              Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CJCZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Direction;                                               // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.CameraControlDashTick
	 */
	struct AIceJumper_Character_BP_C_CameraControlDashTick_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerInterceptMoveRight
	 */
	struct AIceJumper_Character_BP_C_ServerInterceptMoveRight_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.StopMovementFreeze
	 */
	struct AIceJumper_Character_BP_C_StopMovementFreeze_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartMovementFreeze
	 */
	struct AIceJumper_Character_BP_C_StartMovementFreeze_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.ClientStopMovementFreeze
	 */
	struct AIceJumper_Character_BP_C_ClientStopMovementFreeze_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReplicateClientControlForward
	 */
	struct AIceJumper_Character_BP_C_ReplicateClientControlForward_Params
	{
	public:
		struct FVector                                             ClientControlForward;                                    // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerInterceptMoveForward
	 */
	struct AIceJumper_Character_BP_C_ServerInterceptMoveForward_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerHandleStopTargeting
	 */
	struct AIceJumper_Character_BP_C_ServerHandleStopTargeting_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.ClientSetPitch
	 */
	struct AIceJumper_Character_BP_C_ClientSetPitch_Params
	{
	public:
		float                                                      Pitch;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.ServerSetIsCrosshairOverGround
	 */
	struct AIceJumper_Character_BP_C_ServerSetIsCrosshairOverGround_Params
	{
	public:
		bool                                                       IsCrosshairOverGround;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.ClientMovementAbilityInterrupted
	 */
	struct AIceJumper_Character_BP_C_ClientMovementAbilityInterrupted_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.ClientDamagedTarget
	 */
	struct AIceJumper_Character_BP_C_ClientDamagedTarget_Params
	{
	public:
		struct FVector                                             HitLoc;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.DeactivateLeftDamageFX
	 */
	struct AIceJumper_Character_BP_C_DeactivateLeftDamageFX_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.DeactivateRightDamageFX
	 */
	struct AIceJumper_Character_BP_C_DeactivateRightDamageFX_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.SERVER_EndIceBreathAttack
	 */
	struct AIceJumper_Character_BP_C_SERVER_EndIceBreathAttack_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.OnIceBreathEnd
	 */
	struct AIceJumper_Character_BP_C_OnIceBreathEnd_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.MultiOnIceBreathEnd
	 */
	struct AIceJumper_Character_BP_C_MultiOnIceBreathEnd_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.IceBreathTick
	 */
	struct AIceJumper_Character_BP_C_IceBreathTick_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReplicateCameraLocationToServer
	 */
	struct AIceJumper_Character_BP_C_ReplicateCameraLocationToServer_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_StartForwardDash
	 */
	struct AIceJumper_Character_BP_C_MULTI_StartForwardDash_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SetCollision
	 */
	struct AIceJumper_Character_BP_C_MULTI_SetCollision_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.ReplicateCrosshairTargetToServer
	 */
	struct AIceJumper_Character_BP_C_ReplicateCrosshairTargetToServer_Params
	{
	public:
		class APrimalCharacter*                                    CrosshairTarget;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.AnimNotify_IceBallProj
	 */
	struct AIceJumper_Character_BP_C_AnimNotify_IceBallProj_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.AnimNotify_IceBreathHover
	 */
	struct AIceJumper_Character_BP_C_AnimNotify_IceBreathHover_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.AnimNotify_CheckStamina
	 */
	struct AIceJumper_Character_BP_C_AnimNotify_CheckStamina_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_StartSideDash
	 */
	struct AIceJumper_Character_BP_C_MULTI_StartSideDash_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SideDashInterrupted
	 */
	struct AIceJumper_Character_BP_C_MULTI_SideDashInterrupted_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SideDashEnd
	 */
	struct AIceJumper_Character_BP_C_MULTI_SideDashEnd_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_StartJump
	 */
	struct AIceJumper_Character_BP_C_MULTI_StartJump_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SetBreathFX
	 */
	struct AIceJumper_Character_BP_C_MULTI_SetBreathFX_Params
	{
	public:
		float                                                      TimeDilation;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Scale;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.TickSideThrusterVFX
	 */
	struct AIceJumper_Character_BP_C_TickSideThrusterVFX_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.ExtraJumpTick
	 */
	struct AIceJumper_Character_BP_C_ExtraJumpTick_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.ResetShortDashType
	 */
	struct AIceJumper_Character_BP_C_ResetShortDashType_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_TargetFrozen
	 */
	struct AIceJumper_Character_BP_C_MULTI_TargetFrozen_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.MULTI_SetVelocity
	 */
	struct AIceJumper_Character_BP_C_MULTI_SetVelocity_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.AnimNotify_IceBreathGround
	 */
	struct AIceJumper_Character_BP_C_AnimNotify_IceBreathGround_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.StartBoredom
	 */
	struct AIceJumper_Character_BP_C_StartBoredom_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.FinishBoredom
	 */
	struct AIceJumper_Character_BP_C_FinishBoredom_Params
	{	};

	/**
	 * Function IceJumper_Character_BP.IceJumper_Character_BP_C.ExecuteUbergraph_IceJumper_Character_BP
	 */
	struct AIceJumper_Character_BP_C_ExecuteUbergraph_IceJumper_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
