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
	 * Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.UserConstructionScript
	 */
	struct AProjTekGravityGrenade_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.OnExplode
	 */
	struct AProjTekGravityGrenade_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.ApplyImpulseToDroppedItems
	 */
	struct AProjTekGravityGrenade_C_ApplyImpulseToDroppedItems_Params
	{
	public:
		TArray<class ADroppedItem*>                                Items;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		struct FVector                                             EffectOrigin;                                            // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.ReceiveBeginPlay
	 */
	struct AProjTekGravityGrenade_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.ExecuteUbergraph_ProjTekGravityGrenade
	 */
	struct AProjTekGravityGrenade_C_ExecuteUbergraph_ProjTekGravityGrenade_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
