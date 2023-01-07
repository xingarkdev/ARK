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
	 * Function Buff_Fenrir_IceState.Buff_Fenrir_IceState_C.UserConstructionScript
	 */
	struct ABuff_Fenrir_IceState_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Fenrir_IceState.Buff_Fenrir_IceState_C.BPSetupForInstigator
	 */
	struct ABuff_Fenrir_IceState_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Fenrir_IceState.Buff_Fenrir_IceState_C.BPDeactivated
	 */
	struct ABuff_Fenrir_IceState_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Fenrir_IceState.Buff_Fenrir_IceState_C.BuffTickServer
	 */
	struct ABuff_Fenrir_IceState_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Fenrir_IceState.Buff_Fenrir_IceState_C.ExecuteUbergraph_Buff_Fenrir_IceState
	 */
	struct ABuff_Fenrir_IceState_C_ExecuteUbergraph_Buff_Fenrir_IceState_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
