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
	 * Function Buff_FireAoE_Quick.Buff_FireAoE_Quick_C.UserConstructionScript
	 */
	struct ABuff_FireAoE_Quick_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_FireAoE_Quick.Buff_FireAoE_Quick_C.Timeline_0__FinishedFunc
	 */
	struct ABuff_FireAoE_Quick_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_FireAoE_Quick.Buff_FireAoE_Quick_C.Timeline_0__UpdateFunc
	 */
	struct ABuff_FireAoE_Quick_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_FireAoE_Quick.Buff_FireAoE_Quick_C.ReceiveTick
	 */
	struct ABuff_FireAoE_Quick_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FireAoE_Quick.Buff_FireAoE_Quick_C.SetStructure
	 */
	struct ABuff_FireAoE_Quick_C_SetStructure_Params
	{
	public:
		class APrimalStructure*                                    NewParam;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_FireAoE_Quick.Buff_FireAoE_Quick_C.DoFadeOutMesh
	 */
	struct ABuff_FireAoE_Quick_C_DoFadeOutMesh_Params
	{	};

	/**
	 * Function Buff_FireAoE_Quick.Buff_FireAoE_Quick_C.CheckForRain
	 */
	struct ABuff_FireAoE_Quick_C_CheckForRain_Params
	{	};

	/**
	 * Function Buff_FireAoE_Quick.Buff_FireAoE_Quick_C.ReceiveBeginPlay
	 */
	struct ABuff_FireAoE_Quick_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_FireAoE_Quick.Buff_FireAoE_Quick_C.ExecuteUbergraph_Buff_FireAoE_Quick
	 */
	struct ABuff_FireAoE_Quick_C_ExecuteUbergraph_Buff_FireAoE_Quick_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
