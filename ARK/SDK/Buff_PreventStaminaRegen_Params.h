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
	 * Function Buff_PreventStaminaRegen.Buff_PreventStaminaRegen_C.BPSetupForInstigator
	 */
	struct ABuff_PreventStaminaRegen_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PreventStaminaRegen.Buff_PreventStaminaRegen_C.UserConstructionScript
	 */
	struct ABuff_PreventStaminaRegen_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_PreventStaminaRegen.Buff_PreventStaminaRegen_C.ExecuteUbergraph_Buff_PreventStaminaRegen
	 */
	struct ABuff_PreventStaminaRegen_C_ExecuteUbergraph_Buff_PreventStaminaRegen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
