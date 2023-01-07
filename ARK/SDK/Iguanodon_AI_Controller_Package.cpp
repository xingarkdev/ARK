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
	 * 		Name   -> Function Iguanodon_AI_Controller.Iguanodon_AI_Controller_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIguanodon_AI_Controller_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_AI_Controller.Iguanodon_AI_Controller_C.UserConstructionScript");
		
		AIguanodon_AI_Controller_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_AI_Controller.Iguanodon_AI_Controller_C.ExecuteUbergraph_Iguanodon_AI_Controller
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIguanodon_AI_Controller_C::ExecuteUbergraph_Iguanodon_AI_Controller(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_AI_Controller.Iguanodon_AI_Controller_C.ExecuteUbergraph_Iguanodon_AI_Controller");
		
		AIguanodon_AI_Controller_C_ExecuteUbergraph_Iguanodon_AI_Controller_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIguanodon_AI_Controller_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIguanodon_AI_Controller_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Iguanodon_AI_Controller.Iguanodon_AI_Controller_C");
		return ptr;
	}

}


