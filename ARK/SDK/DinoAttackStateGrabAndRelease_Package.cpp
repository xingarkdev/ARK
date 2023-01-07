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
	 * 		Name   -> Function DinoAttackStateGrabAndRelease.DinoAttackStateGrabAndRelease_C.ExecuteUbergraph_DinoAttackStateGrabAndRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateGrabAndRelease_C::ExecuteUbergraph_DinoAttackStateGrabAndRelease(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateGrabAndRelease.DinoAttackStateGrabAndRelease_C.ExecuteUbergraph_DinoAttackStateGrabAndRelease");
		
		UDinoAttackStateGrabAndRelease_C_ExecuteUbergraph_DinoAttackStateGrabAndRelease_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackStateGrabAndRelease_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackStateGrabAndRelease_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateGrabAndRelease.DinoAttackStateGrabAndRelease_C");
		return ptr;
	}

}


