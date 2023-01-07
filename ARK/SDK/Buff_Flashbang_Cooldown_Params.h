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
	 * Function Buff_Flashbang_Cooldown.Buff_Flashbang_Cooldown_C.BPPreSetupForInstigator
	 */
	struct ABuff_Flashbang_Cooldown_C_BPPreSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Flashbang_Cooldown.Buff_Flashbang_Cooldown_C.BPCheckPreventInput
	 */
	struct ABuff_Flashbang_Cooldown_C_BPCheckPreventInput_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Flashbang_Cooldown.Buff_Flashbang_Cooldown_C.UserConstructionScript
	 */
	struct ABuff_Flashbang_Cooldown_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Flashbang_Cooldown.Buff_Flashbang_Cooldown_C.ExecuteUbergraph_Buff_Flashbang_Cooldown
	 */
	struct ABuff_Flashbang_Cooldown_C_ExecuteUbergraph_Buff_Flashbang_Cooldown_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
