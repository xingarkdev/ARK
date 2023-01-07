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
	 * Function Buff_BlurEffect_RareMushroom.Buff_BlurEffect_RareMushroom_C.BPCustomAllowAddBuff
	 */
	struct ABuff_BlurEffect_RareMushroom_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RU33[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_BlurEffect_RareMushroom.Buff_BlurEffect_RareMushroom_C.UserConstructionScript
	 */
	struct ABuff_BlurEffect_RareMushroom_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_BlurEffect_RareMushroom.Buff_BlurEffect_RareMushroom_C.ExecuteUbergraph_Buff_BlurEffect_RareMushroom
	 */
	struct ABuff_BlurEffect_RareMushroom_C_ExecuteUbergraph_Buff_BlurEffect_RareMushroom_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
