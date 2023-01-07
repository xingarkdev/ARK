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
	 * Function Moschops_Character_BP.Moschops_Character_BP_C.CapHarvestStats
	 */
	struct AMoschops_Character_BP_C_CapHarvestStats_Params
	{	};

	/**
	 * Function Moschops_Character_BP.Moschops_Character_BP_C.Get Taming Food Item List
	 */
	struct AMoschops_Character_BP_C_GetTamingFoodItemList_Params
	{
	public:
		TArray<class UClass*>                                      Item;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Moschops_Character_BP.Moschops_Character_BP_C.BPUntamedConsumeFoodItem
	 */
	struct AMoschops_Character_BP_C_BPUntamedConsumeFoodItem_Params
	{
	public:
		class UPrimalItem*                                         foodItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Moschops_Character_BP.Moschops_Character_BP_C.OnRep_RequiredTamingFoodIndex
	 */
	struct AMoschops_Character_BP_C_OnRep_RequiredTamingFoodIndex_Params
	{	};

	/**
	 * Function Moschops_Character_BP.Moschops_Character_BP_C.BPShouldForceFlee
	 */
	struct AMoschops_Character_BP_C_BPShouldForceFlee_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DE60[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Moschops_Character_BP.Moschops_Character_BP_C.BPCanTargetCorpse
	 */
	struct AMoschops_Character_BP_C_BPCanTargetCorpse_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Moschops_Character_BP.Moschops_Character_BP_C.BlueprintCanAttack
	 */
	struct AMoschops_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z4LX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7WQM[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Moschops_Character_BP.Moschops_Character_BP_C.BPClientDoMultiUse
	 */
	struct AMoschops_Character_BP_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T8VU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Moschops_Character_BP.Moschops_Character_BP_C.BPDoHarvestAttack
	 */
	struct AMoschops_Character_BP_C_BPDoHarvestAttack_Params
	{
	public:
		int32_t                                                    harvestIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Moschops_Character_BP.Moschops_Character_BP_C.Get Current Harvest Level
	 */
	struct AMoschops_Character_BP_C_GetCurrentHarvestLevel_Params
	{
	public:
		int32_t                                                    CurrentLevel;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Moschops_Character_BP.Moschops_Character_BP_C.BPNotifyLevelUp
	 */
	struct AMoschops_Character_BP_C_BPNotifyLevelUp_Params
	{
	public:
		int32_t                                                    ExtraCharacterLevel;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Moschops_Character_BP.Moschops_Character_BP_C.BPModifyHarvestingQuantity
	 */
	struct AMoschops_Character_BP_C_BPModifyHarvestingQuantity_Params
	{
	public:
		float                                                      originalQuantity;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0JW5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              resourceSelected;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Moschops_Character_BP.Moschops_Character_BP_C.BPModifyHarvestingWeightsArray
	 */
	struct AMoschops_Character_BP_C_BPModifyHarvestingWeightsArray_Params
	{
	public:
		TArray<float>                                              resourceWeightsIn;                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class UPrimalItem*>                                 resourceItems;                                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<float>                                              resourceWeightsOut;                                      // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Moschops_Character_BP.Moschops_Character_BP_C.Harvest Multiplier Level Up
	 */
	struct AMoschops_Character_BP_C_HarvestMultiplierLevelUp_Params
	{
	public:
		int32_t                                                    UseEntryIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Moschops_Character_BP.Moschops_Character_BP_C.MakeUseEntryString
	 */
	struct AMoschops_Character_BP_C_MakeUseEntryString_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L6W7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Moschops_Character_BP.Moschops_Character_BP_C.BPTryMultiUse
	 */
	struct AMoschops_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4IEP[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Moschops_Character_BP.Moschops_Character_BP_C.Add Level Up Entries
	 */
	struct AMoschops_Character_BP_C_AddLevelUpEntries_Params
	{
	public:
		TArray<struct FMultiUseEntry>                              FullEntryList;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Moschops_Character_BP.Moschops_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AMoschops_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Moschops_Character_BP.Moschops_Character_BP_C.UserConstructionScript
	 */
	struct AMoschops_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Moschops_Character_BP.Moschops_Character_BP_C.AnimNotify_HarvestEnd
	 */
	struct AMoschops_Character_BP_C_AnimNotify_HarvestEnd_Params
	{	};

	/**
	 * Function Moschops_Character_BP.Moschops_Character_BP_C.ReceiveBeginPlay
	 */
	struct AMoschops_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Moschops_Character_BP.Moschops_Character_BP_C.BPSetupTamed
	 */
	struct AMoschops_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Moschops_Character_BP.Moschops_Character_BP_C.BPResetClone
	 */
	struct AMoschops_Character_BP_C_BPResetClone_Params
	{	};

	/**
	 * Function Moschops_Character_BP.Moschops_Character_BP_C.ExecuteUbergraph_Moschops_Character_BP
	 */
	struct AMoschops_Character_BP_C_ExecuteUbergraph_Moschops_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
