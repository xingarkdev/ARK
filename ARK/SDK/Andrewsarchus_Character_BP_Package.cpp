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
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetMaterialIndicesToSupportNet
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int32_t>                                    MaterialIndices                                            (Parm, OutParm, ZeroConstructor)
	 */
	void AAndrewsarchus_Character_BP_C::GetMaterialIndicesToSupportNet(TArray<int32_t>* MaterialIndices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetMaterialIndicesToSupportNet");
		
		AAndrewsarchus_Character_BP_C_GetMaterialIndicesToSupportNet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaterialIndices != nullptr)
			*MaterialIndices = params.MaterialIndices;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.HasNettedBuff
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bHasBuff                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::HasNettedBuff(bool* bHasBuff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.HasNettedBuff");
		
		AAndrewsarchus_Character_BP_C_HasNettedBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHasBuff != nullptr)
			*bHasBuff = params.bHasBuff;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_PreventUnmounting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AAndrewsarchus_Character_BP_C::BP_PreventUnmounting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_PreventUnmounting");
		
		AAndrewsarchus_Character_BP_C_BP_PreventUnmounting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.DisableCC
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ForTaget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::DisableCC(class APrimalCharacter* ForTaget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.DisableCC");
		
		AAndrewsarchus_Character_BP_C_DisableCC_Params params {};
		params.ForTaget = ForTaget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetDinoLevelUpAnimation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UAnimMontage* AAndrewsarchus_Character_BP_C::GetDinoLevelUpAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetDinoLevelUpAnimation");
		
		AAndrewsarchus_Character_BP_C_GetDinoLevelUpAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_ToggleTurret
	 * 		Flags  -> (Net, NetReliable, Public, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::Server_ToggleTurret()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_ToggleTurret");
		
		AAndrewsarchus_Character_BP_C_Server_ToggleTurret_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateCanvasVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::UpdateCanvasVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateCanvasVisibility");
		
		AAndrewsarchus_Character_BP_C_UpdateCanvasVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.SetTurretIsRotatingAudio
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsRotating                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsFromInit                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::SetTurretIsRotatingAudio(bool IsRotating, bool IsFromInit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.SetTurretIsRotatingAudio");
		
		AAndrewsarchus_Character_BP_C_SetTurretIsRotatingAudio_Params params {};
		params.IsRotating = IsRotating;
		params.IsFromInit = IsFromInit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_OnPaintingComponentInitialized
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UStructurePaintingComponent*                 PaintingComp                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::BP_OnPaintingComponentInitialized(class UStructurePaintingComponent* PaintingComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_OnPaintingComponentInitialized");
		
		AAndrewsarchus_Character_BP_C_BP_OnPaintingComponentInitialized_Params params {};
		params.PaintingComp = PaintingComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InitPaintTextures
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::InitPaintTextures()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InitPaintTextures");
		
		AAndrewsarchus_Character_BP_C_InitPaintTextures_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AAndrewsarchus_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPTryMultiUse");
		
		AAndrewsarchus_Character_BP_C_BPTryMultiUse_Params params {};
		params.ForPC = ForPC;
		params.UseIndex = UseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AAndrewsarchus_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetMultiUseEntries");
		
		AAndrewsarchus_Character_BP_C_BPGetMultiUseEntries_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MultiUseEntries != nullptr)
			*MultiUseEntries = params.MultiUseEntries;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetPaintingMesh
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UMeshComponent* AAndrewsarchus_Character_BP_C::GetPaintingMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetPaintingMesh");
		
		AAndrewsarchus_Character_BP_C_GetPaintingMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.IsServerSafeFiringLocation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsSafe                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::IsServerSafeFiringLocation(const struct FVector& Location, bool* IsSafe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.IsServerSafeFiringLocation");
		
		AAndrewsarchus_Character_BP_C_IsServerSafeFiringLocation_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSafe != nullptr)
			*IsSafe = params.IsSafe;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetDesiredTurretRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    DesiredRotation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::GetDesiredTurretRotation(struct FRotator* DesiredRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetDesiredTurretRotation");
		
		AAndrewsarchus_Character_BP_C_GetDesiredTurretRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DesiredRotation != nullptr)
			*DesiredRotation = params.DesiredRotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetMinigunLocationRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::GetMinigunLocationRotation(struct FVector* Location, struct FRotator* Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetMinigunLocationRotation");
		
		AAndrewsarchus_Character_BP_C_GetMinigunLocationRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetBarrelPivotSocketLocationRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::GetBarrelPivotSocketLocationRotation(struct FVector* Location, struct FRotator* Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetBarrelPivotSocketLocationRotation");
		
		AAndrewsarchus_Character_BP_C_GetBarrelPivotSocketLocationRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.DecOxygenIfMax
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::DecOxygenIfMax()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.DecOxygenIfMax");
		
		AAndrewsarchus_Character_BP_C_DecOxygenIfMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.OverrideRandomWanderLocation
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     originalDestination                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     inVec                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.OverrideRandomWanderLocation");
		
		AAndrewsarchus_Character_BP_C_OverrideRandomWanderLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (originalDestination != nullptr)
			*originalDestination = params.originalDestination;
		if (inVec != nullptr)
			*inVec = params.inVec;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPCharacterSleeped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::BPCharacterSleeped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPCharacterSleeped");
		
		AAndrewsarchus_Character_BP_C_BPCharacterSleeped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.OnRep_bShouldUnderwaterSink
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::OnRep_bShouldUnderwaterSink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.OnRep_bShouldUnderwaterSink");
		
		AAndrewsarchus_Character_BP_C_OnRep_bShouldUnderwaterSink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPAddedAttachmentsForItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 anItem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::BPAddedAttachmentsForItem(class UPrimalItem* anItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPAddedAttachmentsForItem");
		
		AAndrewsarchus_Character_BP_C_BPAddedAttachmentsForItem_Params params {};
		params.anItem = anItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.SetCameraTurretVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsForFPV                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::SetCameraTurretVisibility(bool IsForFPV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.SetCameraTurretVisibility");
		
		AAndrewsarchus_Character_BP_C_SetCameraTurretVisibility_Params params {};
		params.IsForFPV = IsForFPV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_OnCameraStyleChangedNotify
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NewCameraStyle                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class FName                                        OldCameraStyle                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::BP_OnCameraStyleChangedNotify(class FName* NewCameraStyle, class FName* OldCameraStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_OnCameraStyleChangedNotify");
		
		AAndrewsarchus_Character_BP_C_BP_OnCameraStyleChangedNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewCameraStyle != nullptr)
			*NewCameraStyle = params.NewCameraStyle;
		if (OldCameraStyle != nullptr)
			*OldCameraStyle = params.OldCameraStyle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UAnimMontage*>                        AnimationArray                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	int32_t AAndrewsarchus_Character_BP_C::BPOverrideGetAttackAnimationIndex(int32_t AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOverrideGetAttackAnimationIndex");
		
		AAndrewsarchus_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimationArray != nullptr)
			*AnimationArray = params.AnimationArray;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetRiderUnboardDirection
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            RidingCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AAndrewsarchus_Character_BP_C::BPGetRiderUnboardDirection(class APrimalCharacter* RidingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetRiderUnboardDirection");
		
		AAndrewsarchus_Character_BP_C_BPGetRiderUnboardDirection_Params params {};
		params.RidingCharacter = RidingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPSetupTamed");
		
		AAndrewsarchus_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.SpawnJumpVFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::SpawnJumpVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.SpawnJumpVFX");
		
		AAndrewsarchus_Character_BP_C_SpawnJumpVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.SpawnSlideVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::SpawnSlideVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.SpawnSlideVFX");
		
		AAndrewsarchus_Character_BP_C_SpawnSlideVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.IncreaseTamingIneffectivenessOnIncorrectInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::IncreaseTamingIneffectivenessOnIncorrectInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.IncreaseTamingIneffectivenessOnIncorrectInput");
		
		AAndrewsarchus_Character_BP_C_IncreaseTamingIneffectivenessOnIncorrectInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetRiderSocket
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class FName AAndrewsarchus_Character_BP_C::BPGetRiderSocket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetRiderSocket");
		
		AAndrewsarchus_Character_BP_C_BPGetRiderSocket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.AggroOntoActorAfterRiding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::AggroOntoActorAfterRiding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.AggroOntoActorAfterRiding");
		
		AAndrewsarchus_Character_BP_C_AggroOntoActorAfterRiding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool AAndrewsarchus_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPServerHandleNetExecCommand");
		
		AAndrewsarchus_Character_BP_C_BPServerHandleNetExecCommand_Params params {};
		params.FromPC = FromPC;
		params.CommandName = CommandName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExecParams != nullptr)
			*ExecParams = params.ExecParams;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InitAndy
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::InitAndy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InitAndy");
		
		AAndrewsarchus_Character_BP_C_InitAndy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.RegenSpeedBoost
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::RegenSpeedBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.RegenSpeedBoost");
		
		AAndrewsarchus_Character_BP_C_RegenSpeedBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float AAndrewsarchus_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPAdjustDamage");
		
		AAndrewsarchus_Character_BP_C_BPAdjustDamage_Params params {};
		params.IncomingDamage = IncomingDamage;
		params.TheDamageEvent = TheDamageEvent;
		params.EventInstigator = EventInstigator;
		params.DamageCauser = DamageCauser;
		params.bIsPointDamage = bIsPointDamage;
		params.PointHitInfo = PointHitInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPHandleUseButtonPress
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    RiderController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AAndrewsarchus_Character_BP_C::BPHandleUseButtonPress(class AShooterPlayerController* RiderController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPHandleUseButtonPress");
		
		AAndrewsarchus_Character_BP_C_BPHandleUseButtonPress_Params params {};
		params.RiderController = RiderController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOverrideIsSubmergedForWaterTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AAndrewsarchus_Character_BP_C::BPOverrideIsSubmergedForWaterTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOverrideIsSubmergedForWaterTargeting");
		
		AAndrewsarchus_Character_BP_C_BPOverrideIsSubmergedForWaterTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOverrideCharacterNewFallVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InitialVelocity                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Gravity                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AAndrewsarchus_Character_BP_C::BPOverrideCharacterNewFallVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOverrideCharacterNewFallVelocity");
		
		AAndrewsarchus_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InitialVelocity != nullptr)
			*InitialVelocity = params.InitialVelocity;
		if (Gravity != nullptr)
			*Gravity = params.Gravity;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearMinigunSlideDirIndex
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::ClearMinigunSlideDirIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearMinigunSlideDirIndex");
		
		AAndrewsarchus_Character_BP_C_ClearMinigunSlideDirIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearShouldAttemptMinigunSlide
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::ClearShouldAttemptMinigunSlide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearShouldAttemptMinigunSlide");
		
		AAndrewsarchus_Character_BP_C_ClearShouldAttemptMinigunSlide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPPreventFallDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (Parm, OutParm, ReferenceParm)
	 * 		float                                              FallDamageAmount                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AAndrewsarchus_Character_BP_C::BPPreventFallDamage(struct FHitResult* HitResult, float FallDamageAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPPreventFallDamage");
		
		AAndrewsarchus_Character_BP_C_BPPreventFallDamage_Params params {};
		params.FallDamageAmount = FallDamageAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitResult != nullptr)
			*HitResult = params.HitResult;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AAndrewsarchus_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_GetCustomModifier_MaxSpeed");
		
		AAndrewsarchus_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetIsUnderwaterSinking
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsUnderwater                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::GetIsUnderwaterSinking(bool* IsUnderwater)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetIsUnderwaterSinking");
		
		AAndrewsarchus_Character_BP_C_GetIsUnderwaterSinking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsUnderwater != nullptr)
			*IsUnderwater = params.IsUnderwater;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.AllowPlayMontage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AAndrewsarchus_Character_BP_C::AllowPlayMontage(class UAnimMontage* AnimMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.AllowPlayMontage");
		
		AAndrewsarchus_Character_BP_C_AllowPlayMontage_Params params {};
		params.AnimMontage = AnimMontage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		AAndrewsarchus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
		params.CustomEventName = CustomEventName;
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		params.AnimNotifyObject = AnimNotifyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateLegIK
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TwoLegged                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::UpdateLegIK(bool TwoLegged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateLegIK");
		
		AAndrewsarchus_Character_BP_C_UpdateLegIK_Params params {};
		params.TwoLegged = TwoLegged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateMovementVars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::UpdateMovementVars(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateMovementVars");
		
		AAndrewsarchus_Character_BP_C_UpdateMovementVars_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPTimerServer");
		
		AAndrewsarchus_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AAndrewsarchus_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BlueprintCanAttack");
		
		AAndrewsarchus_Character_BP_C_BlueprintCanAttack_Params params {};
		params.AttackIndex = AttackIndex;
		params.Distance = Distance;
		params.attackRangeOffset = attackRangeOffset;
		params.OtherTarget = OtherTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOnMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOnMovementModeChangedNotify");
		
		AAndrewsarchus_Character_BP_C_BPOnMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ScaledJump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               WantsToMoveForward                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     VelOverride                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::ScaledJump(const struct FVector& Direction, float Alpha, bool WantsToMoveForward, const struct FVector& VelOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ScaledJump");
		
		AAndrewsarchus_Character_BP_C_ScaledJump_Params params {};
		params.Direction = Direction;
		params.Alpha = Alpha;
		params.WantsToMoveForward = WantsToMoveForward;
		params.VelOverride = VelOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOnStartJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AAndrewsarchus_Character_BP_C::BPOnStartJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOnStartJump");
		
		AAndrewsarchus_Character_BP_C_BPOnStartJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPHandlePoop
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AAndrewsarchus_Character_BP_C::BPHandlePoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPHandlePoop");
		
		AAndrewsarchus_Character_BP_C_BPHandlePoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_InterceptMoveForward
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AAndrewsarchus_Character_BP_C::BP_InterceptMoveForward(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_InterceptMoveForward");
		
		AAndrewsarchus_Character_BP_C_BP_InterceptMoveForward_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.EndDriftTurn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::EndDriftTurn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.EndDriftTurn");
		
		AAndrewsarchus_Character_BP_C_EndDriftTurn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPShouldLimitForwardDirection
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AAndrewsarchus_Character_BP_C::BPShouldLimitForwardDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPShouldLimitForwardDirection");
		
		AAndrewsarchus_Character_BP_C_BPShouldLimitForwardDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.StartDriftTurn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::StartDriftTurn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.StartDriftTurn");
		
		AAndrewsarchus_Character_BP_C_StartDriftTurn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetRiderUnboardLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            RidingCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AAndrewsarchus_Character_BP_C::BPGetRiderUnboardLocation(class APrimalCharacter* RidingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetRiderUnboardLocation");
		
		AAndrewsarchus_Character_BP_C_BPGetRiderUnboardLocation_Params params {};
		params.RidingCharacter = RidingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.CheckTamingRiding
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::CheckTamingRiding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.CheckTamingRiding");
		
		AAndrewsarchus_Character_BP_C_CheckTamingRiding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearTamingRider
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::ClearTamingRider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearTamingRider");
		
		AAndrewsarchus_Character_BP_C_ClearTamingRider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearAllowTamingRiding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::ClearAllowTamingRiding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearAllowTamingRiding");
		
		AAndrewsarchus_Character_BP_C_ClearAllowTamingRiding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPPreventRiding
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ByPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDontCheckDistance                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AAndrewsarchus_Character_BP_C::BPPreventRiding(class AShooterCharacter* ByPawn, bool bDontCheckDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPPreventRiding");
		
		AAndrewsarchus_Character_BP_C_BPPreventRiding_Params params {};
		params.ByPawn = ByPawn;
		params.bDontCheckDistance = bDontCheckDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateTaming
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ForShooterChar                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::UpdateTaming(class AShooterCharacter* ForShooterChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateTaming");
		
		AAndrewsarchus_Character_BP_C_UpdateTaming_Params params {};
		params.ForShooterChar = ForShooterChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPDoAttack");
		
		AAndrewsarchus_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.OnRep_bIsSliding
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::OnRep_bIsSliding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.OnRep_bIsSliding");
		
		AAndrewsarchus_Character_BP_C_OnRep_bIsSliding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.CheckUpdateSliding
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShouldSlide                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::CheckUpdateSliding(bool* ShouldSlide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.CheckUpdateSliding");
		
		AAndrewsarchus_Character_BP_C_CheckUpdateSliding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldSlide != nullptr)
			*ShouldSlide = params.ShouldSlide;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateSliding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               EnableSliding                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::UpdateSliding(bool EnableSliding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateSliding");
		
		AAndrewsarchus_Character_BP_C_UpdateSliding_Params params {};
		params.EnableSliding = EnableSliding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ApplySpeedBoost
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::ApplySpeedBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ApplySpeedBoost");
		
		AAndrewsarchus_Character_BP_C_ApplySpeedBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearShouldAttemptSpeedBoost
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::ClearShouldAttemptSpeedBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearShouldAttemptSpeedBoost");
		
		AAndrewsarchus_Character_BP_C_ClearShouldAttemptSpeedBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.CheckCanSpeedBoost
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanSpeedBoost                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::CheckCanSpeedBoost(bool* CanSpeedBoost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.CheckCanSpeedBoost");
		
		AAndrewsarchus_Character_BP_C_CheckCanSpeedBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanSpeedBoost != nullptr)
			*CanSpeedBoost = params.CanSpeedBoost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPModifyAimOffsetNoTarget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    Aim                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FRotator AAndrewsarchus_Character_BP_C::BPModifyAimOffsetNoTarget(struct FRotator* Aim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPModifyAimOffsetNoTarget");
		
		AAndrewsarchus_Character_BP_C_BPModifyAimOffsetNoTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Aim != nullptr)
			*Aim = params.Aim;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OriginalDamageAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AAndrewsarchus_Character_BP_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BlueprintAdjustOutputDamage");
		
		AAndrewsarchus_Character_BP_C_BlueprintAdjustOutputDamage_Params params {};
		params.AttackIndex = AttackIndex;
		params.OriginalDamageAmount = OriginalDamageAmount;
		params.HitActor = HitActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDamageType != nullptr)
			*OutDamageType = params.OutDamageType;
		if (OutDamageImpulse != nullptr)
			*OutDamageImpulse = params.OutDamageImpulse;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPModifyDesiredRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    InDesiredRotation                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    OutDesiredRotation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AAndrewsarchus_Character_BP_C::BPModifyDesiredRotation(float DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPModifyDesiredRotation");
		
		AAndrewsarchus_Character_BP_C_BPModifyDesiredRotation_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InDesiredRotation != nullptr)
			*InDesiredRotation = params.InDesiredRotation;
		if (OutDesiredRotation != nullptr)
			*OutDesiredRotation = params.OutDesiredRotation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPNotifySetRider");
		
		AAndrewsarchus_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void AAndrewsarchus_Character_BP_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetHUDElements");
		
		AAndrewsarchus_Character_BP_C_BPGetHUDElements_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutElements != nullptr)
			*OutElements = params.OutElements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetCanShootMinigun
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanShoot                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::GetCanShootMinigun(bool* CanShoot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetCanShootMinigun");
		
		AAndrewsarchus_Character_BP_C_GetCanShootMinigun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanShoot != nullptr)
			*CanShoot = params.CanShoot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOverrideCameraViewTarget
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CurrentCameraMode                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     DesiredCameraLocation                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    DesiredCameraRotation                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DesiredFOV                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOverrideCameraLocation                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     CameraLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOverrideCameraRotation                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    CameraRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOverrideCameraFOV                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CameraFOV                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::BPOverrideCameraViewTarget(const class FName& CurrentCameraMode, const struct FVector& DesiredCameraLocation, const struct FRotator& DesiredCameraRotation, float DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOverrideCameraViewTarget");
		
		AAndrewsarchus_Character_BP_C_BPOverrideCameraViewTarget_Params params {};
		params.CurrentCameraMode = CurrentCameraMode;
		params.DesiredCameraLocation = DesiredCameraLocation;
		params.DesiredCameraRotation = DesiredCameraRotation;
		params.DesiredFOV = DesiredFOV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOverrideCameraLocation != nullptr)
			*bOverrideCameraLocation = params.bOverrideCameraLocation;
		if (CameraLocation != nullptr)
			*CameraLocation = params.CameraLocation;
		if (bOverrideCameraRotation != nullptr)
			*bOverrideCameraRotation = params.bOverrideCameraRotation;
		if (CameraRotation != nullptr)
			*CameraRotation = params.CameraRotation;
		if (bOverrideCameraFOV != nullptr)
			*bOverrideCameraFOV = params.bOverrideCameraFOV;
		if (CameraFOV != nullptr)
			*CameraFOV = params.CameraFOV;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPNotifyClearRider");
		
		AAndrewsarchus_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.OnRep_bMinigunActive
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::OnRep_bMinigunActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.OnRep_bMinigunActive");
		
		AAndrewsarchus_Character_BP_C_OnRep_bMinigunActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPHandleOnStopTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AAndrewsarchus_Character_BP_C::BPHandleOnStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPHandleOnStopTargeting");
		
		AAndrewsarchus_Character_BP_C_BPHandleOnStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetCanEnableMinigun
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanEnable                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::GetCanEnableMinigun(bool* CanEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetCanEnableMinigun");
		
		AAndrewsarchus_Character_BP_C_GetCanEnableMinigun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanEnable != nullptr)
			*CanEnable = params.CanEnable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AAndrewsarchus_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BlueprintCanRiderAttack");
		
		AAndrewsarchus_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AAndrewsarchus_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		AAndrewsarchus_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.RidingTick
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::RidingTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.RidingTick");
		
		AAndrewsarchus_Character_BP_C_RidingTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UserConstructionScript");
		
		AAndrewsarchus_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_139
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::InpActEvt_Prone_K2Node_InputActionEvent_139()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_139");
		
		AAndrewsarchus_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_139_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_138
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_138()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_138");
		
		AAndrewsarchus_Character_BP_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_138_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_137
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_137()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_137");
		
		AAndrewsarchus_Character_BP_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_137_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_136
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_136()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_136");
		
		AAndrewsarchus_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_136_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_135
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::InpActEvt_AltFire_K2Node_InputActionEvent_135()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_135");
		
		AAndrewsarchus_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_135_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_FireMinigun
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::Server_FireMinigun(const struct FVector& Location, const struct FVector& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_FireMinigun");
		
		AAndrewsarchus_Character_BP_C_Server_FireMinigun_Params params {};
		params.Location = Location;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Multi_SpawnFireVFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     EndLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ShootDir                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  Hit                                                        (Parm)
	 */
	void AAndrewsarchus_Character_BP_C::Multi_SpawnFireVFX(const struct FVector& EndLoc, const struct FVector& Start, const struct FVector& ShootDir, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Multi_SpawnFireVFX");
		
		AAndrewsarchus_Character_BP_C_Multi_SpawnFireVFX_Params params {};
		params.EndLoc = EndLoc;
		params.Start = Start;
		params.ShootDir = ShootDir;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_CancelMinigunFire
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::Server_CancelMinigunFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_CancelMinigunFire");
		
		AAndrewsarchus_Character_BP_C_Server_CancelMinigunFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_SetRepAimRot
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    Rot                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::Server_SetRepAimRot(const struct FRotator& Rot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_SetRepAimRot");
		
		AAndrewsarchus_Character_BP_C_Server_SetRepAimRot_Params params {};
		params.Rot = Rot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_SetDesiredTurnIndex
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TurnIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::Server_SetDesiredTurnIndex(int32_t TurnIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_SetDesiredTurnIndex");
		
		AAndrewsarchus_Character_BP_C_Server_SetDesiredTurnIndex_Params params {};
		params.TurnIndex = TurnIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_AttemptSpeedBoost
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::Server_AttemptSpeedBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_AttemptSpeedBoost");
		
		AAndrewsarchus_Character_BP_C_Server_AttemptSpeedBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_UpdateSliding
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               EnableSliding                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::Server_UpdateSliding(bool EnableSliding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_UpdateSliding");
		
		AAndrewsarchus_Character_BP_C_Server_UpdateSliding_Params params {};
		params.EnableSliding = EnableSliding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_StartSlideAnim
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::MC_StartSlideAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_StartSlideAnim");
		
		AAndrewsarchus_Character_BP_C_MC_StartSlideAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_EndSlideAnim
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::MC_EndSlideAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_EndSlideAnim");
		
		AAndrewsarchus_Character_BP_C_MC_EndSlideAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ReceiveBeginPlay");
		
		AAndrewsarchus_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPUnstasis");
		
		AAndrewsarchus_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_ScaledJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               WantsToMoveForward                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     VelOverride                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::Server_ScaledJump(const struct FVector& Direction, float Alpha, bool WantsToMoveForward, const struct FVector& VelOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_ScaledJump");
		
		AAndrewsarchus_Character_BP_C_Server_ScaledJump_Params params {};
		params.Direction = Direction;
		params.Alpha = Alpha;
		params.WantsToMoveForward = WantsToMoveForward;
		params.VelOverride = VelOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_AttemptDoMinigunSlide
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            DirIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::Server_AttemptDoMinigunSlide(int32_t DirIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_AttemptDoMinigunSlide");
		
		AAndrewsarchus_Character_BP_C_Server_AttemptDoMinigunSlide_Params params {};
		params.DirIndex = DirIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_RefreshMovementVars
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::MC_RefreshMovementVars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_RefreshMovementVars");
		
		AAndrewsarchus_Character_BP_C_MC_RefreshMovementVars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_Dismount
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              LastRightVal                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::Server_Dismount(float LastRightVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_Dismount");
		
		AAndrewsarchus_Character_BP_C_Server_Dismount_Params params {};
		params.LastRightVal = LastRightVal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.PlayPreventDismountVFX
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::PlayPreventDismountVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.PlayPreventDismountVFX");
		
		AAndrewsarchus_Character_BP_C_PlayPreventDismountVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_PreventMovement
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Prevent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::MC_PreventMovement(bool Prevent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_PreventMovement");
		
		AAndrewsarchus_Character_BP_C_MC_PreventMovement_Params params {};
		params.Prevent = Prevent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_SetShouldUnderwaterSink
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShouldSink                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::Server_SetShouldUnderwaterSink(bool ShouldSink)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_SetShouldUnderwaterSink");
		
		AAndrewsarchus_Character_BP_C_Server_SetShouldUnderwaterSink_Params params {};
		params.ShouldSink = ShouldSink;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_EndSLideVFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::MC_EndSLideVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_EndSLideVFX");
		
		AAndrewsarchus_Character_BP_C_MC_EndSLideVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.AnimNotify_Jump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAndrewsarchus_Character_BP_C::AnimNotify_Jump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.AnimNotify_Jump");
		
		AAndrewsarchus_Character_BP_C_AnimNotify_Jump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ExecuteUbergraph_Andrewsarchus_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAndrewsarchus_Character_BP_C::ExecuteUbergraph_Andrewsarchus_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ExecuteUbergraph_Andrewsarchus_Character_BP");
		
		AAndrewsarchus_Character_BP_C_ExecuteUbergraph_Andrewsarchus_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAndrewsarchus_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAndrewsarchus_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C");
		return ptr;
	}

}


