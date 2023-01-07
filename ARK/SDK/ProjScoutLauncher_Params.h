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
	 * Function ProjScoutLauncher.ProjScoutLauncher_C.UserConstructionScript
	 */
	struct AProjScoutLauncher_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjScoutLauncher.ProjScoutLauncher_C.OnExplode
	 */
	struct AProjScoutLauncher_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjScoutLauncher.ProjScoutLauncher_C.ReceiveBeginPlay
	 */
	struct AProjScoutLauncher_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjScoutLauncher.ProjScoutLauncher_C.ExecuteUbergraph_ProjScoutLauncher
	 */
	struct AProjScoutLauncher_C_ExecuteUbergraph_ProjScoutLauncher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
