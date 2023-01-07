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
	 * Function ProjGrapHook.ProjGrapHook_C.OnExplode
	 */
	struct AProjGrapHook_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjGrapHook.ProjGrapHook_C.UserConstructionScript
	 */
	struct AProjGrapHook_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjGrapHook.ProjGrapHook_C.ExecuteUbergraph_ProjGrapHook
	 */
	struct AProjGrapHook_C_ExecuteUbergraph_ProjGrapHook_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
