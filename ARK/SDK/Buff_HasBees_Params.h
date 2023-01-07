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
	 * Function Buff_HasBees.Buff_HasBees_C.BPActivated
	 */
	struct ABuff_HasBees_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_HasBees.Buff_HasBees_C.BuffTickServer
	 */
	struct ABuff_HasBees_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ULT6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_HasBees.Buff_HasBees_C.UserConstructionScript
	 */
	struct ABuff_HasBees_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_HasBees.Buff_HasBees_C.ExecuteUbergraph_Buff_HasBees
	 */
	struct ABuff_HasBees_C_ExecuteUbergraph_Buff_HasBees_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
