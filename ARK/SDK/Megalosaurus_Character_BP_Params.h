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
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
	 */
	struct AMegalosaurus_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.UpdateSeverTimerLimits
	 */
	struct AMegalosaurus_Character_BP_C_UpdateSeverTimerLimits_Params
	{
	public:
		float                                                      newMin;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      newMAX;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.InitNocturnalDino
	 */
	struct AMegalosaurus_Character_BP_C_InitNocturnalDino_Params
	{	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.SetupRefs
	 */
	struct AMegalosaurus_Character_BP_C_SetupRefs_Params
	{	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPUnstasis
	 */
	struct AMegalosaurus_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPNotifyStructurePlacedNearby
	 */
	struct AMegalosaurus_Character_BP_C_BPNotifyStructurePlacedNearby_Params
	{
	public:
		class APrimalStructure*                                    NewStructure;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPTimerServer
	 */
	struct AMegalosaurus_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AMegalosaurus_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPTryMultiUse
	 */
	struct AMegalosaurus_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnWakeUp
	 */
	struct AMegalosaurus_Character_BP_C_OnWakeUp_Params
	{	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnRep_bIsDaytime
	 */
	struct AMegalosaurus_Character_BP_C_OnRep_bIsDaytime_Params
	{	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnFallAsleep
	 */
	struct AMegalosaurus_Character_BP_C_OnFallAsleep_Params
	{	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.Howl
	 */
	struct AMegalosaurus_Character_BP_C_Howl_Params
	{	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.UpdateAppearance
	 */
	struct AMegalosaurus_Character_BP_C_UpdateAppearance_Params
	{	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnRep_bIsNaturallySleeping
	 */
	struct AMegalosaurus_Character_BP_C_OnRep_bIsNaturallySleeping_Params
	{	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CheckPrey
	 */
	struct AMegalosaurus_Character_BP_C_CheckPrey_Params
	{	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CanSleep
	 */
	struct AMegalosaurus_Character_BP_C_CanSleep_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CanWake
	 */
	struct AMegalosaurus_Character_BP_C_CanWake_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CheckForSleep
	 */
	struct AMegalosaurus_Character_BP_C_CheckForSleep_Params
	{	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CheckForWake
	 */
	struct AMegalosaurus_Character_BP_C_CheckForWake_Params
	{	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.RemoveCarryBuffFromPrey
	 */
	struct AMegalosaurus_Character_BP_C_RemoveCarryBuffFromPrey_Params
	{	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.ReceiveAnyDamage
	 */
	struct AMegalosaurus_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HVXU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.IsSleepDeprived
	 */
	struct AMegalosaurus_Character_BP_C_IsSleepDeprived_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.DropPrey
	 */
	struct AMegalosaurus_Character_BP_C_DropPrey_Params
	{
	public:
		bool                                                       PlayAnim;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_139P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.FoodTriesToEscape
	 */
	struct AMegalosaurus_Character_BP_C_FoodTriesToEscape_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct AMegalosaurus_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.IsCarryingValidLivingCharacter
	 */
	struct AMegalosaurus_Character_BP_C_IsCarryingValidLivingCharacter_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.TryShakePreyAttack
	 */
	struct AMegalosaurus_Character_BP_C_TryShakePreyAttack_Params
	{	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BlueprintCanAttack
	 */
	struct AMegalosaurus_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_251B[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.UserConstructionScript
	 */
	struct AMegalosaurus_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.AnimNotify_DamagePrey
	 */
	struct AMegalosaurus_Character_BP_C_AnimNotify_DamagePrey_Params
	{	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.AnimNotify_ThrowPrey
	 */
	struct AMegalosaurus_Character_BP_C_AnimNotify_ThrowPrey_Params
	{	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.AnimNotify_CheckForPrey
	 */
	struct AMegalosaurus_Character_BP_C_AnimNotify_CheckForPrey_Params
	{	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnCarriedCharacterDeath
	 */
	struct AMegalosaurus_Character_BP_C_OnCarriedCharacterDeath_Params
	{
	public:
		class APrimalCharacter*                                    DiedCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnIsDaytime
	 */
	struct AMegalosaurus_Character_BP_C_OnIsDaytime_Params
	{	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnIsNighttime
	 */
	struct AMegalosaurus_Character_BP_C_OnIsNighttime_Params
	{	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.ReceiveBeginPlay
	 */
	struct AMegalosaurus_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.FirstHowl
	 */
	struct AMegalosaurus_Character_BP_C_FirstHowl_Params
	{	};

	/**
	 * Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.ExecuteUbergraph_Megalosaurus_Character_BP
	 */
	struct AMegalosaurus_Character_BP_C_ExecuteUbergraph_Megalosaurus_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
