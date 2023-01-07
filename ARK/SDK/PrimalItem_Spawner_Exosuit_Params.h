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
	 * Function PrimalItem_Spawner_Exosuit.PrimalItem_Spawner_Exosuit_C.BPCanUse
	 */
	struct UPrimalItem_Spawner_Exosuit_C_BPCanUse_Params
	{
	public:
		bool                                                       bIgnoreCooldown;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItem_Spawner_Exosuit.PrimalItem_Spawner_Exosuit_C.GetStatDisplayString
	 */
	struct UPrimalItem_Spawner_Exosuit_C_GetStatDisplayString_Params
	{
	public:
		EPrimalCharacterStatusValue                                Stat;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9MV3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Value;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    StatConvertMapIndex;                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZP2K[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              StatDisplay;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
		class FString                                              ValueDisplay;                                            // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       ShowInTooltip;                                           // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItem_Spawner_Exosuit.PrimalItem_Spawner_Exosuit_C.ExecuteUbergraph_PrimalItem_Spawner_Exosuit
	 */
	struct UPrimalItem_Spawner_Exosuit_C_ExecuteUbergraph_PrimalItem_Spawner_Exosuit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
