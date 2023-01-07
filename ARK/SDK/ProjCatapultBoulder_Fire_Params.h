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
	 * Function ProjCatapultBoulder_Fire.ProjCatapultBoulder_Fire_C.OnExplode
	 */
	struct AProjCatapultBoulder_Fire_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjCatapultBoulder_Fire.ProjCatapultBoulder_Fire_C.UserConstructionScript
	 */
	struct AProjCatapultBoulder_Fire_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjCatapultBoulder_Fire.ProjCatapultBoulder_Fire_C.ExecuteUbergraph_ProjCatapultBoulder_Fire
	 */
	struct AProjCatapultBoulder_Fire_C_ExecuteUbergraph_ProjCatapultBoulder_Fire_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
