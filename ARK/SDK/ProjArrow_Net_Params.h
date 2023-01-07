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
	 * Function ProjArrow_Net.ProjArrow_Net_C.OnExplode
	 */
	struct AProjArrow_Net_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjArrow_Net.ProjArrow_Net_C.ReceiveBeginPlay
	 */
	struct AProjArrow_Net_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjArrow_Net.ProjArrow_Net_C.UserConstructionScript
	 */
	struct AProjArrow_Net_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjArrow_Net.ProjArrow_Net_C.Multicast_OpenNet
	 */
	struct AProjArrow_Net_C_Multicast_OpenNet_Params
	{	};

	/**
	 * Function ProjArrow_Net.ProjArrow_Net_C.ExecuteUbergraph_ProjArrow_Net
	 */
	struct AProjArrow_Net_C_ExecuteUbergraph_ProjArrow_Net_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
