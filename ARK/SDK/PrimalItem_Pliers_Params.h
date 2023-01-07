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
	 * Function PrimalItem_Pliers.PrimalItem_Pliers_C.BPUsedOntoItem
	 */
	struct UPrimalItem_Pliers_C_BPUsedOntoItem_Params
	{
	public:
		class UPrimalItem*                                         DestinationItem;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    AdditionalData;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItem_Pliers.PrimalItem_Pliers_C.BPSupportUseOntoItem
	 */
	struct UPrimalItem_Pliers_C_BPSupportUseOntoItem_Params
	{
	public:
		class UPrimalItem*                                         DestinationItem;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItem_Pliers.PrimalItem_Pliers_C.ExecuteUbergraph_PrimalItem_Pliers
	 */
	struct UPrimalItem_Pliers_C_ExecuteUbergraph_PrimalItem_Pliers_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
