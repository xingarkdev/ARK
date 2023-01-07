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
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetConsoleData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor)
	 * 		bool                                               CanAddCamera                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::GetConsoleData(float* ID, class FString* Name, bool* CanAddCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetConsoleData");
		
		ARemoteCamera_Character_BP_C_GetConsoleData_Params params {};
		
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
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.CanAddCamera
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Allowed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::CanAddCamera(bool* Allowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.CanAddCamera");
		
		ARemoteCamera_Character_BP_C_CanAddCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allowed != nullptr)
			*Allowed = params.Allowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetConsoleID
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::GetConsoleID(float* ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetConsoleID");
		
		ARemoteCamera_Character_BP_C_GetConsoleID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ID != nullptr)
			*ID = params.ID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetCameraData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class APrimalStructure*>                    Cameras                                                    (Parm, OutParm, ZeroConstructor)
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::GetCameraData(TArray<class APrimalStructure*>* Cameras, int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetCameraData");
		
		ARemoteCamera_Character_BP_C_GetCameraData_Params params {};
		
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
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetCameraLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     CameraViewPoint                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    CameraRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::GetCameraLocation(struct FVector* CameraViewPoint, struct FRotator* CameraRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetCameraLocation");
		
		ARemoteCamera_Character_BP_C_GetCameraLocation_Params params {};
		
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
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerUnlinkCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::ServerUnlinkCamera(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerUnlinkCamera");
		
		ARemoteCamera_Character_BP_C_ServerUnlinkCamera_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SwitchToCameraAtIndex
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CameraIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::SwitchToCameraAtIndex(int32_t CameraIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SwitchToCameraAtIndex");
		
		ARemoteCamera_Character_BP_C_SwitchToCameraAtIndex_Params params {};
		params.CameraIndex = CameraIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPOverrideCameraViewTarget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
	void ARemoteCamera_Character_BP_C::BPOverrideCameraViewTarget(const class FName& CurrentCameraMode, const struct FVector& DesiredCameraLocation, const struct FRotator& DesiredCameraRotation, float DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPOverrideCameraViewTarget");
		
		ARemoteCamera_Character_BP_C_BPOverrideCameraViewTarget_Params params {};
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
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_OnZoomOut
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::BP_OnZoomOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_OnZoomOut");
		
		ARemoteCamera_Character_BP_C_BP_OnZoomOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_OnZoomIn
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::BP_OnZoomIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_OnZoomIn");
		
		ARemoteCamera_Character_BP_C_BP_OnZoomIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.CycleVisionMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::CycleVisionMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.CycleVisionMode");
		
		ARemoteCamera_Character_BP_C_CycleVisionMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Concede Input Handling to UI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::ConcedeInputHandlingtoUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Concede Input Handling to UI");
		
		ARemoteCamera_Character_BP_C_ConcedeInputHandlingtoUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ResumeInputHandling
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::ResumeInputHandling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ResumeInputHandling");
		
		ARemoteCamera_Character_BP_C_ResumeInputHandling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPGetFPVViewLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            viewingCharacter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ARemoteCamera_Character_BP_C::BPGetFPVViewLocation(class APrimalCharacter* viewingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPGetFPVViewLocation");
		
		ARemoteCamera_Character_BP_C_BPGetFPVViewLocation_Params params {};
		params.viewingCharacter = viewingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPOverrideFPVViewLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            viewingCharacter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARemoteCamera_Character_BP_C::BPOverrideFPVViewLocation(class APrimalCharacter* viewingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPOverrideFPVViewLocation");
		
		ARemoteCamera_Character_BP_C_BPOverrideFPVViewLocation_Params params {};
		params.viewingCharacter = viewingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.CameraTick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::CameraTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.CameraTick");
		
		ARemoteCamera_Character_BP_C_CameraTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.RemoveCameraData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            CamToRemove                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::RemoveCameraData(class APrimalStructure* CamToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.RemoveCameraData");
		
		ARemoteCamera_Character_BP_C_RemoveCameraData_Params params {};
		params.CamToRemove = CamToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.AddCamera
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            NewCam                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::AddCamera(class APrimalStructure* NewCam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.AddCamera");
		
		ARemoteCamera_Character_BP_C_AddCamera_Params params {};
		params.NewCam = NewCam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPGetOtherActorToIgnore
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class AActor* ARemoteCamera_Character_BP_C::BPGetOtherActorToIgnore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPGetOtherActorToIgnore");
		
		ARemoteCamera_Character_BP_C_BPGetOtherActorToIgnore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReleaseCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::ReleaseCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReleaseCamera");
		
		ARemoteCamera_Character_BP_C_ReleaseCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReceiveDestroyed");
		
		ARemoteCamera_Character_BP_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPTriggerStasisEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::BPTriggerStasisEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPTriggerStasisEvent");
		
		ARemoteCamera_Character_BP_C_BPTriggerStasisEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPUnstasis");
		
		ARemoteCamera_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetCameraData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            currentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class APrimalStructure*>                    LinkedCameras_Server                                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ARemoteCamera_Character_BP_C::SetCameraData(int32_t currentIndex, TArray<class APrimalStructure*>* LinkedCameras_Server)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetCameraData");
		
		ARemoteCamera_Character_BP_C_SetCameraData_Params params {};
		params.currentIndex = currentIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LinkedCameras_Server != nullptr)
			*LinkedCameras_Server = params.LinkedCameras_Server;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ARemoteCamera_Character_BP_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPGetHUDElements");
		
		ARemoteCamera_Character_BP_C_BPGetHUDElements_Params params {};
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
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPForceCameraStyle
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ForViewTarget                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	ECameraStyle ARemoteCamera_Character_BP_C::BPForceCameraStyle(class APrimalCharacter* ForViewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPForceCameraStyle");
		
		ARemoteCamera_Character_BP_C_BPForceCameraStyle_Params params {};
		params.ForViewTarget = ForViewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPDinoPostBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::BPDinoPostBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPDinoPostBeginPlay");
		
		ARemoteCamera_Character_BP_C_BPDinoPostBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReceivePossessed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 NewController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReceivePossessed");
		
		ARemoteCamera_Character_BP_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPCanCryo
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARemoteCamera_Character_BP_C::BPCanCryo(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPCanCryo");
		
		ARemoteCamera_Character_BP_C_BPCanCryo_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_PreventMovementMode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARemoteCamera_Character_BP_C::BP_PreventMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_PreventMovementMode");
		
		ARemoteCamera_Character_BP_C_BP_PreventMovementMode_Params params {};
		params.NewMovementMode = NewMovementMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetupScoutDisconnect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DelayTimeSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::SetupScoutDisconnect(float DelayTimeSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetupScoutDisconnect");
		
		ARemoteCamera_Character_BP_C_SetupScoutDisconnect_Params params {};
		params.DelayTimeSeconds = DelayTimeSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DestroyScout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::DestroyScout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DestroyScout");
		
		ARemoteCamera_Character_BP_C_DestroyScout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPModifyAimOffsetTargetLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimTargetLocation                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FVector ARemoteCamera_Character_BP_C::BPModifyAimOffsetTargetLocation(struct FVector* AimTargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPModifyAimOffsetTargetLocation");
		
		ARemoteCamera_Character_BP_C_BPModifyAimOffsetTargetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AimTargetLocation != nullptr)
			*AimTargetLocation = params.AimTargetLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClearExpiredDinoAIData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::ClearExpiredDinoAIData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClearExpiredDinoAIData");
		
		ARemoteCamera_Character_BP_C_ClearExpiredDinoAIData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPOverrideStencilAllianceForTarget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            TargetDino                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         Component                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	EStencilAlliance ARemoteCamera_Character_BP_C::BPOverrideStencilAllianceForTarget(class APrimalCharacter* TargetDino, class UPrimitiveComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPOverrideStencilAllianceForTarget");
		
		ARemoteCamera_Character_BP_C_BPOverrideStencilAllianceForTarget_Params params {};
		params.TargetDino = TargetDino;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPShouldCancelDoAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARemoteCamera_Character_BP_C::BPShouldCancelDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPShouldCancelDoAttack");
		
		ARemoteCamera_Character_BP_C_BPShouldCancelDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.OnRep_LowStamina
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::OnRep_LowStamina()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.OnRep_LowStamina");
		
		ARemoteCamera_Character_BP_C_OnRep_LowStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReceiveTick");
		
		ARemoteCamera_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ScoutIsFirstPerson
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               retVal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::ScoutIsFirstPerson(bool* retVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ScoutIsFirstPerson");
		
		ARemoteCamera_Character_BP_C_ScoutIsFirstPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (retVal != nullptr)
			*retVal = params.retVal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPHandleOnStopFire
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ARemoteCamera_Character_BP_C::BPHandleOnStopFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPHandleOnStopFire");
		
		ARemoteCamera_Character_BP_C_BPHandleOnStopFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetTargetImpactMaterial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ImpactDistance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::SetTargetImpactMaterial(float ImpactDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetTargetImpactMaterial");
		
		ARemoteCamera_Character_BP_C_SetTargetImpactMaterial_Params params {};
		params.ImpactDistance = ImpactDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPPreventStasis
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ARemoteCamera_Character_BP_C::BPPreventStasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPPreventStasis");
		
		ARemoteCamera_Character_BP_C_BPPreventStasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.IsScoutFirst Person
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsFirstPerson                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::IsScoutFirstPerson(bool* IsFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.IsScoutFirst Person");
		
		ARemoteCamera_Character_BP_C_IsScoutFirstPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsFirstPerson != nullptr)
			*IsFirstPerson = params.IsFirstPerson;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetFirstPersonMaterial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsFirstPerson                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::SetFirstPersonMaterial(bool IsFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetFirstPersonMaterial");
		
		ARemoteCamera_Character_BP_C_SetFirstPersonMaterial_Params params {};
		params.IsFirstPerson = IsFirstPerson;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.IsServerOrSinglePlayer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::IsServerOrSinglePlayer(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.IsServerOrSinglePlayer");
		
		ARemoteCamera_Character_BP_C_IsServerOrSinglePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.IsClientOrSinglePlayer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::IsClientOrSinglePlayer(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.IsClientOrSinglePlayer");
		
		ARemoteCamera_Character_BP_C_IsClientOrSinglePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_GetCustomModifier_RotationRate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ARemoteCamera_Character_BP_C::BP_GetCustomModifier_RotationRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_GetCustomModifier_RotationRate");
		
		ARemoteCamera_Character_BP_C_BP_GetCustomModifier_RotationRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ARemoteCamera_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_GetCustomModifier_MaxSpeed");
		
		ARemoteCamera_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARemoteCamera_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BlueprintCanAttack");
		
		ARemoteCamera_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float ARemoteCamera_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPAdjustDamage");
		
		ARemoteCamera_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_OnSetDeath
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::BP_OnSetDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BP_OnSetDeath");
		
		ARemoteCamera_Character_BP_C_BP_OnSetDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARemoteCamera_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		ARemoteCamera_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Release Possessing Survivor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::ReleasePossessingSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Release Possessing Survivor");
		
		ARemoteCamera_Character_BP_C_ReleasePossessingSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetPossessedByPlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::GetPossessedByPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.GetPossessedByPlayer");
		
		ARemoteCamera_Character_BP_C_GetPossessedByPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Spawned from Structure
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ShooterPlayerController                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PossessDelay                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalStructure*                            LinkedStructure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::SpawnedfromStructure(class AShooterPlayerController* ShooterPlayerController, float PossessDelay, class APrimalStructure* LinkedStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Spawned from Structure");
		
		ARemoteCamera_Character_BP_C_SpawnedfromStructure_Params params {};
		params.ShooterPlayerController = ShooterPlayerController;
		params.PossessDelay = PossessDelay;
		params.LinkedStructure = LinkedStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPIsValidUnStasisCaster
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ARemoteCamera_Character_BP_C::BPIsValidUnStasisCaster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.BPIsValidUnStasisCaster");
		
		ARemoteCamera_Character_BP_C_BPIsValidUnStasisCaster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.UserConstructionScript");
		
		ARemoteCamera_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_146
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_146()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_146");
		
		ARemoteCamera_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_146_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_145
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_145()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_145");
		
		ARemoteCamera_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_145_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_144
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_144()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_144");
		
		ARemoteCamera_Character_BP_C_InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_144_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_ArkGamepadRightShoulder_K2Node_InputActionEvent_143
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::InpActEvt_ArkGamepadRightShoulder_K2Node_InputActionEvent_143()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_ArkGamepadRightShoulder_K2Node_InputActionEvent_143");
		
		ARemoteCamera_Character_BP_C_InpActEvt_ArkGamepadRightShoulder_K2Node_InputActionEvent_143_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_Jump_K2Node_InputActionEvent_142
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::InpActEvt_Jump_K2Node_InputActionEvent_142()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_Jump_K2Node_InputActionEvent_142");
		
		ARemoteCamera_Character_BP_C_InpActEvt_Jump_K2Node_InputActionEvent_142_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_Run_K2Node_InputActionEvent_141
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::InpActEvt_Run_K2Node_InputActionEvent_141()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_Run_K2Node_InputActionEvent_141");
		
		ARemoteCamera_Character_BP_C_InpActEvt_Run_K2Node_InputActionEvent_141_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_140
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_140()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_140");
		
		ARemoteCamera_Character_BP_C_InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_140_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_54
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_54()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_54");
		
		ARemoteCamera_Character_BP_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_54_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.UpdateCameraRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::UpdateCameraRotation(const struct FRotator& NewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.UpdateCameraRotation");
		
		ARemoteCamera_Character_BP_C_UpdateCameraRotation_Params params {};
		params.NewRotation = NewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.UpdateConsoleName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor)
	 */
	void ARemoteCamera_Character_BP_C::UpdateConsoleName(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.UpdateConsoleName");
		
		ARemoteCamera_Character_BP_C_UpdateConsoleName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ActivateCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::ActivateCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ActivateCamera");
		
		ARemoteCamera_Character_BP_C_ActivateCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Server_AddPostProcessBuffToPlayer
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            BuffIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::Server_AddPostProcessBuffToPlayer(int32_t BuffIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Server_AddPostProcessBuffToPlayer");
		
		ARemoteCamera_Character_BP_C_Server_AddPostProcessBuffToPlayer_Params params {};
		params.BuffIndex = BuffIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Server_RemovePostProcessBuffFromPlayer
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            BuffIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::Server_RemovePostProcessBuffFromPlayer(int32_t BuffIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Server_RemovePostProcessBuffFromPlayer");
		
		ARemoteCamera_Character_BP_C_Server_RemovePostProcessBuffFromPlayer_Params params {};
		params.BuffIndex = BuffIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Server_RemoveAllPostProcessBuffs
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::Server_RemoveAllPostProcessBuffs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.Server_RemoveAllPostProcessBuffs");
		
		ARemoteCamera_Character_BP_C_Server_RemoveAllPostProcessBuffs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.RemovePostProcessBuff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::RemovePostProcessBuff(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.RemovePostProcessBuff");
		
		ARemoteCamera_Character_BP_C_RemovePostProcessBuff_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReleasePossessingSurvivorAndDestroy
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::ReleasePossessingSurvivorAndDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReleasePossessingSurvivorAndDestroy");
		
		ARemoteCamera_Character_BP_C_ReleasePossessingSurvivorAndDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ReceiveBeginPlay");
		
		ARemoteCamera_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SpawnEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::SpawnEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SpawnEnd");
		
		ARemoteCamera_Character_BP_C_SpawnEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.TriggerDisconnectFX
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::TriggerDisconnectFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.TriggerDisconnectFX");
		
		ARemoteCamera_Character_BP_C_TriggerDisconnectFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.PossessedByPlayer
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::PossessedByPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.PossessedByPlayer");
		
		ARemoteCamera_Character_BP_C_PossessedByPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.MULTI_ReleasePossessingSurvivor
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::MULTI_ReleasePossessingSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.MULTI_ReleasePossessingSurvivor");
		
		ARemoteCamera_Character_BP_C_MULTI_ReleasePossessingSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DelayedDestroyActor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::DelayedDestroyActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DelayedDestroyActor");
		
		ARemoteCamera_Character_BP_C_DelayedDestroyActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerHandleOnStopFire
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::ServerHandleOnStopFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerHandleOnStopFire");
		
		ARemoteCamera_Character_BP_C_ServerHandleOnStopFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientCheckClearExpiredDinoData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::ClientCheckClearExpiredDinoData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientCheckClearExpiredDinoData");
		
		ARemoteCamera_Character_BP_C_ClientCheckClearExpiredDinoData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DisableAI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::DisableAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DisableAI");
		
		ARemoteCamera_Character_BP_C_DisableAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientHitTerrain
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ImpactNormal                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::ClientHitTerrain(const struct FVector& ImpactNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientHitTerrain");
		
		ARemoteCamera_Character_BP_C_ClientHitTerrain_Params params {};
		params.ImpactNormal = ImpactNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.AddNewCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            NewStructure                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::AddNewCamera(class APrimalStructure* NewStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.AddNewCamera");
		
		ARemoteCamera_Character_BP_C_AddNewCamera_Params params {};
		params.NewStructure = NewStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetCurrentCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CameraIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::SetCurrentCamera(int32_t CameraIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SetCurrentCamera");
		
		ARemoteCamera_Character_BP_C_SetCurrentCamera_Params params {};
		params.CameraIndex = CameraIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerNextCamera
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::ServerNextCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerNextCamera");
		
		ARemoteCamera_Character_BP_C_ServerNextCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ConsoleDeactivated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::ConsoleDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ConsoleDeactivated");
		
		ARemoteCamera_Character_BP_C_ConsoleDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.UpdateScoutVisionBuff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::UpdateScoutVisionBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.UpdateScoutVisionBuff");
		
		ARemoteCamera_Character_BP_C_UpdateScoutVisionBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.RemoveCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            CameraToRemove                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::RemoveCamera(class APrimalStructure* CameraToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.RemoveCamera");
		
		ARemoteCamera_Character_BP_C_RemoveCamera_Params params {};
		params.CameraToRemove = CameraToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.OnNotifyDamage_Event
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DamageAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::OnNotifyDamage_Event(float DamageAmount, struct FDamageEvent* DamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.OnNotifyDamage_Event");
		
		ARemoteCamera_Character_BP_C_OnNotifyDamage_Event_Params params {};
		params.DamageAmount = DamageAmount;
		params.EventInstigator = EventInstigator;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageEvent != nullptr)
			*DamageEvent = params.DamageEvent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ListenForPlayerDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::ListenForPlayerDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ListenForPlayerDamage");
		
		ARemoteCamera_Character_BP_C_ListenForPlayerDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientNotifyHit
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                Event                                                      (Parm)
	 * 		class APawn*                                       Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::ClientNotifyHit(float amount, const struct FDamageEvent& Event, class APawn* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientNotifyHit");
		
		ARemoteCamera_Character_BP_C_ClientNotifyHit_Params params {};
		params.amount = amount;
		params.Event = Event;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.OnSleepStateChanged_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsSleeping                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::OnSleepStateChanged_Event(class APrimalCharacter* forCharacter, bool bIsSleeping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.OnSleepStateChanged_Event");
		
		ARemoteCamera_Character_BP_C_OnSleepStateChanged_Event_Params params {};
		params.forCharacter = forCharacter;
		params.bIsSleeping = bIsSleeping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientActivateCamera
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::ClientActivateCamera(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientActivateCamera");
		
		ARemoteCamera_Character_BP_C_ClientActivateCamera_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientReleaseCamera
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::ClientReleaseCamera(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientReleaseCamera");
		
		ARemoteCamera_Character_BP_C_ClientReleaseCamera_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DelayedActivateCamera
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::DelayedActivateCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DelayedActivateCamera");
		
		ARemoteCamera_Character_BP_C_DelayedActivateCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DelayedReleaseCamera
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::DelayedReleaseCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DelayedReleaseCamera");
		
		ARemoteCamera_Character_BP_C_DelayedReleaseCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.VerifyPossession
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::VerifyPossession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.VerifyPossession");
		
		ARemoteCamera_Character_BP_C_VerifyPossession_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.VerifyPossessingSurvivor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::VerifyPossessingSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.VerifyPossessingSurvivor");
		
		ARemoteCamera_Character_BP_C_VerifyPossessingSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerUpdateCameraInfo
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CameraIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::ServerUpdateCameraInfo(int32_t CameraIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerUpdateCameraInfo");
		
		ARemoteCamera_Character_BP_C_ServerUpdateCameraInfo_Params params {};
		params.CameraIndex = CameraIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientUpdateCameraInfo
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CameraIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalStructure*                            UpdatedCamera                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::ClientUpdateCameraInfo(int32_t CameraIndex, class APrimalStructure* UpdatedCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientUpdateCameraInfo");
		
		ARemoteCamera_Character_BP_C_ClientUpdateCameraInfo_Params params {};
		params.CameraIndex = CameraIndex;
		params.UpdatedCamera = UpdatedCamera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SpawnCameraHUD
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::SpawnCameraHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.SpawnCameraHUD");
		
		ARemoteCamera_Character_BP_C_SpawnCameraHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DestroyCameraHUD
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::DestroyCameraHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.DestroyCameraHUD");
		
		ARemoteCamera_Character_BP_C_DestroyCameraHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerPreviousCamera
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::ServerPreviousCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerPreviousCamera");
		
		ARemoteCamera_Character_BP_C_ServerPreviousCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerSwitchToCameraAtIndex
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::ServerSwitchToCameraAtIndex(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerSwitchToCameraAtIndex");
		
		ARemoteCamera_Character_BP_C_ServerSwitchToCameraAtIndex_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientUpdateHUDInfo
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::ClientUpdateHUDInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ClientUpdateHUDInfo");
		
		ARemoteCamera_Character_BP_C_ClientUpdateHUDInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.StopPossessingPlayerMovement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::StopPossessingPlayerMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.StopPossessingPlayerMovement");
		
		ARemoteCamera_Character_BP_C_StopPossessingPlayerMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerConfirmActivation
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ARemoteCamera_Character_BP_C::ServerConfirmActivation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ServerConfirmActivation");
		
		ARemoteCamera_Character_BP_C_ServerConfirmActivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.UnlinkCamera
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::UnlinkCamera(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.UnlinkCamera");
		
		ARemoteCamera_Character_BP_C_UnlinkCamera_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ExecuteUbergraph_RemoteCamera_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARemoteCamera_Character_BP_C::ExecuteUbergraph_RemoteCamera_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteCamera_Character_BP.RemoteCamera_Character_BP_C.ExecuteUbergraph_RemoteCamera_Character_BP");
		
		ARemoteCamera_Character_BP_C_ExecuteUbergraph_RemoteCamera_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARemoteCamera_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARemoteCamera_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RemoteCamera_Character_BP.RemoteCamera_Character_BP_C");
		return ptr;
	}

}


