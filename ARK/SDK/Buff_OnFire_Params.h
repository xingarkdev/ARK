﻿#pragma once

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
	 * Function Buff_OnFire.Buff_OnFire_C.BPCustomAllowAddBuff
	 */
	struct ABuff_OnFire_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JO51[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_OnFire.Buff_OnFire_C.UserConstructionScript
	 */
	struct ABuff_OnFire_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_OnFire.Buff_OnFire_C.ExecuteUbergraph_Buff_OnFire
	 */
	struct ABuff_OnFire_C_ExecuteUbergraph_Buff_OnFire_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
