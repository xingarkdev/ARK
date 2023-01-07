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
	 * Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.CraftItem
	 */
	struct UDinoTamedInventoryComponent_Beetle_C_CraftItem_Params
	{
	public:
		int32_t                                                    ItemToCraftIndex;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.BPInventoryRefresh
	 */
	struct UDinoTamedInventoryComponent_Beetle_C_BPInventoryRefresh_Params
	{	};

	/**
	 * Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.BPInitializeInventory
	 */
	struct UDinoTamedInventoryComponent_Beetle_C_BPInitializeInventory_Params
	{	};

	/**
	 * Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.CheckIfAnythingNewCanBeCrafted
	 */
	struct UDinoTamedInventoryComponent_Beetle_C_CheckIfAnythingNewCanBeCrafted_Params
	{	};

	/**
	 * Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.Initial Set Crafting Times
	 */
	struct UDinoTamedInventoryComponent_Beetle_C_InitialSetCraftingTimes_Params
	{	};

	/**
	 * Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.TryToCraft
	 */
	struct UDinoTamedInventoryComponent_Beetle_C_TryToCraft_Params
	{	};

	/**
	 * Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.UnsetAll
	 */
	struct UDinoTamedInventoryComponent_Beetle_C_UnsetAll_Params
	{	};

	/**
	 * Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.HasEnoughResources
	 */
	struct UDinoTamedInventoryComponent_Beetle_C_HasEnoughResources_Params
	{
	public:
		int32_t                                                    IndexClassToCheck;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       hasEnough;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H23Y[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NumberOfTimesCanCraft;                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.RemoveUncraftable
	 */
	struct UDinoTamedInventoryComponent_Beetle_C_RemoveUncraftable_Params
	{	};

	/**
	 * Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.BPNotifyItemAdded
	 */
	struct UDinoTamedInventoryComponent_Beetle_C_BPNotifyItemAdded_Params
	{
	public:
		class UPrimalItem*                                         anItem;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipItem;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.BPNotifyItemRemoved
	 */
	struct UDinoTamedInventoryComponent_Beetle_C_BPNotifyItemRemoved_Params
	{
	public:
		class UPrimalItem*                                         anItem;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.ExecuteUbergraph_DinoTamedInventoryComponent_Beetle
	 */
	struct UDinoTamedInventoryComponent_Beetle_C_ExecuteUbergraph_DinoTamedInventoryComponent_Beetle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
