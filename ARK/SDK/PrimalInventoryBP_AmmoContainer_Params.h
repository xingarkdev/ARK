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
	 * Function PrimalInventoryBP_AmmoContainer.PrimalInventoryBP_AmmoContainer_C.BPNotifyItemQuantityUpdated
	 */
	struct UPrimalInventoryBP_AmmoContainer_C_BPNotifyItemQuantityUpdated_Params
	{
	public:
		class UPrimalItem*                                         anItem;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    amount;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalInventoryBP_AmmoContainer.PrimalInventoryBP_AmmoContainer_C.BPNotifyItemRemoved
	 */
	struct UPrimalInventoryBP_AmmoContainer_C_BPNotifyItemRemoved_Params
	{
	public:
		class UPrimalItem*                                         anItem;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalInventoryBP_AmmoContainer.PrimalInventoryBP_AmmoContainer_C.BPNotifyItemAdded
	 */
	struct UPrimalInventoryBP_AmmoContainer_C_BPNotifyItemAdded_Params
	{
	public:
		class UPrimalItem*                                         anItem;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipItem;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E7E6[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalInventoryBP_AmmoContainer.PrimalInventoryBP_AmmoContainer_C.ExecuteUbergraph_PrimalInventoryBP_AmmoContainer
	 */
	struct UPrimalInventoryBP_AmmoContainer_C_ExecuteUbergraph_PrimalInventoryBP_AmmoContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
