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
	 * Function WeapMinigun.WeapMinigun_C.GetHudData
	 */
	struct AWeapMinigun_C_GetHudData_Params
	{
	public:
		class UTexture2D*                                          AmmoIcon;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    CurrentAmmoCount;                                        // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    AmmoPerClip;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsInTurretMode;                                          // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HideAmmoCountHUDElement;                                 // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GINT[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              AmmoItemTemplate;                                        // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.VerifyShotTimestamp
	 */
	struct AWeapMinigun_C_VerifyShotTimestamp_Params
	{	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.BPSpawnImpactEffects
	 */
	struct AWeapMinigun_C_BPSpawnImpactEffects_Params
	{
	public:
		struct FHitResult                                          Impact;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		struct FVector                                             ShootDir;                                                // 0x0088(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       bIsEntryHit;                                             // 0x0094(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VYA6[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      WeaponMaxRange;                                          // 0x0098(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.BPOnBurstStarted
	 */
	struct AWeapMinigun_C_BPOnBurstStarted_Params
	{	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.HasAnyAmmo
	 */
	struct AWeapMinigun_C_HasAnyAmmo_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L2R3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.UpdateSpinState
	 */
	struct AWeapMinigun_C_UpdateSpinState_Params
	{	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.BPOnStartTargeting
	 */
	struct AWeapMinigun_C_BPOnStartTargeting_Params
	{
	public:
		bool                                                       bFromGamepadLeft;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.UpdateItemData
	 */
	struct AWeapMinigun_C_UpdateItemData_Params
	{	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.OnAttachedToPawn
	 */
	struct AWeapMinigun_C_OnAttachedToPawn_Params
	{	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.CreateDynamicMats
	 */
	struct AWeapMinigun_C_CreateDynamicMats_Params
	{	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.UpdateMaterials
	 */
	struct AWeapMinigun_C_UpdateMaterials_Params
	{	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.AllowTargeting
	 */
	struct AWeapMinigun_C_AllowTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.AnimAllowsFire
	 */
	struct AWeapMinigun_C_AnimAllowsFire_Params
	{
	public:
		bool                                                       AllowsFire;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.BPAppliedPrimalItemToWeapon
	 */
	struct AWeapMinigun_C_BPAppliedPrimalItemToWeapon_Params
	{	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.BPAnimNotifyCustomEvent
	 */
	struct AWeapMinigun_C_BPAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.InitPlayerController
	 */
	struct AWeapMinigun_C_InitPlayerController_Params
	{	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.BPWeaponCanFire
	 */
	struct AWeapMinigun_C_BPWeaponCanFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.BPFiredWeapon
	 */
	struct AWeapMinigun_C_BPFiredWeapon_Params
	{	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.StartSecondaryActionEvent
	 */
	struct AWeapMinigun_C_StartSecondaryActionEvent_Params
	{	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.BPTryFireWeapon
	 */
	struct AWeapMinigun_C_BPTryFireWeapon_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3CDX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.BPOnBurstFinished
	 */
	struct AWeapMinigun_C_BPOnBurstFinished_Params
	{	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.BPGetCurrentSpread
	 */
	struct AWeapMinigun_C_BPGetCurrentSpread_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.UserConstructionScript
	 */
	struct AWeapMinigun_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.ReceiveTick
	 */
	struct AWeapMinigun_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.Tick_ApplyMovementRestrictions
	 */
	struct AWeapMinigun_C_Tick_ApplyMovementRestrictions_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.Tick_SetIsUpToSpeed
	 */
	struct AWeapMinigun_C_Tick_SetIsUpToSpeed_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.Server_SetIsAttemptingToFire
	 */
	struct AWeapMinigun_C_Server_SetIsAttemptingToFire_Params
	{
	public:
		bool                                                       newValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.TickOverheat
	 */
	struct AWeapMinigun_C_TickOverheat_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.ReceiveBeginPlay
	 */
	struct AWeapMinigun_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.ReceiveDestroyed
	 */
	struct AWeapMinigun_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.SecondaryAction
	 */
	struct AWeapMinigun_C_SecondaryAction_Params
	{	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.FinishReload
	 */
	struct AWeapMinigun_C_FinishReload_Params
	{	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.StartReload
	 */
	struct AWeapMinigun_C_StartReload_Params
	{	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.SetAnimIsFiring
	 */
	struct AWeapMinigun_C_SetAnimIsFiring_Params
	{	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.ClearAnimStates
	 */
	struct AWeapMinigun_C_ClearAnimStates_Params
	{	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.SetTPVFireAnim
	 */
	struct AWeapMinigun_C_SetTPVFireAnim_Params
	{	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.ForceReplicateSpinValue
	 */
	struct AWeapMinigun_C_ForceReplicateSpinValue_Params
	{	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.NetOnOverheated
	 */
	struct AWeapMinigun_C_NetOnOverheated_Params
	{
	public:
		bool                                                       Start;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.NetOnThrow
	 */
	struct AWeapMinigun_C_NetOnThrow_Params
	{	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.StartShellLoop
	 */
	struct AWeapMinigun_C_StartShellLoop_Params
	{	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.StopShellLoop
	 */
	struct AWeapMinigun_C_StopShellLoop_Params
	{	};

	/**
	 * Function WeapMinigun.WeapMinigun_C.ExecuteUbergraph_WeapMinigun
	 */
	struct AWeapMinigun_C_ExecuteUbergraph_WeapMinigun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
