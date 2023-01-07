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
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.GetNumBatteries
	 */
	struct AXenomorph_Character_BP_C_GetNumBatteries_Params
	{
	public:
		int32_t                                                    numBatteries;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Get Charge Variable Interface
	 */
	struct AXenomorph_Character_BP_C_GetChargeVariableInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_607F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CQ0K[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPGetIsBuried
	 */
	struct AXenomorph_Character_BP_C_BPGetIsBuried_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.HasSelfBuried
	 */
	struct AXenomorph_Character_BP_C_HasSelfBuried_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPPreventAttachments
	 */
	struct AXenomorph_Character_BP_C_BPPreventAttachments_Params
	{
	public:
		class UObject*                                             ForItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.RefreshTamedAttachments
	 */
	struct AXenomorph_Character_BP_C_RefreshTamedAttachments_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.AllowPlayMontage
	 */
	struct AXenomorph_Character_BP_C_AllowPlayMontage_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M7JV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.GetDinoLevelUpAnimation
	 */
	struct AXenomorph_Character_BP_C_GetDinoLevelUpAnimation_Params
	{
	public:
		class UAnimMontage*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
	 */
	struct AXenomorph_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPIsHidden
	 */
	struct AXenomorph_Character_BP_C_BPIsHidden_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPSetupTamed
	 */
	struct AXenomorph_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ShouldBury
	 */
	struct AXenomorph_Character_BP_C_ShouldBury_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ShouldUnbury
	 */
	struct AXenomorph_Character_BP_C_ShouldUnbury_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.OnRep_isUnderground
	 */
	struct AXenomorph_Character_BP_C_OnRep_isUnderground_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.OnRep_bIsOffspringMode
	 */
	struct AXenomorph_Character_BP_C_OnRep_bIsOffspringMode_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.DisableEyeGlow
	 */
	struct AXenomorph_Character_BP_C_DisableEyeGlow_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.UpdateBuryMound
	 */
	struct AXenomorph_Character_BP_C_UpdateBuryMound_Params
	{
	public:
		bool                                                       ShouldShow;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7IBW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPTryMultiUse
	 */
	struct AXenomorph_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.OnChargeEvent
	 */
	struct AXenomorph_Character_BP_C_OnChargeEvent_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.CreateChargeManager
	 */
	struct AXenomorph_Character_BP_C_CreateChargeManager_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.InitializeDive
	 */
	struct AXenomorph_Character_BP_C_InitializeDive_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.DiveEnd
	 */
	struct AXenomorph_Character_BP_C_DiveEnd_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BuriedWithNoTarget
	 */
	struct AXenomorph_Character_BP_C_BuriedWithNoTarget_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPAllowCarryCharacter
	 */
	struct AXenomorph_Character_BP_C_BPAllowCarryCharacter_Params
	{
	public:
		class APrimalCharacter*                                    checkCharacter;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.TimeSinceLastAttackForIndex
	 */
	struct AXenomorph_Character_BP_C_TimeSinceLastAttackForIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPDidClearCarriedCharacter
	 */
	struct AXenomorph_Character_BP_C_BPDidClearCarriedCharacter_Params
	{
	public:
		class APrimalCharacter*                                    PreviousCarriedCharacter;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.HasValidAggroTarget
	 */
	struct AXenomorph_Character_BP_C_HasValidAggroTarget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.CancelImpregnateGrab
	 */
	struct AXenomorph_Character_BP_C_CancelImpregnateGrab_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.IncreaseTameAffinity
	 */
	struct AXenomorph_Character_BP_C_IncreaseTameAffinity_Params
	{
	public:
		float                                                      AffinityToAdd;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_REK2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   PlayerChar;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPOnTamedProcessOrder
	 */
	struct AXenomorph_Character_BP_C_BPOnTamedProcessOrder_Params
	{
	public:
		class APrimalCharacter*                                    FromCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EDinoTamedOrder                                            OrderType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForce;                                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D1UP[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              enemyTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       orderNotExecuted;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AXenomorph_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.K2_OnMovementModeChanged
	 */
	struct AXenomorph_Character_BP_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPDoAttack
	 */
	struct AXenomorph_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct AXenomorph_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Can Dive
	 */
	struct AXenomorph_Character_BP_C_CanDive_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z7OL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Tamed Has Valid Enemy
	 */
	struct AXenomorph_Character_BP_C_TamedHasValidEnemy_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.AcidDamageEvent
	 */
	struct AXenomorph_Character_BP_C_AcidDamageEvent_Params
	{
	public:
		struct FVector                                             OriginLoc;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             SprayDir;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.DiveSetup
	 */
	struct AXenomorph_Character_BP_C_DiveSetup_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.DiveIdle
	 */
	struct AXenomorph_Character_BP_C_DiveIdle_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Is Animation Playing
	 */
	struct AXenomorph_Character_BP_C_IsAnimationPlaying_Params
	{
	public:
		TArray<class UAnimMontage*>                                Montage;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C4LQ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BlueprintGetAttackWeight
	 */
	struct AXenomorph_Character_BP_C_BlueprintGetAttackWeight_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      inputWeight;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H88Q[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPAdjustDamage
	 */
	struct AXenomorph_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SS2J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4OF0[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BlueprintOverrideWantsToRun
	 */
	struct AXenomorph_Character_BP_C_BlueprintOverrideWantsToRun_Params
	{
	public:
		bool                                                       bInputWantsToRun;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Update Underground Trail
	 */
	struct AXenomorph_Character_BP_C_UpdateUndergroundTrail_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.SetDinoCollisionState
	 */
	struct AXenomorph_Character_BP_C_SetDinoCollisionState_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.DetachChildren
	 */
	struct AXenomorph_Character_BP_C_DetachChildren_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPTimerNonDedicated
	 */
	struct AXenomorph_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPTimerServer
	 */
	struct AXenomorph_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BlueprintCanAttack
	 */
	struct AXenomorph_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UTKF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.UserConstructionScript
	 */
	struct AXenomorph_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_81
	 */
	struct AXenomorph_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_81_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.InpActEvt_Reload_K2Node_InputActionEvent_80
	 */
	struct AXenomorph_Character_BP_C_InpActEvt_Reload_K2Node_InputActionEvent_80_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_79
	 */
	struct AXenomorph_Character_BP_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_79_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_78
	 */
	struct AXenomorph_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_78_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Interface Check for Batteries and Update Multicast
	 */
	struct AXenomorph_Character_BP_C_InterfaceCheckforBatteriesandUpdateMulticast_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Charge Variable Event Boolean MulticastInterface
	 */
	struct AXenomorph_Character_BP_C_ChargeVariableEventBooleanMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Charge Variable Event Float Multicast Interface
	 */
	struct AXenomorph_Character_BP_C_ChargeVariableEventFloatMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9CKE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Charge Variable Event Double MulticastInterface
	 */
	struct AXenomorph_Character_BP_C_ChargeVariableEventDoubleMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JLPD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Charge Variable Event Boolean Interface
	 */
	struct AXenomorph_Character_BP_C_ChargeVariableEventBooleanInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEventFloatInterface
	 */
	struct AXenomorph_Character_BP_C_ChargeVariableEventFloatInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MXFA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEventDoubleInterface
	 */
	struct AXenomorph_Character_BP_C_ChargeVariableEventDoubleInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4W2H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEventIntInterface
	 */
	struct AXenomorph_Character_BP_C_ChargeVariableEventIntInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7DUI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEventIntMulticastInterface
	 */
	struct AXenomorph_Character_BP_C_ChargeVariableEventIntMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_439A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ReceiveBeginPlay
	 */
	struct AXenomorph_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.StartAcidSpray
	 */
	struct AXenomorph_Character_BP_C_StartAcidSpray_Params
	{
	public:
		struct FVector                                             HitLoc;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitDir;                                                  // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                HitBone;                                                 // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Server_StartAcidSpray
	 */
	struct AXenomorph_Character_BP_C_Server_StartAcidSpray_Params
	{
	public:
		struct FVector                                             HitLoc;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitDir;                                                  // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                HitBone;                                                 // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Server_TryDive
	 */
	struct AXenomorph_Character_BP_C_Server_TryDive_Params
	{
	public:
		bool                                                       NewUnderground;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.AnimNotify_StartBury
	 */
	struct AXenomorph_Character_BP_C_AnimNotify_StartBury_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.AnimNotify_EndBury
	 */
	struct AXenomorph_Character_BP_C_AnimNotify_EndBury_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Multi_DiveOut
	 */
	struct AXenomorph_Character_BP_C_Multi_DiveOut_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.AttemptDiveOut
	 */
	struct AXenomorph_Character_BP_C_AttemptDiveOut_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Attempt Dive In
	 */
	struct AXenomorph_Character_BP_C_AttemptDiveIn_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Multi_DiveIn
	 */
	struct AXenomorph_Character_BP_C_Multi_DiveIn_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPUnstasis
	 */
	struct AXenomorph_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPDinoPostBeginPlay
	 */
	struct AXenomorph_Character_BP_C_BPDinoPostBeginPlay_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.StartBuried
	 */
	struct AXenomorph_Character_BP_C_StartBuried_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.AnimNotify_Death
	 */
	struct AXenomorph_Character_BP_C_AnimNotify_Death_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.UpdateHurtFX
	 */
	struct AXenomorph_Character_BP_C_UpdateHurtFX_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.DelayUpdateHurtFX
	 */
	struct AXenomorph_Character_BP_C_DelayUpdateHurtFX_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ForceDiveEnd
	 */
	struct AXenomorph_Character_BP_C_ForceDiveEnd_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Multi_ForceDiveEnd
	 */
	struct AXenomorph_Character_BP_C_Multi_ForceDiveEnd_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Server_Roar
	 */
	struct AXenomorph_Character_BP_C_Server_Roar_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BP_OnJumpPressed
	 */
	struct AXenomorph_Character_BP_C_BP_OnJumpPressed_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Server_TailWeb
	 */
	struct AXenomorph_Character_BP_C_Server_TailWeb_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Server_ImpregnateAttack
	 */
	struct AXenomorph_Character_BP_C_Server_ImpregnateAttack_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Proxy_RefreshAttachments
	 */
	struct AXenomorph_Character_BP_C_Proxy_RefreshAttachments_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.StopDissolveVisuals_Multicast
	 */
	struct AXenomorph_Character_BP_C_StopDissolveVisuals_Multicast_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.StartDissolveVisuals_Multicast
	 */
	struct AXenomorph_Character_BP_C_StartDissolveVisuals_Multicast_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent_Double
	 */
	struct AXenomorph_Character_BP_C_ChargeVariableEvent_Double_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RQEW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent_Float
	 */
	struct AXenomorph_Character_BP_C_ChargeVariableEvent_Float_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NVJ8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent_Boolean
	 */
	struct AXenomorph_Character_BP_C_ChargeVariableEvent_Boolean_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent_Double_Multicast
	 */
	struct AXenomorph_Character_BP_C_ChargeVariableEvent_Double_Multicast_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1YD4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent_Float_Multicast
	 */
	struct AXenomorph_Character_BP_C_ChargeVariableEvent_Float_Multicast_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T8L5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent_Boolean_Multicast
	 */
	struct AXenomorph_Character_BP_C_ChargeVariableEvent_Boolean_Multicast_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent
	 */
	struct AXenomorph_Character_BP_C_ChargeVariableEvent_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W0AJ[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Charge Variable Event Trigger Multicast Interface
	 */
	struct AXenomorph_Character_BP_C_ChargeVariableEventTriggerMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IA0D[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    iVariable;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Charge Variable Event Interface
	 */
	struct AXenomorph_Character_BP_C_ChargeVariableEventInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_32ZB[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ivalue;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Set Charge Variable Interface
	 */
	struct AXenomorph_Character_BP_C_SetChargeVariableInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       multicast;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W4UT[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       triggerEvent;                                            // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       multicastEvent;                                          // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T5PI[0x1];                                   // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.PlayGroundParticleVFX
	 */
	struct AXenomorph_Character_BP_C_PlayGroundParticleVFX_Params
	{
	public:
		bool                                                       orientToGround;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TLLI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UParticleSystem*                                     ParticleSystem;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OffsetFromRoot;                                          // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ExecuteUbergraph_Xenomorph_Character_BP
	 */
	struct AXenomorph_Character_BP_C_ExecuteUbergraph_Xenomorph_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
