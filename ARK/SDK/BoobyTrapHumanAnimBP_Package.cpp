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
	 * 		Name   -> Function BoobyTrapHumanAnimBP.BoobyTrapHumanAnimBP_C.ExecuteUbergraph_BoobyTrapHumanAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBoobyTrapHumanAnimBP_C::ExecuteUbergraph_BoobyTrapHumanAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoobyTrapHumanAnimBP.BoobyTrapHumanAnimBP_C.ExecuteUbergraph_BoobyTrapHumanAnimBP");
		
		UBoobyTrapHumanAnimBP_C_ExecuteUbergraph_BoobyTrapHumanAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoobyTrapHumanAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoobyTrapHumanAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BoobyTrapHumanAnimBP.BoobyTrapHumanAnimBP_C");
		return ptr;
	}

}


