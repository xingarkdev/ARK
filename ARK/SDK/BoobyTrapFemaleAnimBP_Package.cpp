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
	 * 		Name   -> Function BoobyTrapFemaleAnimBP.BoobyTrapFemaleAnimBP_C.ExecuteUbergraph_BoobyTrapFemaleAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBoobyTrapFemaleAnimBP_C::ExecuteUbergraph_BoobyTrapFemaleAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoobyTrapFemaleAnimBP.BoobyTrapFemaleAnimBP_C.ExecuteUbergraph_BoobyTrapFemaleAnimBP");
		
		UBoobyTrapFemaleAnimBP_C_ExecuteUbergraph_BoobyTrapFemaleAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoobyTrapFemaleAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoobyTrapFemaleAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BoobyTrapFemaleAnimBP.BoobyTrapFemaleAnimBP_C");
		return ptr;
	}

}


