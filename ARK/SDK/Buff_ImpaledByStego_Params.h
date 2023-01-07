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
	 * Function Buff_ImpaledByStego.Buff_ImpaledByStego_C.BuffTickClient
	 */
	struct ABuff_ImpaledByStego_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4YN7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ImpaledByStego.Buff_ImpaledByStego_C.BuffTickServer
	 */
	struct ABuff_ImpaledByStego_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SZ4B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ImpaledByStego.Buff_ImpaledByStego_C.BPDeactivated
	 */
	struct ABuff_ImpaledByStego_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ImpaledByStego.Buff_ImpaledByStego_C.BPSetupForInstigator
	 */
	struct ABuff_ImpaledByStego_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ImpaledByStego.Buff_ImpaledByStego_C.UserConstructionScript
	 */
	struct ABuff_ImpaledByStego_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_ImpaledByStego.Buff_ImpaledByStego_C.ExecuteUbergraph_Buff_ImpaledByStego
	 */
	struct ABuff_ImpaledByStego_C_ExecuteUbergraph_Buff_ImpaledByStego_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
