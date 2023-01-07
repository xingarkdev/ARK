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
	 * Function EggIncubator.EggIncubator_C.IsEggItemAllowed
	 */
	struct AEggIncubator_C_IsEggItemAllowed_Params
	{
	public:
		class UPrimalItemConsumable_Egg_C*                         eggItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsAllowed;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EggIncubator.EggIncubator_C.GetItemDisplaySlot
	 */
	struct AEggIncubator_C_GetItemDisplaySlot_Params
	{
	public:
		class UPrimalItem*                                         ForItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    InSlot;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SlotFound;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AY1I[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EggIncubator.EggIncubator_C.ClientDisplayGestationMonitorEffectAdded
	 */
	struct AEggIncubator_C_ClientDisplayGestationMonitorEffectAdded_Params
	{
	public:
		struct FTransform                                          AtLocation;                                              // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EggIncubator.EggIncubator_C.BPNotifyPowerChanged
	 */
	struct AEggIncubator_C_BPNotifyPowerChanged_Params
	{	};

	/**
	 * Function EggIncubator.EggIncubator_C.SetIncubatorMaterialValues
	 */
	struct AEggIncubator_C_SetIncubatorMaterialValues_Params
	{	};

	/**
	 * Function EggIncubator.EggIncubator_C.UpdateWarmingLights
	 */
	struct AEggIncubator_C_UpdateWarmingLights_Params
	{	};

	/**
	 * Function EggIncubator.EggIncubator_C.GetWarmingLightForSlot
	 */
	struct AEggIncubator_C_GetWarmingLightForSlot_Params
	{
	public:
		int32_t                                                    ForSlotIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HTB9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UParticleSystemComponent*                            WarmingLightComponent;                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EggIncubator.EggIncubator_C.DestroyEggDisplay
	 */
	struct AEggIncubator_C_DestroyEggDisplay_Params
	{
	public:
		int32_t                                                    ItemID1;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ItemID2;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EggIncubator.EggIncubator_C.CanEggIncubateInTemp
	 */
	struct AEggIncubator_C_CanEggIncubateInTemp_Params
	{
	public:
		class UPrimalItemConsumable_Egg_C*                         eggItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCanIncubate;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KJMM[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EggIncubator.EggIncubator_C.UpdateIndoorsStatus
	 */
	struct AEggIncubator_C_UpdateIndoorsStatus_Params
	{	};

	/**
	 * Function EggIncubator.EggIncubator_C.CalculateIncubationInsulation
	 */
	struct AEggIncubator_C_CalculateIncubationInsulation_Params
	{	};

	/**
	 * Function EggIncubator.EggIncubator_C.CanEggBeHatched
	 */
	struct AEggIncubator_C_CanEggBeHatched_Params
	{
	public:
		class UPrimalItemConsumable_Egg_C*                         eggItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsHatchable;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EggIncubator.EggIncubator_C.TrySpawnEggToWorld
	 */
	struct AEggIncubator_C_TrySpawnEggToWorld_Params
	{
	public:
		class UPrimalItemConsumable_Egg_C*                         eggItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       EggWasSpawned;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_90BN[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EggIncubator.EggIncubator_C.ThrottledTick
	 */
	struct AEggIncubator_C_ThrottledTick_Params
	{	};

	/**
	 * Function EggIncubator.EggIncubator_C.ServerSyncEggDisplay
	 */
	struct AEggIncubator_C_ServerSyncEggDisplay_Params
	{	};

	/**
	 * Function EggIncubator.EggIncubator_C.GetTempBonusRawPercent
	 */
	struct AEggIncubator_C_GetTempBonusRawPercent_Params
	{
	public:
		float                                                      EggTempLowerBound;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      EggTempUpperBound;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BoostPercent;                                            // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EggIncubator.EggIncubator_C.SetIncubatorCustomDatasForEgg
	 */
	struct AEggIncubator_C_SetIncubatorCustomDatasForEgg_Params
	{
	public:
		class UPrimalItemConsumable_Egg_C*                         eggItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EggIncubator.EggIncubator_C.BPServerHandleNetExecCommand
	 */
	struct AEggIncubator_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EggIncubator.EggIncubator_C.ClientRemoveFertilizedEgg
	 */
	struct AEggIncubator_C_ClientRemoveFertilizedEgg_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EggIncubator.EggIncubator_C.ClientAddFertilizedEgg
	 */
	struct AEggIncubator_C_ClientAddFertilizedEgg_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ASPH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUnreplicatedEggData                                ManuallyReplicatedEggData;                               // 0x0008(0x0058)  (Parm, OutParm, ReferenceParm)
		struct FItemNetInfo                                        ItemNetInfo;                                             // 0x0060(0x01B0)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function EggIncubator.EggIncubator_C.SetupEggSlots
	 */
	struct AEggIncubator_C_SetupEggSlots_Params
	{	};

	/**
	 * Function EggIncubator.EggIncubator_C.RefreshEggDisplays
	 */
	struct AEggIncubator_C_RefreshEggDisplays_Params
	{	};

	/**
	 * Function EggIncubator.EggIncubator_C.CheckIsFertilizedEgg
	 */
	struct AEggIncubator_C_CheckIsFertilizedEgg_Params
	{
	public:
		class UPrimalItemConsumable_Egg_C*                         eggItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsFertilized;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EggIncubator.EggIncubator_C.GetSlotIndexForEggItem
	 */
	struct AEggIncubator_C_GetSlotIndexForEggItem_Params
	{
	public:
		class UPrimalItemConsumable_Egg_C*                         eggItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SlotIndex;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EggIncubator.EggIncubator_C.GetFirstAvailableEggSlotIndex
	 */
	struct AEggIncubator_C_GetFirstAvailableEggSlotIndex_Params
	{
	public:
		int32_t                                                    EggSlotIndex;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EggIncubator.EggIncubator_C.BPPostInitializeComponents
	 */
	struct AEggIncubator_C_BPPostInitializeComponents_Params
	{	};

	/**
	 * Function EggIncubator.EggIncubator_C.ServerRemoveFertilizedEgg
	 */
	struct AEggIncubator_C_ServerRemoveFertilizedEgg_Params
	{
	public:
		class UPrimalItemConsumable_Egg_C*                         eggItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EggIncubator.EggIncubator_C.ServerAddFertilizedEgg
	 */
	struct AEggIncubator_C_ServerAddFertilizedEgg_Params
	{
	public:
		class UPrimalItemConsumable_Egg_C*                         eggItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EggIncubator.EggIncubator_C.BPTryMultiUse
	 */
	struct AEggIncubator_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EggIncubator.EggIncubator_C.BPClientDoMultiUse
	 */
	struct AEggIncubator_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EggIncubator.EggIncubator_C.AddTempControlEntries
	 */
	struct AEggIncubator_C_AddTempControlEntries_Params
	{
	public:
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function EggIncubator.EggIncubator_C.BPGetMultiUseEntries
	 */
	struct AEggIncubator_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function EggIncubator.EggIncubator_C.BPGetMultiUseCenterText
	 */
	struct AEggIncubator_C_BPGetMultiUseCenterText_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2BPX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutCenterText;                                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
		struct FLinearColor                                        OutCenterTextColor;                                      // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SFEG[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EggIncubator.EggIncubator_C.GetTempControlBonus
	 */
	struct AEggIncubator_C_GetTempControlBonus_Params
	{
	public:
		float                                                      EggTempLowerBound;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      EggTempUpperBound;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TempControlBonusMultiplier;                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EggIncubator.EggIncubator_C.UpdateIncubation
	 */
	struct AEggIncubator_C_UpdateIncubation_Params
	{	};

	/**
	 * Function EggIncubator.EggIncubator_C.UpdateCachedHatchSpeedMultiplier
	 */
	struct AEggIncubator_C_UpdateCachedHatchSpeedMultiplier_Params
	{	};

	/**
	 * Function EggIncubator.EggIncubator_C.UserConstructionScript
	 */
	struct AEggIncubator_C_UserConstructionScript_Params
	{	};

	/**
	 * Function EggIncubator.EggIncubator_C.ClientNotifyAddedEgg
	 */
	struct AEggIncubator_C_ClientNotifyAddedEgg_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XJZP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUnreplicatedEggData                                ManuallyReplicatedEggData;                               // 0x0008(0x0058)  (Parm)
		struct FItemNetInfo                                        ItemNetInfo;                                             // 0x0060(0x01B0)  (Parm)
	};

	/**
	 * Function EggIncubator.EggIncubator_C.ClientNotifyRemovedEgg
	 */
	struct AEggIncubator_C_ClientNotifyRemovedEgg_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EggIncubator.EggIncubator_C.ReceiveBeginPlay
	 */
	struct AEggIncubator_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function EggIncubator.EggIncubator_C.MC_DestroyEggVFX
	 */
	struct AEggIncubator_C_MC_DestroyEggVFX_Params
	{
	public:
		int32_t                                                    ItemID1;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ItemID2;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EggIncubator.EggIncubator_C.BPUnstasis
	 */
	struct AEggIncubator_C_BPUnstasis_Params
	{	};

	/**
	 * Function EggIncubator.EggIncubator_C.MC_UpdateWarmingLighhts
	 */
	struct AEggIncubator_C_MC_UpdateWarmingLighhts_Params
	{	};

	/**
	 * Function EggIncubator.EggIncubator_C.MC_NotifyPowerChanged
	 */
	struct AEggIncubator_C_MC_NotifyPowerChanged_Params
	{	};

	/**
	 * Function EggIncubator.EggIncubator_C.ExecuteUbergraph_EggIncubator
	 */
	struct AEggIncubator_C_ExecuteUbergraph_EggIncubator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
