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
	 * Function WeapScoutRemote.WeapScoutRemote_C.BPGetDebugInfoString
	 */
	struct AWeapScoutRemote_C_BPGetDebugInfoString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.AllowTargeting
	 */
	struct AWeapScoutRemote_C_AllowTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.BPGetTargetingTooltipInfoLabel
	 */
	struct AWeapScoutRemote_C_BPGetTargetingTooltipInfoLabel_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.BPGetProjectileSpeed
	 */
	struct AWeapScoutRemote_C_BPGetProjectileSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.OnRep_GogglesMode
	 */
	struct AWeapScoutRemote_C_OnRep_GogglesMode_Params
	{	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.OnRep_FiredScout
	 */
	struct AWeapScoutRemote_C_OnRep_FiredScout_Params
	{	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.BPOverrideFPVMasterPoseComponent
	 */
	struct AWeapScoutRemote_C_BPOverrideFPVMasterPoseComponent_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.BPPreventSwitchingWeapon
	 */
	struct AWeapScoutRemote_C_BPPreventSwitchingWeapon_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.Setup Goggle Anim Instance Class 
	 */
	struct AWeapScoutRemote_C_SetupGoggleAnimInstanceClass_Params
	{	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.Get Relevant GoggleAnim Instance Class
	 */
	struct AWeapScoutRemote_C_GetRelevantGoggleAnimInstanceClass_Params
	{
	public:
		class UClass*                                              ClassRef;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.Get RelevantGrenade Anim Instance Class
	 */
	struct AWeapScoutRemote_C_GetRelevantGrenadeAnimInstanceClass_Params
	{
	public:
		class UClass*                                              ClassRef;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.Setup Grenade Anim Instance Class
	 */
	struct AWeapScoutRemote_C_SetupGrenadeAnimInstanceClass_Params
	{	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.BPIsValidUnStasisCaster
	 */
	struct AWeapScoutRemote_C_BPIsValidUnStasisCaster_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.BPOnStopTargeting
	 */
	struct AWeapScoutRemote_C_BPOnStopTargeting_Params
	{
	public:
		bool                                                       bFromGamepadLeft;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.ReceiveTick
	 */
	struct AWeapScoutRemote_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZMRE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.ScoutDespawned
	 */
	struct AWeapScoutRemote_C_ScoutDespawned_Params
	{	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.Show
	 */
	struct AWeapScoutRemote_C_Show_Params
	{
	public:
		class USceneComponent*                                     SceneComp;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.Hide
	 */
	struct AWeapScoutRemote_C_Hide_Params
	{
	public:
		class USceneComponent*                                     SceneComp;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.ScoutGrenadeReturned
	 */
	struct AWeapScoutRemote_C_ScoutGrenadeReturned_Params
	{	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.BPFiredWeapon
	 */
	struct AWeapScoutRemote_C_BPFiredWeapon_Params
	{	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.BPTryFireWeapon
	 */
	struct AWeapScoutRemote_C_BPTryFireWeapon_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.AllowUnequip
	 */
	struct AWeapScoutRemote_C_AllowUnequip_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.BPAnimNotifyCustomEvent
	 */
	struct AWeapScoutRemote_C_BPAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.ReceiveEndPlay
	 */
	struct AWeapScoutRemote_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.BPStartEquippedNotify
	 */
	struct AWeapScoutRemote_C_BPStartEquippedNotify_Params
	{	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.ReceiveBeginPlay
	 */
	struct AWeapScoutRemote_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.Scout Launched
	 */
	struct AWeapScoutRemote_C_ScoutLaunched_Params
	{
	public:
		class AScout_Character_BP_C*                               Scout;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.BPGetActorForTargetingTooltip
	 */
	struct AWeapScoutRemote_C_BPGetActorForTargetingTooltip_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.BPWeaponCanFire
	 */
	struct AWeapScoutRemote_C_BPWeaponCanFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VKLN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.UserConstructionScript
	 */
	struct AWeapScoutRemote_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.MULTI_ScoutLaunched
	 */
	struct AWeapScoutRemote_C_MULTI_ScoutLaunched_Params
	{	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.MULTI_ReleasedPossessingSurvivor
	 */
	struct AWeapScoutRemote_C_MULTI_ReleasedPossessingSurvivor_Params
	{	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.OWNINGCLIENT_ScoutPossessedBySurvivor
	 */
	struct AWeapScoutRemote_C_OWNINGCLIENT_ScoutPossessedBySurvivor_Params
	{	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.OWNINGCLIENT_OnEquipNoScout
	 */
	struct AWeapScoutRemote_C_OWNINGCLIENT_OnEquipNoScout_Params
	{	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.MULTI_OnEquipScoutActive
	 */
	struct AWeapScoutRemote_C_MULTI_OnEquipScoutActive_Params
	{	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.MULTI_ScoutGrenadeReturnedEvent
	 */
	struct AWeapScoutRemote_C_MULTI_ScoutGrenadeReturnedEvent_Params
	{	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.MULTI_FiredWeapon
	 */
	struct AWeapScoutRemote_C_MULTI_FiredWeapon_Params
	{	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.MULTI_ScoutDespawned
	 */
	struct AWeapScoutRemote_C_MULTI_ScoutDespawned_Params
	{	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.SERVER_RecallScout
	 */
	struct AWeapScoutRemote_C_SERVER_RecallScout_Params
	{	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.Initialize
	 */
	struct AWeapScoutRemote_C_Initialize_Params
	{	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.SERVER_ReleasedPossessingSurvivor
	 */
	struct AWeapScoutRemote_C_SERVER_ReleasedPossessingSurvivor_Params
	{	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.SERVER_DoHandleFiring
	 */
	struct AWeapScoutRemote_C_SERVER_DoHandleFiring_Params
	{	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.UpdateTooltipInfoText
	 */
	struct AWeapScoutRemote_C_UpdateTooltipInfoText_Params
	{
	public:
		class AShooterCharacter*                                   Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.ExpireTooltipInfoText
	 */
	struct AWeapScoutRemote_C_ExpireTooltipInfoText_Params
	{	};

	/**
	 * Function WeapScoutRemote.WeapScoutRemote_C.ExecuteUbergraph_WeapScoutRemote
	 */
	struct AWeapScoutRemote_C_ExecuteUbergraph_WeapScoutRemote_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
