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
	 * 		Name   -> Function WebExplosionEmitterSmall.WebExplosionEmitterSmall_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWebExplosionEmitterSmall_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WebExplosionEmitterSmall.WebExplosionEmitterSmall_C.UserConstructionScript");
		
		AWebExplosionEmitterSmall_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WebExplosionEmitterSmall.WebExplosionEmitterSmall_C.ExecuteUbergraph_WebExplosionEmitterSmall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWebExplosionEmitterSmall_C::ExecuteUbergraph_WebExplosionEmitterSmall(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WebExplosionEmitterSmall.WebExplosionEmitterSmall_C.ExecuteUbergraph_WebExplosionEmitterSmall");
		
		AWebExplosionEmitterSmall_C_ExecuteUbergraph_WebExplosionEmitterSmall_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWebExplosionEmitterSmall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWebExplosionEmitterSmall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WebExplosionEmitterSmall.WebExplosionEmitterSmall_C");
		return ptr;
	}

}


