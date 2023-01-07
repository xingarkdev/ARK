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
	 * Function WeapTekBow.WeapTekBow_C.GetAmmoMultiuseEntries
	 */
	struct AWeapTekBow_C_GetAmmoMultiuseEntries_Params
	{
	public:
		TArray<struct FMultiUseEntry>                              AmmoWheelEntries;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.GetHudData
	 */
	struct AWeapTekBow_C_GetHudData_Params
	{
	public:
		class FString                                              AmmoName;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		class UTexture2D*                                          AmmoIcon;                                                // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    CurrentAmmoCount;                                        // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    CurrentAmmoCost;                                         // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    AmmoPerClip;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    AmmoTypeIndex;                                           // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        CurrentAmmoTypeColor;                                    // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsAccessoryActive;                                       // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I5PW[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.BPCanToggleAccessory
	 */
	struct AWeapTekBow_C_BPCanToggleAccessory_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PFFD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.BPGetMultiUseEntries
	 */
	struct AWeapTekBow_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.BPClientDoMultiUse
	 */
	struct AWeapTekBow_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.CycleAmmoTimer
	 */
	struct AWeapTekBow_C_CycleAmmoTimer_Params
	{	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.BPGetCrosshairColor
	 */
	struct AWeapTekBow_C_BPGetCrosshairColor_Params
	{
	public:
		struct FColor                                              ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.BPStartEquippedNotify
	 */
	struct AWeapTekBow_C_BPStartEquippedNotify_Params
	{	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.StartUnequipEvent
	 */
	struct AWeapTekBow_C_StartUnequipEvent_Params
	{	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.ReceiveDestroyed
	 */
	struct AWeapTekBow_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.OnHideProjectile
	 */
	struct AWeapTekBow_C_OnHideProjectile_Params
	{	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.SpawnFiredFX
	 */
	struct AWeapTekBow_C_SpawnFiredFX_Params
	{
	public:
		struct FVector                                             EndLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bWasInstantHit;                                          // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4FGX[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.GetAmmoCountForAmmoType
	 */
	struct AWeapTekBow_C_GetAmmoCountForAmmoType_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.BPCanStartFire
	 */
	struct AWeapTekBow_C_BPCanStartFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PF6I[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.BPWeaponCanFire
	 */
	struct AWeapTekBow_C_BPWeaponCanFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L62D[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.BPAdjustAmmoPerShot
	 */
	struct AWeapTekBow_C_BPAdjustAmmoPerShot_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TF85[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.UpdateMaxPowerFX
	 */
	struct AWeapTekBow_C_UpdateMaxPowerFX_Params
	{	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.UpdateArrowVisibility
	 */
	struct AWeapTekBow_C_UpdateArrowVisibility_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.UpdateArrowMesh
	 */
	struct AWeapTekBow_C_UpdateArrowMesh_Params
	{	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.Show Ammo Wheel
	 */
	struct AWeapTekBow_C_ShowAmmoWheel_Params
	{	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.SetupProjectileInstantHit
	 */
	struct AWeapTekBow_C_SetupProjectileInstantHit_Params
	{
	public:
		class AShooterProjectile*                                  Projectile;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitLocation;                                             // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.AmmoSelected
	 */
	struct AWeapTekBow_C_AmmoSelected_Params
	{
	public:
		int32_t                                                    AmmoTypeIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.GetAmmoWheelEntries
	 */
	struct AWeapTekBow_C_GetAmmoWheelEntries_Params
	{
	public:
		TArray<struct FCustomWheelEntry>                           Entries;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.ReceiveTick
	 */
	struct AWeapTekBow_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.BPOnSpawnedProjectile
	 */
	struct AWeapTekBow_C_BPOnSpawnedProjectile_Params
	{
	public:
		class AShooterProjectile*                                  Projectile;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.BPFiredWeapon
	 */
	struct AWeapTekBow_C_BPFiredWeapon_Params
	{	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.BPSelectProjectileToFire
	 */
	struct AWeapTekBow_C_BPSelectProjectileToFire_Params
	{
	public:
		class UClass*                                              ProjectileClassOverride;                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USoundCue*                                           FireSoundOverride;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSpawnOnClient;                                          // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_54MW[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OverrideMaxSpeed;                                        // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.CycleAmmoType
	 */
	struct AWeapTekBow_C_CycleAmmoType_Params
	{
	public:
		bool                                                       bBackwards;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.BPDrawHud
	 */
	struct AWeapTekBow_C_BPDrawHud_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.UserConstructionScript
	 */
	struct AWeapTekBow_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.ReceiveBeginPlay
	 */
	struct AWeapTekBow_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.RunOnServer_CycleAmmo
	 */
	struct AWeapTekBow_C_RunOnServer_CycleAmmo_Params
	{
	public:
		bool                                                       bBackwards;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.RunOnServer_InstantHit
	 */
	struct AWeapTekBow_C_RunOnServer_InstantHit_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (Parm)
		struct FVector                                             StartLocation;                                           // 0x0088(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Direction;                                               // 0x0094(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.HoldReloadTimer
	 */
	struct AWeapTekBow_C_HoldReloadTimer_Params
	{	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.RunOnServer_SetAmmo
	 */
	struct AWeapTekBow_C_RunOnServer_SetAmmo_Params
	{
	public:
		int32_t                                                    AmmoIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.MultiCast_FiredFX
	 */
	struct AWeapTekBow_C_MultiCast_FiredFX_Params
	{
	public:
		struct FVector                                             EndLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bWasInstantHit;                                          // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.DelayedEnableInput
	 */
	struct AWeapTekBow_C_DelayedEnableInput_Params
	{	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.InitItemData
	 */
	struct AWeapTekBow_C_InitItemData_Params
	{	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.NotifyInputEvent_Event
	 */
	struct AWeapTekBow_C_NotifyInputEvent_Event_Params
	{
	public:
		class APrimalCharacter*                                    ForPrimalCharacter;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EPrimalCharacterInputType                                  inputType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.UnbindDelegates
	 */
	struct AWeapTekBow_C_UnbindDelegates_Params
	{	};

	/**
	 * Function WeapTekBow.WeapTekBow_C.ExecuteUbergraph_WeapTekBow
	 */
	struct AWeapTekBow_C_ExecuteUbergraph_WeapTekBow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
