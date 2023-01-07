/**
 * Name: ARK
 * Version: 1.0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.SetGeneralized Unlocked Achievement Tags
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                GeneralizedUnlockedAchievementTags                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void APlayerPawnTest_C::SetGeneralizedUnlockedAchievementTags(TArray<class FName>* GeneralizedUnlockedAchievementTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.SetGeneralized Unlocked Achievement Tags");
		
		APlayerPawnTest_C_SetGeneralizedUnlockedAchievementTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GeneralizedUnlockedAchievementTags != nullptr)
			*GeneralizedUnlockedAchievementTags = params.GeneralizedUnlockedAchievementTags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.HasEquipToHideImplant
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ShouldHideImplant                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawnTest_C::HasEquipToHideImplant(bool* ShouldHideImplant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.HasEquipToHideImplant");
		
		APlayerPawnTest_C_HasEquipToHideImplant_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldHideImplant != nullptr)
			*ShouldHideImplant = params.ShouldHideImplant;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.BPSetupFirstPersonHandsMesh
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerPawnTest_C::BPSetupFirstPersonHandsMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPSetupFirstPersonHandsMesh");
		
		APlayerPawnTest_C_BPSetupFirstPersonHandsMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.SetupMeshes
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawnTest_C::SetupMeshes(bool bForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.SetupMeshes");
		
		APlayerPawnTest_C_SetupMeshes_Params params {};
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.BPUnlockedAllExplorerNotes
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerPawnTest_C::BPUnlockedAllExplorerNotes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPUnlockedAllExplorerNotes");
		
		APlayerPawnTest_C_BPUnlockedAllExplorerNotes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.GetTheNumChibiLevelUps
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            OutVal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawnTest_C::GetTheNumChibiLevelUps(int32_t* OutVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.GetTheNumChibiLevelUps");
		
		APlayerPawnTest_C_GetTheNumChibiLevelUps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutVal != nullptr)
			*OutVal = params.OutVal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.SetNumChibiLevelUps
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawnTest_C::SetNumChibiLevelUps(int32_t NewNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.SetNumChibiLevelUps");
		
		APlayerPawnTest_C_SetNumChibiLevelUps_Params params {};
		params.NewNum = NewNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.BPGetPlayerHexagonCount
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	int32_t APlayerPawnTest_C::BPGetPlayerHexagonCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPGetPlayerHexagonCount");
		
		APlayerPawnTest_C_BPGetPlayerHexagonCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.BPSetPlayerHexagonCount
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewHexagonCount                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool APlayerPawnTest_C::BPSetPlayerHexagonCount(int32_t NewHexagonCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPSetPlayerHexagonCount");
		
		APlayerPawnTest_C_BPSetPlayerHexagonCount_Params params {};
		params.NewHexagonCount = NewHexagonCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.BPGetShowDebugAnimationComponents
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class USkeletalMeshComponent*>              SkelMeshComponents                                         (Parm, OutParm, ZeroConstructor)
	 */
	void APlayerPawnTest_C::BPGetShowDebugAnimationComponents(TArray<class USkeletalMeshComponent*>* SkelMeshComponents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPGetShowDebugAnimationComponents");
		
		APlayerPawnTest_C_BPGetShowDebugAnimationComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SkelMeshComponents != nullptr)
			*SkelMeshComponents = params.SkelMeshComponents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.BPGetOverrideCameraInterpSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DefaultTPVCameraSpeedInterpolationMultiplier               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DefaultTPVOffsetInterpSpeed                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TPVCameraSpeedInterpolationMultiplier                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TPVOffsetInterpSpeed                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawnTest_C::BPGetOverrideCameraInterpSpeed(float DefaultTPVCameraSpeedInterpolationMultiplier, float DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPGetOverrideCameraInterpSpeed");
		
		APlayerPawnTest_C_BPGetOverrideCameraInterpSpeed_Params params {};
		params.DefaultTPVCameraSpeedInterpolationMultiplier = DefaultTPVCameraSpeedInterpolationMultiplier;
		params.DefaultTPVOffsetInterpSpeed = DefaultTPVOffsetInterpSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TPVCameraSpeedInterpolationMultiplier != nullptr)
			*TPVCameraSpeedInterpolationMultiplier = params.TPVCameraSpeedInterpolationMultiplier;
		if (TPVOffsetInterpSpeed != nullptr)
			*TPVOffsetInterpSpeed = params.TPVOffsetInterpSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.ShowHUDNotification
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              LifetimeSeconds                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DisplayScale                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USoundCue*                                   SoundToPlay                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawnTest_C::ShowHUDNotification(const class FString& Text, const struct FLinearColor& Color, float LifetimeSeconds, float DisplayScale, class USoundCue* SoundToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.ShowHUDNotification");
		
		APlayerPawnTest_C_ShowHUDNotification_Params params {};
		params.Text = Text;
		params.Color = Color;
		params.LifetimeSeconds = LifetimeSeconds;
		params.DisplayScale = DisplayScale;
		params.SoundToPlay = SoundToPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.TrySpawnMound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerPawnTest_C::TrySpawnMound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.TrySpawnMound");
		
		APlayerPawnTest_C_TrySpawnMound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.TrySpawnMoundEx
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Angle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Range                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawnTest_C::TrySpawnMoundEx(float Angle, float Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.TrySpawnMoundEx");
		
		APlayerPawnTest_C_TrySpawnMoundEx_Params params {};
		params.Angle = Angle;
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.BPSetFirstPersonMasterPoseComponent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      firstPersonMasterPosecomponent                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawnTest_C::BPSetFirstPersonMasterPoseComponent(class USkeletalMeshComponent* firstPersonMasterPosecomponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPSetFirstPersonMasterPoseComponent");
		
		APlayerPawnTest_C_BPSetFirstPersonMasterPoseComponent_Params params {};
		params.firstPersonMasterPosecomponent = firstPersonMasterPosecomponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.DefeatedBoss
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        BossCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        BossTag                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            BossDifficulty                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawnTest_C::DefeatedBoss(class APrimalDinoCharacter* BossCharacter, const class FName& BossTag, int32_t BossDifficulty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.DefeatedBoss");
		
		APlayerPawnTest_C_DefeatedBoss_Params params {};
		params.BossCharacter = BossCharacter;
		params.BossTag = BossTag;
		params.BossDifficulty = BossDifficulty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.ServerAscend
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            DifficultyIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bImmediateAscend                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSuppressAchievements                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawnTest_C::ServerAscend(int32_t DifficultyIndex, bool bImmediateAscend, bool bSuppressAchievements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.ServerAscend");
		
		APlayerPawnTest_C_ServerAscend_Params params {};
		params.DifficultyIndex = DifficultyIndex;
		params.bImmediateAscend = bImmediateAscend;
		params.bSuppressAchievements = bSuppressAchievements;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.PlayerCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      TheCommand                                                 (Parm, ZeroConstructor)
	 */
	class FString APlayerPawnTest_C::PlayerCommand(const class FString& TheCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.PlayerCommand");
		
		APlayerPawnTest_C_PlayerCommand_Params params {};
		params.TheCommand = TheCommand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.InitHairRestDistance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerPawnTest_C::InitHairRestDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.InitHairRestDistance");
		
		APlayerPawnTest_C_InitHairRestDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.SetLastTransforms
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerPawnTest_C::SetLastTransforms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.SetLastTransforms");
		
		APlayerPawnTest_C_SetLastTransforms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.BPNonDedicatedPostAnimUpdate
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerPawnTest_C::BPNonDedicatedPostAnimUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPNonDedicatedPostAnimUpdate");
		
		APlayerPawnTest_C_BPNonDedicatedPostAnimUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.Setup Collision Volumes
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerPawnTest_C::SetupCollisionVolumes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.Setup Collision Volumes");
		
		APlayerPawnTest_C_SetupCollisionVolumes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.SetupNewHairstyle
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerPawnTest_C::SetupNewHairstyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.SetupNewHairstyle");
		
		APlayerPawnTest_C_SetupNewHairstyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.UpdateHair
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerPawnTest_C::UpdateHair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.UpdateHair");
		
		APlayerPawnTest_C_UpdateHair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.SetHairParams
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     HairSocketLoc                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    HairSocketRot                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NeckSocketLoc                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    NeckSocketrot                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawnTest_C::SetHairParams(struct FVector* HairSocketLoc, struct FRotator* HairSocketRot, struct FVector* NeckSocketLoc, struct FRotator* NeckSocketrot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.SetHairParams");
		
		APlayerPawnTest_C_SetHairParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HairSocketLoc != nullptr)
			*HairSocketLoc = params.HairSocketLoc;
		if (HairSocketRot != nullptr)
			*HairSocketRot = params.HairSocketRot;
		if (NeckSocketLoc != nullptr)
			*NeckSocketLoc = params.NeckSocketLoc;
		if (NeckSocketrot != nullptr)
			*NeckSocketrot = params.NeckSocketrot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.SimulateHair
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     HairSocketLoc                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    HairSocketRot                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ChestSocketLoc                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    ChestSocketRot                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawnTest_C::SimulateHair(struct FVector* HairSocketLoc, struct FRotator* HairSocketRot, struct FVector* ChestSocketLoc, struct FRotator* ChestSocketRot, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.SimulateHair");
		
		APlayerPawnTest_C_SimulateHair_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HairSocketLoc != nullptr)
			*HairSocketLoc = params.HairSocketLoc;
		if (HairSocketRot != nullptr)
			*HairSocketRot = params.HairSocketRot;
		if (ChestSocketLoc != nullptr)
			*ChestSocketLoc = params.ChestSocketLoc;
		if (ChestSocketRot != nullptr)
			*ChestSocketRot = params.ChestSocketRot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerPawnTest_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.UserConstructionScript");
		
		APlayerPawnTest_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerPawnTest_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.ReceiveBeginPlay");
		
		APlayerPawnTest_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.NetClientAscend
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AscendIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bImmediateAscend                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawnTest_C::NetClientAscend(int32_t AscendIndex, bool bImmediateAscend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.NetClientAscend");
		
		APlayerPawnTest_C_NetClientAscend_Params params {};
		params.AscendIndex = AscendIndex;
		params.bImmediateAscend = bImmediateAscend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.ClientShowHUDNotification
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              LifetimeSeconds                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DisplayScale                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USoundCue*                                   SoundToPlay                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawnTest_C::ClientShowHUDNotification(const class FString& Text, const struct FLinearColor& Color, float LifetimeSeconds, float DisplayScale, class USoundCue* SoundToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.ClientShowHUDNotification");
		
		APlayerPawnTest_C_ClientShowHUDNotification_Params params {};
		params.Text = Text;
		params.Color = Color;
		params.LifetimeSeconds = LifetimeSeconds;
		params.DisplayScale = DisplayScale;
		params.SoundToPlay = SoundToPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.NetClientPreLoadAcension
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerPawnTest_C::NetClientPreLoadAcension()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.NetClientPreLoadAcension");
		
		APlayerPawnTest_C_NetClientPreLoadAcension_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.ExecuteUbergraph_PlayerPawnTest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawnTest_C::ExecuteUbergraph_PlayerPawnTest(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.ExecuteUbergraph_PlayerPawnTest");
		
		APlayerPawnTest_C_ExecuteUbergraph_PlayerPawnTest_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlayerPawnTest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlayerPawnTest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawnTest.PlayerPawnTest_C");
		return ptr;
	}

}


