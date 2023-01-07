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
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.CanAttachToExosuit
	 */
	struct AStorageBox_TekShield_C_CanAttachToExosuit_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.CanBeStoredByExosuit
	 */
	struct AStorageBox_TekShield_C_CanBeStoredByExosuit_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.CheckCharactersInsideWhenActive
	 */
	struct AStorageBox_TekShield_C_CheckCharactersInsideWhenActive_Params
	{	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.ReceiveBeginPlay
	 */
	struct AStorageBox_TekShield_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.CheckChargeEffect
	 */
	struct AStorageBox_TekShield_C_CheckChargeEffect_Params
	{	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.OnRep_PowerUpCompletionTime
	 */
	struct AStorageBox_TekShield_C_OnRep_PowerUpCompletionTime_Params
	{	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.BPClientDoMultiUse
	 */
	struct AStorageBox_TekShield_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.BlueprintDrawHUD
	 */
	struct AStorageBox_TekShield_C_BlueprintDrawHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.BPImpactEffect
	 */
	struct AStorageBox_TekShield_C_BPImpactEffect_Params
	{
	public:
		struct FHitResult                                          HitRes;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		struct FVector                                             ShootDirection;                                          // 0x0088(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0094(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FQMN[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.BPHitEffect
	 */
	struct AStorageBox_TekShield_C_BPHitEffect_Params
	{
	public:
		float                                                      DamageTaken;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZDRT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class APawn*                                               PawnInstigator;                                          // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLocalPath;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F88O[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             DamageLoc;                                               // 0x0048(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            HitNormal;                                               // 0x0054(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.BPSupressImpactEffects
	 */
	struct AStorageBox_TekShield_C_BPSupressImpactEffects_Params
	{
	public:
		float                                                      DamageTaken;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7I25[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class APawn*                                               PawnInstigator;                                          // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLocalPath;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UWHF[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.BPRefreshedStructureColors
	 */
	struct AStorageBox_TekShield_C_BPRefreshedStructureColors_Params
	{	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.AllowIgnoreCharacterEncroachment
	 */
	struct AStorageBox_TekShield_C_AllowIgnoreCharacterEncroachment_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              EncroachingCharacter;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DC1C[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.BPGetFuelConsumptionMultiplier
	 */
	struct AStorageBox_TekShield_C_BPGetFuelConsumptionMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.BPCanBeActivatedByPlayer
	 */
	struct AStorageBox_TekShield_C_BPCanBeActivatedByPlayer_Params
	{
	public:
		class AShooterPlayerController*                            PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.BPOverrideAllowStructureAccess
	 */
	struct AStorageBox_TekShield_C_BPOverrideAllowStructureAccess_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsAccessAllowed;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForInventoryOnly;                                       // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GXJA[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.GetDesiredRadiusMultiplier
	 */
	struct AStorageBox_TekShield_C_GetDesiredRadiusMultiplier_Params
	{
	public:
		int32_t                                                    IncrementAmount;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OutRadiusMultiplier;                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.BPTryMultiUse
	 */
	struct AStorageBox_TekShield_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.BPGetMultiUseEntries
	 */
	struct AStorageBox_TekShield_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.CheckForExtraIgnorePawnPushers
	 */
	struct AStorageBox_TekShield_C_CheckForExtraIgnorePawnPushers_Params
	{	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.BPPostInitializeComponents
	 */
	struct AStorageBox_TekShield_C_BPPostInitializeComponents_Params
	{	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.BPPostSetStructureCollisionChannels
	 */
	struct AStorageBox_TekShield_C_BPPostSetStructureCollisionChannels_Params
	{	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.SetShieldActive
	 */
	struct AStorageBox_TekShield_C_SetShieldActive_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.BPContainerDeactivated
	 */
	struct AStorageBox_TekShield_C_BPContainerDeactivated_Params
	{	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.BPContainerActivated
	 */
	struct AStorageBox_TekShield_C_BPContainerActivated_Params
	{	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.IsPushablePawn
	 */
	struct AStorageBox_TekShield_C_IsPushablePawn_Params
	{
	public:
		class APrimalCharacter*                                    PawnToPush;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsPushable;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9QX1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.DoPawnPushing
	 */
	struct AStorageBox_TekShield_C_DoPawnPushing_Params
	{	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.UserConstructionScript
	 */
	struct AStorageBox_TekShield_C_UserConstructionScript_Params
	{	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.BndEvt__SpherePawnPusher_K2Node_ComponentBoundEvent_156_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AStorageBox_TekShield_C_BndEvt__SpherePawnPusher_K2Node_ComponentBoundEvent_156_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromSweep;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NFZU[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0018(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.CheckForPawnPushing
	 */
	struct AStorageBox_TekShield_C_CheckForPawnPushing_Params
	{	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.BndEvt__SpherePawnPusher_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct AStorageBox_TekShield_C_BndEvt__SpherePawnPusher_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.NetRefreshRadiusScale
	 */
	struct AStorageBox_TekShield_C_NetRefreshRadiusScale_Params
	{
	public:
		int32_t                                                    NewUserRadiusValue;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.UpdateShieldInterp
	 */
	struct AStorageBox_TekShield_C_UpdateShieldInterp_Params
	{	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.UpdateShieldOpacity
	 */
	struct AStorageBox_TekShield_C_UpdateShieldOpacity_Params
	{	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.FinishPowerUp
	 */
	struct AStorageBox_TekShield_C_FinishPowerUp_Params
	{	};

	/**
	 * Function StorageBox_TekShield.StorageBox_TekShield_C.ExecuteUbergraph_StorageBox_TekShield
	 */
	struct AStorageBox_TekShield_C_ExecuteUbergraph_StorageBox_TekShield_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
