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
	 * Function Buff_NocturnalState_SleepDeprived.Buff_NocturnalState_SleepDeprived_C.BuffTickServer
	 */
	struct ABuff_NocturnalState_SleepDeprived_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QHVW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_NocturnalState_SleepDeprived.Buff_NocturnalState_SleepDeprived_C.GetHUDProgressBarPercent
	 */
	struct ABuff_NocturnalState_SleepDeprived_C_GetHUDProgressBarPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TWUY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_NocturnalState_SleepDeprived.Buff_NocturnalState_SleepDeprived_C.UserConstructionScript
	 */
	struct ABuff_NocturnalState_SleepDeprived_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_NocturnalState_SleepDeprived.Buff_NocturnalState_SleepDeprived_C.ExecuteUbergraph_Buff_NocturnalState_SleepDeprived
	 */
	struct ABuff_NocturnalState_SleepDeprived_C_ExecuteUbergraph_Buff_NocturnalState_SleepDeprived_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
