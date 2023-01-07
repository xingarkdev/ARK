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
	 * Function ProjGrenade.ProjGrenade_C.UserConstructionScript
	 */
	struct AProjGrenade_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjGrenade.ProjGrenade_C.OnExplode
	 */
	struct AProjGrenade_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjGrenade.ProjGrenade_C.ExecuteUbergraph_ProjGrenade
	 */
	struct AProjGrenade_C_ExecuteUbergraph_ProjGrenade_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
