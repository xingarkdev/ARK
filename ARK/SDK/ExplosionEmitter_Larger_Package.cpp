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
	 * 		Name   -> Function ExplosionEmitter_Larger.ExplosionEmitter_Larger_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AExplosionEmitter_Larger_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplosionEmitter_Larger.ExplosionEmitter_Larger_C.UserConstructionScript");
		
		AExplosionEmitter_Larger_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ExplosionEmitter_Larger.ExplosionEmitter_Larger_C.ExecuteUbergraph_ExplosionEmitter_Larger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExplosionEmitter_Larger_C::ExecuteUbergraph_ExplosionEmitter_Larger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplosionEmitter_Larger.ExplosionEmitter_Larger_C.ExecuteUbergraph_ExplosionEmitter_Larger");
		
		AExplosionEmitter_Larger_C_ExecuteUbergraph_ExplosionEmitter_Larger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AExplosionEmitter_Larger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AExplosionEmitter_Larger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ExplosionEmitter_Larger.ExplosionEmitter_Larger_C");
		return ptr;
	}

}


