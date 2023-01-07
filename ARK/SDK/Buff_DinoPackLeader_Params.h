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
	 * Function Buff_DinoPackLeader.Buff_DinoPackLeader_C.BuffTickServer
	 */
	struct ABuff_DinoPackLeader_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_DinoPackLeader.Buff_DinoPackLeader_C.UserConstructionScript
	 */
	struct ABuff_DinoPackLeader_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_DinoPackLeader.Buff_DinoPackLeader_C.ReceiveTick
	 */
	struct ABuff_DinoPackLeader_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_DinoPackLeader.Buff_DinoPackLeader_C.ReceiveBeginPlay
	 */
	struct ABuff_DinoPackLeader_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_DinoPackLeader.Buff_DinoPackLeader_C.ExecuteUbergraph_Buff_DinoPackLeader
	 */
	struct ABuff_DinoPackLeader_C_ExecuteUbergraph_Buff_DinoPackLeader_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
