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
	 * Function Buff_ESP.Buff_ESP_C.ReceiveBeginPlay
	 */
	struct ABuff_ESP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_ESP.Buff_ESP_C.BPDeactivated
	 */
	struct ABuff_ESP_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ESP.Buff_ESP_C.UserConstructionScript
	 */
	struct ABuff_ESP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_ESP.Buff_ESP_C.ExecuteUbergraph_Buff_ESP
	 */
	struct ABuff_ESP_C_ExecuteUbergraph_Buff_ESP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
