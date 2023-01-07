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
	 * Function ProjGrenadeTek.ProjGrenadeTek_C.BPProjectileBounced
	 */
	struct AProjGrenadeTek_C_BPProjectileBounced_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		struct FVector                                             ImpactVelocity;                                          // 0x0088(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T09M[0xC];                                   // 0x0094(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProjGrenadeTek.ProjGrenadeTek_C.BPAttachedRootComponent
	 */
	struct AProjGrenadeTek_C_BPAttachedRootComponent_Params
	{	};

	/**
	 * Function ProjGrenadeTek.ProjGrenadeTek_C.UserConstructionScript
	 */
	struct AProjGrenadeTek_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjGrenadeTek.ProjGrenadeTek_C.OnExplode
	 */
	struct AProjGrenadeTek_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjGrenadeTek.ProjGrenadeTek_C.ExecuteUbergraph_ProjGrenadeTek
	 */
	struct AProjGrenadeTek_C_ExecuteUbergraph_ProjGrenadeTek_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
