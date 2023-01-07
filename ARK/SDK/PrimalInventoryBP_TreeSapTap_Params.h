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
	 * Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.BPOnComponentCreated
	 */
	struct UPrimalInventoryBP_TreeSapTap_C_BPOnComponentCreated_Params
	{	};

	/**
	 * Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.BPCustomRemoteInventoryAllowAddItems
	 */
	struct UPrimalInventoryBP_TreeSapTap_C_BPCustomRemoteInventoryAllowAddItems_Params
	{
	public:
		class AShooterPlayerController*                            PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalItem*                                         anItem;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    anItemQuantityOverride;                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bRequestedByPlayer;                                      // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0015(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CJCJ[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.FindNearbySapTaps
	 */
	struct UPrimalInventoryBP_TreeSapTap_C_FindNearbySapTaps_Params
	{
	public:
		int32_t                                                    NumOutTaps;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VKVQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.BPInventoryRefresh
	 */
	struct UPrimalInventoryBP_TreeSapTap_C_BPInventoryRefresh_Params
	{	};

	/**
	 * Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.ExecuteUbergraph_PrimalInventoryBP_TreeSapTap
	 */
	struct UPrimalInventoryBP_TreeSapTap_C_ExecuteUbergraph_PrimalInventoryBP_TreeSapTap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
