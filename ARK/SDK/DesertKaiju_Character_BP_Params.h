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
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.HaveLineOfSightTo
	 */
	struct ADesertKaiju_Character_BP_C_HaveLineOfSightTo_Params
	{
	public:
		class AActor*                                              LosCheckTarget;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPOnDinoCheat
	 */
	struct ADesertKaiju_Character_BP_C_BPOnDinoCheat_Params
	{
	public:
		class FName                                                CheatName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSetValue;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QBXA[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPPreventRiding
	 */
	struct ADesertKaiju_Character_BP_C_BPPreventRiding_Params
	{
	public:
		class AShooterCharacter*                                   ByPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDontCheckDistance;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetDebugInfoString
	 */
	struct ADesertKaiju_Character_BP_C_BPGetDebugInfoString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPDinoARKDownloadedBegin
	 */
	struct ADesertKaiju_Character_BP_C_BPDinoARKDownloadedBegin_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPCanBaseOnCharacter
	 */
	struct ADesertKaiju_Character_BP_C_BPCanBaseOnCharacter_Params
	{
	public:
		class APrimalCharacter*                                    BaseCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ActorIsKaiju
	 */
	struct ADesertKaiju_Character_BP_C_ActorIsKaiju_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Return;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPDinoARKDownloadedEnd
	 */
	struct ADesertKaiju_Character_BP_C_BPDinoARKDownloadedEnd_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.OnRep_UseTamedPhysics
	 */
	struct ADesertKaiju_Character_BP_C_OnRep_UseTamedPhysics_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPOverrideDamageCauserHitMarker
	 */
	struct ADesertKaiju_Character_BP_C_BPOverrideDamageCauserHitMarker_Params
	{
	public:
		class AShooterPlayerController*                            DamageCauserController;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bHitFriendlyTarget;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YBKY[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      PreDamageHealth;                                         // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DamageAmount;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U5TZ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0018(0x0020)  (Parm, OutParm, ReferenceParm)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R7CL[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointDamageHitResult;                                    // 0x0040(0x0088)  (Parm, OutParm, ReferenceParm)
		struct FHitMarkerSettings                                  ReturnValue;                                             // 0x00C8(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.InterpSpawnInMICs
	 */
	struct ADesertKaiju_Character_BP_C_InterpSpawnInMICs_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.PreventLocomotion_1
	 */
	struct ADesertKaiju_Character_BP_C_PreventLocomotion_1_Params
	{
	public:
		bool                                                       Prevent;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.MaybeStunDesertKaiju
	 */
	struct ADesertKaiju_Character_BP_C_MaybeStunDesertKaiju_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.StunKaiju
	 */
	struct ADesertKaiju_Character_BP_C_StunKaiju_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetRiderUnboardLocation
	 */
	struct ADesertKaiju_Character_BP_C_BPGetRiderUnboardLocation_Params
	{
	public:
		class APrimalCharacter*                                    RidingCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.CreateNodeDynamicMICs
	 */
	struct ADesertKaiju_Character_BP_C_CreateNodeDynamicMICs_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ClientUpdateNodeStatus
	 */
	struct ADesertKaiju_Character_BP_C_ClientUpdateNodeStatus_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Client_ReplicateNodeStatusOnBegin
	 */
	struct ADesertKaiju_Character_BP_C_Client_ReplicateNodeStatusOnBegin_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BP_PreventMovementMode
	 */
	struct ADesertKaiju_Character_BP_C_BP_PreventMovementMode_Params
	{
	public:
		EMovementMode                                              NewMovementMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.K2_OnMovementModeChanged
	 */
	struct ADesertKaiju_Character_BP_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Get Kaiju Transform
	 */
	struct ADesertKaiju_Character_BP_C_GetKaijuTransform_Params
	{
	public:
		struct FTransform                                          ActualTransform;                                         // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPSetupTamed
	 */
	struct ADesertKaiju_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.TickLightningTargetVFX
	 */
	struct ADesertKaiju_Character_BP_C_TickLightningTargetVFX_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.UpdateLightningTargetVFXLocation
	 */
	struct ADesertKaiju_Character_BP_C_UpdateLightningTargetVFXLocation_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PZ7R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            WorldRotation;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9R92[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitResult;                                               // 0x0020(0x0088)  (Parm)
		struct FVector                                             SurfaceNormal;                                           // 0x00A8(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.FindClosestSocketName
	 */
	struct ADesertKaiju_Character_BP_C_FindClosestSocketName_Params
	{
	public:
		struct FVector                                             CompareLoc;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ClosestSocket;                                           // 0x000C(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BlinkDamageNodeInterp
	 */
	struct ADesertKaiju_Character_BP_C_BlinkDamageNodeInterp_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QM1P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BP_OnSetDeath
	 */
	struct ADesertKaiju_Character_BP_C_BP_OnSetDeath_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.TamedFlockCheckForRespawn
	 */
	struct ADesertKaiju_Character_BP_C_TamedFlockCheckForRespawn_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPLimitPlayerRotation
	 */
	struct ADesertKaiju_Character_BP_C_BPLimitPlayerRotation_Params
	{
	public:
		class APrimalCharacter*                                    viewingCharacter;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            InViewRotation;                                          // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            ReturnValue;                                             // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetOverrideCameraInterpSpeed
	 */
	struct ADesertKaiju_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params
	{
	public:
		float                                                      DefaultTPVCameraSpeedInterpolationMultiplier;            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DefaultTPVOffsetInterpSpeed;                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TPVCameraSpeedInterpolationMultiplier;                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TPVOffsetInterpSpeed;                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPOverrideCameraViewTarget
	 */
	struct ADesertKaiju_Character_BP_C_BPOverrideCameraViewTarget_Params
	{
	public:
		class FName                                                CurrentCameraMode;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             DesiredCameraLocation;                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            DesiredCameraRotation;                                   // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DesiredFOV;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraLocation;                                 // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C6EX[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CameraLocation;                                          // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraRotation;                                 // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WBFS[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            CameraRotation;                                          // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraFOV;                                      // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2AS6[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CameraFOV;                                               // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPAdjustAttackIndex
	 */
	struct ADesertKaiju_Character_BP_C_BPAdjustAttackIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.TamedFlockScan for Enemies
	 */
	struct ADesertKaiju_Character_BP_C_TamedFlockScanforEnemies_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Tamed Flocks Distance to Kaiju Check
	 */
	struct ADesertKaiju_Character_BP_C_TamedFlocksDistancetoKaijuCheck_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.WildFlocks Distance to Kaiju Check
	 */
	struct ADesertKaiju_Character_BP_C_WildFlocksDistancetoKaijuCheck_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.FlockCommandTrace
	 */
	struct ADesertKaiju_Character_BP_C_FlockCommandTrace_Params
	{
	public:
		bool                                                       FlockOne;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2BCK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetHUDElements
	 */
	struct ADesertKaiju_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.RecallTamedFlocks
	 */
	struct ADesertKaiju_Character_BP_C_RecallTamedFlocks_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.PreventLightningAoEField
	 */
	struct ADesertKaiju_Character_BP_C_PreventLightningAoEField_Params
	{
	public:
		struct FVector                                             ExplosionLoc;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OnKaiju;                                                 // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Prevent;                                                 // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BZNR[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.FindHUDOffset
	 */
	struct ADesertKaiju_Character_BP_C_FindHUDOffset_Params
	{
	public:
		class USceneComponent*                                     HoldSocket;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DestroyFauxNode
	 */
	struct ADesertKaiju_Character_BP_C_DestroyFauxNode_Params
	{
	public:
		bool                                                       LFin;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WM0S[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DamageFauxNode
	 */
	struct ADesertKaiju_Character_BP_C_DamageFauxNode_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       LeftNode;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_46GS[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.OnRep_RWingNodeHealth
	 */
	struct ADesertKaiju_Character_BP_C_OnRep_RWingNodeHealth_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPDoAttack
	 */
	struct ADesertKaiju_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.PreventLocomotion
	 */
	struct ADesertKaiju_Character_BP_C_PreventLocomotion_Params
	{
	public:
		bool                                                       Prevent;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Update Locomotion
	 */
	struct ADesertKaiju_Character_BP_C_UpdateLocomotion_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.OnRep_RiderControlFlockMode
	 */
	struct ADesertKaiju_Character_BP_C_OnRep_RiderControlFlockMode_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BlueprintCanAttack
	 */
	struct ADesertKaiju_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UY7K[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct ADesertKaiju_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.OnLanded
	 */
	struct ADesertKaiju_Character_BP_C_OnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPTimerServer
	 */
	struct ADesertKaiju_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SpawnGroundFlock
	 */
	struct ADesertKaiju_Character_BP_C_SpawnGroundFlock_Params
	{
	public:
		bool                                                       FirstFlock;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct ADesertKaiju_Character_BP_C_BlueprintAdjustOutputDamage_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OriginalDamageAmount;                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              HitActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              OutDamageType;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OutDamageImpulse;                                        // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ShortestAngleDistance
	 */
	struct ADesertKaiju_Character_BP_C_ShortestAngleDistance_Params
	{
	public:
		float                                                      AngleCurrent;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      AngleTarget;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Difference;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.GetLookDir
	 */
	struct ADesertKaiju_Character_BP_C_GetLookDir_Params
	{
	public:
		struct FVector                                             Return;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.LightningTrace
	 */
	struct ADesertKaiju_Character_BP_C_LightningTrace_Params
	{
	public:
		bool                                                       FireLightning;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ValidTarget;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DVA4[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLoc;                                                  // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HitActor;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K9OR[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitNormal;                                               // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SuccessFiredLightning;                                   // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W5H0[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPTimerNonDedicated
	 */
	struct ADesertKaiju_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct ADesertKaiju_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WU34[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct ADesertKaiju_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPNotifyClearPassenger
	 */
	struct ADesertKaiju_Character_BP_C_BPNotifyClearPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPCanTakePassenger
	 */
	struct ADesertKaiju_Character_BP_C_BPCanTakePassenger_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    PassengerSeatIndex;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForcePassenger;                                         // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAllowFlyersAndWaterDinos;                               // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000E(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPAllowCarryCharacter
	 */
	struct ADesertKaiju_Character_BP_C_BPAllowCarryCharacter_Params
	{
	public:
		class APrimalCharacter*                                    checkCharacter;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ADesertKaiju_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPTryMultiUse
	 */
	struct ADesertKaiju_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.StartTorpid
	 */
	struct ADesertKaiju_Character_BP_C_StartTorpid_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DestroyControlNode
	 */
	struct ADesertKaiju_Character_BP_C_DestroyControlNode_Params
	{
	public:
		EDesertKaiju_ControlNodes                                  Node;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DamageControlNode
	 */
	struct ADesertKaiju_Character_BP_C_DamageControlNode_Params
	{
	public:
		EDesertKaiju_ControlNodes                                  ControlNode;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KZKJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Damage;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       LightningStrike;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPAdjustDamage
	 */
	struct ADesertKaiju_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IW8S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IVWA[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DealLightningStrikeExplosionDamage
	 */
	struct ADesertKaiju_Character_BP_C_DealLightningStrikeExplosionDamage_Params
	{
	public:
		struct FVector                                             ExplosionLoc;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OnKaiju;                                                 // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I7BA[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            Rotation;                                                // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X9AW[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SpawnBasedFlock
	 */
	struct ADesertKaiju_Character_BP_C_SpawnBasedFlock_Params
	{
	public:
		bool                                                       FirstFlock;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BPCanBeBaseForCharacter
	 */
	struct ADesertKaiju_Character_BP_C_BPCanBeBaseForCharacter_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.UserConstructionScript
	 */
	struct ADesertKaiju_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_134
	 */
	struct ADesertKaiju_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_134_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_133
	 */
	struct ADesertKaiju_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_133_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.CallFunc_StunKaiju
	 */
	struct ADesertKaiju_Character_BP_C_CallFunc_StunKaiju_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SetVar_DKArenaManager
	 */
	struct ADesertKaiju_Character_BP_C_SetVar_DKArenaManager_Params
	{
	public:
		class AActor*                                              ArenaManager;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ReceiveBeginPlay
	 */
	struct ADesertKaiju_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SummonLightning
	 */
	struct ADesertKaiju_Character_BP_C_SummonLightning_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             LightningLoc;                                            // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseRelative;                                             // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K6CA[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            Rotation;                                                // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Mutli_ExposeNodes
	 */
	struct ADesertKaiju_Character_BP_C_Mutli_ExposeNodes_Params
	{
	public:
		EDesertKaiju_ControlNodes                                  Node;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Expose;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetNodeColor
	 */
	struct ADesertKaiju_Character_BP_C_Multi_SetNodeColor_Params
	{
	public:
		int32_t                                                    Node;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Activated;                                               // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JJH6[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Alpha;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DamageNode;                                              // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ActivateNode
	 */
	struct ADesertKaiju_Character_BP_C_ActivateNode_Params
	{
	public:
		EDesertKaiju_ControlNodes                                  ControlNode;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.DeactivateNode
	 */
	struct ADesertKaiju_Character_BP_C_DeactivateNode_Params
	{
	public:
		EDesertKaiju_ControlNodes                                  ControlNode;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.CtS_RightClickLightning
	 */
	struct ADesertKaiju_Character_BP_C_CtS_RightClickLightning_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WYIU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Normal;                                                  // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.FireRiderLightning
	 */
	struct ADesertKaiju_Character_BP_C_FireRiderLightning_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Normal;                                                  // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ReceiveTick
	 */
	struct ADesertKaiju_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Deactivate_LWingNode
	 */
	struct ADesertKaiju_Character_BP_C_Deactivate_LWingNode_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Deactivate_RWingNode
	 */
	struct ADesertKaiju_Character_BP_C_Deactivate_RWingNode_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Deactivate_CentralNode
	 */
	struct ADesertKaiju_Character_BP_C_Deactivate_CentralNode_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.CtS_SetRiderControlFlockMode
	 */
	struct ADesertKaiju_Character_BP_C_CtS_SetRiderControlFlockMode_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_ExposeFauxNodes
	 */
	struct ADesertKaiju_Character_BP_C_Multi_ExposeFauxNodes_Params
	{
	public:
		bool                                                       LFin;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Expose;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetFauxNodeColor
	 */
	struct ADesertKaiju_Character_BP_C_Multi_SetFauxNodeColor_Params
	{
	public:
		bool                                                       LFin;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VPHV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Alpha;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_192_ComponentHitSignature__DelegateSignature
	 */
	struct ADesertKaiju_Character_BP_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_192_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NormalImpulse;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2EPL[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0020(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_PlayRollingEffects
	 */
	struct ADesertKaiju_Character_BP_C_Multi_PlayRollingEffects_Params
	{
	public:
		struct FRotator                                            Rotator;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_Test
	 */
	struct ADesertKaiju_Character_BP_C_Multi_Test_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.BP_OnJumpPressed
	 */
	struct ADesertKaiju_Character_BP_C_BP_OnJumpPressed_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Server_SpawnTamedFlocks
	 */
	struct ADesertKaiju_Character_BP_C_Server_SpawnTamedFlocks_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Server_RecallFlocks
	 */
	struct ADesertKaiju_Character_BP_C_Server_RecallFlocks_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Server_ForceTamedFlockTarget
	 */
	struct ADesertKaiju_Character_BP_C_Server_ForceTamedFlockTarget_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FlockOne;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Server_UpdateRiderLightningStrikeCharges
	 */
	struct ADesertKaiju_Character_BP_C_Server_UpdateRiderLightningStrikeCharges_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Passenger1DelayedSetInterpSpeed
	 */
	struct ADesertKaiju_Character_BP_C_Passenger1DelayedSetInterpSpeed_Params
	{
	public:
		class APrimalCharacter*                                    Passenger;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseOverride;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Passenger2DelayedSetInterpSpeed
	 */
	struct ADesertKaiju_Character_BP_C_Passenger2DelayedSetInterpSpeed_Params
	{
	public:
		class APrimalCharacter*                                    Passenger;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseOverride;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Passenger3DelayedSetInterpSpeed
	 */
	struct ADesertKaiju_Character_BP_C_Passenger3DelayedSetInterpSpeed_Params
	{
	public:
		class APrimalCharacter*                                    Passenger;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseOverride;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Passenger4DelayedSetInterpSpeed
	 */
	struct ADesertKaiju_Character_BP_C_Passenger4DelayedSetInterpSpeed_Params
	{
	public:
		class APrimalCharacter*                                    Passenger;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseOverride;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_InterpLeftNode
	 */
	struct ADesertKaiju_Character_BP_C_Multi_InterpLeftNode_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_InterpRightNode
	 */
	struct ADesertKaiju_Character_BP_C_Multi_InterpRightNode_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_CenterRightNode
	 */
	struct ADesertKaiju_Character_BP_C_Multi_CenterRightNode_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_AttachLightningAOE
	 */
	struct ADesertKaiju_Character_BP_C_Multi_AttachLightningAOE_Params
	{
	public:
		class USceneComponent*                                     Loc;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USceneComponent*                                     Parent;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                SocketName;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.SpawnLightningAOE
	 */
	struct ADesertKaiju_Character_BP_C_SpawnLightningAOE_Params
	{
	public:
		struct FVector                                             ExplosionLoc;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OnKaiju;                                                 // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6CGR[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            Rotator;                                                 // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetLastLightningRechargeTime
	 */
	struct ADesertKaiju_Character_BP_C_Multi_SetLastLightningRechargeTime_Params
	{
	public:
		double                                                     Time;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetLastTimeStoppedTargeting
	 */
	struct ADesertKaiju_Character_BP_C_Multi_SetLastTimeStoppedTargeting_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetTemplate
	 */
	struct ADesertKaiju_Character_BP_C_Multi_SetTemplate_Params
	{
	public:
		class APrimalBuff*                                         Buff;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetFullbodyBlendStrength
	 */
	struct ADesertKaiju_Character_BP_C_Multi_SetFullbodyBlendStrength_Params
	{
	public:
		float                                                      Strength;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.multi_drawnode
	 */
	struct ADesertKaiju_Character_BP_C_multi_drawnode_Params
	{
	public:
		struct FVector                                             NewParam;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetCollisionProf
	 */
	struct ADesertKaiju_Character_BP_C_Multi_SetCollisionProf_Params
	{
	public:
		class FName                                                ColProfName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EDesertKaiju_ControlNodes                                  Component;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_DelayedTurnOffCorruptionNode
	 */
	struct ADesertKaiju_Character_BP_C_Multi_DelayedTurnOffCorruptionNode_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.PlayStun
	 */
	struct ADesertKaiju_Character_BP_C_PlayStun_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.EquipSaddle
	 */
	struct ADesertKaiju_Character_BP_C_EquipSaddle_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_PlayNodeDestroyFX
	 */
	struct ADesertKaiju_Character_BP_C_Multi_PlayNodeDestroyFX_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_SetNewFlySpeed
	 */
	struct ADesertKaiju_Character_BP_C_Multi_SetNewFlySpeed_Params
	{
	public:
		float                                                      Speed;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.UpdateSaddlePhysics
	 */
	struct ADesertKaiju_Character_BP_C_UpdateSaddlePhysics_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.Multi_DelayedTurnOffHealthRegen
	 */
	struct ADesertKaiju_Character_BP_C_Multi_DelayedTurnOffHealthRegen_Params
	{	};

	/**
	 * Function DesertKaiju_Character_BP.DesertKaiju_Character_BP_C.ExecuteUbergraph_DesertKaiju_Character_BP
	 */
	struct ADesertKaiju_Character_BP_C_ExecuteUbergraph_DesertKaiju_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
