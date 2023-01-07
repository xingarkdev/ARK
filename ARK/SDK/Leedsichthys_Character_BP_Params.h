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
	 * Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.GetNumOfStacksToAdd
	 */
	struct ALeedsichthys_Character_BP_C_GetNumOfStacksToAdd_Params
	{
	public:
		int32_t                                                    StackQuantity;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    NumToAdd;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    NumOfStacks;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    LeftOver;                                                // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPClientDoMultiUse
	 */
	struct ALeedsichthys_Character_BP_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_696K[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPDoAttack
	 */
	struct ALeedsichthys_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ReceiveAnyDamage
	 */
	struct ALeedsichthys_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LXRL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.GetHarvestingIndex
	 */
	struct ALeedsichthys_Character_BP_C_GetHarvestingIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ALeedsichthys_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPTryMultiUse
	 */
	struct ALeedsichthys_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.UserConstructionScript
	 */
	struct ALeedsichthys_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ReceiveBeginPlay
	 */
	struct ALeedsichthys_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ForceFwd
	 */
	struct ALeedsichthys_Character_BP_C_ForceFwd_Params
	{	};

	/**
	 * Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ServerForceFwd
	 */
	struct ALeedsichthys_Character_BP_C_ServerForceFwd_Params
	{	};

	/**
	 * Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.Spawn Blood
	 */
	struct ALeedsichthys_Character_BP_C_SpawnBlood_Params
	{
	public:
		struct FVector                                             ActorLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.AnimNotify_TailSplash
	 */
	struct ALeedsichthys_Character_BP_C_AnimNotify_TailSplash_Params
	{	};

	/**
	 * Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.AnimNotify_MouthSplash
	 */
	struct ALeedsichthys_Character_BP_C_AnimNotify_MouthSplash_Params
	{	};

	/**
	 * Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPTimerServer
	 */
	struct ALeedsichthys_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ClearBaitTime
	 */
	struct ALeedsichthys_Character_BP_C_ClearBaitTime_Params
	{	};

	/**
	 * Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.SootheBehavior
	 */
	struct ALeedsichthys_Character_BP_C_SootheBehavior_Params
	{	};

	/**
	 * Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ExecuteUbergraph_Leedsichthys_Character_BP
	 */
	struct ALeedsichthys_Character_BP_C_ExecuteUbergraph_Leedsichthys_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
