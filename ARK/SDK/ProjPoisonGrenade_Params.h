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
	 * Function ProjPoisonGrenade.ProjPoisonGrenade_C.UserConstructionScript
	 */
	struct AProjPoisonGrenade_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjPoisonGrenade.ProjPoisonGrenade_C.OnExplode
	 */
	struct AProjPoisonGrenade_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjPoisonGrenade.ProjPoisonGrenade_C.ExecuteUbergraph_ProjPoisonGrenade
	 */
	struct AProjPoisonGrenade_C_ExecuteUbergraph_ProjPoisonGrenade_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
