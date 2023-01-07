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
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPBecomeAdult
	 */
	struct ADino_Character_BP_Nocturnal_C_BPBecomeAdult_Params
	{	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPBecomeBaby
	 */
	struct ADino_Character_BP_Nocturnal_C_BPBecomeBaby_Params
	{	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.AllowNocturnalLogic
	 */
	struct ADino_Character_BP_Nocturnal_C_AllowNocturnalLogic_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.IsDinoInShallowWater
	 */
	struct ADino_Character_BP_Nocturnal_C_IsDinoInShallowWater_Params
	{
	public:
		bool                                                       shallowWaters;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.Is Target Attacking Ally
	 */
	struct ADino_Character_BP_Nocturnal_C_IsTargetAttackingAlly_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.IsPossibleToSleep
	 */
	struct ADino_Character_BP_Nocturnal_C_IsPossibleToSleep_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPPreventRiding
	 */
	struct ADino_Character_BP_Nocturnal_C_BPPreventRiding_Params
	{
	public:
		class AShooterCharacter*                                   ByPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDontCheckDistance;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.SetupRefs
	 */
	struct ADino_Character_BP_Nocturnal_C_SetupRefs_Params
	{	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.IsDaytime
	 */
	struct ADino_Character_BP_Nocturnal_C_IsDaytime_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.Check Time Of Day
	 */
	struct ADino_Character_BP_Nocturnal_C_CheckTimeOfDay_Params
	{
	public:
		bool                                                       ForceUpdate;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5454[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.IsTamedFollowing
	 */
	struct ADino_Character_BP_Nocturnal_C_IsTamedFollowing_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPGetMultiUseEntries
	 */
	struct ADino_Character_BP_Nocturnal_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPTryMultiUse
	 */
	struct ADino_Character_BP_Nocturnal_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPTimerServer
	 */
	struct ADino_Character_BP_Nocturnal_C_BPTimerServer_Params
	{	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.PrintStringWithAuth
	 */
	struct ADino_Character_BP_Nocturnal_C_PrintStringWithAuth_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPUnstasis
	 */
	struct ADino_Character_BP_Nocturnal_C_BPUnstasis_Params
	{	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.OnRep_bIsDaytime
	 */
	struct ADino_Character_BP_Nocturnal_C_OnRep_bIsDaytime_Params
	{	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.InitNocturnalDino
	 */
	struct ADino_Character_BP_Nocturnal_C_InitNocturnalDino_Params
	{	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BlueprintDrawFloatingHUD
	 */
	struct ADino_Character_BP_Nocturnal_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPNotifyStructurePlacedNearby
	 */
	struct ADino_Character_BP_Nocturnal_C_BPNotifyStructurePlacedNearby_Params
	{
	public:
		class APrimalStructure*                                    NewStructure;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.SetTorpidity
	 */
	struct ADino_Character_BP_Nocturnal_C_SetTorpidity_Params
	{
	public:
		float                                                      newTorpidity;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K39I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.OnRep_bIsNaturallySleeping
	 */
	struct ADino_Character_BP_Nocturnal_C_OnRep_bIsNaturallySleeping_Params
	{	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.PlayNaturalSleepingAnims
	 */
	struct ADino_Character_BP_Nocturnal_C_PlayNaturalSleepingAnims_Params
	{
	public:
		bool                                                       isFallingAsleep;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isAlerted;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.GetIsFullyAwake
	 */
	struct ADino_Character_BP_Nocturnal_C_GetIsFullyAwake_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.DinoNeedsToSleep
	 */
	struct ADino_Character_BP_Nocturnal_C_DinoNeedsToSleep_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.HasSleepDebt
	 */
	struct ADino_Character_BP_Nocturnal_C_HasSleepDebt_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.HasValidTarget
	 */
	struct ADino_Character_BP_Nocturnal_C_HasValidTarget_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPCharacterSleeped
	 */
	struct ADino_Character_BP_Nocturnal_C_BPCharacterSleeped_Params
	{	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPCharacterUnsleeped
	 */
	struct ADino_Character_BP_Nocturnal_C_BPCharacterUnsleeped_Params
	{	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.GetSleepDebtToDeprivedRatio
	 */
	struct ADino_Character_BP_Nocturnal_C_GetSleepDebtToDeprivedRatio_Params
	{
	public:
		float                                                      Ratio;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.UpdateSleepDebt
	 */
	struct ADino_Character_BP_Nocturnal_C_UpdateSleepDebt_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.IsDinoGrounded
	 */
	struct ADino_Character_BP_Nocturnal_C_IsDinoGrounded_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.ReceiveAnyDamage
	 */
	struct ADino_Character_BP_Nocturnal_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N1SS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.UpdateSleepRelatedActions
	 */
	struct ADino_Character_BP_Nocturnal_C_UpdateSleepRelatedActions_Params
	{	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.CanWake
	 */
	struct ADino_Character_BP_Nocturnal_C_CanWake_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.CanSleep
	 */
	struct ADino_Character_BP_Nocturnal_C_CanSleep_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.Net_Set Natural Sleep State
	 */
	struct ADino_Character_BP_Nocturnal_C_Net_SetNaturalSleepState_Params
	{
	public:
		bool                                                       isAsleep;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.CheckForWake
	 */
	struct ADino_Character_BP_Nocturnal_C_CheckForWake_Params
	{	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.CheckForSleep
	 */
	struct ADino_Character_BP_Nocturnal_C_CheckForSleep_Params
	{	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.OnFallAsleep
	 */
	struct ADino_Character_BP_Nocturnal_C_OnFallAsleep_Params
	{	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.OnWakeUp
	 */
	struct ADino_Character_BP_Nocturnal_C_OnWakeUp_Params
	{	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.WakeUp
	 */
	struct ADino_Character_BP_Nocturnal_C_WakeUp_Params
	{
	public:
		bool                                                       forceSuccess;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.FallAsleep
	 */
	struct ADino_Character_BP_Nocturnal_C_FallAsleep_Params
	{
	public:
		bool                                                       forceSuccess;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ignoreIsPossible;                                        // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.UserConstructionScript
	 */
	struct ADino_Character_BP_Nocturnal_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.OnIsDaytime
	 */
	struct ADino_Character_BP_Nocturnal_C_OnIsDaytime_Params
	{	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.OnIsNighttime
	 */
	struct ADino_Character_BP_Nocturnal_C_OnIsNighttime_Params
	{	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.EnableMovementAfterDelay
	 */
	struct ADino_Character_BP_Nocturnal_C_EnableMovementAfterDelay_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.DisableMovementAfterDelay
	 */
	struct ADino_Character_BP_Nocturnal_C_DisableMovementAfterDelay_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.ReceiveBeginPlay
	 */
	struct ADino_Character_BP_Nocturnal_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_144_ComponentHitSignature__DelegateSignature
	 */
	struct ADino_Character_BP_Nocturnal_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_144_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NormalImpulse;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YPKL[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0020(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.ReInitializeNocturnalDino
	 */
	struct ADino_Character_BP_Nocturnal_C_ReInitializeNocturnalDino_Params
	{	};

	/**
	 * Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.ExecuteUbergraph_Dino_Character_BP_Nocturnal
	 */
	struct ADino_Character_BP_Nocturnal_C_ExecuteUbergraph_Dino_Character_BP_Nocturnal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
