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
	 * 		Name   -> Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.SetDisplay
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AViewableIncubatorEgg_C::SetDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.SetDisplay");
		
		AViewableIncubatorEgg_C_SetDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.UpdateDisplay
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FromAdd                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItemConsumable_Egg_C*                 EggClass                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViewableIncubatorEgg_C::UpdateDisplay(bool FromAdd, class UPrimalItemConsumable_Egg_C* EggClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.UpdateDisplay");
		
		AViewableIncubatorEgg_C_UpdateDisplay_Params params {};
		params.FromAdd = FromAdd;
		params.EggClass = EggClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.DrawBasicFloatingHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AHUD*                                        ForHUD                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViewableIncubatorEgg_C::DrawBasicFloatingHUD(class AHUD* ForHUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.DrawBasicFloatingHUD");
		
		AViewableIncubatorEgg_C_DrawBasicFloatingHUD_Params params {};
		params.ForHUD = ForHUD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AViewableIncubatorEgg_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.UserConstructionScript");
		
		AViewableIncubatorEgg_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AViewableIncubatorEgg_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.ReceiveBeginPlay");
		
		AViewableIncubatorEgg_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.ExecuteUbergraph_ViewableIncubatorEgg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViewableIncubatorEgg_C::ExecuteUbergraph_ViewableIncubatorEgg(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.ExecuteUbergraph_ViewableIncubatorEgg");
		
		AViewableIncubatorEgg_C_ExecuteUbergraph_ViewableIncubatorEgg_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AViewableIncubatorEgg_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AViewableIncubatorEgg_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ViewableIncubatorEgg.ViewableIncubatorEgg_C");
		return ptr;
	}

}


