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
	 * Function Buff_PredatorVision.Buff_PredatorVision_C.BuffTickServer
	 */
	struct ABuff_PredatorVision_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PredatorVision.Buff_PredatorVision_C.ReceiveBeginPlay
	 */
	struct ABuff_PredatorVision_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_PredatorVision.Buff_PredatorVision_C.BuffTickClient
	 */
	struct ABuff_PredatorVision_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PredatorVision.Buff_PredatorVision_C.BPDeactivated
	 */
	struct ABuff_PredatorVision_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PredatorVision.Buff_PredatorVision_C.BPActivated
	 */
	struct ABuff_PredatorVision_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PredatorVision.Buff_PredatorVision_C.UserConstructionScript
	 */
	struct ABuff_PredatorVision_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_PredatorVision.Buff_PredatorVision_C.ExecuteUbergraph_Buff_PredatorVision
	 */
	struct ABuff_PredatorVision_C_ExecuteUbergraph_Buff_PredatorVision_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
