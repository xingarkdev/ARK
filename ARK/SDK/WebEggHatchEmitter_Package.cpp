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
	 * 		Name   -> Function WebEggHatchEmitter.WebEggHatchEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWebEggHatchEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WebEggHatchEmitter.WebEggHatchEmitter_C.UserConstructionScript");
		
		AWebEggHatchEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WebEggHatchEmitter.WebEggHatchEmitter_C.ExecuteUbergraph_WebEggHatchEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWebEggHatchEmitter_C::ExecuteUbergraph_WebEggHatchEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WebEggHatchEmitter.WebEggHatchEmitter_C.ExecuteUbergraph_WebEggHatchEmitter");
		
		AWebEggHatchEmitter_C_ExecuteUbergraph_WebEggHatchEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWebEggHatchEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWebEggHatchEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WebEggHatchEmitter.WebEggHatchEmitter_C");
		return ptr;
	}

}


