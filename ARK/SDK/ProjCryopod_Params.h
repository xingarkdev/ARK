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
	 * Function ProjCryopod.ProjCryopod_C.UserConstructionScript
	 */
	struct AProjCryopod_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjCryopod.ProjCryopod_C.OnExplode
	 */
	struct AProjCryopod_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjCryopod.ProjCryopod_C.ExecuteUbergraph_ProjCryopod
	 */
	struct AProjCryopod_C_ExecuteUbergraph_ProjCryopod_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
