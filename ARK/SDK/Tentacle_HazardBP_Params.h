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
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_AdjustedAnimRate
	 */
	struct ATentacle_HazardBP_C_OnRep_AdjustedAnimRate_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.SpawnDeathVFX
	 */
	struct ATentacle_HazardBP_C_SpawnDeathVFX_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnAttackTentacleSpawned
	 */
	struct ATentacle_HazardBP_C_OnAttackTentacleSpawned_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetIsHurtAnimPlaying
	 */
	struct ATentacle_HazardBP_C_GetIsHurtAnimPlaying_Params
	{
	public:
		bool                                                       AnimIsPlaying;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B3LI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetCharToGrabFromTarget
	 */
	struct ATentacle_HazardBP_C_GetCharToGrabFromTarget_Params
	{
	public:
		class APrimalCharacter*                                    Char;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_AnimTypeIndex
	 */
	struct ATentacle_HazardBP_C_OnRep_AnimTypeIndex_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.UpdateTentaclesAnims
	 */
	struct ATentacle_HazardBP_C_UpdateTentaclesAnims_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.UpdateRetraction
	 */
	struct ATentacle_HazardBP_C_UpdateRetraction_Params
	{
	public:
		bool                                                       NewIsRetracted;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.ForceTargetChar
	 */
	struct ATentacle_HazardBP_C_ForceTargetChar_Params
	{
	public:
		class APrimalCharacter*                                    Char;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_bIsHalfRetracted
	 */
	struct ATentacle_HazardBP_C_OnRep_bIsHalfRetracted_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.UpdateRetractedCollision
	 */
	struct ATentacle_HazardBP_C_UpdateRetractedCollision_Params
	{
	public:
		bool                                                       IsRetracted;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KX79[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.ReleaseGrabbedChar
	 */
	struct ATentacle_HazardBP_C_ReleaseGrabbedChar_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.CanTargetValidActor
	 */
	struct ATentacle_HazardBP_C_CanTargetValidActor_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsValid;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1WBW[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPDied
	 */
	struct ATentacle_HazardBP_C_BPDied_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FWU2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class AController*                                         Killer;                                                  // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.SpawnTentacleFromAttack
	 */
	struct ATentacle_HazardBP_C_SpawnTentacleFromAttack_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.SpawnedTentacleTimedDeath
	 */
	struct ATentacle_HazardBP_C_SpawnedTentacleTimedDeath_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetIsInOutAnimPlaying
	 */
	struct ATentacle_HazardBP_C_GetIsInOutAnimPlaying_Params
	{
	public:
		bool                                                       AnimIsPlaying;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4QLA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_bIsUnderground
	 */
	struct ATentacle_HazardBP_C_OnRep_bIsUnderground_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetEffectiveRot
	 */
	struct ATentacle_HazardBP_C_SetEffectiveRot_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetServerTargetRot
	 */
	struct ATentacle_HazardBP_C_SetServerTargetRot_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.RandomizeAnimVars
	 */
	struct ATentacle_HazardBP_C_RandomizeAnimVars_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetCanGrabTarget
	 */
	struct ATentacle_HazardBP_C_GetCanGrabTarget_Params
	{
	public:
		class APrimalCharacter*                                    Char;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanGrab;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NDZK[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.ShouldApplyKBToChar
	 */
	struct ATentacle_HazardBP_C_ShouldApplyKBToChar_Params
	{
	public:
		class APrimalCharacter*                                    Char;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShouldApply;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetAttackCDVariance
	 */
	struct ATentacle_HazardBP_C_SetAttackCDVariance_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetIsAttackAnimPlaying
	 */
	struct ATentacle_HazardBP_C_GetIsAttackAnimPlaying_Params
	{
	public:
		bool                                                       AnimIsPlaying;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.RandomizeTentacleScale
	 */
	struct ATentacle_HazardBP_C_RandomizeTentacleScale_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnRep_AdjustedServerScale
	 */
	struct ATentacle_HazardBP_C_OnRep_AdjustedServerScale_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.ResizeTentacle
	 */
	struct ATentacle_HazardBP_C_ResizeTentacle_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.ManualOverlapCheck
	 */
	struct ATentacle_HazardBP_C_ManualOverlapCheck_Params
	{
	public:
		bool                                                       FoundTarget;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.find or create dynamic materials
	 */
	struct ATentacle_HazardBP_C_findorcreatedynamicmaterials_Params
	{
	public:
		TArray<class UMaterialInstanceDynamic*>                    dynamicmaterials;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.Find Valid Spawn Location
	 */
	struct ATentacle_HazardBP_C_FindValidSpawnLocation_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FVector>                                     OutLocations;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.Ranged Attack target
	 */
	struct ATentacle_HazardBP_C_RangedAttacktarget_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPGetAggroDinoOnDamageSettings
	 */
	struct ATentacle_HazardBP_C_BPGetAggroDinoOnDamageSettings_Params
	{
	public:
		TArray<class FName>                                        AggroDinoClassesCustomTags;                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		float                                                      AggroDinoClassesRange;                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.attackTarget
	 */
	struct ATentacle_HazardBP_C_attackTarget_Params
	{
	public:
		class APrimalCharacter*                                    attackTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.EffectiveRotation
	 */
	struct ATentacle_HazardBP_C_EffectiveRotation_Params
	{
	public:
		struct FRotator                                            ActualRotation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MSJU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.GetTargetAimAtLocation
	 */
	struct ATentacle_HazardBP_C_GetTargetAimAtLocation_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             TargetLocation;                                          // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetIsDead
	 */
	struct ATentacle_HazardBP_C_SetIsDead_Params
	{
	public:
		bool                                                       bNewIsDead;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.CanRevive
	 */
	struct ATentacle_HazardBP_C_CanRevive_Params
	{
	public:
		bool                                                       bCanRevive;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MJJP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPUpdatedHealth
	 */
	struct ATentacle_HazardBP_C_BPUpdatedHealth_Params
	{
	public:
		bool                                                       bDoReplication;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E6MC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPAdjustDamage
	 */
	struct ATentacle_HazardBP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SGJJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A674[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPImpactEffect
	 */
	struct ATentacle_HazardBP_C_BPImpactEffect_Params
	{
	public:
		struct FHitResult                                          HitRes;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		struct FVector                                             ShootDirection;                                          // 0x0088(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0094(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MITH[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPReleasedPlayer
	 */
	struct ATentacle_HazardBP_C_BPReleasedPlayer_Params
	{
	public:
		class AShooterCharacter*                                   ReleasedChar;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    AtSeatNumber;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPPreventReleaseSeatingStructure
	 */
	struct ATentacle_HazardBP_C_BPPreventReleaseSeatingStructure_Params
	{
	public:
		class AShooterCharacter*                                   ForSitter;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPSeatedPlayer
	 */
	struct ATentacle_HazardBP_C_BPSeatedPlayer_Params
	{
	public:
		class AShooterCharacter*                                   SeatedChar;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    AtSeatNumber;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.CanAttack
	 */
	struct ATentacle_HazardBP_C_CanAttack_Params
	{
	public:
		bool                                                       bCanAttack;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ATentacle_HazardBP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.IsActorValidTarget
	 */
	struct ATentacle_HazardBP_C_IsActorValidTarget_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCanTarget;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8808[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.FindBestTarget
	 */
	struct ATentacle_HazardBP_C_FindBestTarget_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPTriggerStasisEvent
	 */
	struct ATentacle_HazardBP_C_BPTriggerStasisEvent_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.UpdateDediMesh
	 */
	struct ATentacle_HazardBP_C_UpdateDediMesh_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetSleeping
	 */
	struct ATentacle_HazardBP_C_SetSleeping_Params
	{
	public:
		bool                                                       IsSleeping;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.BPUnstasis
	 */
	struct ATentacle_HazardBP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.UserConstructionScript
	 */
	struct ATentacle_HazardBP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.Timeline_Dissolve__FinishedFunc
	 */
	struct ATentacle_HazardBP_C_Timeline_Dissolve__FinishedFunc_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.Timeline_Dissolve__UpdateFunc
	 */
	struct ATentacle_HazardBP_C_Timeline_Dissolve__UpdateFunc_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.ReceiveBeginPlay
	 */
	struct ATentacle_HazardBP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_324_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ATentacle_HazardBP_C_BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_324_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromSweep;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0V5W[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0018(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.ServerTick
	 */
	struct ATentacle_HazardBP_C_ServerTick_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.StartTimers
	 */
	struct ATentacle_HazardBP_C_StartTimers_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_DoAttack
	 */
	struct ATentacle_HazardBP_C_Multi_DoAttack_Params
	{
	public:
		class UAnimMontage*                                        SelectedAttack;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.DoAttack
	 */
	struct ATentacle_HazardBP_C_DoAttack_Params
	{
	public:
		class UAnimMontage*                                        SelectedAttack;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.PlayAnimMontage
	 */
	struct ATentacle_HazardBP_C_PlayAnimMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      PlayRate;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BlendIn;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BlendOut;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.PlayAnimMontage_Multi
	 */
	struct ATentacle_HazardBP_C_PlayAnimMontage_Multi_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      PlayRate;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BlendIn;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BlendOut;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.Server_StartDying
	 */
	struct ATentacle_HazardBP_C_Server_StartDying_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_StartDying
	 */
	struct ATentacle_HazardBP_C_Multi_StartDying_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.EventNextTick
	 */
	struct ATentacle_HazardBP_C_EventNextTick_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.CheckRevive
	 */
	struct ATentacle_HazardBP_C_CheckRevive_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_Revive
	 */
	struct ATentacle_HazardBP_C_Multi_Revive_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_96_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ATentacle_HazardBP_C_BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_96_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.DoRangedAttack
	 */
	struct ATentacle_HazardBP_C_DoRangedAttack_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_RangedAttack
	 */
	struct ATentacle_HazardBP_C_Multi_RangedAttack_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_DeleteActor
	 */
	struct ATentacle_HazardBP_C_Multi_DeleteActor_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.SpawnTentacleAttack
	 */
	struct ATentacle_HazardBP_C_SpawnTentacleAttack_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.Multi_RangeAttackMuzzleFXEmitter
	 */
	struct ATentacle_HazardBP_C_Multi_RangeAttackMuzzleFXEmitter_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.MultiMaterialChange
	 */
	struct ATentacle_HazardBP_C_MultiMaterialChange_Params
	{
	public:
		class UPrimitiveComponent*                                 MaterialToChange;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.StopDissolve
	 */
	struct ATentacle_HazardBP_C_StopDissolve_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.ClearDissolve
	 */
	struct ATentacle_HazardBP_C_ClearDissolve_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.FullDissolve
	 */
	struct ATentacle_HazardBP_C_FullDissolve_Params
	{	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.StopMontage_Multi
	 */
	struct ATentacle_HazardBP_C_StopMontage_Multi_Params
	{
	public:
		class UAnimMontage*                                        MontageToStop;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BlendOutTime;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.DelayForceTargetChar
	 */
	struct ATentacle_HazardBP_C_DelayForceTargetChar_Params
	{
	public:
		class APrimalCharacter*                                    Char;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Delay;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.SetRetractionWithDelay
	 */
	struct ATentacle_HazardBP_C_SetRetractionWithDelay_Params
	{
	public:
		bool                                                       NewIsRetracted;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BVLD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Delay;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.ExecuteUbergraph_Tentacle_HazardBP
	 */
	struct ATentacle_HazardBP_C_ExecuteUbergraph_Tentacle_HazardBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tentacle_HazardBP.Tentacle_HazardBP_C.OnTentacleDied__DelegateSignature
	 */
	struct ATentacle_HazardBP_C_OnTentacleDied__DelegateSignature_Params
	{
	public:
		class APrimalStructure*                                    ForTentacle;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
