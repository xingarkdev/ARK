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
	 * 		Name   -> Function WeapTransGPS.WeapTransGPS_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTransGPS_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTransGPS.WeapTransGPS_C.UserConstructionScript");
		
		AWeapTransGPS_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTransGPS.WeapTransGPS_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_22
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AWeapTransGPS_C::InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_22()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTransGPS.WeapTransGPS_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_22");
		
		AWeapTransGPS_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_22_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTransGPS.WeapTransGPS_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTransGPS_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTransGPS.WeapTransGPS_C.ReceiveBeginPlay");
		
		AWeapTransGPS_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapTransGPS.WeapTransGPS_C.ExecuteUbergraph_WeapTransGPS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapTransGPS_C::ExecuteUbergraph_WeapTransGPS(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTransGPS.WeapTransGPS_C.ExecuteUbergraph_WeapTransGPS");
		
		AWeapTransGPS_C_ExecuteUbergraph_WeapTransGPS_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapTransGPS_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapTransGPS_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapTransGPS.WeapTransGPS_C");
		return ptr;
	}

}


