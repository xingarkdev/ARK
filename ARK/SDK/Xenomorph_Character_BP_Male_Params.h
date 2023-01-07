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
	 * Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.DiveEnd
	 */
	struct AXenomorph_Character_BP_Male_C_DiveEnd_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPNotifyClaimed
	 */
	struct AXenomorph_Character_BP_Male_C_BPNotifyClaimed_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPChangedActorTeam
	 */
	struct AXenomorph_Character_BP_Male_C_BPChangedActorTeam_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPPreventOrderAllowed
	 */
	struct AXenomorph_Character_BP_Male_C_BPPreventOrderAllowed_Params
	{
	public:
		class APrimalCharacter*                                    FromCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EDinoTamedOrder                                            OrderType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForce;                                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3P97[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              enemyTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       orderNotExecuted;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BlueprintExtraBabyScaling
	 */
	struct AXenomorph_Character_BP_Male_C_BlueprintExtraBabyScaling_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPShouldForceFlee
	 */
	struct AXenomorph_Character_BP_Male_C_BPShouldForceFlee_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LH6E[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPAllowClaiming
	 */
	struct AXenomorph_Character_BP_Male_C_BPAllowClaiming_Params
	{
	public:
		class AShooterPlayerController*                            ForPlayer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BXV8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPGetMultiUseEntries
	 */
	struct AXenomorph_Character_BP_Male_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.DiveSetup
	 */
	struct AXenomorph_Character_BP_Male_C_DiveSetup_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.DiveIdle
	 */
	struct AXenomorph_Character_BP_Male_C_DiveIdle_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.OnRep_isUnderground
	 */
	struct AXenomorph_Character_BP_Male_C_OnRep_isUnderground_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPAdjustAttackIndex
	 */
	struct AXenomorph_Character_BP_Male_C_BPAdjustAttackIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.OnRep_bIsOffspringMode
	 */
	struct AXenomorph_Character_BP_Male_C_OnRep_bIsOffspringMode_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BlueprintGetAttackWeight
	 */
	struct AXenomorph_Character_BP_Male_C_BlueprintGetAttackWeight_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      inputWeight;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPNotifyBabyAgeIncrement
	 */
	struct AXenomorph_Character_BP_Male_C_BPNotifyBabyAgeIncrement_Params
	{
	public:
		float                                                      PreviousAge;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      NewAge;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.GetDefaultMaleXeno
	 */
	struct AXenomorph_Character_BP_Male_C_GetDefaultMaleXeno_Params
	{
	public:
		class AXenomorph_Character_BP_Male_C*                      AsXenomorph_Character_BP_Male_C;                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.SetupOffspringMeshAndSettings
	 */
	struct AXenomorph_Character_BP_Male_C_SetupOffspringMeshAndSettings_Params
	{
	public:
		bool                                                       OffspringMode;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.InitializeDive
	 */
	struct AXenomorph_Character_BP_Male_C_InitializeDive_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPBecomeAdult
	 */
	struct AXenomorph_Character_BP_Male_C_BPBecomeAdult_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.Can Dive
	 */
	struct AXenomorph_Character_BP_Male_C_CanDive_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.UserConstructionScript
	 */
	struct AXenomorph_Character_BP_Male_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.DelayedUnbury
	 */
	struct AXenomorph_Character_BP_Male_C_DelayedUnbury_Params
	{
	public:
		float                                                      DelayTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BornDiveOut
	 */
	struct AXenomorph_Character_BP_Male_C_BornDiveOut_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.AnimNotify_EndBury
	 */
	struct AXenomorph_Character_BP_Male_C_AnimNotify_EndBury_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BeginMaturationTransform
	 */
	struct AXenomorph_Character_BP_Male_C_BeginMaturationTransform_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.AnimNotify_ChestBurst
	 */
	struct AXenomorph_Character_BP_Male_C_AnimNotify_ChestBurst_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.ExecuteUbergraph_Xenomorph_Character_BP_Male
	 */
	struct AXenomorph_Character_BP_Male_C_ExecuteUbergraph_Xenomorph_Character_BP_Male_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
