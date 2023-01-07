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
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPServerHandleNetExecCommand
	 */
	struct AStructure_LoadoutDummy_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.UpdateInventorySize
	 */
	struct AStructure_LoadoutDummy_C_UpdateInventorySize_Params
	{	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.GetCurrentlyUsedHotbarSlots
	 */
	struct AStructure_LoadoutDummy_C_GetCurrentlyUsedHotbarSlots_Params
	{
	public:
		int32_t                                                    OutUsedSlots;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.OnRep_CurrentMaxInventoryItems
	 */
	struct AStructure_LoadoutDummy_C_OnRep_CurrentMaxInventoryItems_Params
	{	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.AddItemSafe
	 */
	struct AStructure_LoadoutDummy_C_AddItemSafe_Params
	{
	public:
		class UPrimalItem*                                         Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalInventoryComponent*                           toInventory;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalInventoryComponent*                           FromInventory;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterCharacter*                                   OwningPlayer;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDontStack;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1H9F[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalInventoryComponent*                           AnotherFallbackInventory;                                // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalItem*                                         InsertAfterItem;                                         // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalItem*                                         OutItem;                                                 // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAddedToTarget;                                          // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.AddAndEquipItem
	 */
	struct AStructure_LoadoutDummy_C_AddAndEquipItem_Params
	{
	public:
		class UPrimalItem*                                         Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalInventoryComponent*                           toInventory;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalInventoryComponent*                           FromInventory;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APlayerController*                                   ForPC;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.AddToOverflowDroppedInventory
	 */
	struct AStructure_LoadoutDummy_C_AddToOverflowDroppedInventory_Params
	{
	public:
		class UPrimalItem*                                         anItem;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalItem*                                         newItem;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPNotifyInventoryItemChange
	 */
	struct AStructure_LoadoutDummy_C_BPNotifyInventoryItemChange_Params
	{
	public:
		bool                                                       bIsItemAdd;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZE50[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalItem*                                         theItem;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipItem;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.IsControllerValid
	 */
	struct AStructure_LoadoutDummy_C_IsControllerValid_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ret;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6AFK[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.SetHotbarCurrentHealth
	 */
	struct AStructure_LoadoutDummy_C_SetHotbarCurrentHealth_Params
	{	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ReceiveDestroyed
	 */
	struct AStructure_LoadoutDummy_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPPlacedStructure
	 */
	struct AStructure_LoadoutDummy_C_BPPlacedStructure_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPClientDoMultiUse
	 */
	struct AStructure_LoadoutDummy_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GK10[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPOnDemolish
	 */
	struct AStructure_LoadoutDummy_C_BPOnDemolish_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.SetTextRendererColor
	 */
	struct AStructure_LoadoutDummy_C_SetTextRendererColor_Params
	{	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.OnRep_HotbarID
	 */
	struct AStructure_LoadoutDummy_C_OnRep_HotbarID_Params
	{	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.CreateHotbarStructure
	 */
	struct AStructure_LoadoutDummy_C_CreateHotbarStructure_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Everything
	 */
	struct AStructure_LoadoutDummy_C_FillDummyEverything_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Everything
	 */
	struct AStructure_LoadoutDummy_C_FillCharacterEverything_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Inventory
	 */
	struct AStructure_LoadoutDummy_C_FillDummyInventory_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Inventory
	 */
	struct AStructure_LoadoutDummy_C_FillCharacterInventory_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Swap Everything
	 */
	struct AStructure_LoadoutDummy_C_SwapEverything_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Swap All Inventory
	 */
	struct AStructure_LoadoutDummy_C_SwapAllInventory_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIncludingHotbar;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E0HO[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Swap All Hotbar
	 */
	struct AStructure_LoadoutDummy_C_SwapAllHotbar_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class UPrimalItem*>                                 CachedCharacterItems;                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Hotbar
	 */
	struct AStructure_LoadoutDummy_C_FillDummyHotbar_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Hotbar
	 */
	struct AStructure_LoadoutDummy_C_FillCharacterHotbar_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Equipment
	 */
	struct AStructure_LoadoutDummy_C_FillDummyEquipment_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Equipment
	 */
	struct AStructure_LoadoutDummy_C_FillCharacterEquipment_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.SwapAllEquipment
	 */
	struct AStructure_LoadoutDummy_C_SwapAllEquipment_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPTryMultiUse
	 */
	struct AStructure_LoadoutDummy_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPGetMultiUseEntries
	 */
	struct AStructure_LoadoutDummy_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.UserConstructionScript
	 */
	struct AStructure_LoadoutDummy_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ReceiveEndPlay
	 */
	struct AStructure_LoadoutDummy_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ReceiveBeginPlay
	 */
	struct AStructure_LoadoutDummy_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ExecuteUbergraph_Structure_LoadoutDummy
	 */
	struct AStructure_LoadoutDummy_C_ExecuteUbergraph_Structure_LoadoutDummy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
