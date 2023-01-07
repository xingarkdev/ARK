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
	 * Function Buff_Radiation.Buff_Radiation_C.BuffTickServer
	 */
	struct ABuff_Radiation_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Radiation.Buff_Radiation_C.UserConstructionScript
	 */
	struct ABuff_Radiation_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Radiation.Buff_Radiation_C.ExecuteUbergraph_Buff_Radiation
	 */
	struct ABuff_Radiation_C_ExecuteUbergraph_Buff_Radiation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
