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
	 * Function Mek_Character_BP.Mek_Character_BP_C.ModifyMekHeat
	 */
	struct AMek_Character_BP_C_ModifyMekHeat_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Subtract;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LBZQ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      NewHeatLevel;                                            // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.ModifyMekFuel
	 */
	struct AMek_Character_BP_C_ModifyMekFuel_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Subtract;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C4I3[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      NewFuelLevel;                                            // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UCY4[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.GetMekFuel
	 */
	struct AMek_Character_BP_C_GetMekFuel_Params
	{
	public:
		float                                                      CurrentFuel;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      MaxFuel;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.GetMekHeat
	 */
	struct AMek_Character_BP_C_GetMekHeat_Params
	{
	public:
		float                                                      CurrentHeat;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      MaxHeat;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BP_OnCryo
	 */
	struct AMek_Character_BP_C_BP_OnCryo_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
	 */
	struct AMek_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPDoAttack
	 */
	struct AMek_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HYO5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPCanBaseOnCharacter
	 */
	struct AMek_Character_BP_C_BPCanBaseOnCharacter_Params
	{
	public:
		class APrimalCharacter*                                    BaseCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QIV5[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.SyncBackpackColorization
	 */
	struct AMek_Character_BP_C_SyncBackpackColorization_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPOverrideMoveToOrder
	 */
	struct AMek_Character_BP_C_BPOverrideMoveToOrder_Params
	{
	public:
		struct FVector                                             MoveToLocation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CFSE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   OrderingPlayer;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.Get Transform Key Name
	 */
	struct AMek_Character_BP_C_GetTransformKeyName_Params
	{
	public:
		class FText                                                KeyName;                                                 // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPPostLoadedFromSaveGame
	 */
	struct AMek_Character_BP_C_BPPostLoadedFromSaveGame_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPPreSerializeSaveGame
	 */
	struct AMek_Character_BP_C_BPPreSerializeSaveGame_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPAdjustImpulseFromDamage
	 */
	struct AMek_Character_BP_C_BPAdjustImpulseFromDamage_Params
	{
	public:
		struct FVector                                             DesiredImpulse;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DamageTaken;                                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0010(0x0020)  (Parm)
		class APawn*                                               PawnInstigator;                                          // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LC4L[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0048(0x0088)  (Parm)
		struct FVector                                             ReturnValue;                                             // 0x00D0(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E2U9[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPOnRefreshColorization
	 */
	struct AMek_Character_BP_C_BPOnRefreshColorization_Params
	{
	public:
		TArray<struct FLinearColor>                                Colors;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPDinoARKDownloadedEnd
	 */
	struct AMek_Character_BP_C_BPDinoARKDownloadedEnd_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPTimerServer
	 */
	struct AMek_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPHandlePoop
	 */
	struct AMek_Character_BP_C_BPHandlePoop_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPPreventFirstPerson
	 */
	struct AMek_Character_BP_C_BPPreventFirstPerson_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.RepairedByScout
	 */
	struct AMek_Character_BP_C_RepairedByScout_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPOnLethalDamage
	 */
	struct AMek_Character_BP_C_BPOnLethalDamage_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7NQW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class AController*                                         Killer;                                                  // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bPreventDeath;                                           // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.UpdateDepletedMeksList
	 */
	struct AMek_Character_BP_C_UpdateDepletedMeksList_Params
	{
	public:
		bool                                                       ClearAllTargets;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_61D9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.IsRemoteMekValidForDepletion
	 */
	struct AMek_Character_BP_C_IsRemoteMekValidForDepletion_Params
	{
	public:
		class AMek_Character_BP_C*                                 Mek;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsValid;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HasDepletedBuff;                                         // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPNotifySetRider
	 */
	struct AMek_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPPreventInputType
	 */
	struct AMek_Character_BP_C_BPPreventInputType_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.ClientIsMegaMekTransformationAllowed
	 */
	struct AMek_Character_BP_C_ClientIsMegaMekTransformationAllowed_Params
	{
	public:
		bool                                                       Allowed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       KingKaijuNearby;                                         // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QSS1[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    FriendlyMeksNearby;                                      // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.MegaMekTransformation
	 */
	struct AMek_Character_BP_C_MegaMekTransformation_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.AllowedToAutoRepair
	 */
	struct AMek_Character_BP_C_AllowedToAutoRepair_Params
	{
	public:
		bool                                                       Allowed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R2OX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CooldownTimeRemaining;                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BlueprintDrawFloatingHUD
	 */
	struct AMek_Character_BP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPTryMultiUse
	 */
	struct AMek_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AMek_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.GetTurnInPlaceSpeed
	 */
	struct AMek_Character_BP_C_GetTurnInPlaceSpeed_Params
	{
	public:
		float                                                      DefaultSpeed;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      NewSpeed;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPAdjustDamage
	 */
	struct AMek_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WDSU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K10B[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JKZW[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPHandleOnStopFire
	 */
	struct AMek_Character_BP_C_BPHandleOnStopFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.HoverTrace
	 */
	struct AMek_Character_BP_C_HoverTrace_Params
	{
	public:
		float                                                      TraceDistance;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DebugDraw;                                               // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EYMP[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DebugDrawDuration;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N8BD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitResult;                                               // 0x0010(0x0088)  (Parm, OutParm)
		bool                                                       BlockingHit;                                             // 0x0098(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1QI7[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             TraceStart;                                              // 0x009C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             TraceEnd;                                                // 0x00A8(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.IsPlayingAttackAnim
	 */
	struct AMek_Character_BP_C_IsPlayingAttackAnim_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Playing;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FMFP[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPGetOverrideCameraInterpSpeed
	 */
	struct AMek_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params
	{
	public:
		float                                                      DefaultTPVCameraSpeedInterpolationMultiplier;            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DefaultTPVOffsetInterpSpeed;                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TPVCameraSpeedInterpolationMultiplier;                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TPVOffsetInterpSpeed;                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPOverrideHurtAnim
	 */
	struct AMek_Character_BP_C_BPOverrideHurtAnim_Params
	{
	public:
		float                                                      DamageTaken;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NNYA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class APawn*                                               PawnInstigator;                                          // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLocalPath;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0039(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KZAL[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             PointDamageLocation;                                     // 0x003C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             PointDamageHitNormal;                                    // 0x0048(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IRY7[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.GetCurrentSwordStatus
	 */
	struct AMek_Character_BP_C_GetCurrentSwordStatus_Params
	{
	public:
		bool                                                       IsSwingingSword;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9XY3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        CurrentMontage;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    AttackAnimIndex;                                         // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      AnimTimeRemaining;                                       // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BP_PreventMovementMode
	 */
	struct AMek_Character_BP_C_BP_PreventMovementMode_Params
	{
	public:
		EMovementMode                                              NewMovementMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 */
	struct AMek_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BDBI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UAnimMontage*>                                AnimationArray;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.GetHeatLevel
	 */
	struct AMek_Character_BP_C_GetHeatLevel_Params
	{
	public:
		float                                                      Heat;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      MaxHeat;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.IsBackpackActive
	 */
	struct AMek_Character_BP_C_IsBackpackActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HPZ6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.HasEquippedBackpack
	 */
	struct AMek_Character_BP_C_HasEquippedBackpack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_980R[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct AMek_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.GetEquippedBackpack
	 */
	struct AMek_Character_BP_C_GetEquippedBackpack_Params
	{
	public:
		bool                                                       HasBackpack;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6PJC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABuff_MekBackpack_Base_C*                            BackpackBuff;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                BackpackType;                                            // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPNotifyInventoryItemChange
	 */
	struct AMek_Character_BP_C_BPNotifyInventoryItemChange_Params
	{
	public:
		bool                                                       bIsItemAdd;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3TKG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalItem*                                         theItem;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipItem;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPDinoPostBeginPlay
	 */
	struct AMek_Character_BP_C_BPDinoPostBeginPlay_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.ModifyHeatLevel
	 */
	struct AMek_Character_BP_C_ModifyHeatLevel_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Subtract;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OOTA[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      NewHeatLevel;                                            // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.GetPistolMuzzleInfo
	 */
	struct AMek_Character_BP_C_GetPistolMuzzleInfo_Params
	{
	public:
		struct FVector                                             MuzzleLocation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             MuzzleDirection;                                         // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.UpdateTargetingMode
	 */
	struct AMek_Character_BP_C_UpdateTargetingMode_Params
	{
	public:
		bool                                                       NewTargetingState;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.ReceiveTick
	 */
	struct AMek_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPAdjustAttackIndex
	 */
	struct AMek_Character_BP_C_BPAdjustAttackIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.IsCurrentlyTargeting
	 */
	struct AMek_Character_BP_C_IsCurrentlyTargeting_Params
	{
	public:
		bool                                                       IsTargeting;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct AMek_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct AMek_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.Set Camera Offset Multipliers
	 */
	struct AMek_Character_BP_C_SetCameraOffsetMultipliers_Params
	{
	public:
		float                                                      HorizMultiplier;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      VertMultiplier;                                          // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.UpdateHoverJetsVFX
	 */
	struct AMek_Character_BP_C_UpdateHoverJetsVFX_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPNotifyClearRider
	 */
	struct AMek_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPOverrideCharacterNewFallVelocity
	 */
	struct AMek_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.ModifyFuelLevel
	 */
	struct AMek_Character_BP_C_ModifyFuelLevel_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Subtract;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZC9A[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      NewFuelLevel;                                            // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2W8F[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.HasEnoughResourcesToHover
	 */
	struct AMek_Character_BP_C_HasEnoughResourcesToHover_Params
	{
	public:
		bool                                                       CanHover;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CP3B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPOnDinoCheat
	 */
	struct AMek_Character_BP_C_BPOnDinoCheat_Params
	{
	public:
		class FName                                                CheatName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSetValue;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YXAY[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPOnMovementModeChangedNotify
	 */
	struct AMek_Character_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPGetHUDElements
	 */
	struct AMek_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BP_OnJumpReleased
	 */
	struct AMek_Character_BP_C_BP_OnJumpReleased_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BP_OnJumpPressed
	 */
	struct AMek_Character_BP_C_BP_OnJumpPressed_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPGetGravityZScale
	 */
	struct AMek_Character_BP_C_BPGetGravityZScale_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPPreventFallDamage
	 */
	struct AMek_Character_BP_C_BPPreventFallDamage_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		float                                                      FallDamageAmount;                                        // 0x0088(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x008C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.RidingTick
	 */
	struct AMek_Character_BP_C_RidingTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BPGetRiderUnboardLocation
	 */
	struct AMek_Character_BP_C_BPGetRiderUnboardLocation_Params
	{
	public:
		class APrimalCharacter*                                    RidingCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8LWU[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct AMek_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.UserConstructionScript
	 */
	struct AMek_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.ServerRequestStartHover
	 */
	struct AMek_Character_BP_C_ServerRequestStartHover_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.ServerRequestStopHover
	 */
	struct AMek_Character_BP_C_ServerRequestStopHover_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.MultiStartHover
	 */
	struct AMek_Character_BP_C_MultiStartHover_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.MultiStopHover
	 */
	struct AMek_Character_BP_C_MultiStopHover_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.PlayHoverStartVFX
	 */
	struct AMek_Character_BP_C_PlayHoverStartVFX_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.MultiDebugDrawDirectionVector
	 */
	struct AMek_Character_BP_C_MultiDebugDrawDirectionVector_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      VertOffset;                                              // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Length;                                                  // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Duration;                                                // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.ServerUpdateInputDirection
	 */
	struct AMek_Character_BP_C_ServerUpdateInputDirection_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.ForceStopHover
	 */
	struct AMek_Character_BP_C_ForceStopHover_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.MultiUpdateHoverParams
	 */
	struct AMek_Character_BP_C_MultiUpdateHoverParams_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HasHoverTarget;                                          // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VIOR[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HoverTarget;                                             // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.MultiDebugDrawLine
	 */
	struct AMek_Character_BP_C_MultiDebugDrawLine_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Duration;                                                // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Thickness;                                               // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.MultiDebugDrawHitResult
	 */
	struct AMek_Character_BP_C_MultiDebugDrawHitResult_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (Parm)
		struct FLinearColor                                        NoHitColor;                                              // 0x0088(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        CollisionColor;                                          // 0x0098(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Duration;                                                // 0x00A8(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Thickness;                                               // 0x00AC(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      HitSize;                                                 // 0x00B0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             TraceStart;                                              // 0x00B4(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             TraceEnd;                                                // 0x00C0(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.ServerSetTargetingMode
	 */
	struct AMek_Character_BP_C_ServerSetTargetingMode_Params
	{
	public:
		bool                                                       IsTargeting;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.MultiUpdateTargetingMode
	 */
	struct AMek_Character_BP_C_MultiUpdateTargetingMode_Params
	{
	public:
		bool                                                       IsTargeting;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.OnSwordHit
	 */
	struct AMek_Character_BP_C_OnSwordHit_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (Parm)
		struct FVector                                             TraceStart;                                              // 0x0088(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             TraceEnd;                                                // 0x0094(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.MultiOnSwordHit
	 */
	struct AMek_Character_BP_C_MultiOnSwordHit_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.MultiHoverJetsDamagedTarget
	 */
	struct AMek_Character_BP_C_MultiHoverJetsDamagedTarget_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.ServerActivateBackpack
	 */
	struct AMek_Character_BP_C_ServerActivateBackpack_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.ServerUpdatePistolAimDirection
	 */
	struct AMek_Character_BP_C_ServerUpdatePistolAimDirection_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.ServerRequestSwordAttackCombo
	 */
	struct AMek_Character_BP_C_ServerRequestSwordAttackCombo_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.DoDelayedSwordCombo
	 */
	struct AMek_Character_BP_C_DoDelayedSwordCombo_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.MultiOnMekDestroyed
	 */
	struct AMek_Character_BP_C_MultiOnMekDestroyed_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.ServerRequestTransform
	 */
	struct AMek_Character_BP_C_ServerRequestTransform_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.MultiUpdatePistolAimDirection
	 */
	struct AMek_Character_BP_C_MultiUpdatePistolAimDirection_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.OnPistolFiredProjectile
	 */
	struct AMek_Character_BP_C_OnPistolFiredProjectile_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.ClientShowHUDNotification
	 */
	struct AMek_Character_BP_C_ClientShowHUDNotification_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor)
		float                                                      Duration;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        Color;                                                   // 0x0014(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.GetReadyToDieMulti
	 */
	struct AMek_Character_BP_C_GetReadyToDieMulti_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.EnableInputMulti
	 */
	struct AMek_Character_BP_C_EnableInputMulti_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.ServerRequestCancelMegaMekTransform
	 */
	struct AMek_Character_BP_C_ServerRequestCancelMegaMekTransform_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.SetBackpackMalfunction
	 */
	struct AMek_Character_BP_C_SetBackpackMalfunction_Params
	{
	public:
		bool                                                       DisableBackpack;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.ReceiveBeginPlay
	 */
	struct AMek_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.CancelSwordCombo
	 */
	struct AMek_Character_BP_C_CancelSwordCombo_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.ServerRequestCancelCombo
	 */
	struct AMek_Character_BP_C_ServerRequestCancelCombo_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.ClientShowEmptyFuelNotification
	 */
	struct AMek_Character_BP_C_ClientShowEmptyFuelNotification_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.GetReadyToDieSkip
	 */
	struct AMek_Character_BP_C_GetReadyToDieSkip_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.MultiSyncBackpackColorization
	 */
	struct AMek_Character_BP_C_MultiSyncBackpackColorization_Params
	{	};

	/**
	 * Function Mek_Character_BP.Mek_Character_BP_C.ExecuteUbergraph_Mek_Character_BP
	 */
	struct AMek_Character_BP_C_ExecuteUbergraph_Mek_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
