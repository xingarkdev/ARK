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
	 * Function Buff_Radiation_Sickness.Buff_Radiation_Sickness_C.BuffTickClient
	 */
	struct ABuff_Radiation_Sickness_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YVXR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Radiation_Sickness.Buff_Radiation_Sickness_C.UserConstructionScript
	 */
	struct ABuff_Radiation_Sickness_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Radiation_Sickness.Buff_Radiation_Sickness_C.ExecuteUbergraph_Buff_Radiation_Sickness
	 */
	struct ABuff_Radiation_Sickness_C_ExecuteUbergraph_Buff_Radiation_Sickness_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
