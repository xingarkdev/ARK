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
	 * Function Buff_IceJumper.Buff_IceJumper_C.GetBuffPostprocessIntensity
	 */
	struct ABuff_IceJumper_C_GetBuffPostprocessIntensity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_IceJumper.Buff_IceJumper_C.AllowPostProcessEffect
	 */
	struct ABuff_IceJumper_C_AllowPostProcessEffect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZQSV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_IceJumper.Buff_IceJumper_C.UserConstructionScript
	 */
	struct ABuff_IceJumper_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_IceJumper.Buff_IceJumper_C.ExecuteUbergraph_Buff_IceJumper
	 */
	struct ABuff_IceJumper_C_ExecuteUbergraph_Buff_IceJumper_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
