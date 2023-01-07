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
	 * 		Name   -> Function DefPlant_ProjectileEmitter.DefPlant_ProjectileEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADefPlant_ProjectileEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefPlant_ProjectileEmitter.DefPlant_ProjectileEmitter_C.UserConstructionScript");
		
		ADefPlant_ProjectileEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DefPlant_ProjectileEmitter.DefPlant_ProjectileEmitter_C.ExecuteUbergraph_DefPlant_ProjectileEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADefPlant_ProjectileEmitter_C::ExecuteUbergraph_DefPlant_ProjectileEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefPlant_ProjectileEmitter.DefPlant_ProjectileEmitter_C.ExecuteUbergraph_DefPlant_ProjectileEmitter");
		
		ADefPlant_ProjectileEmitter_C_ExecuteUbergraph_DefPlant_ProjectileEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADefPlant_ProjectileEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADefPlant_ProjectileEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DefPlant_ProjectileEmitter.DefPlant_ProjectileEmitter_C");
		return ptr;
	}

}


