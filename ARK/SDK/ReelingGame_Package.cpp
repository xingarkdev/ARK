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
	 * 		Name   -> Function ReelingGame.ReelingGame_C.HandleKeyPress
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 * 		bool                                               retReply                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UReelingGame_C::HandleKeyPress(const struct FKey& Key, bool* retReply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReelingGame.ReelingGame_C.HandleKeyPress");
		
		UReelingGame_C_HandleKeyPress_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (retReply != nullptr)
			*retReply = params.retReply;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ReelingGame.ReelingGame_C.OnControllerButtonReleased
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		struct FControllerEvent                            ControllerEvent                                            (Parm)
	 */
	struct FEventReply UReelingGame_C::OnControllerButtonReleased(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReelingGame.ReelingGame_C.OnControllerButtonReleased");
		
		UReelingGame_C_OnControllerButtonReleased_Params params {};
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
	 * 		Name   -> Function ReelingGame.ReelingGame_C.OnMouseButtonDown
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UReelingGame_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReelingGame.ReelingGame_C.OnMouseButtonDown");
		
		UReelingGame_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MouseEvent != nullptr)
			*MouseEvent = params.MouseEvent;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ReelingGame.ReelingGame_C.CycleToNextKey
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UReelingGame_C::CycleToNextKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReelingGame.ReelingGame_C.CycleToNextKey");
		
		UReelingGame_C_CycleToNextKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ReelingGame.ReelingGame_C.UpdateRemainingTime
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UReelingGame_C::UpdateRemainingTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReelingGame.ReelingGame_C.UpdateRemainingTime");
		
		UReelingGame_C_UpdateRemainingTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ReelingGame.ReelingGame_C.OnKeyUp
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyboardEvent                              InKeyboardEvent                                            (Parm)
	 */
	struct FEventReply UReelingGame_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyboardEvent& InKeyboardEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReelingGame.ReelingGame_C.OnKeyUp");
		
		UReelingGame_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function ReelingGame.ReelingGame_C.CycleKeys
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FinishedGame                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UReelingGame_C::CycleKeys(bool* FinishedGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReelingGame.ReelingGame_C.CycleKeys");
		
		UReelingGame_C_CycleKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FinishedGame != nullptr)
			*FinishedGame = params.FinishedGame;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ReelingGame.ReelingGame_C.EndGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               succeeded                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UReelingGame_C::EndGame(bool succeeded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReelingGame.ReelingGame_C.EndGame");
		
		UReelingGame_C_EndGame_Params params {};
		params.succeeded = succeeded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ReelingGame.ReelingGame_C.Init
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              KeyDisplayDuration                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FKey>                                GameKeys                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class AWeapFishingRod_C*                           rod                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UReelingGame_C::Init(float KeyDisplayDuration, TArray<struct FKey>* GameKeys, class AWeapFishingRod_C* rod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReelingGame.ReelingGame_C.Init");
		
		UReelingGame_C_Init_Params params {};
		params.KeyDisplayDuration = KeyDisplayDuration;
		params.rod = rod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameKeys != nullptr)
			*GameKeys = params.GameKeys;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ReelingGame.ReelingGame_C.Tick
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UReelingGame_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReelingGame.ReelingGame_C.Tick");
		
		UReelingGame_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ReelingGame.ReelingGame_C.ExecuteUbergraph_ReelingGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UReelingGame_C::ExecuteUbergraph_ReelingGame(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReelingGame.ReelingGame_C.ExecuteUbergraph_ReelingGame");
		
		UReelingGame_C_ExecuteUbergraph_ReelingGame_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReelingGame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReelingGame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ReelingGame.ReelingGame_C");
		return ptr;
	}

}


