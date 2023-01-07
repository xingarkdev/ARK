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
	 * Function Buff_FullTekSuit.Buff_FullTekSuit_C.BPPreventAddingOtherBuff
	 */
	struct ABuff_FullTekSuit_C_BPPreventAddingOtherBuff_Params
	{
	public:
		class UClass*                                              anotherBuffClass;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_02JS[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_FullTekSuit.Buff_FullTekSuit_C.UserConstructionScript
	 */
	struct ABuff_FullTekSuit_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_FullTekSuit.Buff_FullTekSuit_C.ExecuteUbergraph_Buff_FullTekSuit
	 */
	struct ABuff_FullTekSuit_C_ExecuteUbergraph_Buff_FullTekSuit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
