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
	 * Function ProjClusterGrenade.ProjClusterGrenade_C.UserConstructionScript
	 */
	struct AProjClusterGrenade_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjClusterGrenade.ProjClusterGrenade_C.OnExplode
	 */
	struct AProjClusterGrenade_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjClusterGrenade.ProjClusterGrenade_C.BPSpawnedFragments
	 */
	struct AProjClusterGrenade_C_BPSpawnedFragments_Params
	{
	public:
		TArray<class AShooterProjectile*>                          FragmentArray;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function ProjClusterGrenade.ProjClusterGrenade_C.ExecuteUbergraph_ProjClusterGrenade
	 */
	struct AProjClusterGrenade_C_ExecuteUbergraph_ProjClusterGrenade_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
