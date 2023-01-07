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
	 * 		Name   -> Function IncubatorGestationEmitter.IncubatorGestationEmitter_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIncubatorGestationEmitter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IncubatorGestationEmitter.IncubatorGestationEmitter_C.ReceiveBeginPlay");
		
		AIncubatorGestationEmitter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IncubatorGestationEmitter.IncubatorGestationEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIncubatorGestationEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IncubatorGestationEmitter.IncubatorGestationEmitter_C.UserConstructionScript");
		
		AIncubatorGestationEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IncubatorGestationEmitter.IncubatorGestationEmitter_C.PlayBdayMusic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIncubatorGestationEmitter_C::PlayBdayMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IncubatorGestationEmitter.IncubatorGestationEmitter_C.PlayBdayMusic");
		
		AIncubatorGestationEmitter_C_PlayBdayMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IncubatorGestationEmitter.IncubatorGestationEmitter_C.ExecuteUbergraph_IncubatorGestationEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIncubatorGestationEmitter_C::ExecuteUbergraph_IncubatorGestationEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IncubatorGestationEmitter.IncubatorGestationEmitter_C.ExecuteUbergraph_IncubatorGestationEmitter");
		
		AIncubatorGestationEmitter_C_ExecuteUbergraph_IncubatorGestationEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIncubatorGestationEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIncubatorGestationEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IncubatorGestationEmitter.IncubatorGestationEmitter_C");
		return ptr;
	}

}


