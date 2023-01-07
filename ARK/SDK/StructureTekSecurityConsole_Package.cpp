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
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.GetConsoleData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor)
	 * 		bool                                               CanAddCamera                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureTekSecurityConsole_C::GetConsoleData(float* ID, class FString* Name, bool* CanAddCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.GetConsoleData");
		
		AStructureTekSecurityConsole_C_GetConsoleData_Params params {};
		
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
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.CanAddCamera
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Allowed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureTekSecurityConsole_C::CanAddCamera(bool* Allowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.CanAddCamera");
		
		AStructureTekSecurityConsole_C_CanAddCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allowed != nullptr)
			*Allowed = params.Allowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.GetConsoleID
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureTekSecurityConsole_C::GetConsoleID(float* ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.GetConsoleID");
		
		AStructureTekSecurityConsole_C_GetConsoleID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ID != nullptr)
			*ID = params.ID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.GetCameraData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class APrimalStructure*>                    Cameras                                                    (Parm, OutParm, ZeroConstructor)
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureTekSecurityConsole_C::GetCameraData(TArray<class APrimalStructure*>* Cameras, int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.GetCameraData");
		
		AStructureTekSecurityConsole_C_GetCameraData_Params params {};
		
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
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.GetCameraLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     CameraViewPoint                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    CameraRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureTekSecurityConsole_C::GetCameraLocation(struct FVector* CameraViewPoint, struct FRotator* CameraRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.GetCameraLocation");
		
		AStructureTekSecurityConsole_C_GetCameraLocation_Params params {};
		
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
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.GetCameraName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FRemoteCameraData                           RemoteCameraData                                           (Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString AStructureTekSecurityConsole_C::GetCameraName(struct FRemoteCameraData* RemoteCameraData, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.GetCameraName");
		
		AStructureTekSecurityConsole_C_GetCameraName_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RemoteCameraData != nullptr)
			*RemoteCameraData = params.RemoteCameraData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.OnContainerRenamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructureTekSecurityConsole_C::OnContainerRenamed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.OnContainerRenamed");
		
		AStructureTekSecurityConsole_C_OnContainerRenamed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPContainerActivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructureTekSecurityConsole_C::BPContainerActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPContainerActivated");
		
		AStructureTekSecurityConsole_C_BPContainerActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.CanCameraBeAdded
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool AStructureTekSecurityConsole_C::CanCameraBeAdded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.CanCameraBeAdded");
		
		AStructureTekSecurityConsole_C_CanCameraBeAdded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.VerifyCameraList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructureTekSecurityConsole_C::VerifyCameraList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.VerifyCameraList");
		
		AStructureTekSecurityConsole_C_VerifyCameraList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPPlacedStructure
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureTekSecurityConsole_C::BPPlacedStructure(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPPlacedStructure");
		
		AStructureTekSecurityConsole_C_BPPlacedStructure_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.OnStructurePlacementRefreshed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructureTekSecurityConsole_C::OnStructurePlacementRefreshed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.OnStructurePlacementRefreshed");
		
		AStructureTekSecurityConsole_C_OnStructurePlacementRefreshed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.VerifyActiveCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructureTekSecurityConsole_C::VerifyActiveCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.VerifyActiveCamera");
		
		AStructureTekSecurityConsole_C_VerifyActiveCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructureTekSecurityConsole_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.ReceiveDestroyed");
		
		AStructureTekSecurityConsole_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructureTekSecurityConsole_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPUnstasis");
		
		AStructureTekSecurityConsole_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.RemoveLinkedCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            Camera                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureTekSecurityConsole_C::RemoveLinkedCamera(class APrimalStructure* Camera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.RemoveLinkedCamera");
		
		AStructureTekSecurityConsole_C_RemoveLinkedCamera_Params params {};
		params.Camera = Camera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructureTekSecurityConsole_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.ReceiveBeginPlay");
		
		AStructureTekSecurityConsole_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.AddCamera
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            NewCamera                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureTekSecurityConsole_C::AddCamera(class APrimalStructure* NewCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.AddCamera");
		
		AStructureTekSecurityConsole_C_AddCamera_Params params {};
		params.NewCamera = NewCamera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPPreventStasis
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AStructureTekSecurityConsole_C::BPPreventStasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPPreventStasis");
		
		AStructureTekSecurityConsole_C_BPPreventStasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPContainerDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructureTekSecurityConsole_C::BPContainerDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPContainerDeactivated");
		
		AStructureTekSecurityConsole_C_BPContainerDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureTekSecurityConsole_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPClientDoMultiUse");
		
		AStructureTekSecurityConsole_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AStructureTekSecurityConsole_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPGetMultiUseEntries");
		
		AStructureTekSecurityConsole_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AStructureTekSecurityConsole_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPTryMultiUse");
		
		AStructureTekSecurityConsole_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructureTekSecurityConsole_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.UserConstructionScript");
		
		AStructureTekSecurityConsole_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.SetCurrentCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CameraIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureTekSecurityConsole_C::SetCurrentCamera(int32_t CameraIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.SetCurrentCamera");
		
		AStructureTekSecurityConsole_C_SetCurrentCamera_Params params {};
		params.CameraIndex = CameraIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.UpdateCameraRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureTekSecurityConsole_C::UpdateCameraRotation(const struct FRotator& NewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.UpdateCameraRotation");
		
		AStructureTekSecurityConsole_C_UpdateCameraRotation_Params params {};
		params.NewRotation = NewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.UpdateConsoleName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor)
	 */
	void AStructureTekSecurityConsole_C::UpdateConsoleName(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.UpdateConsoleName");
		
		AStructureTekSecurityConsole_C_UpdateConsoleName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.ActivateCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructureTekSecurityConsole_C::ActivateCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.ActivateCamera");
		
		AStructureTekSecurityConsole_C_ActivateCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.AddNewCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            NewStructure                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureTekSecurityConsole_C::AddNewCamera(class APrimalStructure* NewStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.AddNewCamera");
		
		AStructureTekSecurityConsole_C_AddNewCamera_Params params {};
		params.NewStructure = NewStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.RemoveCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            CameraToRemove                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureTekSecurityConsole_C::RemoveCamera(class APrimalStructure* CameraToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.RemoveCamera");
		
		AStructureTekSecurityConsole_C_RemoveCamera_Params params {};
		params.CameraToRemove = CameraToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.ClientAddCamera
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureTekSecurityConsole_C::ClientAddCamera(int32_t index, const class FString& Name, const struct FVector& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.ClientAddCamera");
		
		AStructureTekSecurityConsole_C_ClientAddCamera_Params params {};
		params.index = index;
		params.Name = Name;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.ClientRemoveCamera
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureTekSecurityConsole_C::ClientRemoveCamera(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.ClientRemoveCamera");
		
		AStructureTekSecurityConsole_C_ClientRemoveCamera_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.ExecuteUbergraph_StructureTekSecurityConsole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureTekSecurityConsole_C::ExecuteUbergraph_StructureTekSecurityConsole(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.ExecuteUbergraph_StructureTekSecurityConsole");
		
		AStructureTekSecurityConsole_C_ExecuteUbergraph_StructureTekSecurityConsole_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStructureTekSecurityConsole_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStructureTekSecurityConsole_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StructureTekSecurityConsole.StructureTekSecurityConsole_C");
		return ptr;
	}

}


