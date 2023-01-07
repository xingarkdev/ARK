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
	 * Function Buff_RockDrakeCamo.Buff_RockDrakeCamo_C.BuffTickClient
	 */
	struct ABuff_RockDrakeCamo_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RockDrakeCamo.Buff_RockDrakeCamo_C.BuffTickServer
	 */
	struct ABuff_RockDrakeCamo_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A1NH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_RockDrakeCamo.Buff_RockDrakeCamo_C.PreventActorTargeting
	 */
	struct ABuff_RockDrakeCamo_C_PreventActorTargeting_Params
	{
	public:
		class AActor*                                              ByActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4S41[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_RockDrakeCamo.Buff_RockDrakeCamo_C.UserConstructionScript
	 */
	struct ABuff_RockDrakeCamo_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_RockDrakeCamo.Buff_RockDrakeCamo_C.ExecuteUbergraph_Buff_RockDrakeCamo
	 */
	struct ABuff_RockDrakeCamo_C_ExecuteUbergraph_Buff_RockDrakeCamo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
