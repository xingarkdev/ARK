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
	 * Function Buff_PoopRoar_Cooldown.Buff_PoopRoar_Cooldown_C.BPCheckPreventInput
	 */
	struct ABuff_PoopRoar_Cooldown_C_BPCheckPreventInput_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PoopRoar_Cooldown.Buff_PoopRoar_Cooldown_C.UserConstructionScript
	 */
	struct ABuff_PoopRoar_Cooldown_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_PoopRoar_Cooldown.Buff_PoopRoar_Cooldown_C.ExecuteUbergraph_Buff_PoopRoar_Cooldown
	 */
	struct ABuff_PoopRoar_Cooldown_C_ExecuteUbergraph_Buff_PoopRoar_Cooldown_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
