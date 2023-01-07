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
	 * Function PrimalItem_Spawner_Enforcer.PrimalItem_Spawner_Enforcer_C.PreDinoSpawned
	 */
	struct UPrimalItem_Spawner_Enforcer_C_PreDinoSpawned_Params
	{	};

	/**
	 * Function PrimalItem_Spawner_Enforcer.PrimalItem_Spawner_Enforcer_C.GetStatDisplayString
	 */
	struct UPrimalItem_Spawner_Enforcer_C_GetStatDisplayString_Params
	{
	public:
		EPrimalCharacterStatusValue                                Stat;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HF2F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Value;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    StatConvertMapIndex;                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GR7X[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              StatDisplay;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
		class FString                                              ValueDisplay;                                            // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       ShowInTooltip;                                           // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M5ML[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItem_Spawner_Enforcer.PrimalItem_Spawner_Enforcer_C.ExecuteUbergraph_PrimalItem_Spawner_Enforcer
	 */
	struct UPrimalItem_Spawner_Enforcer_C_ExecuteUbergraph_PrimalItem_Spawner_Enforcer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
