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
	 * Function Buff_FireAoE.Buff_FireAoE_C.UserConstructionScript
	 */
	struct ABuff_FireAoE_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_FireAoE.Buff_FireAoE_C.Timeline_0__FinishedFunc
	 */
	struct ABuff_FireAoE_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_FireAoE.Buff_FireAoE_C.Timeline_0__UpdateFunc
	 */
	struct ABuff_FireAoE_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_FireAoE.Buff_FireAoE_C.ReceiveTick
	 */
	struct ABuff_FireAoE_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FireAoE.Buff_FireAoE_C.SetStructure
	 */
	struct ABuff_FireAoE_C_SetStructure_Params
	{
	public:
		class APrimalStructure*                                    NewParam;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FireAoE.Buff_FireAoE_C.DoFadeOutMesh
	 */
	struct ABuff_FireAoE_C_DoFadeOutMesh_Params
	{	};

	/**
	 * Function Buff_FireAoE.Buff_FireAoE_C.CheckForRain
	 */
	struct ABuff_FireAoE_C_CheckForRain_Params
	{	};

	/**
	 * Function Buff_FireAoE.Buff_FireAoE_C.ReceiveBeginPlay
	 */
	struct ABuff_FireAoE_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_FireAoE.Buff_FireAoE_C.ExecuteUbergraph_Buff_FireAoE
	 */
	struct ABuff_FireAoE_C_ExecuteUbergraph_Buff_FireAoE_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
