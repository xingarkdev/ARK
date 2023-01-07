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
	 * 		Name   -> Function DinoSettings_Omnivore_Medium_Enforcer.DinoSettings_Omnivore_Medium_Enforcer_C.ExecuteUbergraph_DinoSettings_Omnivore_Medium_Enforcer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoSettings_Omnivore_Medium_Enforcer_C::ExecuteUbergraph_DinoSettings_Omnivore_Medium_Enforcer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoSettings_Omnivore_Medium_Enforcer.DinoSettings_Omnivore_Medium_Enforcer_C.ExecuteUbergraph_DinoSettings_Omnivore_Medium_Enforcer");
		
		UDinoSettings_Omnivore_Medium_Enforcer_C_ExecuteUbergraph_DinoSettings_Omnivore_Medium_Enforcer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoSettings_Omnivore_Medium_Enforcer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSettings_Omnivore_Medium_Enforcer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Omnivore_Medium_Enforcer.DinoSettings_Omnivore_Medium_Enforcer_C");
		return ptr;
	}

}


