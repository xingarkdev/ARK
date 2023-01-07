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
	 * Function Buff_TentacleToss.Buff_TentacleToss_C.AllowPostProcessEffect
	 */
	struct ABuff_TentacleToss_C_AllowPostProcessEffect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MR0B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TentacleToss.Buff_TentacleToss_C.BPDeactivated
	 */
	struct ABuff_TentacleToss_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TentacleToss.Buff_TentacleToss_C.UserConstructionScript
	 */
	struct ABuff_TentacleToss_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TentacleToss.Buff_TentacleToss_C.ExecuteUbergraph_Buff_TentacleToss
	 */
	struct ABuff_TentacleToss_C_ExecuteUbergraph_Buff_TentacleToss_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
