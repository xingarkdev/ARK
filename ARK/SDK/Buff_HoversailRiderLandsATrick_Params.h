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
	 * Function Buff_HoversailRiderLandsATrick.Buff_HoversailRiderLandsATrick_C.AllowPostProcessEffect
	 */
	struct ABuff_HoversailRiderLandsATrick_C_AllowPostProcessEffect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_00S4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_HoversailRiderLandsATrick.Buff_HoversailRiderLandsATrick_C.GetBuffPostprocessIntensity
	 */
	struct ABuff_HoversailRiderLandsATrick_C_GetBuffPostprocessIntensity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UBEA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_HoversailRiderLandsATrick.Buff_HoversailRiderLandsATrick_C.BuffTickClient
	 */
	struct ABuff_HoversailRiderLandsATrick_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_HoversailRiderLandsATrick.Buff_HoversailRiderLandsATrick_C.UserConstructionScript
	 */
	struct ABuff_HoversailRiderLandsATrick_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_HoversailRiderLandsATrick.Buff_HoversailRiderLandsATrick_C.ExecuteUbergraph_Buff_HoversailRiderLandsATrick
	 */
	struct ABuff_HoversailRiderLandsATrick_C_ExecuteUbergraph_Buff_HoversailRiderLandsATrick_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
