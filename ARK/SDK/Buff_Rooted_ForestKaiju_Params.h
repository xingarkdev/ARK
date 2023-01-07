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
	 * Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.BuffTickClient
	 */
	struct ABuff_Rooted_ForestKaiju_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RKYT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.BPSetupForInstigator
	 */
	struct ABuff_Rooted_ForestKaiju_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.BPCheckPreventInput
	 */
	struct ABuff_Rooted_ForestKaiju_C_BPCheckPreventInput_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.BPDeactivated
	 */
	struct ABuff_Rooted_ForestKaiju_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.BPActivated
	 */
	struct ABuff_Rooted_ForestKaiju_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.UserConstructionScript
	 */
	struct ABuff_Rooted_ForestKaiju_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.Multi_PreventMovementInput
	 */
	struct ABuff_Rooted_ForestKaiju_C_Multi_PreventMovementInput_Params
	{
	public:
		bool                                                       Prevent;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.Multi_SetScale
	 */
	struct ABuff_Rooted_ForestKaiju_C_Multi_SetScale_Params
	{
	public:
		float                                                      Scaler;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.DelayedSetScale
	 */
	struct ABuff_Rooted_ForestKaiju_C_DelayedSetScale_Params
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.ExecuteUbergraph_Buff_Rooted_ForestKaiju
	 */
	struct ABuff_Rooted_ForestKaiju_C_ExecuteUbergraph_Buff_Rooted_ForestKaiju_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
