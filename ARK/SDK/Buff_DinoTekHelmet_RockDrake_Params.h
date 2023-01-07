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
	 * Function Buff_DinoTekHelmet_RockDrake.Buff_DinoTekHelmet_RockDrake_C.BuffTickClient
	 */
	struct ABuff_DinoTekHelmet_RockDrake_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_298M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_DinoTekHelmet_RockDrake.Buff_DinoTekHelmet_RockDrake_C.GetSocketClampDelta
	 */
	struct ABuff_DinoTekHelmet_RockDrake_C_GetSocketClampDelta_Params
	{
	public:
		float                                                      OutSocketClampDelta;                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FI5T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_DinoTekHelmet_RockDrake.Buff_DinoTekHelmet_RockDrake_C.UserConstructionScript
	 */
	struct ABuff_DinoTekHelmet_RockDrake_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_DinoTekHelmet_RockDrake.Buff_DinoTekHelmet_RockDrake_C.ExecuteUbergraph_Buff_DinoTekHelmet_RockDrake
	 */
	struct ABuff_DinoTekHelmet_RockDrake_C_ExecuteUbergraph_Buff_DinoTekHelmet_RockDrake_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
