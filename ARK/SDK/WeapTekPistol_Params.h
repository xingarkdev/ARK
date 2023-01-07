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
	 * Function WeapTekPistol.WeapTekPistol_C.ReceiveDestroyed
	 */
	struct AWeapTekPistol_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.UpdateBeamSounds
	 */
	struct AWeapTekPistol_C_UpdateBeamSounds_Params
	{	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.UpdateMaterials
	 */
	struct AWeapTekPistol_C_UpdateMaterials_Params
	{	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.CreateDynamicMats
	 */
	struct AWeapTekPistol_C_CreateDynamicMats_Params
	{	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.ApplyHelperBuff
	 */
	struct AWeapTekPistol_C_ApplyHelperBuff_Params
	{	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.BPKillImpactEffects
	 */
	struct AWeapTekPistol_C_BPKillImpactEffects_Params
	{	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.UpdateBeamEffect
	 */
	struct AWeapTekPistol_C_UpdateBeamEffect_Params
	{	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.BPFiredWeapon
	 */
	struct AWeapTekPistol_C_BPFiredWeapon_Params
	{	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.StartUnequipEvent
	 */
	struct AWeapTekPistol_C_StartUnequipEvent_Params
	{	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.BPStartEquippedNotify
	 */
	struct AWeapTekPistol_C_BPStartEquippedNotify_Params
	{	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.BPWeaponCanFire
	 */
	struct AWeapTekPistol_C_BPWeaponCanFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.Set Material Vector Parameter
	 */
	struct AWeapTekPistol_C_SetMaterialVectorParameter_Params
	{
	public:
		class USkeletalMeshComponent*                              SK;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                Parameter;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        Value;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.SetFireModeOnItem
	 */
	struct AWeapTekPistol_C_SetFireModeOnItem_Params
	{
	public:
		int32_t                                                    Mode;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.GetFireModeFromItem
	 */
	struct AWeapTekPistol_C_GetFireModeFromItem_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S7Z7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.BPAppliedPrimalItemToWeapon
	 */
	struct AWeapTekPistol_C_BPAppliedPrimalItemToWeapon_Params
	{	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.SelectBuff
	 */
	struct AWeapTekPistol_C_SelectBuff_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.BPGetCrosshairColor
	 */
	struct AWeapTekPistol_C_BPGetCrosshairColor_Params
	{
	public:
		struct FColor                                              ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.BPShouldDealDamage
	 */
	struct AWeapTekPistol_C_BPShouldDealDamage_Params
	{
	public:
		class AActor*                                              TestActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_09EC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.BPWeaponDealDamage
	 */
	struct AWeapTekPistol_C_BPWeaponDealDamage_Params
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
	 * Function WeapTekPistol.WeapTekPistol_C.ApplyBeamTarget
	 */
	struct AWeapTekPistol_C_ApplyBeamTarget_Params
	{	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.BPPostSpawnMuzzleEffect
	 */
	struct AWeapTekPistol_C_BPPostSpawnMuzzleEffect_Params
	{
	public:
		class UParticleSystemComponent*                            NewMuzzlePSC;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.GetFireModeData
	 */
	struct AWeapTekPistol_C_GetFireModeData_Params
	{
	public:
		struct FTekPistolFireMode_Beam                             Item;                                                    // 0x0000(0x00B0)  (Parm, OutParm)
	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.UpdateBeamTarget
	 */
	struct AWeapTekPistol_C_UpdateBeamTarget_Params
	{
	public:
		struct FVector                                             BeamTarget;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.ReceiveTick
	 */
	struct AWeapTekPistol_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.BPOnBurstFinished
	 */
	struct AWeapTekPistol_C_BPOnBurstFinished_Params
	{	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.BPOnBurstStarted
	 */
	struct AWeapTekPistol_C_BPOnBurstStarted_Params
	{	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.UpdateFireMode
	 */
	struct AWeapTekPistol_C_UpdateFireMode_Params
	{	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.StartSecondaryActionEvent
	 */
	struct AWeapTekPistol_C_StartSecondaryActionEvent_Params
	{	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.BPSpawnImpactEffects
	 */
	struct AWeapTekPistol_C_BPSpawnImpactEffects_Params
	{
	public:
		struct FHitResult                                          Impact;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		struct FVector                                             ShootDir;                                                // 0x0088(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       bIsEntryHit;                                             // 0x0094(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6C15[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      WeaponMaxRange;                                          // 0x0098(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.UserConstructionScript
	 */
	struct AWeapTekPistol_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.ServerSetFireMode
	 */
	struct AWeapTekPistol_C_ServerSetFireMode_Params
	{
	public:
		int32_t                                                    NewMode;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.ClientSetFireMode
	 */
	struct AWeapTekPistol_C_ClientSetFireMode_Params
	{
	public:
		int32_t                                                    NewMode;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.ClientBeamEffect
	 */
	struct AWeapTekPistol_C_ClientBeamEffect_Params
	{
	public:
		bool                                                       BeamOn;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.ServerSetBeamTarget
	 */
	struct AWeapTekPistol_C_ServerSetBeamTarget_Params
	{
	public:
		struct FVector                                             NewTarget;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.ClientSetBeamTarget
	 */
	struct AWeapTekPistol_C_ClientSetBeamTarget_Params
	{
	public:
		struct FVector                                             NewTarget;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.ClientNotifyHealingHit
	 */
	struct AWeapTekPistol_C_ClientNotifyHealingHit_Params
	{	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.PreventFireDuringModeSwitch
	 */
	struct AWeapTekPistol_C_PreventFireDuringModeSwitch_Params
	{	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.ClientUpdateFiringState
	 */
	struct AWeapTekPistol_C_ClientUpdateFiringState_Params
	{
	public:
		int32_t                                                    FireMode;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BeamOn;                                                  // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekPistol.WeapTekPistol_C.ExecuteUbergraph_WeapTekPistol
	 */
	struct AWeapTekPistol_C_ExecuteUbergraph_WeapTekPistol_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
