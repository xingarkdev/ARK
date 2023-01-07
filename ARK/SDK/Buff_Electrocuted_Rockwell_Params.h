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
	 * Function Buff_Electrocuted_Rockwell.Buff_Electrocuted_Rockwell_C.BPCustomAllowAddBuff
	 */
	struct ABuff_Electrocuted_Rockwell_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Electrocuted_Rockwell.Buff_Electrocuted_Rockwell_C.UserConstructionScript
	 */
	struct ABuff_Electrocuted_Rockwell_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Electrocuted_Rockwell.Buff_Electrocuted_Rockwell_C.ExecuteUbergraph_Buff_Electrocuted_Rockwell
	 */
	struct ABuff_Electrocuted_Rockwell_C_ExecuteUbergraph_Buff_Electrocuted_Rockwell_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
