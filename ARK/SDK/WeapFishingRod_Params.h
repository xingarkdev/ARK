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
	 * Function WeapFishingRod.WeapFishingRod_C.ResolveSoftReferences
	 */
	struct AWeapFishingRod_C_ResolveSoftReferences_Params
	{	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.ReceiveEndPlay
	 */
	struct AWeapFishingRod_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.Draw Crosshair While Riding Dino
	 */
	struct AWeapFishingRod_C_DrawCrosshairWhileRidingDino_Params
	{
	public:
		bool                                                       shouldDraw;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.AllowFishing
	 */
	struct AWeapFishingRod_C_AllowFishing_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WUBR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.IsOwnerInCaveVolume
	 */
	struct AWeapFishingRod_C_IsOwnerInCaveVolume_Params
	{
	public:
		bool                                                       ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7SQG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.GiveFishLoot
	 */
	struct AWeapFishingRod_C_GiveFishLoot_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalDinoCharacter*                                Outer;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OutQuality;                                              // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HA4S[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.GetNum Remaining Reel Keys
	 */
	struct AWeapFishingRod_C_GetNumRemainingReelKeys_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.CalculateDistanceToCover
	 */
	struct AWeapFishingRod_C_CalculateDistanceToCover_Params
	{
	public:
		bool                                                       UnderWater;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9H1P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DistanceToCover;                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.Get Reeled Fish Target Location
	 */
	struct AWeapFishingRod_C_GetReeledFishTargetLocation_Params
	{
	public:
		struct FVector                                             TargetLocation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.UpdateBaitMeshLocation
	 */
	struct AWeapFishingRod_C_UpdateBaitMeshLocation_Params
	{	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.PlayFishAttackAnimation
	 */
	struct AWeapFishingRod_C_PlayFishAttackAnimation_Params
	{	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.IsPointInWater
	 */
	struct AWeapFishingRod_C_IsPointInWater_Params
	{
	public:
		struct FVector                                             Point;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Return;                                                  // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.HandleReleasingFish
	 */
	struct AWeapFishingRod_C_HandleReleasingFish_Params
	{	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.OnInstigatorPlayDyingEvent
	 */
	struct AWeapFishingRod_C_OnInstigatorPlayDyingEvent_Params
	{	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.StartUnequipEvent
	 */
	struct AWeapFishingRod_C_StartUnequipEvent_Params
	{	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.BPGetSeatingAnimation
	 */
	struct AWeapFishingRod_C_BPGetSeatingAnimation_Params
	{
	public:
		class UAnimSequence*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.UpdateToBeSnaredFish
	 */
	struct AWeapFishingRod_C_UpdateToBeSnaredFish_Params
	{	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.Finish SnaringFish
	 */
	struct AWeapFishingRod_C_FinishSnaringFish_Params
	{	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.OnRGKeySuccess
	 */
	struct AWeapFishingRod_C_OnRGKeySuccess_Params
	{	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.TugFishingCable
	 */
	struct AWeapFishingRod_C_TugFishingCable_Params
	{
	public:
		int32_t                                                    RemainingMoves;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.GetReelingGameDuration
	 */
	struct AWeapFishingRod_C_GetReelingGameDuration_Params
	{
	public:
		class APrimalDinoCharacter*                                ReeledFish;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Duration;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.OnStartPlayAnimation
	 */
	struct AWeapFishingRod_C_OnStartPlayAnimation_Params
	{	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.StartSecondaryActionEvent
	 */
	struct AWeapFishingRod_C_StartSecondaryActionEvent_Params
	{	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.CanSnareFish
	 */
	struct AWeapFishingRod_C_CanSnareFish_Params
	{
	public:
		class APrimalDinoCharacter*                                fish;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanSnare;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XW9S[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.GenerateRandomKeys
	 */
	struct AWeapFishingRod_C_GenerateRandomKeys_Params
	{
	public:
		int32_t                                                    NumSets;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    NumSetKeys;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FKey>                                        Keys;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.FishSnared
	 */
	struct AWeapFishingRod_C_FishSnared_Params
	{
	public:
		class APrimalDinoCharacter*                                fish;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.UpdateSurroundingPrey
	 */
	struct AWeapFishingRod_C_UpdateSurroundingPrey_Params
	{	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.GetCableEndPoint
	 */
	struct AWeapFishingRod_C_GetCableEndPoint_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             EndPoint;                                                // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.StartFishing
	 */
	struct AWeapFishingRod_C_StartFishing_Params
	{
	public:
		struct FVector                                             BaitTargetLocation;                                      // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             BaitWaterSurfaceLocation;                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.OnFishReleased
	 */
	struct AWeapFishingRod_C_OnFishReleased_Params
	{
	public:
		class APrimalDinoCharacter*                                fish;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.OnFishSnared
	 */
	struct AWeapFishingRod_C_OnFishSnared_Params
	{
	public:
		class APrimalDinoCharacter*                                fish;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.ReleaseReeledFish
	 */
	struct AWeapFishingRod_C_ReleaseReeledFish_Params
	{	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.CaughtFish
	 */
	struct AWeapFishingRod_C_CaughtFish_Params
	{
	public:
		class APrimalDinoCharacter*                                CaughtFish;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.ReelingGameFinished
	 */
	struct AWeapFishingRod_C_ReelingGameFinished_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.StartReelingGame
	 */
	struct AWeapFishingRod_C_StartReelingGame_Params
	{
	public:
		class APrimalDinoCharacter*                                ReeledFish;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.End Fishing
	 */
	struct AWeapFishingRod_C_EndFishing_Params
	{
	public:
		bool                                                       releaseFish;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LRA5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.CheckFishingConditions
	 */
	struct AWeapFishingRod_C_CheckFishingConditions_Params
	{
	public:
		bool                                                       retCanFish;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.ReceiveBeginPlay
	 */
	struct AWeapFishingRod_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.GetCableAttachComponent
	 */
	struct AWeapFishingRod_C_GetCableAttachComponent_Params
	{
	public:
		class USceneComponent*                                     Comp;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.UpdateCableComponent
	 */
	struct AWeapFishingRod_C_UpdateCableComponent_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.ReceiveTick
	 */
	struct AWeapFishingRod_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.BPWeaponCanFire
	 */
	struct AWeapFishingRod_C_BPWeaponCanFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.UserConstructionScript
	 */
	struct AWeapFishingRod_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.EndFishingEvent
	 */
	struct AWeapFishingRod_C_EndFishingEvent_Params
	{
	public:
		bool                                                       releaseFish;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.StartReelingGameEvent
	 */
	struct AWeapFishingRod_C_StartReelingGameEvent_Params
	{
	public:
		class APrimalDinoCharacter*                                ReeledInFish;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.ReelingGameFinishedEvent
	 */
	struct AWeapFishingRod_C_ReelingGameFinishedEvent_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.OnFishSnaredEvent
	 */
	struct AWeapFishingRod_C_OnFishSnaredEvent_Params
	{
	public:
		class APrimalDinoCharacter*                                fish;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.OnFishReleasedEvent
	 */
	struct AWeapFishingRod_C_OnFishReleasedEvent_Params
	{
	public:
		class APrimalDinoCharacter*                                fish;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.BPAnimNotifyCustomState_Begin
	 */
	struct AWeapFishingRod_C_BPAnimNotifyCustomState_Begin_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TotalDuration;                                           // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TQRP[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimNotifyState*                                    AnimNotifyObject;                                        // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.ServerStartFishing
	 */
	struct AWeapFishingRod_C_ServerStartFishing_Params
	{
	public:
		struct FVector                                             BaitTargetLocation;                                      // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             BaitWaterSurfaceLocation;                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.ServerEndFishing
	 */
	struct AWeapFishingRod_C_ServerEndFishing_Params
	{
	public:
		bool                                                       releaseFish;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.ServerTugCable
	 */
	struct AWeapFishingRod_C_ServerTugCable_Params
	{
	public:
		int32_t                                                    RemainingMoves;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.TugCableEvent
	 */
	struct AWeapFishingRod_C_TugCableEvent_Params
	{
	public:
		int32_t                                                    RemainingMoves;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.StartFishingEventMulti
	 */
	struct AWeapFishingRod_C_StartFishingEventMulti_Params
	{
	public:
		struct FVector                                             BaitTargetLocation;                                      // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             BaitWaterSurfaceLocation;                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.DrawRotation
	 */
	struct AWeapFishingRod_C_DrawRotation_Params
	{
	public:
		struct FVector                                             NewParam;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewParam1;                                               // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.ServerStartDeathHarvest
	 */
	struct AWeapFishingRod_C_ServerStartDeathHarvest_Params
	{
	public:
		class APrimalDinoCharacter*                                PrimalDinoChar;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.ExecuteUbergraph_WeapFishingRod
	 */
	struct AWeapFishingRod_C_ExecuteUbergraph_WeapFishingRod_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingRod.WeapFishingRod_C.FishCaughtDispatcherSingle__DelegateSignature
	 */
	struct AWeapFishingRod_C_FishCaughtDispatcherSingle__DelegateSignature_Params
	{
	public:
		float                                                      CaughtFishWildScale;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AC3B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              NetOwner;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              FishClass;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UObject*                                             FishReference;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
