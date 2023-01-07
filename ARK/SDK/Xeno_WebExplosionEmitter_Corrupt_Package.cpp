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
	 * 		Name   -> Function Xeno_WebExplosionEmitter_Corrupt.Xeno_WebExplosionEmitter_Corrupt_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXeno_WebExplosionEmitter_Corrupt_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xeno_WebExplosionEmitter_Corrupt.Xeno_WebExplosionEmitter_Corrupt_C.UserConstructionScript");
		
		AXeno_WebExplosionEmitter_Corrupt_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Xeno_WebExplosionEmitter_Corrupt.Xeno_WebExplosionEmitter_Corrupt_C.ExecuteUbergraph_Xeno_WebExplosionEmitter_Corrupt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXeno_WebExplosionEmitter_Corrupt_C::ExecuteUbergraph_Xeno_WebExplosionEmitter_Corrupt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xeno_WebExplosionEmitter_Corrupt.Xeno_WebExplosionEmitter_Corrupt_C.ExecuteUbergraph_Xeno_WebExplosionEmitter_Corrupt");
		
		AXeno_WebExplosionEmitter_Corrupt_C_ExecuteUbergraph_Xeno_WebExplosionEmitter_Corrupt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AXeno_WebExplosionEmitter_Corrupt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AXeno_WebExplosionEmitter_Corrupt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Xeno_WebExplosionEmitter_Corrupt.Xeno_WebExplosionEmitter_Corrupt_C");
		return ptr;
	}

}


