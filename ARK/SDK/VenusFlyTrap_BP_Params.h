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
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.OnRep_bToggleUnstasis
	 */
	struct AVenusFlyTrap_BP_C_OnRep_bToggleUnstasis_Params
	{	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPPreventCharacterBasing
	 */
	struct AVenusFlyTrap_BP_C_BPPreventCharacterBasing_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 BasedOnComponent;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ValidLOSTarget
	 */
	struct AVenusFlyTrap_BP_C_ValidLOSTarget_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       retValid;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VQQX[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.get anim index
	 */
	struct AVenusFlyTrap_BP_C_getanimindex_Params
	{
	public:
		int32_t                                                    AnimIndex;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Can Target WakeSelf
	 */
	struct AVenusFlyTrap_BP_C_CanTargetWakeSelf_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bValidTarget;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V8MI[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPHitEffect
	 */
	struct AVenusFlyTrap_BP_C_BPHitEffect_Params
	{
	public:
		float                                                      DamageTaken;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3C4K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class APawn*                                               PawnInstigator;                                          // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLocalPath;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O7W3[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             DamageLoc;                                               // 0x0048(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            HitNormal;                                               // 0x0054(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.EffectiveRotation
	 */
	struct AVenusFlyTrap_BP_C_EffectiveRotation_Params
	{
	public:
		struct FRotator                                            ActualRotation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.GetTargetAimAtLocation
	 */
	struct AVenusFlyTrap_BP_C_GetTargetAimAtLocation_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             TargetLocation;                                          // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.GetAimOffsets
	 */
	struct AVenusFlyTrap_BP_C_GetAimOffsets_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      YawSpeed;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rot;                                                     // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SetIsDead
	 */
	struct AVenusFlyTrap_BP_C_SetIsDead_Params
	{
	public:
		bool                                                       bNewIsDead;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromDamage;                                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.CanRevive
	 */
	struct AVenusFlyTrap_BP_C_CanRevive_Params
	{
	public:
		bool                                                       bCanRevive;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LRYU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPUpdatedHealth
	 */
	struct AVenusFlyTrap_BP_C_BPUpdatedHealth_Params
	{
	public:
		bool                                                       bDoReplication;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SEIY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPAdjustDamage
	 */
	struct AVenusFlyTrap_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FIJK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QG67[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPImpactEffect
	 */
	struct AVenusFlyTrap_BP_C_BPImpactEffect_Params
	{
	public:
		struct FHitResult                                          HitRes;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		struct FVector                                             ShootDirection;                                          // 0x0088(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0094(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NLB3[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPReleasedPlayer
	 */
	struct AVenusFlyTrap_BP_C_BPReleasedPlayer_Params
	{
	public:
		class AShooterCharacter*                                   ReleasedChar;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    AtSeatNumber;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPPreventReleaseSeatingStructure
	 */
	struct AVenusFlyTrap_BP_C_BPPreventReleaseSeatingStructure_Params
	{
	public:
		class AShooterCharacter*                                   ForSitter;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPSeatedPlayer
	 */
	struct AVenusFlyTrap_BP_C_BPSeatedPlayer_Params
	{
	public:
		class AShooterCharacter*                                   SeatedChar;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    AtSeatNumber;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.CanAttack
	 */
	struct AVenusFlyTrap_BP_C_CanAttack_Params
	{
	public:
		bool                                                       bCanAttack;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.CanRotate
	 */
	struct AVenusFlyTrap_BP_C_CanRotate_Params
	{
	public:
		bool                                                       bCanRotate;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct AVenusFlyTrap_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.IsActorValidTarget
	 */
	struct AVenusFlyTrap_BP_C_IsActorValidTarget_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsValid;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.FindBestTarget
	 */
	struct AVenusFlyTrap_BP_C_FindBestTarget_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPTriggerStasisEvent
	 */
	struct AVenusFlyTrap_BP_C_BPTriggerStasisEvent_Params
	{	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.OnSleep
	 */
	struct AVenusFlyTrap_BP_C_OnSleep_Params
	{
	public:
		bool                                                       bIsSleeping;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromBeginPlay;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8X2N[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SetSleeping
	 */
	struct AVenusFlyTrap_BP_C_SetSleeping_Params
	{
	public:
		bool                                                       bIsSleeping;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPUnstasis
	 */
	struct AVenusFlyTrap_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BPHandleStructureEnabled
	 */
	struct AVenusFlyTrap_BP_C_BPHandleStructureEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.UserConstructionScript
	 */
	struct AVenusFlyTrap_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Timeline_Dissolve__FinishedFunc
	 */
	struct AVenusFlyTrap_BP_C_Timeline_Dissolve__FinishedFunc_Params
	{	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Timeline_Dissolve__UpdateFunc
	 */
	struct AVenusFlyTrap_BP_C_Timeline_Dissolve__UpdateFunc_Params
	{	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ReceiveBeginPlay
	 */
	struct AVenusFlyTrap_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_324_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AVenusFlyTrap_BP_C_BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_324_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromSweep;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QBBG[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0018(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Multi_SetSleeping
	 */
	struct AVenusFlyTrap_BP_C_Multi_SetSleeping_Params
	{
	public:
		bool                                                       bNewSleepingState;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ClientTick
	 */
	struct AVenusFlyTrap_BP_C_ClientTick_Params
	{	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ServerTick
	 */
	struct AVenusFlyTrap_BP_C_ServerTick_Params
	{	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.StartTimers
	 */
	struct AVenusFlyTrap_BP_C_StartTimers_Params
	{	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Multi_DoAttack
	 */
	struct AVenusFlyTrap_BP_C_Multi_DoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.DoAttack
	 */
	struct AVenusFlyTrap_BP_C_DoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.PlayAnimMontage
	 */
	struct AVenusFlyTrap_BP_C_PlayAnimMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      PlayRate;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SwallowDino
	 */
	struct AVenusFlyTrap_BP_C_SwallowDino_Params
	{
	public:
		class APrimalDinoCharacter*                                PrimalDino;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.PlayFlinch
	 */
	struct AVenusFlyTrap_BP_C_PlayFlinch_Params
	{	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.PlayAnimMontage_Multi
	 */
	struct AVenusFlyTrap_BP_C_PlayAnimMontage_Multi_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      PlayRate;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Server_StartDying
	 */
	struct AVenusFlyTrap_BP_C_Server_StartDying_Params
	{	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Multi_StartDying
	 */
	struct AVenusFlyTrap_BP_C_Multi_StartDying_Params
	{	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.EventNextTick
	 */
	struct AVenusFlyTrap_BP_C_EventNextTick_Params
	{	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SleepCheckTick
	 */
	struct AVenusFlyTrap_BP_C_SleepCheckTick_Params
	{	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.PlayFailedGrab
	 */
	struct AVenusFlyTrap_BP_C_PlayFailedGrab_Params
	{	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SeatCharacter
	 */
	struct AVenusFlyTrap_BP_C_SeatCharacter_Params
	{	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.SeatNextTick
	 */
	struct AVenusFlyTrap_BP_C_SeatNextTick_Params
	{	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.Multi_SwallowParticle
	 */
	struct AVenusFlyTrap_BP_C_Multi_SwallowParticle_Params
	{	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.LateDismountCatch
	 */
	struct AVenusFlyTrap_BP_C_LateDismountCatch_Params
	{	};

	/**
	 * Function VenusFlyTrap_BP.VenusFlyTrap_BP_C.ExecuteUbergraph_VenusFlyTrap_BP
	 */
	struct AVenusFlyTrap_BP_C_ExecuteUbergraph_VenusFlyTrap_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
