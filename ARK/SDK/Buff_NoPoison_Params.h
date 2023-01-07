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
	 * Function Buff_NoPoison.Buff_NoPoison_C.BPPreSetupForInstigator
	 */
	struct ABuff_NoPoison_C_BPPreSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_NoPoison.Buff_NoPoison_C.UserConstructionScript
	 */
	struct ABuff_NoPoison_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_NoPoison.Buff_NoPoison_C.ExecuteUbergraph_Buff_NoPoison
	 */
	struct ABuff_NoPoison_C_ExecuteUbergraph_Buff_NoPoison_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
