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
	 * 		Name   -> Function WeapCrossbow_GrapplingHook.WeapCrossbow_GrapplingHook_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapCrossbow_GrapplingHook_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapCrossbow_GrapplingHook.WeapCrossbow_GrapplingHook_C.UserConstructionScript");
		
		AWeapCrossbow_GrapplingHook_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapCrossbow_GrapplingHook.WeapCrossbow_GrapplingHook_C.ExecuteUbergraph_WeapCrossbow_GrapplingHook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapCrossbow_GrapplingHook_C::ExecuteUbergraph_WeapCrossbow_GrapplingHook(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapCrossbow_GrapplingHook.WeapCrossbow_GrapplingHook_C.ExecuteUbergraph_WeapCrossbow_GrapplingHook");
		
		AWeapCrossbow_GrapplingHook_C_ExecuteUbergraph_WeapCrossbow_GrapplingHook_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapCrossbow_GrapplingHook_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapCrossbow_GrapplingHook_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapCrossbow_GrapplingHook.WeapCrossbow_GrapplingHook_C");
		return ptr;
	}

}


