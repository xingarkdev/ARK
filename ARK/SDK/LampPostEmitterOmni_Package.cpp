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
	 * 		Name   -> Function LampPostEmitterOmni.LampPostEmitterOmni_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALampPostEmitterOmni_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LampPostEmitterOmni.LampPostEmitterOmni_C.UserConstructionScript");
		
		ALampPostEmitterOmni_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function LampPostEmitterOmni.LampPostEmitterOmni_C.ExecuteUbergraph_LampPostEmitterOmni
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALampPostEmitterOmni_C::ExecuteUbergraph_LampPostEmitterOmni(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LampPostEmitterOmni.LampPostEmitterOmni_C.ExecuteUbergraph_LampPostEmitterOmni");
		
		ALampPostEmitterOmni_C_ExecuteUbergraph_LampPostEmitterOmni_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALampPostEmitterOmni_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALampPostEmitterOmni_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LampPostEmitterOmni.LampPostEmitterOmni_C");
		return ptr;
	}

}


