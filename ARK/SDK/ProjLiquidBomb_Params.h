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
	 * Function ProjLiquidBomb.ProjLiquidBomb_C.UserConstructionScript
	 */
	struct AProjLiquidBomb_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjLiquidBomb.ProjLiquidBomb_C.ReceiveTick
	 */
	struct AProjLiquidBomb_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjLiquidBomb.ProjLiquidBomb_C.ReceiveBeginPlay
	 */
	struct AProjLiquidBomb_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjLiquidBomb.ProjLiquidBomb_C.ReceiveEndPlay
	 */
	struct AProjLiquidBomb_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjLiquidBomb.ProjLiquidBomb_C.ExecuteUbergraph_ProjLiquidBomb
	 */
	struct AProjLiquidBomb_C_ExecuteUbergraph_ProjLiquidBomb_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
