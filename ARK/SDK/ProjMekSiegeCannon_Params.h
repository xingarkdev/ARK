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
	 * Function ProjMekSiegeCannon.ProjMekSiegeCannon_C.UserConstructionScript
	 */
	struct AProjMekSiegeCannon_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjMekSiegeCannon.ProjMekSiegeCannon_C.OnExplode
	 */
	struct AProjMekSiegeCannon_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjMekSiegeCannon.ProjMekSiegeCannon_C.ExecuteUbergraph_ProjMekSiegeCannon
	 */
	struct AProjMekSiegeCannon_C_ExecuteUbergraph_ProjMekSiegeCannon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
