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
	 * Function Equus_Character_BP.Equus_Character_BP_C.BPModifyHarvestDamage
	 */
	struct AEquus_Character_BP_C_BPModifyHarvestDamage_Params
	{
	public:
		class UPrimalHarvestingComponent*                          harvestComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      inDamage;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.Setup Buck Taming Stats
	 */
	struct AEquus_Character_BP_C_SetupBuckTamingStats_Params
	{	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.BPTryMultiUse
	 */
	struct AEquus_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AEquus_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.BPTimerNonDedicated
	 */
	struct AEquus_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.UpdateRandomLocation
	 */
	struct AEquus_Character_BP_C_UpdateRandomLocation_Params
	{
	public:
		bool                                                       FoundValidPoint;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EKKO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             NewLocationPoint;                                        // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.IncreaseTamingAffinity
	 */
	struct AEquus_Character_BP_C_IncreaseTamingAffinity_Params
	{	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.BPDoAttack
	 */
	struct AEquus_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.Reset Buck Taming Stats
	 */
	struct AEquus_Character_BP_C_ResetBuckTamingStats_Params
	{
	public:
		bool                                                       ForceReset;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.BPSetupTamed
	 */
	struct AEquus_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.BPPreventInputType
	 */
	struct AEquus_Character_BP_C_BPPreventInputType_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.ForceDismount
	 */
	struct AEquus_Character_BP_C_ForceDismount_Params
	{	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.ConsumeValidFood
	 */
	struct AEquus_Character_BP_C_ConsumeValidFood_Params
	{
	public:
		bool                                                       DidConsumeFood;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VE6W[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      EffectivenessMultiplier;                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.BPNotifySetRider
	 */
	struct AEquus_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.BPTimerServer
	 */
	struct AEquus_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.BPUntamedConsumeFoodItem
	 */
	struct AEquus_Character_BP_C_BPUntamedConsumeFoodItem_Params
	{
	public:
		class UPrimalItem*                                         foodItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.UserConstructionScript
	 */
	struct AEquus_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.StartMount
	 */
	struct AEquus_Character_BP_C_StartMount_Params
	{
	public:
		class AShooterCharacter*                                   TargetPlayer;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.ThrowPlayerOrTame
	 */
	struct AEquus_Character_BP_C_ThrowPlayerOrTame_Params
	{
	public:
		float                                                      BuckAnimLength;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.SetAllowRiding
	 */
	struct AEquus_Character_BP_C_SetAllowRiding_Params
	{
	public:
		bool                                                       ShouldAllow;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.Server_PlayFedSound
	 */
	struct AEquus_Character_BP_C_Server_PlayFedSound_Params
	{	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.ClearBucking
	 */
	struct AEquus_Character_BP_C_ClearBucking_Params
	{	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.Server_PlayStoleFoodSound
	 */
	struct AEquus_Character_BP_C_Server_PlayStoleFoodSound_Params
	{	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.PathingInput
	 */
	struct AEquus_Character_BP_C_PathingInput_Params
	{	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.Server_Path
	 */
	struct AEquus_Character_BP_C_Server_Path_Params
	{	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.Multi_UpdateRandomDestination
	 */
	struct AEquus_Character_BP_C_Multi_UpdateRandomDestination_Params
	{
	public:
		struct FVector                                             Destination;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.ThrowOrTameNoDelay
	 */
	struct AEquus_Character_BP_C_ThrowOrTameNoDelay_Params
	{	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.RespondToDismount
	 */
	struct AEquus_Character_BP_C_RespondToDismount_Params
	{	};

	/**
	 * Function Equus_Character_BP.Equus_Character_BP_C.ExecuteUbergraph_Equus_Character_BP
	 */
	struct AEquus_Character_BP_C_ExecuteUbergraph_Equus_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
