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
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPCameraRotationFinal
	 */
	struct ATekHoverSail_Character_BP_C_BPCameraRotationFinal_Params
	{
	public:
		class APrimalCharacter*                                    viewingCharacter;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            InCurrentFinalRot;                                       // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            ReturnValue;                                             // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Clear Trick Hint Text
	 */
	struct ATekHoverSail_Character_BP_C_ClearTrickHintText_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Add Trick Hint Text
	 */
	struct ATekHoverSail_Character_BP_C_AddTrickHintText_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnRefreshColorization
	 */
	struct ATekHoverSail_Character_BP_C_BPOnRefreshColorization_Params
	{
	public:
		TArray<struct FLinearColor>                                Colors;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Holds Trick Button - direction variant
	 */
	struct ATekHoverSail_Character_BP_C_ClientHoldsTrickButtondirectionvariant_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOverrideFPVViewLocation
	 */
	struct ATekHoverSail_Character_BP_C_BPOverrideFPVViewLocation_Params
	{
	public:
		class APrimalCharacter*                                    viewingCharacter;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetFPVViewLocation
	 */
	struct ATekHoverSail_Character_BP_C_BPGetFPVViewLocation_Params
	{
	public:
		class APrimalCharacter*                                    viewingCharacter;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ClearTrickActivationText
	 */
	struct ATekHoverSail_Character_BP_C_ClearTrickActivationText_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Add Trick Activation Text
	 */
	struct ATekHoverSail_Character_BP_C_AddTrickActivationText_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ResetAccumulatedTricks
	 */
	struct ATekHoverSail_Character_BP_C_ResetAccumulatedTricks_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Add To Accumulated Trick
	 */
	struct ATekHoverSail_Character_BP_C_AddToAccumulatedTrick_Params
	{
	public:
		int32_t                                                    TrickIndexToAdd;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.HandleThrusterSFX
	 */
	struct ATekHoverSail_Character_BP_C_HandleThrusterSFX_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DeactivateGroundFX
	 */
	struct ATekHoverSail_Character_BP_C_DeactivateGroundFX_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.HandleCrouch
	 */
	struct ATekHoverSail_Character_BP_C_HandleCrouch_Params
	{
	public:
		bool                                                       bWasReleased;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetTotalFuelUnits
	 */
	struct ATekHoverSail_Character_BP_C_GetTotalFuelUnits_Params
	{
	public:
		int32_t                                                    NewParam;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.try refill from inventory
	 */
	struct ATekHoverSail_Character_BP_C_tryrefillfrominventory_Params
	{
	public:
		class UPrimalInventoryComponent*                           InputPin;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ret;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyClearPassenger
	 */
	struct ATekHoverSail_Character_BP_C_BPNotifyClearPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SC2T[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Delaymount
	 */
	struct ATekHoverSail_Character_BP_C_Delaymount_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPHandleUseButtonPress
	 */
	struct ATekHoverSail_Character_BP_C_BPHandleUseButtonPress_Params
	{
	public:
		class AShooterPlayerController*                            RiderController;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.is FPV
	 */
	struct ATekHoverSail_Character_BP_C_isFPV_Params
	{
	public:
		class AShooterCharacter*                                   InputPin;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NewParam;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.spawn collision sparks vfx
	 */
	struct ATekHoverSail_Character_BP_C_spawncollisionsparksvfx_Params
	{
	public:
		struct FVector                                             hitnorm;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             hitlocation;                                             // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      impactstrength;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YQHU[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Restricted Sparks Spawn Rate
	 */
	struct ATekHoverSail_Character_BP_C_RestrictedSparksSpawnRate_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Attach Player To Sail Open Socket Location
	 */
	struct ATekHoverSail_Character_BP_C_AttachPlayerToSailOpenSocketLocation_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Lerp To Sail Open Socket Location
	 */
	struct ATekHoverSail_Character_BP_C_LerpToSailOpenSocketLocation_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Lerp To Weapon Out Location
	 */
	struct ATekHoverSail_Character_BP_C_LerpToWeaponOutLocation_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Attach Player To Weapon Out Location
	 */
	struct ATekHoverSail_Character_BP_C_AttachPlayerToWeaponOutLocation_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyAddPassenger
	 */
	struct ATekHoverSail_Character_BP_C_BPNotifyAddPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Halt Hoversail
	 */
	struct ATekHoverSail_Character_BP_C_ClientHaltHoversail_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.destroy if item reference is gone
	 */
	struct ATekHoverSail_Character_BP_C_destroyifitemreferenceisgone_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Duration After Drifting To Have Increased Speed
	 */
	struct ATekHoverSail_Character_BP_C_DurationAfterDriftingToHaveIncreasedSpeed_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.destroy itself
	 */
	struct ATekHoverSail_Character_BP_C_destroyitself_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPTriggerStasisEvent
	 */
	struct ATekHoverSail_Character_BP_C_BPTriggerStasisEvent_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Trick Score Display Timer
	 */
	struct ATekHoverSail_Character_BP_C_TrickScoreDisplayTimer_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BoostBonusDisplayTimer
	 */
	struct ATekHoverSail_Character_BP_C_BoostBonusDisplayTimer_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Shortly After Clearing
	 */
	struct ATekHoverSail_Character_BP_C_ShortlyAfterClearing_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Time After Drift To Retain Velocity
	 */
	struct ATekHoverSail_Character_BP_C_TimeAfterDriftToRetainVelocity_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.is player holding drift
	 */
	struct ATekHoverSail_Character_BP_C_isplayerholdingdrift_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Presses Held Drift Button
	 */
	struct ATekHoverSail_Character_BP_C_ClientPressesHeldDriftButton_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Releases Held Drift Button
	 */
	struct ATekHoverSail_Character_BP_C_ClientReleasesHeldDriftButton_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.set up everything for detecting tricks in the air
	 */
	struct ATekHoverSail_Character_BP_C_setupeverythingfordetectingtricksintheair_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Completed 360 in air
	 */
	struct ATekHoverSail_Character_BP_C_Completed360inair_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Completed Held Trick for Bonus
	 */
	struct ATekHoverSail_Character_BP_C_CompletedHeldTrickforBonus_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Completed One Shot Trick For Bonus
	 */
	struct ATekHoverSail_Character_BP_C_CompletedOneShotTrickForBonus_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Shortly After Drift Boost
	 */
	struct ATekHoverSail_Character_BP_C_IsShortlyAfterDriftBoost_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Can Request Drift Boost
	 */
	struct ATekHoverSail_Character_BP_C_CanRequestDriftBoost_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Request drift boost
	 */
	struct ATekHoverSail_Character_BP_C_Requestdriftboost_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Request Boost After Drift
	 */
	struct ATekHoverSail_Character_BP_C_RequestBoostAfterDrift_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Allowed Time After Stopping Drift To Be Able To Boost
	 */
	struct ATekHoverSail_Character_BP_C_AllowedTimeAfterStoppingDriftToBeAbleToBoost_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.client releases trick button
	 */
	struct ATekHoverSail_Character_BP_C_clientreleasestrickbutton_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.client holds trick button
	 */
	struct ATekHoverSail_Character_BP_C_clientholdstrickbutton_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Releases camera button
	 */
	struct ATekHoverSail_Character_BP_C_ClientReleasescamerabutton_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Holds camera button
	 */
	struct ATekHoverSail_Character_BP_C_ClientHoldscamerabutton_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Presses FreeSpin Button
	 */
	struct ATekHoverSail_Character_BP_C_ClientPressesFreeSpinButton_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Releases FreeSpin Button
	 */
	struct ATekHoverSail_Character_BP_C_ClientReleasesFreeSpinButton_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.client releases spin button
	 */
	struct ATekHoverSail_Character_BP_C_clientreleasesspinbutton_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Holds Spin Button
	 */
	struct ATekHoverSail_Character_BP_C_ClientHoldsSpinButton_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveTick
	 */
	struct ATekHoverSail_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Player Currently Holding And Able To Aerial Boost
	 */
	struct ATekHoverSail_Character_BP_C_IsPlayerCurrentlyHoldingAndAbleToAerialBoost_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Delay Before Starting To Recharge Boost In Air
	 */
	struct ATekHoverSail_Character_BP_C_DelayBeforeStartingToRechargeBoostInAir_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Aerial Boost Drain
	 */
	struct ATekHoverSail_Character_BP_C_AerialBoostDrain_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Recharge Aerial Boost
	 */
	struct ATekHoverSail_Character_BP_C_RechargeAerialBoost_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ATekHoverSail_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Aerial Boosting Active_Not pure
	 */
	struct ATekHoverSail_Character_BP_C_IsAerialBoostingActive_Notpure_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.is cliff diving
	 */
	struct ATekHoverSail_Character_BP_C_iscliffdiving_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Near Ground not pure
	 */
	struct ATekHoverSail_Character_BP_C_IsNearGroundnotpure_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOverrideCameraViewTarget
	 */
	struct ATekHoverSail_Character_BP_C_BPOverrideCameraViewTarget_Params
	{
	public:
		class FName                                                CurrentCameraMode;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             DesiredCameraLocation;                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            DesiredCameraRotation;                                   // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DesiredFOV;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraLocation;                                 // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z4OI[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CameraLocation;                                          // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraRotation;                                 // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5HAR[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            CameraRotation;                                          // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraFOV;                                      // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BLUX[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CameraFOV;                                               // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.can boost forward on landing trick
	 */
	struct ATekHoverSail_Character_BP_C_canboostforwardonlandingtrick_Params
	{
	public:
		bool                                                       HasLandedTrick;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.can request full boost
	 */
	struct ATekHoverSail_Character_BP_C_canrequestfullboost_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetGravityZScale
	 */
	struct ATekHoverSail_Character_BP_C_BPGetGravityZScale_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Finished Putting Sail Down
	 */
	struct ATekHoverSail_Character_BP_C_FinishedPuttingSailDown_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Aerial Boosting Active
	 */
	struct ATekHoverSail_Character_BP_C_IsAerialBoostingActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.can aerial boost
	 */
	struct ATekHoverSail_Character_BP_C_canaerialboost_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Get Aerial Charge Meter Amount
	 */
	struct ATekHoverSail_Character_BP_C_GetAerialChargeMeterAmount_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.finished aerial boost timer completely
	 */
	struct ATekHoverSail_Character_BP_C_finishedaerialboosttimercompletely_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.reset aerial boost
	 */
	struct ATekHoverSail_Character_BP_C_resetaerialboost_Params
	{
	public:
		bool                                                       ignoretimeconstraint;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Finish Aerial Boost
	 */
	struct ATekHoverSail_Character_BP_C_FinishAerialBoost_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.begin aerial boosting
	 */
	struct ATekHoverSail_Character_BP_C_beginaerialboosting_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Release Holding Tricks
	 */
	struct ATekHoverSail_Character_BP_C_ReleaseHoldingTricks_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.request full boost
	 */
	struct ATekHoverSail_Character_BP_C_requestfullboost_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.does skiff want to run
	 */
	struct ATekHoverSail_Character_BP_C_doesskiffwanttorun_Params
	{
	public:
		bool                                                       wantstorun;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ThrottledTick
	 */
	struct ATekHoverSail_Character_BP_C_ThrottledTick_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.is near ground
	 */
	struct ATekHoverSail_Character_BP_C_isnearground_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Reset Hold Forward
	 */
	struct ATekHoverSail_Character_BP_C_ResetHoldForward_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Reset Hold Right
	 */
	struct ATekHoverSail_Character_BP_C_ResetHoldRight_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.RidingTick
	 */
	struct ATekHoverSail_Character_BP_C_RidingTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetRiderSocket
	 */
	struct ATekHoverSail_Character_BP_C_BPGetRiderSocket_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyClearRider
	 */
	struct ATekHoverSail_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.EnableTurnToFaceRotation
	 */
	struct ATekHoverSail_Character_BP_C_EnableTurnToFaceRotation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ModifySkiffHorizontalInputs
	 */
	struct ATekHoverSail_Character_BP_C_ModifySkiffHorizontalInputs_Params
	{
	public:
		struct FVector                                             Input;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewInput;                                                // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetCurrentHoverFloorZ
	 */
	struct ATekHoverSail_Character_BP_C_GetCurrentHoverFloorZ_Params
	{
	public:
		bool                                                       bUseAverage;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bValidFloor;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R6Z1[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      FloorZ;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetHoverSlopeDeltaRatio_PURE
	 */
	struct ATekHoverSail_Character_BP_C_GetHoverSlopeDeltaRatio_PURE_Params
	{
	public:
		bool                                                       bAdjustWithMax;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5VEJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Ratio;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetHoverSlopeDeltaRatio
	 */
	struct ATekHoverSail_Character_BP_C_GetHoverSlopeDeltaRatio_Params
	{
	public:
		bool                                                       bAdjustWithMax;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JN0I[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Ratio;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DoHoverSlopeCheck
	 */
	struct ATekHoverSail_Character_BP_C_DoHoverSlopeCheck_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPCanCryo
	 */
	struct ATekHoverSail_Character_BP_C_BPCanCryo_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsSkiffRepairModeCooldownActive
	 */
	struct ATekHoverSail_Character_BP_C_IsSkiffRepairModeCooldownActive_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPost;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K42C[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      RemainingTime;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsSkiffRepairDisabledFromDamage
	 */
	struct ATekHoverSail_Character_BP_C_IsSkiffRepairDisabledFromDamage_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FHXP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      RemainingTime;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPAcknowledgeServerCorrection
	 */
	struct ATekHoverSail_Character_BP_C_BPAcknowledgeServerCorrection_Params
	{
	public:
		float                                                      TimeStamp;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewLoc;                                                  // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewVel;                                                  // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BX6G[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 NewBase;                                                 // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                NewBaseBoneName;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bHasBase;                                                // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBaseRelativePosition;                                   // 0x0031(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              ServerMovementMode;                                      // 0x0032(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0033(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnStopJump
	 */
	struct ATekHoverSail_Character_BP_C_BPOnStopJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnStartJump
	 */
	struct ATekHoverSail_Character_BP_C_BPOnStartJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WBM4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyToggleHUD
	 */
	struct ATekHoverSail_Character_BP_C_BPNotifyToggleHUD_Params
	{
	public:
		bool                                                       bHudHidden;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CalculateTotalAlternateFuel
	 */
	struct ATekHoverSail_Character_BP_C_CalculateTotalAlternateFuel_Params
	{
	public:
		float                                                      TotalAltFuel;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetRepairModeHudMessage
	 */
	struct ATekHoverSail_Character_BP_C_GetRepairModeHudMessage_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageDamageFX
	 */
	struct ATekHoverSail_Character_BP_C_Tick_ManageDamageFX_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.NetSetCachedLandedRootRotationOffset
	 */
	struct ATekHoverSail_Character_BP_C_NetSetCachedLandedRootRotationOffset_Params
	{
	public:
		struct FRotator                                            NewOffset;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnBasedPawnRemovedNotify
	 */
	struct ATekHoverSail_Character_BP_C_BP_OnBasedPawnRemovedNotify_Params
	{
	public:
		class AActor*                                              RemovedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnBasedPawnAddedNotify
	 */
	struct ATekHoverSail_Character_BP_C_BP_OnBasedPawnAddedNotify_Params
	{
	public:
		class AActor*                                              AddedActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetFuelConversionRateForClass
	 */
	struct ATekHoverSail_Character_BP_C_GetFuelConversionRateForClass_Params
	{
	public:
		class UClass*                                              ForClass;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Rate;                                                    // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffRepairModeStateChanged
	 */
	struct ATekHoverSail_Character_BP_C_OnSkiffRepairModeStateChanged_Params
	{
	public:
		bool                                                       bNewState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0RC5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.NetSetSkiffRepairModeActive
	 */
	struct ATekHoverSail_Character_BP_C_NetSetSkiffRepairModeActive_Params
	{
	public:
		bool                                                       bNewActive;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CanSkiffUseRepairMode
	 */
	struct ATekHoverSail_Character_BP_C_CanSkiffUseRepairMode_Params
	{
	public:
		bool                                                       bForStart;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPTryMultiUse
	 */
	struct ATekHoverSail_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G4MN[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Get Repair Mode Hud Message_PURE
	 */
	struct ATekHoverSail_Character_BP_C_GetRepairModeHudMessage_PURE_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BlueprintDrawFloatingHUD
	 */
	struct ATekHoverSail_Character_BP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ATekHoverSail_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageAutoRepair
	 */
	struct ATekHoverSail_Character_BP_C_Tick_ManageAutoRepair_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_ForceAllowAddBuff
	 */
	struct ATekHoverSail_Character_BP_C_BP_ForceAllowAddBuff_Params
	{
	public:
		class UClass*                                              BuffClass;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E2EK[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BlueprintPlayDying
	 */
	struct ATekHoverSail_Character_BP_C_BlueprintPlayDying_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3E70[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class APawn*                                               InstigatingPawn;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPServerHandleNetExecCommand
	 */
	struct ATekHoverSail_Character_BP_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ConsumeFuel
	 */
	struct ATekHoverSail_Character_BP_C_ConsumeFuel_Params
	{
	public:
		float                                                      amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       MulticastFuel;                                           // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.HasEnoughFuel
	 */
	struct ATekHoverSail_Character_BP_C_HasEnoughFuel_Params
	{
	public:
		float                                                      RequiredFuel;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.TryRefillCurrentFuelUnit
	 */
	struct ATekHoverSail_Character_BP_C_TryRefillCurrentFuelUnit_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.HasAnyFuel
	 */
	struct ATekHoverSail_Character_BP_C_HasAnyFuel_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RSU0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CurrentFuel;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPInventoryItemDropped
	 */
	struct ATekHoverSail_Character_BP_C_BPInventoryItemDropped_Params
	{
	public:
		class UObject*                                             InventoryItemObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyInventoryItemChange
	 */
	struct ATekHoverSail_Character_BP_C_BPNotifyInventoryItemChange_Params
	{
	public:
		bool                                                       bIsItemAdd;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J7OE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalItem*                                         theItem;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipItem;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffInventoryUpdated
	 */
	struct ATekHoverSail_Character_BP_C_OnSkiffInventoryUpdated_Params
	{
	public:
		class UPrimalItem*                                         UpdatedItem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPSetupTamed
	 */
	struct ATekHoverSail_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DisableLevelUps
	 */
	struct ATekHoverSail_Character_BP_C_DisableLevelUps_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BSetupDinoTameable
	 */
	struct ATekHoverSail_Character_BP_C_BSetupDinoTameable_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ShowDropDinoIndicator
	 */
	struct ATekHoverSail_Character_BP_C_Tick_ShowDropDinoIndicator_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetSkiffAcceleration
	 */
	struct ATekHoverSail_Character_BP_C_GetSkiffAcceleration_Params
	{
	public:
		struct FVector                                             NewParam;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsValidHoverTraceHit
	 */
	struct ATekHoverSail_Character_BP_C_IsValidHoverTraceHit_Params
	{
	public:
		struct FHitResult                                          ForHit;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		bool                                                       bResult;                                                 // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CDRZ[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsSkiffRunning
	 */
	struct ATekHoverSail_Character_BP_C_IsSkiffRunning_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnSetRunning
	 */
	struct ATekHoverSail_Character_BP_C_BP_OnSetRunning_Params
	{
	public:
		bool                                                       bNewIsRunning;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnReceiveSkiff2dMovementInput
	 */
	struct ATekHoverSail_Character_BP_C_OnReceiveSkiff2dMovementInput_Params
	{
	public:
		float                                                      InputAxisVal;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bRight;                                                  // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bShouldIntercept;                                        // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPCanBeBaseForCharacter
	 */
	struct ATekHoverSail_Character_BP_C_BPCanBeBaseForCharacter_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetRiderUnboardDirection
	 */
	struct ATekHoverSail_Character_BP_C_BPGetRiderUnboardDirection_Params
	{
	public:
		class APrimalCharacter*                                    RidingCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetRiderUnboardLocation
	 */
	struct ATekHoverSail_Character_BP_C_BPGetRiderUnboardLocation_Params
	{
	public:
		class APrimalCharacter*                                    RidingCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CanHover
	 */
	struct ATekHoverSail_Character_BP_C_CanHover_Params
	{
	public:
		bool                                                       bForStart;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnTamedOrderReceived
	 */
	struct ATekHoverSail_Character_BP_C_BP_OnTamedOrderReceived_Params
	{
	public:
		class APrimalCharacter*                                    FromCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EDinoTamedOrder                                            OrderType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForce;                                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AF3V[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              enemyTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       orderNotExecuted;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.WantsToFlyUp
	 */
	struct ATekHoverSail_Character_BP_C_WantsToFlyUp_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_CheckSkiffInputs
	 */
	struct ATekHoverSail_Character_BP_C_Tick_CheckSkiffInputs_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.UpdateSyncedFuelAmount
	 */
	struct ATekHoverSail_Character_BP_C_UpdateSyncedFuelAmount_Params
	{
	public:
		bool                                                       bWasChanged;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetSkiffBlockersTraceIgnoreActors
	 */
	struct ATekHoverSail_Character_BP_C_GetSkiffBlockersTraceIgnoreActors_Params
	{
	public:
		TArray<class AActor*>                                      IgnoreActors;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageSkiffCamera
	 */
	struct ATekHoverSail_Character_BP_C_Tick_ManageSkiffCamera_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsPhysicsVolumeLava
	 */
	struct ATekHoverSail_Character_BP_C_IsPhysicsVolumeLava_Params
	{
	public:
		class APhysicsVolume*                                      CheckVolume;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLava;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D6HE[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CanSkiffTryToTrulyLand
	 */
	struct ATekHoverSail_Character_BP_C_CanSkiffTryToTrulyLand_Params
	{
	public:
		struct FVector                                             WithFlyingVelocity;                                      // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnStartLandFailed
	 */
	struct ATekHoverSail_Character_BP_C_BP_OnStartLandFailed_Params
	{
	public:
		int32_t                                                    ReasonIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ResetSkiffInputs
	 */
	struct ATekHoverSail_Character_BP_C_ResetSkiffInputs_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetEnvironmentalParticleTraceDistance
	 */
	struct ATekHoverSail_Character_BP_C_GetEnvironmentalParticleTraceDistance_Params
	{
	public:
		class FName                                                ForSocketName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      traceDist;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveDestroyed
	 */
	struct ATekHoverSail_Character_BP_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageHoverGroundFX
	 */
	struct ATekHoverSail_Character_BP_C_Tick_ManageHoverGroundFX_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffFailedTakeoff
	 */
	struct ATekHoverSail_Character_BP_C_OnSkiffFailedTakeoff_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.SetTargetHoverHeight
	 */
	struct ATekHoverSail_Character_BP_C_SetTargetHoverHeight_Params
	{
	public:
		float                                                      NewHeight;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.UpdateSkiffHoverState
	 */
	struct ATekHoverSail_Character_BP_C_UpdateSkiffHoverState_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffHoverStateChanged
	 */
	struct ATekHoverSail_Character_BP_C_OnSkiffHoverStateChanged_Params
	{
	public:
		E_HoverSkiffHoverState                                     NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_HoverSkiffHoverState                                     PreviousState;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U0XW[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.NetSetSkiffHoverState
	 */
	struct ATekHoverSail_Character_BP_C_NetSetSkiffHoverState_Params
	{
	public:
		E_HoverSkiffHoverState                                     NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 */
	struct ATekHoverSail_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetMinHoverHeight
	 */
	struct ATekHoverSail_Character_BP_C_GetMinHoverHeight_Params
	{
	public:
		float                                                      MinHeight;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsSkiffChangingHoverHeight
	 */
	struct ATekHoverSail_Character_BP_C_IsSkiffChangingHoverHeight_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3KP8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_CanFly
	 */
	struct ATekHoverSail_Character_BP_C_BP_CanFly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageFuel
	 */
	struct ATekHoverSail_Character_BP_C_Tick_ManageFuel_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetHUDElements
	 */
	struct ATekHoverSail_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveAnyDamage
	 */
	struct ATekHoverSail_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q9C0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OverrideTerminalVelocity
	 */
	struct ATekHoverSail_Character_BP_C_BP_OverrideTerminalVelocity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.KillSkiff
	 */
	struct ATekHoverSail_Character_BP_C_KillSkiff_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffCrash
	 */
	struct ATekHoverSail_Character_BP_C_OnSkiffCrash_Params
	{
	public:
		bool                                                       bFromImpact;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_PreventMovementMode
	 */
	struct ATekHoverSail_Character_BP_C_BP_PreventMovementMode_Params
	{
	public:
		EMovementMode                                              NewMovementMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_Crashing
	 */
	struct ATekHoverSail_Character_BP_C_Tick_Crashing_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffStartedCrashing
	 */
	struct ATekHoverSail_Character_BP_C_OnSkiffStartedCrashing_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPAdjustDamage
	 */
	struct ATekHoverSail_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HGXW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NCQ2[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifySetRider
	 */
	struct ATekHoverSail_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.UpdateOwningClientReplicatedInputs
	 */
	struct ATekHoverSail_Character_BP_C_UpdateOwningClientReplicatedInputs_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.SetSkiffMovementInputAxisValue
	 */
	struct ATekHoverSail_Character_BP_C_SetSkiffMovementInputAxisValue_Params
	{
	public:
		int32_t                                                    Axis;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Newval;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_InterceptMoveRight
	 */
	struct ATekHoverSail_Character_BP_C_BP_InterceptMoveRight_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LZ9A[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_InterceptMoveForward
	 */
	struct ATekHoverSail_Character_BP_C_BP_InterceptMoveForward_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPModifyRightDirectionInput
	 */
	struct ATekHoverSail_Character_BP_C_BPModifyRightDirectionInput_Params
	{
	public:
		struct FVector                                             directionInput;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPShouldLimitRightDirection
	 */
	struct ATekHoverSail_Character_BP_C_BPShouldLimitRightDirection_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_AllowWalkableSlopeOverride
	 */
	struct ATekHoverSail_Character_BP_C_BP_AllowWalkableSlopeOverride_Params
	{
	public:
		class UPrimitiveComponent*                                 ForComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnMovementModeChangedNotify
	 */
	struct ATekHoverSail_Character_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffSetFlight
	 */
	struct ATekHoverSail_Character_BP_C_OnSkiffSetFlight_Params
	{
	public:
		bool                                                       bFly;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnSetFlight
	 */
	struct ATekHoverSail_Character_BP_C_BPOnSetFlight_Params
	{
	public:
		bool                                                       bFly;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveHit
	 */
	struct ATekHoverSail_Character_BP_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GLZO[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DoSkiffHoverTraces
	 */
	struct ATekHoverSail_Character_BP_C_DoSkiffHoverTraces_Params
	{
	public:
		bool                                                       bForceTraces;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnLanded
	 */
	struct ATekHoverSail_Character_BP_C_OnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffLandingStageChanged
	 */
	struct ATekHoverSail_Character_BP_C_OnSkiffLandingStageChanged_Params
	{
	public:
		bool                                                       bLanding;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EFH7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnStartLandingNotify
	 */
	struct ATekHoverSail_Character_BP_C_BP_OnStartLandingNotify_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CanSendInputRPC
	 */
	struct ATekHoverSail_Character_BP_C_CanSendInputRPC_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8SS7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetOverrideCameraInterpSpeed
	 */
	struct ATekHoverSail_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params
	{
	public:
		float                                                      DefaultTPVCameraSpeedInterpolationMultiplier;            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DefaultTPVOffsetInterpSpeed;                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TPVCameraSpeedInterpolationMultiplier;                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TPVOffsetInterpSpeed;                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_GetCustomModifier_RotationRate
	 */
	struct ATekHoverSail_Character_BP_C_BP_GetCustomModifier_RotationRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOverrideFlyingVelocity
	 */
	struct ATekHoverSail_Character_BP_C_BPOverrideFlyingVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPModifyDesiredRotation
	 */
	struct ATekHoverSail_Character_BP_C_BPModifyDesiredRotation_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            InDesiredRotation;                                       // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            OutDesiredRotation;                                      // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.SetForceSkiffDescend
	 */
	struct ATekHoverSail_Character_BP_C_SetForceSkiffDescend_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.StopHovering
	 */
	struct ATekHoverSail_Character_BP_C_StopHovering_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.SetTimerIntervals
	 */
	struct ATekHoverSail_Character_BP_C_SetTimerIntervals_Params
	{
	public:
		bool                                                       Fast;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W11H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPShouldLimitForwardDirection
	 */
	struct ATekHoverSail_Character_BP_C_BPShouldLimitForwardDirection_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPModifyForwardDirectionInput
	 */
	struct ATekHoverSail_Character_BP_C_BPModifyForwardDirectionInput_Params
	{
	public:
		struct FVector                                             directionInput;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPTimerServer
	 */
	struct ATekHoverSail_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPTimerNonDedicated
	 */
	struct ATekHoverSail_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.UserConstructionScript
	 */
	struct ATekHoverSail_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.wobble timeline__FinishedFunc
	 */
	struct ATekHoverSail_Character_BP_C_wobbletimeline__FinishedFunc_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.wobble timeline__UpdateFunc
	 */
	struct ATekHoverSail_Character_BP_C_wobbletimeline__UpdateFunc_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_0__FinishedFunc
	 */
	struct ATekHoverSail_Character_BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_0__UpdateFunc
	 */
	struct ATekHoverSail_Character_BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_1__FinishedFunc
	 */
	struct ATekHoverSail_Character_BP_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_1__UpdateFunc
	 */
	struct ATekHoverSail_Character_BP_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_2__FinishedFunc
	 */
	struct ATekHoverSail_Character_BP_C_Timeline_2__FinishedFunc_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_2__UpdateFunc
	 */
	struct ATekHoverSail_Character_BP_C_Timeline_2__UpdateFunc_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.InterceptInputEvent
	 */
	struct ATekHoverSail_Character_BP_C_InterceptInputEvent_Params
	{
	public:
		class FString                                              InputName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_RequestBraking
	 */
	struct ATekHoverSail_Character_BP_C_Server_RequestBraking_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveBeginPlay
	 */
	struct ATekHoverSail_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPUnstasis
	 */
	struct ATekHoverSail_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnStartSkiffLanding
	 */
	struct ATekHoverSail_Character_BP_C_Multi_OnStartSkiffLanding_Params
	{
	public:
		bool                                                       bLanding;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffSetFlight
	 */
	struct ATekHoverSail_Character_BP_C_Multi_OnSkiffSetFlight_Params
	{
	public:
		bool                                                       bFly;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_SyncMovementInputs
	 */
	struct ATekHoverSail_Character_BP_C_Server_SyncMovementInputs_Params
	{
	public:
		struct FVector                                             MoveInputs;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_OnFireInputPressed
	 */
	struct ATekHoverSail_Character_BP_C_Server_OnFireInputPressed_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_OnTargetingInputPressed
	 */
	struct ATekHoverSail_Character_BP_C_Server_OnTargetingInputPressed_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffStartedCrashing
	 */
	struct ATekHoverSail_Character_BP_C_Multi_OnSkiffStartedCrashing_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffCrash
	 */
	struct ATekHoverSail_Character_BP_C_Multi_OnSkiffCrash_Params
	{
	public:
		bool                                                       bFromImpact;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DestroySkiff
	 */
	struct ATekHoverSail_Character_BP_C_DestroySkiff_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CrashTimeout
	 */
	struct ATekHoverSail_Character_BP_C_CrashTimeout_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffHoverStateChanged
	 */
	struct ATekHoverSail_Character_BP_C_Multi_OnSkiffHoverStateChanged_Params
	{
	public:
		E_HoverSkiffHoverState                                     NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_HoverSkiffHoverState                                     PreviousState;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_SetSkiffHoverState
	 */
	struct ATekHoverSail_Character_BP_C_Server_SetSkiffHoverState_Params
	{
	public:
		E_HoverSkiffHoverState                                     NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffFailedTakeoff
	 */
	struct ATekHoverSail_Character_BP_C_Multi_OnSkiffFailedTakeoff_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffRepairModeStateChanged
	 */
	struct ATekHoverSail_Character_BP_C_Multi_OnSkiffRepairModeStateChanged_Params
	{
	public:
		bool                                                       bNewState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_SyncFuelPercent
	 */
	struct ATekHoverSail_Character_BP_C_Multi_SyncFuelPercent_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_SetSkiffFlight
	 */
	struct ATekHoverSail_Character_BP_C_Server_SetSkiffFlight_Params
	{
	public:
		bool                                                       NewFlight;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_StartSkiffLanding
	 */
	struct ATekHoverSail_Character_BP_C_Server_StartSkiffLanding_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.multi close sail
	 */
	struct ATekHoverSail_Character_BP_C_multiclosesail_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.multi open sail
	 */
	struct ATekHoverSail_Character_BP_C_multiopensail_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.full boosted multicast
	 */
	struct ATekHoverSail_Character_BP_C_fullboostedmulticast_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.open sail
	 */
	struct ATekHoverSail_Character_BP_C_opensail_Params
	{
	public:
		bool                                                       isopen;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.wobble
	 */
	struct ATekHoverSail_Character_BP_C_wobble_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.resync anim
	 */
	struct ATekHoverSail_Character_BP_C_resyncanim_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_SyncAim
	 */
	struct ATekHoverSail_Character_BP_C_Server_SyncAim_Params
	{
	public:
		struct FVector                                             AimingDirection;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Successfully Lands A Trick
	 */
	struct ATekHoverSail_Character_BP_C_SuccessfullyLandsATrick_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.play camera impact on ground
	 */
	struct ATekHoverSail_Character_BP_C_playcameraimpactonground_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.on start aerial boost
	 */
	struct ATekHoverSail_Character_BP_C_onstartaerialboost_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ServerSyncMovementValues
	 */
	struct ATekHoverSail_Character_BP_C_ServerSyncMovementValues_Params
	{
	public:
		float                                                      syncedright;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      SyncedFwd;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.on recharge aerial boost
	 */
	struct ATekHoverSail_Character_BP_C_onrechargeaerialboost_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.on delay before recharge aerial boost
	 */
	struct ATekHoverSail_Character_BP_C_ondelaybeforerechargeaerialboost_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Drift Boosted Multicast
	 */
	struct ATekHoverSail_Character_BP_C_DriftBoostedMulticast_Params
	{
	public:
		struct FVector                                             boostdirection;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       forwardboost;                                            // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multicast completed trick in air
	 */
	struct ATekHoverSail_Character_BP_C_Multicastcompletedtrickinair_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.PUBLIC: Add Aerial Boost Charge Percentage Amount
	 */
	struct ATekHoverSail_Character_BP_C_PUBLICAddAerialBoostChargePercentageAmount_Params
	{
	public:
		float                                                      Percentage;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.multicast add aerial boost charge
	 */
	struct ATekHoverSail_Character_BP_C_multicastaddaerialboostcharge_Params
	{
	public:
		float                                                      Percentage;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.lerp to riding socket
	 */
	struct ATekHoverSail_Character_BP_C_lerptoridingsocket_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.stop lerp to riding socket
	 */
	struct ATekHoverSail_Character_BP_C_stoplerptoridingsocket_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.lerp to open sail socket
	 */
	struct ATekHoverSail_Character_BP_C_lerptoopensailsocket_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.stop lerp to open sail socket
	 */
	struct ATekHoverSail_Character_BP_C_stoplerptoopensailsocket_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.dismount
	 */
	struct ATekHoverSail_Character_BP_C_dismount_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multicast_RefreshColors
	 */
	struct ATekHoverSail_Character_BP_C_Multicast_RefreshColors_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.MultiTrickActivationText
	 */
	struct ATekHoverSail_Character_BP_C_MultiTrickActivationText_Params
	{	};

	/**
	 * Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ExecuteUbergraph_TekHoverSail_Character_BP
	 */
	struct ATekHoverSail_Character_BP_C_ExecuteUbergraph_TekHoverSail_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
