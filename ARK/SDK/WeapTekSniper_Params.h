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
	 * Function WeapTekSniper.WeapTekSniper_C.BPShouldDealDamage
	 */
	struct AWeapTekSniper_C_BPShouldDealDamage_Params
	{
	public:
		class AActor*                                              TestActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_690T[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.Try Enable XRay
	 */
	struct AWeapTekSniper_C_TryEnableXRay_Params
	{	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.Get Overheat Duration
	 */
	struct AWeapTekSniper_C_GetOverheatDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.BPStopPenetratingAtHit
	 */
	struct AWeapTekSniper_C_BPStopPenetratingAtHit_Params
	{
	public:
		struct FHitResult                                          CurrentHit;                                              // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		bool                                                       bIsEntryHit;                                             // 0x0088(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PYQQ[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CurrentDistance;                                         // 0x008C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CurrentMaxDistance;                                      // 0x0090(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0094(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BTYF[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.BPWeaponDealDamage
	 */
	struct AWeapTekSniper_C_BPWeaponDealDamage_Params
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
	 * Function WeapTekSniper.WeapTekSniper_C.BPAdjustAmmoPerShot
	 */
	struct AWeapTekSniper_C_BPAdjustAmmoPerShot_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.BPToggleAccessory
	 */
	struct AWeapTekSniper_C_BPToggleAccessory_Params
	{	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.AllowTargeting
	 */
	struct AWeapTekSniper_C_AllowTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.BPSpawnImpactEffects
	 */
	struct AWeapTekSniper_C_BPSpawnImpactEffects_Params
	{
	public:
		struct FHitResult                                          Impact;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		struct FVector                                             ShootDir;                                                // 0x0088(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       bIsEntryHit;                                             // 0x0094(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DNW0[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      WeaponMaxRange;                                          // 0x0098(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.BPOnScoped
	 */
	struct AWeapTekSniper_C_BPOnScoped_Params
	{	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.BPAppliedPrimalItemToWeapon
	 */
	struct AWeapTekSniper_C_BPAppliedPrimalItemToWeapon_Params
	{	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.ReceiveDestroyed
	 */
	struct AWeapTekSniper_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.Has Ammo
	 */
	struct AWeapTekSniper_C_HasAmmo_Params
	{
	public:
		int32_t                                                    MinAmount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.BPToggleAccessoryFailed
	 */
	struct AWeapTekSniper_C_BPToggleAccessoryFailed_Params
	{	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.BPCanToggleAccessory
	 */
	struct AWeapTekSniper_C_BPCanToggleAccessory_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.UpdateMeshOverheat Effect
	 */
	struct AWeapTekSniper_C_UpdateMeshOverheatEffect_Params
	{
	public:
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      amount;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.Tick X-Ray Sound
	 */
	struct AWeapTekSniper_C_TickXRaySound_Params
	{	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.Is X-Ray Active
	 */
	struct AWeapTekSniper_C_IsXRayActive_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z5MO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.Show X-Ray Enabled Message
	 */
	struct AWeapTekSniper_C_ShowXRayEnabledMessage_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KDRQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.SniperMessage
	 */
	struct AWeapTekSniper_C_SniperMessage_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.GetOwnerCharacter
	 */
	struct AWeapTekSniper_C_GetOwnerCharacter_Params
	{
	public:
		class AShooterCharacter*                                   AsShooterCharacter;                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.BPWeaponZoom
	 */
	struct AWeapTekSniper_C_BPWeaponZoom_Params
	{
	public:
		bool                                                       bZoomingIn;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LCEC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.BPWeaponCanFire
	 */
	struct AWeapTekSniper_C_BPWeaponCanFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.BPFireWeapon
	 */
	struct AWeapTekSniper_C_BPFireWeapon_Params
	{	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.ReceiveTick
	 */
	struct AWeapTekSniper_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.GetIs Overheated
	 */
	struct AWeapTekSniper_C_GetIsOverheated_Params
	{
	public:
		bool                                                       bRetOverheated;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.UserConstructionScript
	 */
	struct AWeapTekSniper_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.FadeOutOverheatParticles__FinishedFunc
	 */
	struct AWeapTekSniper_C_FadeOutOverheatParticles__FinishedFunc_Params
	{	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.FadeOutOverheatParticles__UpdateFunc
	 */
	struct AWeapTekSniper_C_FadeOutOverheatParticles__UpdateFunc_Params
	{	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.Overheated
	 */
	struct AWeapTekSniper_C_Overheated_Params
	{
	public:
		bool                                                       JustFired;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.AddHeat
	 */
	struct AWeapTekSniper_C_AddHeat_Params
	{
	public:
		bool                                                       JustFired;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.NotOverheated
	 */
	struct AWeapTekSniper_C_NotOverheated_Params
	{	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.SetScoped
	 */
	struct AWeapTekSniper_C_SetScoped_Params
	{
	public:
		bool                                                       Scoped;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.ClearHitPrimalCharacterAlready
	 */
	struct AWeapTekSniper_C_ClearHitPrimalCharacterAlready_Params
	{	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.ClearHitPrimalStructureAlready
	 */
	struct AWeapTekSniper_C_ClearHitPrimalStructureAlready_Params
	{	};

	/**
	 * Function WeapTekSniper.WeapTekSniper_C.ExecuteUbergraph_WeapTekSniper
	 */
	struct AWeapTekSniper_C_ExecuteUbergraph_WeapTekSniper_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
