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
	 * Function ProjIceNeedle.ProjIceNeedle_C.UserConstructionScript
	 */
	struct AProjIceNeedle_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjIceNeedle.ProjIceNeedle_C.ReceiveBeginPlay
	 */
	struct AProjIceNeedle_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjIceNeedle.ProjIceNeedle_C.ReceiveEndPlay
	 */
	struct AProjIceNeedle_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjIceNeedle.ProjIceNeedle_C.ExecuteUbergraph_ProjIceNeedle
	 */
	struct AProjIceNeedle_C_ExecuteUbergraph_ProjIceNeedle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
