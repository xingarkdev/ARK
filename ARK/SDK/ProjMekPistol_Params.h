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
	 * Function ProjMekPistol.ProjMekPistol_C.BPIgnoreRadialDamageVictim
	 */
	struct AProjMekPistol_C_BPIgnoreRadialDamageVictim_Params
	{
	public:
		class AActor*                                              Victim;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjMekPistol.ProjMekPistol_C.UserConstructionScript
	 */
	struct AProjMekPistol_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjMekPistol.ProjMekPistol_C.ReceiveBeginPlay
	 */
	struct AProjMekPistol_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjMekPistol.ProjMekPistol_C.OnExplode
	 */
	struct AProjMekPistol_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjMekPistol.ProjMekPistol_C.ExecuteUbergraph_ProjMekPistol
	 */
	struct AProjMekPistol_C_ExecuteUbergraph_ProjMekPistol_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
