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
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.GetStructureChainStarts
	 */
	struct AStorageBox_TekGenerator_C_GetStructureChainStarts_Params
	{
	public:
		TArray<class APrimalStructure*>                            AllStructures;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class APrimalStructure*>                            OutStartStructures;                                      // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.ReceiveDestroyed
	 */
	struct AStorageBox_TekGenerator_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.PowerGeneratorBuiltNearbyPoweredStructure
	 */
	struct AStorageBox_TekGenerator_C_PowerGeneratorBuiltNearbyPoweredStructure_Params
	{
	public:
		class APrimalStructureItemContainer*                       PoweredStructure;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPChangedActorTeam
	 */
	struct AStorageBox_TekGenerator_C_BPChangedActorTeam_Params
	{	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.RefreshPoweredStructures
	 */
	struct AStorageBox_TekGenerator_C_RefreshPoweredStructures_Params
	{	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.ReceiveBeginPlay
	 */
	struct AStorageBox_TekGenerator_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.CheckChargeEffect
	 */
	struct AStorageBox_TekGenerator_C_CheckChargeEffect_Params
	{	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.OnRep_PowerUpCompletionTime
	 */
	struct AStorageBox_TekGenerator_C_OnRep_PowerUpCompletionTime_Params
	{	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPClientDoMultiUse
	 */
	struct AStorageBox_TekGenerator_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BlueprintDrawHUD
	 */
	struct AStorageBox_TekGenerator_C_BlueprintDrawHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPRefreshedStructureColors
	 */
	struct AStorageBox_TekGenerator_C_BPRefreshedStructureColors_Params
	{	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPGetFuelConsumptionMultiplier
	 */
	struct AStorageBox_TekGenerator_C_BPGetFuelConsumptionMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPCanBeActivatedByPlayer
	 */
	struct AStorageBox_TekGenerator_C_BPCanBeActivatedByPlayer_Params
	{
	public:
		class AShooterPlayerController*                            PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPOverrideAllowStructureAccess
	 */
	struct AStorageBox_TekGenerator_C_BPOverrideAllowStructureAccess_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsAccessAllowed;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForInventoryOnly;                                       // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.GetDesiredRadiusMultiplier
	 */
	struct AStorageBox_TekGenerator_C_GetDesiredRadiusMultiplier_Params
	{
	public:
		int32_t                                                    IncrementAmount;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OutRadiusMultiplier;                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPTryMultiUse
	 */
	struct AStorageBox_TekGenerator_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPGetMultiUseEntries
	 */
	struct AStorageBox_TekGenerator_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPPostInitializeComponents
	 */
	struct AStorageBox_TekGenerator_C_BPPostInitializeComponents_Params
	{	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPPostSetStructureCollisionChannels
	 */
	struct AStorageBox_TekGenerator_C_BPPostSetStructureCollisionChannels_Params
	{	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.SetShieldActive
	 */
	struct AStorageBox_TekGenerator_C_SetShieldActive_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPContainerDeactivated
	 */
	struct AStorageBox_TekGenerator_C_BPContainerDeactivated_Params
	{	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPContainerActivated
	 */
	struct AStorageBox_TekGenerator_C_BPContainerActivated_Params
	{	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.UserConstructionScript
	 */
	struct AStorageBox_TekGenerator_C_UserConstructionScript_Params
	{	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.NetRefreshRadiusScale
	 */
	struct AStorageBox_TekGenerator_C_NetRefreshRadiusScale_Params
	{
	public:
		int32_t                                                    NewUserRadiusValue;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.UpdateShieldInterp
	 */
	struct AStorageBox_TekGenerator_C_UpdateShieldInterp_Params
	{	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.UpdateShieldOpacity
	 */
	struct AStorageBox_TekGenerator_C_UpdateShieldOpacity_Params
	{	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.FinishPowerUp
	 */
	struct AStorageBox_TekGenerator_C_FinishPowerUp_Params
	{	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.DoRefreshPoweredStructures
	 */
	struct AStorageBox_TekGenerator_C_DoRefreshPoweredStructures_Params
	{	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.NetSetForceDisplayRadius
	 */
	struct AStorageBox_TekGenerator_C_NetSetForceDisplayRadius_Params
	{
	public:
		bool                                                       newForceDisplayRadius;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.DoNetPulseRadius
	 */
	struct AStorageBox_TekGenerator_C_DoNetPulseRadius_Params
	{	};

	/**
	 * Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.ExecuteUbergraph_StorageBox_TekGenerator
	 */
	struct AStorageBox_TekGenerator_C_ExecuteUbergraph_StorageBox_TekGenerator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
