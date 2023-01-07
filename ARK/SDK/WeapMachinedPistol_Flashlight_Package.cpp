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
	 * 		Name   -> Function WeapMachinedPistol_Flashlight.WeapMachinedPistol_Flashlight_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapMachinedPistol_Flashlight_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapMachinedPistol_Flashlight.WeapMachinedPistol_Flashlight_C.UserConstructionScript");
		
		AWeapMachinedPistol_Flashlight_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapMachinedPistol_Flashlight.WeapMachinedPistol_Flashlight_C.ExecuteUbergraph_WeapMachinedPistol_Flashlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapMachinedPistol_Flashlight_C::ExecuteUbergraph_WeapMachinedPistol_Flashlight(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapMachinedPistol_Flashlight.WeapMachinedPistol_Flashlight_C.ExecuteUbergraph_WeapMachinedPistol_Flashlight");
		
		AWeapMachinedPistol_Flashlight_C_ExecuteUbergraph_WeapMachinedPistol_Flashlight_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapMachinedPistol_Flashlight_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapMachinedPistol_Flashlight_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapMachinedPistol_Flashlight.WeapMachinedPistol_Flashlight_C");
		return ptr;
	}

}


