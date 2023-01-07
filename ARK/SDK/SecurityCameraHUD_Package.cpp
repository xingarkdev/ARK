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
	 * 		Name   -> Function SecurityCameraHUD.SecurityCameraHUD_C.OnControllerButtonPressed
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		struct FControllerEvent                            ControllerEvent                                            (Parm)
	 */
	struct FEventReply USecurityCameraHUD_C::OnControllerButtonPressed(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraHUD.SecurityCameraHUD_C.OnControllerButtonPressed");
		
		USecurityCameraHUD_C_OnControllerButtonPressed_Params params {};
		params.MyGeometry = MyGeometry;
		params.ControllerEvent = ControllerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SecurityCameraHUD.SecurityCameraHUD_C.SetInputControlsRichText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsCameraListShowing                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USecurityCameraHUD_C::SetInputControlsRichText(bool IsCameraListShowing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraHUD.SecurityCameraHUD_C.SetInputControlsRichText");
		
		USecurityCameraHUD_C_SetInputControlsRichText_Params params {};
		params.IsCameraListShowing = IsCameraListShowing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SecurityCameraHUD.SecurityCameraHUD_C.SelectItemAtIndex
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USecurityCameraHUD_C::SelectItemAtIndex(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraHUD.SecurityCameraHUD_C.SelectItemAtIndex");
		
		USecurityCameraHUD_C_SelectItemAtIndex_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SecurityCameraHUD.SecurityCameraHUD_C.Update Camera HUD Info
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void USecurityCameraHUD_C::UpdateCameraHUDInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraHUD.SecurityCameraHUD_C.Update Camera HUD Info");
		
		USecurityCameraHUD_C_UpdateCameraHUDInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SecurityCameraHUD.SecurityCameraHUD_C.SwitchToCameraAtIndex
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USecurityCameraHUD_C::SwitchToCameraAtIndex(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraHUD.SecurityCameraHUD_C.SwitchToCameraAtIndex");
		
		USecurityCameraHUD_C_SwitchToCameraAtIndex_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SecurityCameraHUD.SecurityCameraHUD_C.HideListPanel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USecurityCameraHUD_C::HideListPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraHUD.SecurityCameraHUD_C.HideListPanel");
		
		USecurityCameraHUD_C_HideListPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SecurityCameraHUD.SecurityCameraHUD_C.OnKeyUp
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyboardEvent                              InKeyboardEvent                                            (Parm)
	 */
	struct FEventReply USecurityCameraHUD_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyboardEvent& InKeyboardEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraHUD.SecurityCameraHUD_C.OnKeyUp");
		
		USecurityCameraHUD_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyboardEvent = InKeyboardEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SecurityCameraHUD.SecurityCameraHUD_C.ShowListPanel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USecurityCameraHUD_C::ShowListPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraHUD.SecurityCameraHUD_C.ShowListPanel");
		
		USecurityCameraHUD_C_ShowListPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SecurityCameraHUD.SecurityCameraHUD_C.InitFromCamera
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ARemoteCamera_Character_BP_C*                FromCamera                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      CameraName                                                 (Parm, ZeroConstructor)
	 * 		struct FVector                                     CameraLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CameraIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USecurityCameraHUD_C::InitFromCamera(class ARemoteCamera_Character_BP_C* FromCamera, const class FString& CameraName, const struct FVector& CameraLocation, int32_t CameraIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraHUD.SecurityCameraHUD_C.InitFromCamera");
		
		USecurityCameraHUD_C_InitFromCamera_Params params {};
		params.FromCamera = FromCamera;
		params.CameraName = CameraName;
		params.CameraLocation = CameraLocation;
		params.CameraIndex = CameraIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SecurityCameraHUD.SecurityCameraHUD_C.DestroyCameraHUDWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USecurityCameraHUD_C::DestroyCameraHUDWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraHUD.SecurityCameraHUD_C.DestroyCameraHUDWidget");
		
		USecurityCameraHUD_C_DestroyCameraHUDWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SecurityCameraHUD.SecurityCameraHUD_C.ResetCameraHUDWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USecurityCameraHUD_C::ResetCameraHUDWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraHUD.SecurityCameraHUD_C.ResetCameraHUDWidget");
		
		USecurityCameraHUD_C_ResetCameraHUDWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SecurityCameraHUD.SecurityCameraHUD_C.Tick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USecurityCameraHUD_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraHUD.SecurityCameraHUD_C.Tick");
		
		USecurityCameraHUD_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SecurityCameraHUD.SecurityCameraHUD_C.ResetHUDWidgetAlreadyInViewport
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USecurityCameraHUD_C::ResetHUDWidgetAlreadyInViewport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraHUD.SecurityCameraHUD_C.ResetHUDWidgetAlreadyInViewport");
		
		USecurityCameraHUD_C_ResetHUDWidgetAlreadyInViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SecurityCameraHUD.SecurityCameraHUD_C.ExecuteUbergraph_SecurityCameraHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USecurityCameraHUD_C::ExecuteUbergraph_SecurityCameraHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraHUD.SecurityCameraHUD_C.ExecuteUbergraph_SecurityCameraHUD");
		
		USecurityCameraHUD_C_ExecuteUbergraph_SecurityCameraHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USecurityCameraHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USecurityCameraHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SecurityCameraHUD.SecurityCameraHUD_C");
		return ptr;
	}

}


