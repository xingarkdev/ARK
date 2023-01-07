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
	 * Function ProjChainBola.ProjChainBola_C.UserConstructionScript
	 */
	struct AProjChainBola_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjChainBola.ProjChainBola_C.OnExplode
	 */
	struct AProjChainBola_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjChainBola.ProjChainBola_C.ExecuteUbergraph_ProjChainBola
	 */
	struct AProjChainBola_C_ExecuteUbergraph_ProjChainBola_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
