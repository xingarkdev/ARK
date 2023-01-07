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
	 * Function PrimalInventoryBP_TekReplicator.PrimalInventoryBP_TekReplicator_C.BPCraftingFinishedNotification
	 */
	struct UPrimalInventoryBP_TekReplicator_C_BPCraftingFinishedNotification_Params
	{
	public:
		class UPrimalItem*                                         itemToBeCrafted;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalInventoryBP_TekReplicator.PrimalInventoryBP_TekReplicator_C.BPRemoteInventoryAllowViewing
	 */
	struct UPrimalInventoryBP_TekReplicator_C_BPRemoteInventoryAllowViewing_Params
	{
	public:
		class AShooterPlayerController*                            PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GL3K[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalInventoryBP_TekReplicator.PrimalInventoryBP_TekReplicator_C.ExecuteUbergraph_PrimalInventoryBP_TekReplicator
	 */
	struct UPrimalInventoryBP_TekReplicator_C_ExecuteUbergraph_PrimalInventoryBP_TekReplicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
