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
	 * 		Name   -> Function CameraListEntry.CameraListEntry_C.SetSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCameraListEntry_C::SetSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraListEntry.CameraListEntry_C.SetSelected");
		
		UCameraListEntry_C_SetSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function CameraListEntry.CameraListEntry_C.InitForCamera
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USecurityCameraHUD_C*                        OwningHUD                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      CameraName                                                 (Parm, ZeroConstructor)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCameraListEntry_C::InitForCamera(class USecurityCameraHUD_C* OwningHUD, const class FString& CameraName, const struct FVector& Location, int32_t index, float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraListEntry.CameraListEntry_C.InitForCamera");
		
		UCameraListEntry_C_InitForCamera_Params params {};
		params.OwningHUD = OwningHUD;
		params.CameraName = CameraName;
		params.Location = Location;
		params.index = index;
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function CameraListEntry.CameraListEntry_C.BndEvt__Button_K2Node_ComponentBoundEvent_304_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCameraListEntry_C::BndEvt__Button_K2Node_ComponentBoundEvent_304_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraListEntry.CameraListEntry_C.BndEvt__Button_K2Node_ComponentBoundEvent_304_OnButtonClickedEvent__DelegateSignature");
		
		UCameraListEntry_C_BndEvt__Button_K2Node_ComponentBoundEvent_304_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function CameraListEntry.CameraListEntry_C.ExecuteUbergraph_CameraListEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCameraListEntry_C::ExecuteUbergraph_CameraListEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraListEntry.CameraListEntry_C.ExecuteUbergraph_CameraListEntry");
		
		UCameraListEntry_C_ExecuteUbergraph_CameraListEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraListEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraListEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CameraListEntry.CameraListEntry_C");
		return ptr;
	}

}


