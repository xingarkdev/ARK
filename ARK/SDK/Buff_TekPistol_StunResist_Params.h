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
	 * Function Buff_TekPistol_StunResist.Buff_TekPistol_StunResist_C.BPPreventAddingOtherBuff
	 */
	struct ABuff_TekPistol_StunResist_C_BPPreventAddingOtherBuff_Params
	{
	public:
		class UClass*                                              anotherBuffClass;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekPistol_StunResist.Buff_TekPistol_StunResist_C.UserConstructionScript
	 */
	struct ABuff_TekPistol_StunResist_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekPistol_StunResist.Buff_TekPistol_StunResist_C.ExecuteUbergraph_Buff_TekPistol_StunResist
	 */
	struct ABuff_TekPistol_StunResist_C_ExecuteUbergraph_Buff_TekPistol_StunResist_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
