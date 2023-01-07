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
	 * Function Buff_ExitedMekShield.Buff_ExitedMekShield_C.BuffTickClient
	 */
	struct ABuff_ExitedMekShield_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GRCO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ExitedMekShield.Buff_ExitedMekShield_C.GetOwnerMek
	 */
	struct ABuff_ExitedMekShield_C_GetOwnerMek_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsFriendly;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DILZ[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AMek_Character_BP_C*                                 Mek;                                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ExitedMekShield.Buff_ExitedMekShield_C.IsOwnerMek
	 */
	struct ABuff_ExitedMekShield_C_IsOwnerMek_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ExitedMekShield.Buff_ExitedMekShield_C.UserConstructionScript
	 */
	struct ABuff_ExitedMekShield_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_ExitedMekShield.Buff_ExitedMekShield_C.ExecuteUbergraph_Buff_ExitedMekShield
	 */
	struct ABuff_ExitedMekShield_C_ExecuteUbergraph_Buff_ExitedMekShield_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
