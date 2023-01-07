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
	 * Function Buff_LightningAoETamed.Buff_LightningAoETamed_C.ReceiveEndPlay
	 */
	struct ABuff_LightningAoETamed_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CXX6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_LightningAoETamed.Buff_LightningAoETamed_C.MaybeRotate
	 */
	struct ABuff_LightningAoETamed_C_MaybeRotate_Params
	{	};

	/**
	 * Function Buff_LightningAoETamed.Buff_LightningAoETamed_C.UserConstructionScript
	 */
	struct ABuff_LightningAoETamed_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_LightningAoETamed.Buff_LightningAoETamed_C.Timeline_0__FinishedFunc
	 */
	struct ABuff_LightningAoETamed_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_LightningAoETamed.Buff_LightningAoETamed_C.Timeline_0__UpdateFunc
	 */
	struct ABuff_LightningAoETamed_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_LightningAoETamed.Buff_LightningAoETamed_C.ReceiveTick
	 */
	struct ABuff_LightningAoETamed_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_LightningAoETamed.Buff_LightningAoETamed_C.SetStructure
	 */
	struct ABuff_LightningAoETamed_C_SetStructure_Params
	{
	public:
		class APrimalStructure*                                    NewParam;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_LightningAoETamed.Buff_LightningAoETamed_C.DoFadeOutMesh
	 */
	struct ABuff_LightningAoETamed_C_DoFadeOutMesh_Params
	{	};

	/**
	 * Function Buff_LightningAoETamed.Buff_LightningAoETamed_C.CheckForRain
	 */
	struct ABuff_LightningAoETamed_C_CheckForRain_Params
	{	};

	/**
	 * Function Buff_LightningAoETamed.Buff_LightningAoETamed_C.ReceiveBeginPlay
	 */
	struct ABuff_LightningAoETamed_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_LightningAoETamed.Buff_LightningAoETamed_C.ExecuteUbergraph_Buff_LightningAoETamed
	 */
	struct ABuff_LightningAoETamed_C_ExecuteUbergraph_Buff_LightningAoETamed_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
