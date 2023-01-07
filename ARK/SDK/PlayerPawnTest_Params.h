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
	 * Function PlayerPawnTest.PlayerPawnTest_C.SetGeneralized Unlocked Achievement Tags
	 */
	struct APlayerPawnTest_C_SetGeneralizedUnlockedAchievementTags_Params
	{
	public:
		TArray<class FName>                                        GeneralizedUnlockedAchievementTags;                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.HasEquipToHideImplant
	 */
	struct APlayerPawnTest_C_HasEquipToHideImplant_Params
	{
	public:
		bool                                                       ShouldHideImplant;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SMHQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.BPSetupFirstPersonHandsMesh
	 */
	struct APlayerPawnTest_C_BPSetupFirstPersonHandsMesh_Params
	{	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.SetupMeshes
	 */
	struct APlayerPawnTest_C_SetupMeshes_Params
	{
	public:
		bool                                                       bForce;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HEQJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.BPUnlockedAllExplorerNotes
	 */
	struct APlayerPawnTest_C_BPUnlockedAllExplorerNotes_Params
	{	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.GetTheNumChibiLevelUps
	 */
	struct APlayerPawnTest_C_GetTheNumChibiLevelUps_Params
	{
	public:
		int32_t                                                    OutVal;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.SetNumChibiLevelUps
	 */
	struct APlayerPawnTest_C_SetNumChibiLevelUps_Params
	{
	public:
		int32_t                                                    NewNum;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.BPGetPlayerHexagonCount
	 */
	struct APlayerPawnTest_C_BPGetPlayerHexagonCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TCR5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.BPSetPlayerHexagonCount
	 */
	struct APlayerPawnTest_C_BPSetPlayerHexagonCount_Params
	{
	public:
		int32_t                                                    NewHexagonCount;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AL67[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.BPGetShowDebugAnimationComponents
	 */
	struct APlayerPawnTest_C_BPGetShowDebugAnimationComponents_Params
	{
	public:
		TArray<class USkeletalMeshComponent*>                      SkelMeshComponents;                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.BPGetOverrideCameraInterpSpeed
	 */
	struct APlayerPawnTest_C_BPGetOverrideCameraInterpSpeed_Params
	{
	public:
		float                                                      DefaultTPVCameraSpeedInterpolationMultiplier;            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DefaultTPVOffsetInterpSpeed;                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TPVCameraSpeedInterpolationMultiplier;                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TPVOffsetInterpSpeed;                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.ShowHUDNotification
	 */
	struct APlayerPawnTest_C_ShowHUDNotification_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      LifetimeSeconds;                                         // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DisplayScale;                                            // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USoundCue*                                           SoundToPlay;                                             // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.TrySpawnMound
	 */
	struct APlayerPawnTest_C_TrySpawnMound_Params
	{	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.TrySpawnMoundEx
	 */
	struct APlayerPawnTest_C_TrySpawnMoundEx_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Range;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.BPSetFirstPersonMasterPoseComponent
	 */
	struct APlayerPawnTest_C_BPSetFirstPersonMasterPoseComponent_Params
	{
	public:
		class USkeletalMeshComponent*                              firstPersonMasterPosecomponent;                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.DefeatedBoss
	 */
	struct APlayerPawnTest_C_DefeatedBoss_Params
	{
	public:
		class APrimalDinoCharacter*                                BossCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                BossTag;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    BossDifficulty;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YJFL[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.ServerAscend
	 */
	struct APlayerPawnTest_C_ServerAscend_Params
	{
	public:
		int32_t                                                    DifficultyIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bImmediateAscend;                                        // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSuppressAchievements;                                   // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.PlayerCommand
	 */
	struct APlayerPawnTest_C_PlayerCommand_Params
	{
	public:
		class FString                                              TheCommand;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.InitHairRestDistance
	 */
	struct APlayerPawnTest_C_InitHairRestDistance_Params
	{	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.SetLastTransforms
	 */
	struct APlayerPawnTest_C_SetLastTransforms_Params
	{	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.BPNonDedicatedPostAnimUpdate
	 */
	struct APlayerPawnTest_C_BPNonDedicatedPostAnimUpdate_Params
	{	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.Setup Collision Volumes
	 */
	struct APlayerPawnTest_C_SetupCollisionVolumes_Params
	{	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.SetupNewHairstyle
	 */
	struct APlayerPawnTest_C_SetupNewHairstyle_Params
	{	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.UpdateHair
	 */
	struct APlayerPawnTest_C_UpdateHair_Params
	{	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.SetHairParams
	 */
	struct APlayerPawnTest_C_SetHairParams_Params
	{
	public:
		struct FVector                                             HairSocketLoc;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            HairSocketRot;                                           // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             NeckSocketLoc;                                           // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            NeckSocketrot;                                           // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.SimulateHair
	 */
	struct APlayerPawnTest_C_SimulateHair_Params
	{
	public:
		struct FVector                                             HairSocketLoc;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            HairSocketRot;                                           // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             ChestSocketLoc;                                          // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            ChestSocketRot;                                          // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.UserConstructionScript
	 */
	struct APlayerPawnTest_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.ReceiveBeginPlay
	 */
	struct APlayerPawnTest_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.NetClientAscend
	 */
	struct APlayerPawnTest_C_NetClientAscend_Params
	{
	public:
		int32_t                                                    AscendIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bImmediateAscend;                                        // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.ClientShowHUDNotification
	 */
	struct APlayerPawnTest_C_ClientShowHUDNotification_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      LifetimeSeconds;                                         // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DisplayScale;                                            // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USoundCue*                                           SoundToPlay;                                             // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.NetClientPreLoadAcension
	 */
	struct APlayerPawnTest_C_NetClientPreLoadAcension_Params
	{	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.ExecuteUbergraph_PlayerPawnTest
	 */
	struct APlayerPawnTest_C_ExecuteUbergraph_PlayerPawnTest_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
