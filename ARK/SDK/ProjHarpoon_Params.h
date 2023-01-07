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
	 * Function ProjHarpoon.ProjHarpoon_C.ReceiveBeginPlay
	 */
	struct AProjHarpoon_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjHarpoon.ProjHarpoon_C.ReceiveTick
	 */
	struct AProjHarpoon_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjHarpoon.ProjHarpoon_C.UserConstructionScript
	 */
	struct AProjHarpoon_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjHarpoon.ProjHarpoon_C.ExecuteUbergraph_ProjHarpoon
	 */
	struct AProjHarpoon_C_ExecuteUbergraph_ProjHarpoon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
