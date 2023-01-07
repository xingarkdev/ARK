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
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.WithdrawAmount
	 */
	struct ABP_DedicatedStorage_C_WithdrawAmount_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    amount;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8VVJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPOnTransferAll
	 */
	struct ABP_DedicatedStorage_C_BPOnTransferAll_Params
	{
	public:
		class UPrimalInventoryComponent*                           toInventory;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.UpdateItemCount
	 */
	struct ABP_DedicatedStorage_C_UpdateItemCount_Params
	{	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPPostLoadedFromSaveGame
	 */
	struct ABP_DedicatedStorage_C_BPPostLoadedFromSaveGame_Params
	{	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPClientDoMultiUse
	 */
	struct ABP_DedicatedStorage_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UGYU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.AddTopAndBottomMenuEntries
	 */
	struct ABP_DedicatedStorage_C_AddTopAndBottomMenuEntries_Params
	{
	public:
		TArray<struct FMultiUseEntry>                              Entries;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.OnRep_TopAndBottomRotation
	 */
	struct ABP_DedicatedStorage_C_OnRep_TopAndBottomRotation_Params
	{	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.OnRep_HideTopAndBottom
	 */
	struct ABP_DedicatedStorage_C_OnRep_HideTopAndBottom_Params
	{	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.CanMakeDeposit
	 */
	struct ABP_DedicatedStorage_C_CanMakeDeposit_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalCharacter*                                    Character;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I5A3[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.IsPlayerControllerValid
	 */
	struct ABP_DedicatedStorage_C_IsPlayerControllerValid_Params
	{
	public:
		class APlayerController*                                   thePC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bValid;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OW7O[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.DropAllInventoryOnGround
	 */
	struct ABP_DedicatedStorage_C_DropAllInventoryOnGround_Params
	{	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPOverrideAllowStructureAccess
	 */
	struct ABP_DedicatedStorage_C_BPOverrideAllowStructureAccess_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsAccessAllowed;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForInventoryOnly;                                       // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.GetResourceStackSize
	 */
	struct ABP_DedicatedStorage_C_GetResourceStackSize_Params
	{
	public:
		int32_t                                                    StackSize;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5R65[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPOnDemolish
	 */
	struct ABP_DedicatedStorage_C_BPOnDemolish_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.FillInventory
	 */
	struct ABP_DedicatedStorage_C_FillInventory_Params
	{	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.BlueprintDrawHUD
	 */
	struct ABP_DedicatedStorage_C_BlueprintDrawHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.IsFuel
	 */
	struct ABP_DedicatedStorage_C_IsFuel_Params
	{
	public:
		class UPrimalInventoryComponent*                           inventory;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              ItemClass;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Fuel;                                                    // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2O92[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.DropRestrictedItems
	 */
	struct ABP_DedicatedStorage_C_DropRestrictedItems_Params
	{	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPUnstasis
	 */
	struct ABP_DedicatedStorage_C_BPUnstasis_Params
	{	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.HandleConsolidate
	 */
	struct ABP_DedicatedStorage_C_HandleConsolidate_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.HandleWithdraw
	 */
	struct ABP_DedicatedStorage_C_HandleWithdraw_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.HandleDeposit
	 */
	struct ABP_DedicatedStorage_C_HandleDeposit_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalCharacter*                                    Character;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.OnRep_ResourceCount
	 */
	struct ABP_DedicatedStorage_C_OnRep_ResourceCount_Params
	{	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPNotifyInventoryItemChange
	 */
	struct ABP_DedicatedStorage_C_BPNotifyInventoryItemChange_Params
	{
	public:
		bool                                                       bIsItemAdd;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6EYQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalItem*                                         theItem;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipItem;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9RKY[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.OnRep_SelectedResourceClass
	 */
	struct ABP_DedicatedStorage_C_OnRep_SelectedResourceClass_Params
	{	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.ReceiveBeginPlay
	 */
	struct ABP_DedicatedStorage_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPTryMultiUse
	 */
	struct ABP_DedicatedStorage_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPGetMultiUseEntries
	 */
	struct ABP_DedicatedStorage_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.UserConstructionScript
	 */
	struct ABP_DedicatedStorage_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.MultiClearResourceClass
	 */
	struct ABP_DedicatedStorage_C_MultiClearResourceClass_Params
	{	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPDied
	 */
	struct ABP_DedicatedStorage_C_BPDied_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NU69[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class AController*                                         Killer;                                                  // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.BPOnStructurePickup
	 */
	struct ABP_DedicatedStorage_C_BPOnStructurePickup_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              ItemType;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalItem*                                         NewlyPickedUpItem;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsQuickPickup;                                          // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DedicatedStorage.BP_DedicatedStorage_C.ExecuteUbergraph_BP_DedicatedStorage
	 */
	struct ABP_DedicatedStorage_C_ExecuteUbergraph_BP_DedicatedStorage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
