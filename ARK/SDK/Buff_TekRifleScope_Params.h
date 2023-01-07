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
	 * Function Buff_TekRifleScope.Buff_TekRifleScope_C.BuffTickClient
	 */
	struct ABuff_TekRifleScope_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R5TP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekRifleScope.Buff_TekRifleScope_C.UserConstructionScript
	 */
	struct ABuff_TekRifleScope_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekRifleScope.Buff_TekRifleScope_C.ExecuteUbergraph_Buff_TekRifleScope
	 */
	struct ABuff_TekRifleScope_C_ExecuteUbergraph_Buff_TekRifleScope_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
