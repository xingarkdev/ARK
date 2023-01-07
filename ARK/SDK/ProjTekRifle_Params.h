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
	 * Function ProjTekRifle.ProjTekRifle_C.BPIgnoreRadialDamageVictim
	 */
	struct AProjTekRifle_C_BPIgnoreRadialDamageVictim_Params
	{
	public:
		class AActor*                                              Victim;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EWHX[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProjTekRifle.ProjTekRifle_C.UserConstructionScript
	 */
	struct AProjTekRifle_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjTekRifle.ProjTekRifle_C.ReceiveBeginPlay
	 */
	struct AProjTekRifle_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjTekRifle.ProjTekRifle_C.OnExplode
	 */
	struct AProjTekRifle_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjTekRifle.ProjTekRifle_C.ExecuteUbergraph_ProjTekRifle
	 */
	struct AProjTekRifle_C_ExecuteUbergraph_ProjTekRifle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
