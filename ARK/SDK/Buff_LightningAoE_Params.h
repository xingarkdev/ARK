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
	 * Function Buff_LightningAoE.Buff_LightningAoE_C.ReceiveEndPlay
	 */
	struct ABuff_LightningAoE_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G82F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_LightningAoE.Buff_LightningAoE_C.MaybeRotate
	 */
	struct ABuff_LightningAoE_C_MaybeRotate_Params
	{	};

	/**
	 * Function Buff_LightningAoE.Buff_LightningAoE_C.UserConstructionScript
	 */
	struct ABuff_LightningAoE_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_LightningAoE.Buff_LightningAoE_C.Timeline_0__FinishedFunc
	 */
	struct ABuff_LightningAoE_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_LightningAoE.Buff_LightningAoE_C.Timeline_0__UpdateFunc
	 */
	struct ABuff_LightningAoE_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_LightningAoE.Buff_LightningAoE_C.ReceiveTick
	 */
	struct ABuff_LightningAoE_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_LightningAoE.Buff_LightningAoE_C.SetStructure
	 */
	struct ABuff_LightningAoE_C_SetStructure_Params
	{
	public:
		class APrimalStructure*                                    NewParam;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_LightningAoE.Buff_LightningAoE_C.DoFadeOutMesh
	 */
	struct ABuff_LightningAoE_C_DoFadeOutMesh_Params
	{	};

	/**
	 * Function Buff_LightningAoE.Buff_LightningAoE_C.CheckForRain
	 */
	struct ABuff_LightningAoE_C_CheckForRain_Params
	{	};

	/**
	 * Function Buff_LightningAoE.Buff_LightningAoE_C.ReceiveBeginPlay
	 */
	struct ABuff_LightningAoE_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_LightningAoE.Buff_LightningAoE_C.ExecuteUbergraph_Buff_LightningAoE
	 */
	struct ABuff_LightningAoE_C_ExecuteUbergraph_Buff_LightningAoE_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
