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
	 * 		Name   -> Function FinalCreditsUI.FinalCreditsUI_C.Play Credits Music
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFinalCreditsUI_C::PlayCreditsMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FinalCreditsUI.FinalCreditsUI_C.Play Credits Music");
		
		UFinalCreditsUI_C_PlayCreditsMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function FinalCreditsUI.FinalCreditsUI_C.OnMoviePlaybackFinished
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      MoviePath                                                  (Parm, ZeroConstructor)
	 * 		bool                                               bPlaybackWasCancelled                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFinalCreditsUI_C::OnMoviePlaybackFinished(const class FString& MoviePath, bool bPlaybackWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FinalCreditsUI.FinalCreditsUI_C.OnMoviePlaybackFinished");
		
		UFinalCreditsUI_C_OnMoviePlaybackFinished_Params params {};
		params.MoviePath = MoviePath;
		params.bPlaybackWasCancelled = bPlaybackWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function FinalCreditsUI.FinalCreditsUI_C.Construct
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFinalCreditsUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FinalCreditsUI.FinalCreditsUI_C.Construct");
		
		UFinalCreditsUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function FinalCreditsUI.FinalCreditsUI_C.Tick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFinalCreditsUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FinalCreditsUI.FinalCreditsUI_C.Tick");
		
		UFinalCreditsUI_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function FinalCreditsUI.FinalCreditsUI_C.CloseButtonEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFinalCreditsUI_C::CloseButtonEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FinalCreditsUI.FinalCreditsUI_C.CloseButtonEvent");
		
		UFinalCreditsUI_C_CloseButtonEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function FinalCreditsUI.FinalCreditsUI_C.RemovedFromViewport
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFinalCreditsUI_C::RemovedFromViewport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FinalCreditsUI.FinalCreditsUI_C.RemovedFromViewport");
		
		UFinalCreditsUI_C_RemovedFromViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function FinalCreditsUI.FinalCreditsUI_C.AddedToViewport
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFinalCreditsUI_C::AddedToViewport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FinalCreditsUI.FinalCreditsUI_C.AddedToViewport");
		
		UFinalCreditsUI_C_AddedToViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function FinalCreditsUI.FinalCreditsUI_C.ExecuteUbergraph_FinalCreditsUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFinalCreditsUI_C::ExecuteUbergraph_FinalCreditsUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FinalCreditsUI.FinalCreditsUI_C.ExecuteUbergraph_FinalCreditsUI");
		
		UFinalCreditsUI_C_ExecuteUbergraph_FinalCreditsUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFinalCreditsUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFinalCreditsUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FinalCreditsUI.FinalCreditsUI_C");
		return ptr;
	}

}


