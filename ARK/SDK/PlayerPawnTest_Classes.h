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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass PlayerPawnTest.PlayerPawnTest_C
	 * Size -> 0x0419 (FullSize[0x2119] - InheritedSize[0x1D00])
	 */
	class APlayerPawnTest_C : public AShooterCharacter
	{
	public:
		class USkeletalMeshComponent*                              SecondaryMesh1P;                                         // 0x1D00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                SecondaryImplantTPV;                                     // 0x1D08(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                ImplantTPV;                                              // 0x1D10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    StasisComponent;                                         // 0x1D18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UPrimalInventoryComponent*                           PrimalInventory1;                                        // 0x1D20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PUJY[0x8];                                   // 0x1D28(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LastHeadTransform;                                       // 0x1D30(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TimeAccumulator;                                         // 0x1D60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UpdateRate;                                              // 0x1D64(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FVector>                                     CurrentPos;                                              // 0x1D68(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FVector>                                     LastPos;                                                 // 0x1D78(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FVector>                                     RestPos;                                                 // 0x1D88(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FVector>                                     PivotPos;                                                // 0x1D98(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      GravityForce;                                            // 0x1DA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DragForce;                                               // 0x1DAC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Damping;                                                 // 0x1DB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SpringForce;                                             // 0x1DB4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      HairScale;                                               // 0x1DB8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SpringForceFrontModifier;                                // 0x1DBC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DampingFrontModifier;                                    // 0x1DC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SpringForceBack;                                         // 0x1DC4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DampingBack;                                             // 0x1DC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6XL4[0x4];                                   // 0x1DCC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              RestDistance;                                            // 0x1DD0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    HairIndex;                                               // 0x1DE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                HairSocketName;                                          // 0x1DE4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HeadCollisionRadius;                                     // 0x1DEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      HeadHairCollisionRadius;                                 // 0x1DF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             HeadCollisionOffset;                                     // 0x1DF4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      NeckCollisionRadius;                                     // 0x1E00(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             NeckCollisionOffset;                                     // 0x1E04(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ShoulderLCollisionRadius;                                // 0x1E10(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             ShoulderLCollisionOffset;                                // 0x1E14(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ShoulderRCollisionRadius;                                // 0x1E20(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             ShoulderRCollisionOffset;                                // 0x1E24(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      NeckHairCollisionRadius;                                 // 0x1E30(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             NeckHairCollisionOffset;                                 // 0x1E34(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDebugHair;                                              // 0x1E40(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z4V8[0x3];                                   // 0x1E41(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LastHairSocketPosition;                                  // 0x1E44(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastTimeHairSocketMoved;                                 // 0x1E50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                ChestSocketName;                                         // 0x1E58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                NeckSocketName;                                          // 0x1E60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bResetHair;                                              // 0x1E68(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BZ28[0x3];                                   // 0x1E69(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UpdateMaxNumSubsteps;                                    // 0x1E6C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaximumHairUpdateDistance;                               // 0x1E70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FGTL[0xC];                                   // 0x1E74(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LastHairSocketTransform;                                 // 0x1E80(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          LastNeckSocketTransform;                                 // 0x1EB0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          LastChestSocketTransform;                                // 0x1EE0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HairSimulationSpeed;                                     // 0x1F10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HairMaterialTime;                                        // 0x1F14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxDistanceToRestPos;                                    // 0x1F18(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      InWater;                                                 // 0x1F1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HairWetness;                                             // 0x1F20(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Waterline;                                               // 0x1F24(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPosAsPivot;                                             // 0x1F28(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bCollideWithNeck;                                        // 0x1F29(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bCollideMiddle;                                          // 0x1F2A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WQ8P[0x1];                                   // 0x1F2B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumAscensions;                                           // 0x1F2C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<class USkeletalMesh*>                               AscensionMeshesFPV;                                      // 0x1F30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UStaticMesh*>                                 AscensionMeshesTPV;                                      // 0x1F40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      AlphaAscensionEngrams;                                   // 0x1F50(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    NumAscensionsAb;                                         // 0x1F60(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BLX9[0x4];                                   // 0x1F64(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStaticMesh*>                                 AscensionMeshesTPV_Ab;                                   // 0x1F68(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class USkeletalMesh*>                               AscensionMeshesFPV_Ab;                                   // 0x1F78(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FName                                                TestAscensionBossNameTag;                                // 0x1F88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UStaticMesh*>                                 AscensionMeshesTPV_Ext;                                  // 0x1F90(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class USkeletalMesh*>                               AscensionMeshesFPV_Ext;                                  // 0x1FA0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    NumAscensionsExt;                                        // 0x1FB0(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZDR7[0x4];                                   // 0x1FB4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CurrentDome;                                             // 0x1FB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseNativeHairSim;                                       // 0x1FC0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, CPF_SkipSerialization
		unsigned char                                              UnknownData_CQVK[0x7];                                   // 0x1FC1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrentCruiseMissileMessage;                             // 0x1FC8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    NumChibiLevelUps;                                        // 0x1FD8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    NumAscensionsGenesis;                                    // 0x1FDC(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    NumAscensionsGen2;                                       // 0x1FE0(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUnlockedAllExplorerNotes;                               // 0x1FE4(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHasSetupMeshes;                                         // 0x1FE5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UT6H[0x2];                                   // 0x1FE6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            RestrictedLevelsBasedOnUnobtainedGeneralizedAchievementTags; // 0x1FE8(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance
		TArray<class FName>                                        GeneralizedUnlockedAchievementTags;                      // 0x1FF8(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic
		int32_t                                                    NumAscensionsScorched;                                   // 0x2008(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x200C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x200D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_26E3[0x2];                                   // 0x200E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    K2Node_CustomEvent_AscendIndex;                          // 0x2010(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_bImmediateAscend;                     // 0x2014(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IVZV[0x3];                                   // 0x2015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CallFunc_MakeLiteralName_ReturnValue;                    // 0x2018(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FString                                              CallFunc_Conv_NameToString_ReturnValue;                  // 0x2020(0x0010) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x2030(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CXS2[0x4];                                   // 0x2034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CallFunc_Conv_IntToString_ReturnValue;                   // 0x2038(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue;                        // 0x2048(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FString                                              CallFunc_Concat_StrStr_ReturnValue;                      // 0x2050(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class AController*                                         CallFunc_GetController_ReturnValue;                      // 0x2060(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_TriggerLevelCustomEvents_ReturnValue;           // 0x2068(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T2RK[0x7];                                   // 0x2069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterPlayerController*                            K2Node_DynamicCast_AsShooterPlayerController;            // 0x2070(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x2078(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VBU2[0x7];                                   // 0x2079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UShooterGameUserSettings*                            CallFunc_GetUserSettings_ReturnValue;                    // 0x2080(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UFinalCreditsUI_C*                                   CallFunc_Create_ReturnValue;                             // 0x2088(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Max_ReturnValue;                                // 0x2090(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QR49[0x4];                                   // 0x2094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              K2Node_CustomEvent_Text;                                 // 0x2098(0x0010) ZeroConstructor, Transient, DuplicateTransient
		struct FLinearColor                                        K2Node_CustomEvent_color;                                // 0x20A8(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_LifetimeSeconds;                      // 0x20B8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_DisplayScale;                         // 0x20BC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class USoundCue*                                           K2Node_CustomEvent_SoundToPlay;                          // 0x20C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FColor                                              CallFunc_Conv_LinearColorToColor_ReturnValue;            // 0x20C8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DUM3[0x4];                                   // 0x20CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         CallFunc_GetController_ReturnValue2;                     // 0x20D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterPlayerController*                            K2Node_DynamicCast_AsShooterPlayerController2;           // 0x20D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x20E0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CDUX[0x7];                                   // 0x20E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue2;                       // 0x20E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterHUD*                                         CallFunc_GetShooterHUD_ReturnValue;                      // 0x20F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_TriggerLevelCustomEvents_ReturnValue2;          // 0x20F8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsShipping_ReturnValue;                         // 0x20F9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N7RJ[0x6];                                   // 0x20FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue3;                       // 0x2100(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FString                                              CallFunc_BPGetPrimaryMapName_ReturnValue;                // 0x2108(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_EqualEqual_StrStr_ReturnValue;                  // 0x2118(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void SetGeneralizedUnlockedAchievementTags(TArray<class FName>* GeneralizedUnlockedAchievementTags);
		void HasEquipToHideImplant(bool* ShouldHideImplant);
		void BPSetupFirstPersonHandsMesh();
		void SetupMeshes(bool bForce);
		void BPUnlockedAllExplorerNotes();
		void GetTheNumChibiLevelUps(int32_t* OutVal);
		void SetNumChibiLevelUps(int32_t NewNum);
		int32_t BPGetPlayerHexagonCount();
		bool BPSetPlayerHexagonCount(int32_t NewHexagonCount);
		void BPGetShowDebugAnimationComponents(TArray<class USkeletalMeshComponent*>* SkelMeshComponents);
		void BPGetOverrideCameraInterpSpeed(float DefaultTPVCameraSpeedInterpolationMultiplier, float DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed);
		void ShowHUDNotification(const class FString& Text, const struct FLinearColor& Color, float LifetimeSeconds, float DisplayScale, class USoundCue* SoundToPlay);
		void TrySpawnMound();
		void TrySpawnMoundEx(float Angle, float Range);
		void BPSetFirstPersonMasterPoseComponent(class USkeletalMeshComponent* firstPersonMasterPosecomponent);
		void DefeatedBoss(class APrimalDinoCharacter* BossCharacter, const class FName& BossTag, int32_t BossDifficulty);
		void ServerAscend(int32_t DifficultyIndex, bool bImmediateAscend, bool bSuppressAchievements);
		class FString PlayerCommand(const class FString& TheCommand);
		void InitHairRestDistance();
		void SetLastTransforms();
		void BPNonDedicatedPostAnimUpdate();
		void SetupCollisionVolumes();
		void SetupNewHairstyle();
		void UpdateHair();
		void SetHairParams(struct FVector* HairSocketLoc, struct FRotator* HairSocketRot, struct FVector* NeckSocketLoc, struct FRotator* NeckSocketrot);
		void SimulateHair(struct FVector* HairSocketLoc, struct FRotator* HairSocketRot, struct FVector* ChestSocketLoc, struct FRotator* ChestSocketRot, float DeltaTime);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void NetClientAscend(int32_t AscendIndex, bool bImmediateAscend);
		void ClientShowHUDNotification(const class FString& Text, const struct FLinearColor& Color, float LifetimeSeconds, float DisplayScale, class USoundCue* SoundToPlay);
		void NetClientPreLoadAcension();
		void ExecuteUbergraph_PlayerPawnTest(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
