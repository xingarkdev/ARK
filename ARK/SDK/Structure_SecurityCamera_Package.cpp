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
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetConsoleData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor)
	 * 		bool                                               CanAddCamera                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_SecurityCamera_C::GetConsoleData(float* ID, class FString* Name, bool* CanAddCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetConsoleData");
		
		AStructure_SecurityCamera_C_GetConsoleData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ID != nullptr)
			*ID = params.ID;
		if (Name != nullptr)
			*Name = params.Name;
		if (CanAddCamera != nullptr)
			*CanAddCamera = params.CanAddCamera;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.CanAddCamera
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Allowed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_SecurityCamera_C::CanAddCamera(bool* Allowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.CanAddCamera");
		
		AStructure_SecurityCamera_C_CanAddCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allowed != nullptr)
			*Allowed = params.Allowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetConsoleID
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_SecurityCamera_C::GetConsoleID(float* ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetConsoleID");
		
		AStructure_SecurityCamera_C_GetConsoleID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ID != nullptr)
			*ID = params.ID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetCameraData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class APrimalStructure*>                    Cameras                                                    (Parm, OutParm, ZeroConstructor)
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_SecurityCamera_C::GetCameraData(TArray<class APrimalStructure*>* Cameras, int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetCameraData");
		
		AStructure_SecurityCamera_C_GetCameraData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Cameras != nullptr)
			*Cameras = params.Cameras;
		if (index != nullptr)
			*index = params.index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetCameraLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     CameraViewPoint                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    CameraRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_SecurityCamera_C::GetCameraLocation(struct FVector* CameraViewPoint, struct FRotator* CameraRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetCameraLocation");
		
		AStructure_SecurityCamera_C_GetCameraLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CameraViewPoint != nullptr)
			*CameraViewPoint = params.CameraViewPoint;
		if (CameraRotation != nullptr)
			*CameraRotation = params.CameraRotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.UpdateEffects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_SecurityCamera_C::UpdateEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.UpdateEffects");
		
		AStructure_SecurityCamera_C_UpdateEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPOverrideDescriptiveName
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FString AStructure_SecurityCamera_C::BPOverrideDescriptiveName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPOverrideDescriptiveName");
		
		AStructure_SecurityCamera_C_BPOverrideDescriptiveName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.ClientUpdatePosition
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_SecurityCamera_C::ClientUpdatePosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.ClientUpdatePosition");
		
		AStructure_SecurityCamera_C_ClientUpdatePosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.BlueprintDrawHUD
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_SecurityCamera_C::BlueprintDrawHUD(class AShooterHUD* HUD, float CenterX, float CenterY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.BlueprintDrawHUD");
		
		AStructure_SecurityCamera_C_BlueprintDrawHUD_Params params {};
		params.HUD = HUD;
		params.CenterX = CenterX;
		params.CenterY = CenterY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetConsoleFromID
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalStructure*                            LinkedConsole                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_SecurityCamera_C::GetConsoleFromID(float ID, class APrimalStructure** LinkedConsole)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetConsoleFromID");
		
		AStructure_SecurityCamera_C_GetConsoleFromID_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LinkedConsole != nullptr)
			*LinkedConsole = params.LinkedConsole;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPIsAllowedToBuild
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlacementData                              OutPlacementData                                           (Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            CurrentAllowedReason                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t AStructure_SecurityCamera_C::BPIsAllowedToBuild(struct FPlacementData* OutPlacementData, int32_t CurrentAllowedReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPIsAllowedToBuild");
		
		AStructure_SecurityCamera_C_BPIsAllowedToBuild_Params params {};
		params.CurrentAllowedReason = CurrentAllowedReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPlacementData != nullptr)
			*OutPlacementData = params.OutPlacementData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetAdditionalComponentForDyePreview
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UStaticMeshComponent* AStructure_SecurityCamera_C::GetAdditionalComponentForDyePreview()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetAdditionalComponentForDyePreview");
		
		AStructure_SecurityCamera_C_GetAdditionalComponentForDyePreview_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetCorrectedRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    CameraRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_SecurityCamera_C::GetCorrectedRotation(struct FRotator* CameraRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetCorrectedRotation");
		
		AStructure_SecurityCamera_C_GetCorrectedRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CameraRotation != nullptr)
			*CameraRotation = params.CameraRotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.PlacementTick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_SecurityCamera_C::PlacementTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.PlacementTick");
		
		AStructure_SecurityCamera_C_PlacementTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_SecurityCamera_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.ReceiveBeginPlay");
		
		AStructure_SecurityCamera_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_SecurityCamera_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPUnstasis");
		
		AStructure_SecurityCamera_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.UpdateCameraPosition
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Animated                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_SecurityCamera_C::UpdateCameraPosition(bool Animated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.UpdateCameraPosition");
		
		AStructure_SecurityCamera_C_UpdateCameraPosition_Params params {};
		params.Animated = Animated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPPostInitializeComponents
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_SecurityCamera_C::BPPostInitializeComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPPostInitializeComponents");
		
		AStructure_SecurityCamera_C_BPPostInitializeComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.InitializeRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_SecurityCamera_C::InitializeRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.InitializeRotation");
		
		AStructure_SecurityCamera_C_InitializeRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPPlacedStructure
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_SecurityCamera_C::BPPlacedStructure(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPPlacedStructure");
		
		AStructure_SecurityCamera_C_BPPlacedStructure_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.PerformanceThrottledTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_SecurityCamera_C::PerformanceThrottledTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.PerformanceThrottledTick");
		
		AStructure_SecurityCamera_C_PerformanceThrottledTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.OnRep_CameraActive
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_SecurityCamera_C::OnRep_CameraActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.OnRep_CameraActive");
		
		AStructure_SecurityCamera_C_OnRep_CameraActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPHandleStructureEnabled
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_SecurityCamera_C::BPHandleStructureEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPHandleStructureEnabled");
		
		AStructure_SecurityCamera_C_BPHandleStructureEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPPreventStasis
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AStructure_SecurityCamera_C::BPPreventStasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPPreventStasis");
		
		AStructure_SecurityCamera_C_BPPreventStasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.OnContainerRenamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_SecurityCamera_C::OnContainerRenamed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.OnContainerRenamed");
		
		AStructure_SecurityCamera_C_OnContainerRenamed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_SecurityCamera_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.ReceiveDestroyed");
		
		AStructure_SecurityCamera_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPOnStructurePickup
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      ItemType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 NewlyPickedUpItem                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsQuickPickup                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_SecurityCamera_C::BPOnStructurePickup(class APlayerController* PlayerController, class UClass* ItemType, class UPrimalItem* NewlyPickedUpItem, bool bIsQuickPickup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPOnStructurePickup");
		
		AStructure_SecurityCamera_C_BPOnStructurePickup_Params params {};
		params.PlayerController = PlayerController;
		params.ItemType = ItemType;
		params.NewlyPickedUpItem = NewlyPickedUpItem;
		params.bIsQuickPickup = bIsQuickPickup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.RetrieveLinkedConsoleFromItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              LinkedConsole                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      CameraName                                                 (Parm, OutParm, ZeroConstructor)
	 * 		bool                                               CanAdd                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      ConsoleName                                                (Parm, OutParm, ZeroConstructor)
	 */
	void AStructure_SecurityCamera_C::RetrieveLinkedConsoleFromItem(class UPrimalItem* Item, float* LinkedConsole, struct FVector* Location, class FString* CameraName, bool* CanAdd, class FString* ConsoleName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.RetrieveLinkedConsoleFromItem");
		
		AStructure_SecurityCamera_C_RetrieveLinkedConsoleFromItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LinkedConsole != nullptr)
			*LinkedConsole = params.LinkedConsole;
		if (Location != nullptr)
			*Location = params.Location;
		if (CameraName != nullptr)
			*CameraName = params.CameraName;
		if (CanAdd != nullptr)
			*CanAdd = params.CanAdd;
		if (ConsoleName != nullptr)
			*ConsoleName = params.ConsoleName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPGetInfoFromConsumedItemForPlacedStructure
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 ItemToConsumed                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_SecurityCamera_C::BPGetInfoFromConsumedItemForPlacedStructure(class UPrimalItem* ItemToConsumed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPGetInfoFromConsumedItemForPlacedStructure");
		
		AStructure_SecurityCamera_C_BPGetInfoFromConsumedItemForPlacedStructure_Params params {};
		params.ItemToConsumed = ItemToConsumed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPOverrideCantBuildReasonString
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CantBuildReason                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString AStructure_SecurityCamera_C::BPOverrideCantBuildReasonString(int32_t CantBuildReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPOverrideCantBuildReasonString");
		
		AStructure_SecurityCamera_C_BPOverrideCantBuildReasonString_Params params {};
		params.CantBuildReason = CantBuildReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPCheckItemRequiementsToBuild
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 ItemToConsumed                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t AStructure_SecurityCamera_C::BPCheckItemRequiementsToBuild(class UPrimalItem* ItemToConsumed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPCheckItemRequiementsToBuild");
		
		AStructure_SecurityCamera_C_BPCheckItemRequiementsToBuild_Params params {};
		params.ItemToConsumed = ItemToConsumed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_SecurityCamera_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.UserConstructionScript");
		
		AStructure_SecurityCamera_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.AddNewCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            NewStructure                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_SecurityCamera_C::AddNewCamera(class APrimalStructure* NewStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.AddNewCamera");
		
		AStructure_SecurityCamera_C_AddNewCamera_Params params {};
		params.NewStructure = NewStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.SetCurrentCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CameraIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_SecurityCamera_C::SetCurrentCamera(int32_t CameraIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.SetCurrentCamera");
		
		AStructure_SecurityCamera_C_SetCurrentCamera_Params params {};
		params.CameraIndex = CameraIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.UpdateCameraRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_SecurityCamera_C::UpdateCameraRotation(const struct FRotator& NewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.UpdateCameraRotation");
		
		AStructure_SecurityCamera_C_UpdateCameraRotation_Params params {};
		params.NewRotation = NewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.ClientSetRotation
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_SecurityCamera_C::ClientSetRotation(const struct FRotator& NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.ClientSetRotation");
		
		AStructure_SecurityCamera_C_ClientSetRotation_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.ServerInitializeRotation
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_SecurityCamera_C::ServerInitializeRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.ServerInitializeRotation");
		
		AStructure_SecurityCamera_C_ServerInitializeRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.VerifyConsoleData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_SecurityCamera_C::VerifyConsoleData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.VerifyConsoleData");
		
		AStructure_SecurityCamera_C_VerifyConsoleData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.UpdateConsoleName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor)
	 */
	void AStructure_SecurityCamera_C::UpdateConsoleName(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.UpdateConsoleName");
		
		AStructure_SecurityCamera_C_UpdateConsoleName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.ActivateCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_SecurityCamera_C::ActivateCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.ActivateCamera");
		
		AStructure_SecurityCamera_C_ActivateCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.ClientCameraActivated
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_SecurityCamera_C::ClientCameraActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.ClientCameraActivated");
		
		AStructure_SecurityCamera_C_ClientCameraActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.RemoveCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            CameraToRemove                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_SecurityCamera_C::RemoveCamera(class APrimalStructure* CameraToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.RemoveCamera");
		
		AStructure_SecurityCamera_C_RemoveCamera_Params params {};
		params.CameraToRemove = CameraToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.ClientCameraUnlinked
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_SecurityCamera_C::ClientCameraUnlinked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.ClientCameraUnlinked");
		
		AStructure_SecurityCamera_C_ClientCameraUnlinked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_SecurityCamera.Structure_SecurityCamera_C.ExecuteUbergraph_Structure_SecurityCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_SecurityCamera_C::ExecuteUbergraph_Structure_SecurityCamera(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_SecurityCamera.Structure_SecurityCamera_C.ExecuteUbergraph_Structure_SecurityCamera");
		
		AStructure_SecurityCamera_C_ExecuteUbergraph_Structure_SecurityCamera_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStructure_SecurityCamera_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStructure_SecurityCamera_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Structure_SecurityCamera.Structure_SecurityCamera_C");
		return ptr;
	}

}


