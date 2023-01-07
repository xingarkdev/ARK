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
	 * Function ClientExplodingProjectile.ClientExplodingProjectile_C.UserConstructionScript
	 */
	struct AClientExplodingProjectile_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ClientExplodingProjectile.ClientExplodingProjectile_C.OnExplode
	 */
	struct AClientExplodingProjectile_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ClientExplodingProjectile.ClientExplodingProjectile_C.ExecuteUbergraph_ClientExplodingProjectile
	 */
	struct AClientExplodingProjectile_C_ExecuteUbergraph_ClientExplodingProjectile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
