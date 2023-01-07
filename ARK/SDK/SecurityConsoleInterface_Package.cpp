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
	 * 		Name   -> Function SecurityConsoleInterface.SecurityConsoleInterface_C.ActivateCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USecurityConsoleInterface_C::ActivateCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityConsoleInterface.SecurityConsoleInterface_C.ActivateCamera");
		
		USecurityConsoleInterface_C_ActivateCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SecurityConsoleInterface.SecurityConsoleInterface_C.UpdateConsoleName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor)
	 */
	void USecurityConsoleInterface_C::UpdateConsoleName(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityConsoleInterface.SecurityConsoleInterface_C.UpdateConsoleName");
		
		USecurityConsoleInterface_C_UpdateConsoleName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SecurityConsoleInterface.SecurityConsoleInterface_C.GetConsoleData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor)
	 * 		bool                                               CanAddCamera                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USecurityConsoleInterface_C::GetConsoleData(float* ID, class FString* Name, bool* CanAddCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityConsoleInterface.SecurityConsoleInterface_C.GetConsoleData");
		
		USecurityConsoleInterface_C_GetConsoleData_Params params {};
		
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
	 * 		Name   -> Function SecurityConsoleInterface.SecurityConsoleInterface_C.CanAddCamera
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Allowed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USecurityConsoleInterface_C::CanAddCamera(bool* Allowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityConsoleInterface.SecurityConsoleInterface_C.CanAddCamera");
		
		USecurityConsoleInterface_C_CanAddCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allowed != nullptr)
			*Allowed = params.Allowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SecurityConsoleInterface.SecurityConsoleInterface_C.GetConsoleID
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USecurityConsoleInterface_C::GetConsoleID(float* ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityConsoleInterface.SecurityConsoleInterface_C.GetConsoleID");
		
		USecurityConsoleInterface_C_GetConsoleID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ID != nullptr)
			*ID = params.ID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SecurityConsoleInterface.SecurityConsoleInterface_C.UpdateCameraRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USecurityConsoleInterface_C::UpdateCameraRotation(const struct FRotator& NewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityConsoleInterface.SecurityConsoleInterface_C.UpdateCameraRotation");
		
		USecurityConsoleInterface_C_UpdateCameraRotation_Params params {};
		params.NewRotation = NewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SecurityConsoleInterface.SecurityConsoleInterface_C.GetCameraData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class APrimalStructure*>                    Cameras                                                    (Parm, OutParm, ZeroConstructor)
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USecurityConsoleInterface_C::GetCameraData(TArray<class APrimalStructure*>* Cameras, int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityConsoleInterface.SecurityConsoleInterface_C.GetCameraData");
		
		USecurityConsoleInterface_C_GetCameraData_Params params {};
		
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
	 * 		Name   -> Function SecurityConsoleInterface.SecurityConsoleInterface_C.SetCurrentCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CameraIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USecurityConsoleInterface_C::SetCurrentCamera(int32_t CameraIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityConsoleInterface.SecurityConsoleInterface_C.SetCurrentCamera");
		
		USecurityConsoleInterface_C_SetCurrentCamera_Params params {};
		params.CameraIndex = CameraIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SecurityConsoleInterface.SecurityConsoleInterface_C.GetCameraLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     CameraViewPoint                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    CameraRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USecurityConsoleInterface_C::GetCameraLocation(struct FVector* CameraViewPoint, struct FRotator* CameraRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityConsoleInterface.SecurityConsoleInterface_C.GetCameraLocation");
		
		USecurityConsoleInterface_C_GetCameraLocation_Params params {};
		
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
	 * 		Name   -> Function SecurityConsoleInterface.SecurityConsoleInterface_C.RemoveCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            CameraToRemove                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USecurityConsoleInterface_C::RemoveCamera(class APrimalStructure* CameraToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityConsoleInterface.SecurityConsoleInterface_C.RemoveCamera");
		
		USecurityConsoleInterface_C_RemoveCamera_Params params {};
		params.CameraToRemove = CameraToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SecurityConsoleInterface.SecurityConsoleInterface_C.AddNewCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            NewStructure                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USecurityConsoleInterface_C::AddNewCamera(class APrimalStructure* NewStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityConsoleInterface.SecurityConsoleInterface_C.AddNewCamera");
		
		USecurityConsoleInterface_C_AddNewCamera_Params params {};
		params.NewStructure = NewStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USecurityConsoleInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USecurityConsoleInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SecurityConsoleInterface.SecurityConsoleInterface_C");
		return ptr;
	}

}


