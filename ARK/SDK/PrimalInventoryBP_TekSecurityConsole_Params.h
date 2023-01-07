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
	 * Function PrimalInventoryBP_TekSecurityConsole.PrimalInventoryBP_TekSecurityConsole_C.OnConsoleUpdated
	 */
	struct UPrimalInventoryBP_TekSecurityConsole_C_OnConsoleUpdated_Params
	{	};

	/**
	 * Function PrimalInventoryBP_TekSecurityConsole.PrimalInventoryBP_TekSecurityConsole_C.BPNotifyItemAdded
	 */
	struct UPrimalInventoryBP_TekSecurityConsole_C_BPNotifyItemAdded_Params
	{
	public:
		class UPrimalItem*                                         anItem;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipItem;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0PZT[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalInventoryBP_TekSecurityConsole.PrimalInventoryBP_TekSecurityConsole_C.ExecuteUbergraph_PrimalInventoryBP_TekSecurityConsole
	 */
	struct UPrimalInventoryBP_TekSecurityConsole_C_ExecuteUbergraph_PrimalInventoryBP_TekSecurityConsole_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
