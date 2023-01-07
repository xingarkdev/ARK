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
	 * Function WeapSword_Tek.WeapSword_Tek_C.OnRep_HideWeapon
	 */
	struct AWeapSword_Tek_C_OnRep_HideWeapon_Params
	{	};

	/**
	 * Function WeapSword_Tek.WeapSword_Tek_C.AppliedDamageToTarget
	 */
	struct AWeapSword_Tek_C_AppliedDamageToTarget_Params
	{
	public:
		class AActor*                                              DamageTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ElementCostMultiplier;                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    DamageIn;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bExtraDamage;                                            // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5M04[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapSword_Tek.WeapSword_Tek_C.BPWeaponDealDamage
	 */
	struct AWeapSword_Tek_C_BPWeaponDealDamage_Params
	{
	public:
		struct FHitResult                                          Impact;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		struct FVector                                             ShootDir;                                                // 0x0088(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		int32_t                                                    DamageAmount;                                            // 0x0094(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              DamageType;                                              // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Impulse;                                                 // 0x00A0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x00A4(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapSword_Tek.WeapSword_Tek_C.BPStartEquippedNotify
	 */
	struct AWeapSword_Tek_C_BPStartEquippedNotify_Params
	{	};

	/**
	 * Function WeapSword_Tek.WeapSword_Tek_C.StartUnequipEvent
	 */
	struct AWeapSword_Tek_C_StartUnequipEvent_Params
	{	};

	/**
	 * Function WeapSword_Tek.WeapSword_Tek_C.ReceiveTick
	 */
	struct AWeapSword_Tek_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapSword_Tek.WeapSword_Tek_C.BPHandleMeleeAttack
	 */
	struct AWeapSword_Tek_C_BPHandleMeleeAttack_Params
	{	};

	/**
	 * Function WeapSword_Tek.WeapSword_Tek_C.BPAppliedPrimalItemToWeapon
	 */
	struct AWeapSword_Tek_C_BPAppliedPrimalItemToWeapon_Params
	{	};

	/**
	 * Function WeapSword_Tek.WeapSword_Tek_C.UserConstructionScript
	 */
	struct AWeapSword_Tek_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapSword_Tek.WeapSword_Tek_C.PlayAttackSound
	 */
	struct AWeapSword_Tek_C_PlayAttackSound_Params
	{	};

	/**
	 * Function WeapSword_Tek.WeapSword_Tek_C.NetDoPlayMeleeAttackSound
	 */
	struct AWeapSword_Tek_C_NetDoPlayMeleeAttackSound_Params
	{	};

	/**
	 * Function WeapSword_Tek.WeapSword_Tek_C.ExecuteUbergraph_WeapSword_Tek
	 */
	struct AWeapSword_Tek_C_ExecuteUbergraph_WeapSword_Tek_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
