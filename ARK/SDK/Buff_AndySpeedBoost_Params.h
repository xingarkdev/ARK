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
	 * Function Buff_AndySpeedBoost.Buff_AndySpeedBoost_C.BP_ModifyCharacterFOV
	 */
	struct ABuff_AndySpeedBoost_C_BP_ModifyCharacterFOV_Params
	{
	public:
		float                                                      inFOV;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_AndySpeedBoost.Buff_AndySpeedBoost_C.UserConstructionScript
	 */
	struct ABuff_AndySpeedBoost_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_AndySpeedBoost.Buff_AndySpeedBoost_C.BuffTickServer
	 */
	struct ABuff_AndySpeedBoost_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_AndySpeedBoost.Buff_AndySpeedBoost_C.BPSetupForInstigator
	 */
	struct ABuff_AndySpeedBoost_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_AndySpeedBoost.Buff_AndySpeedBoost_C.BPDeactivated
	 */
	struct ABuff_AndySpeedBoost_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_AndySpeedBoost.Buff_AndySpeedBoost_C.ExecuteUbergraph_Buff_AndySpeedBoost
	 */
	struct ABuff_AndySpeedBoost_C_ExecuteUbergraph_Buff_AndySpeedBoost_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
