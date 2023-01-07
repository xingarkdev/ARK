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
	 * Function Buff_WyvernFire_OnFire.Buff_WyvernFire_OnFire_C.ReceiveTick
	 */
	struct ABuff_WyvernFire_OnFire_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CJ2Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_WyvernFire_OnFire.Buff_WyvernFire_OnFire_C.BPCustomAllowAddBuff
	 */
	struct ABuff_WyvernFire_OnFire_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_WyvernFire_OnFire.Buff_WyvernFire_OnFire_C.UserConstructionScript
	 */
	struct ABuff_WyvernFire_OnFire_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_WyvernFire_OnFire.Buff_WyvernFire_OnFire_C.ExecuteUbergraph_Buff_WyvernFire_OnFire
	 */
	struct ABuff_WyvernFire_OnFire_C_ExecuteUbergraph_Buff_WyvernFire_OnFire_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
