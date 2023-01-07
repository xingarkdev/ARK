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
	 * Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.SpawnItem
	 */
	struct ADroppedItem_Mutagen_C_SpawnItem_Params
	{
	public:
		class AActor*                                              Manager;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              SpawnedItem;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.UnlockExplorerNote
	 */
	struct ADroppedItem_Mutagen_C_UnlockExplorerNote_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.BPTryMultiUse
	 */
	struct ADroppedItem_Mutagen_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.BPGetMultiUseEntries
	 */
	struct ADroppedItem_Mutagen_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.BPOnItemPickedUp
	 */
	struct ADroppedItem_Mutagen_C_BPOnItemPickedUp_Params
	{
	public:
		class APlayerController*                                   ByPC;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalItem*                                         InventoryItem;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.ReceiveBeginPlay
	 */
	struct ADroppedItem_Mutagen_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.ReceiveDestroyed
	 */
	struct ADroppedItem_Mutagen_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.UserConstructionScript
	 */
	struct ADroppedItem_Mutagen_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.itemPickedUp
	 */
	struct ADroppedItem_Mutagen_C_itemPickedUp_Params
	{
	public:
		class AActor*                                              Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APlayerController*                                   ByPC;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.AdjustableSpawnDelayChanged
	 */
	struct ADroppedItem_Mutagen_C_AdjustableSpawnDelayChanged_Params
	{	};

	/**
	 * Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.CheckForFallThrough
	 */
	struct ADroppedItem_Mutagen_C_CheckForFallThrough_Params
	{	};

	/**
	 * Function DroppedItem_Mutagen.DroppedItem_Mutagen_C.ExecuteUbergraph_DroppedItem_Mutagen
	 */
	struct ADroppedItem_Mutagen_C_ExecuteUbergraph_DroppedItem_Mutagen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
