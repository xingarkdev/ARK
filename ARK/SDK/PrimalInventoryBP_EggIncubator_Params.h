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
	 * Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPCustomRemoteInventoryAllowAddItems
	 */
	struct UPrimalInventoryBP_EggIncubator_C_BPCustomRemoteInventoryAllowAddItems_Params
	{
	public:
		class AShooterPlayerController*                            PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalItem*                                         anItem;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    anItemQuantityOverride;                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bRequestedByPlayer;                                      // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0015(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1L0F[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPCustomRemoteInventoryAllowRemoveItems
	 */
	struct UPrimalInventoryBP_EggIncubator_C_BPCustomRemoteInventoryAllowRemoveItems_Params
	{
	public:
		class AShooterPlayerController*                            PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalItem*                                         anItemToTransfer;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    RequestedQuantity;                                       // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bRequestedByPlayer;                                      // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bRequestDropping;                                        // 0x0015(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0016(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_09A2[0x1];                                   // 0x0017(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.InventoryCustomSortPredicate
	 */
	struct UPrimalInventoryBP_EggIncubator_C_InventoryCustomSortPredicate_Params
	{
	public:
		class UPrimalItem*                                         LeftItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalItem*                                         RightItem;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8HVQ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPRemoteInventoryAllowRemoveItems
	 */
	struct UPrimalInventoryBP_EggIncubator_C_BPRemoteInventoryAllowRemoveItems_Params
	{
	public:
		class AShooterPlayerController*                            PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalItem*                                         anItemToTransfer;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NHIP[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPNotifyItemRemoved
	 */
	struct UPrimalInventoryBP_EggIncubator_C_BPNotifyItemRemoved_Params
	{
	public:
		class UPrimalItem*                                         anItem;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.BPNotifyItemAdded
	 */
	struct UPrimalInventoryBP_EggIncubator_C_BPNotifyItemAdded_Params
	{
	public:
		class UPrimalItem*                                         anItem;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipItem;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1CC0[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.ExecuteUbergraph_PrimalInventoryBP_EggIncubator
	 */
	struct UPrimalInventoryBP_EggIncubator_C_ExecuteUbergraph_PrimalInventoryBP_EggIncubator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.OnFertilizedEggRemoved__DelegateSignature
	 */
	struct UPrimalInventoryBP_EggIncubator_C_OnFertilizedEggRemoved__DelegateSignature_Params
	{
	public:
		class UPrimalItemConsumable_Egg_C*                         eggItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalInventoryBP_EggIncubator.PrimalInventoryBP_EggIncubator_C.OnFertilizedEggAdded__DelegateSignature
	 */
	struct UPrimalInventoryBP_EggIncubator_C_OnFertilizedEggAdded__DelegateSignature_Params
	{
	public:
		class UPrimalItemConsumable_Egg_C*                         eggItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
