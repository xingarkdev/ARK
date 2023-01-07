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
	 * Function PrimalInventoryBP_LoadoutDummyHotbar.PrimalInventoryBP_LoadoutDummyHotbar_C.BPRemoteInventoryAllowRemoveItems
	 */
	struct UPrimalInventoryBP_LoadoutDummyHotbar_C_BPRemoteInventoryAllowRemoveItems_Params
	{
	public:
		class AShooterPlayerController*                            PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalItem*                                         anItemToTransfer;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4UIF[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalInventoryBP_LoadoutDummyHotbar.PrimalInventoryBP_LoadoutDummyHotbar_C.BPAllowAddInventoryItem
	 */
	struct UPrimalInventoryBP_LoadoutDummyHotbar_C_BPAllowAddInventoryItem_Params
	{
	public:
		class UPrimalItem*                                         Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    RequestedQuantity;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOnlyAddAll;                                             // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalInventoryBP_LoadoutDummyHotbar.PrimalInventoryBP_LoadoutDummyHotbar_C.ExecuteUbergraph_PrimalInventoryBP_LoadoutDummyHotbar
	 */
	struct UPrimalInventoryBP_LoadoutDummyHotbar_C_ExecuteUbergraph_PrimalInventoryBP_LoadoutDummyHotbar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
