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
	 * 		Name   -> Function magnifyingGlass_FPV_RIG_AnimBP.magnifyingGlass_FPV_RIG_AnimBP_C.ExecuteUbergraph_magnifyingGlass_FPV_RIG_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UmagnifyingGlass_FPV_RIG_AnimBP_C::ExecuteUbergraph_magnifyingGlass_FPV_RIG_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function magnifyingGlass_FPV_RIG_AnimBP.magnifyingGlass_FPV_RIG_AnimBP_C.ExecuteUbergraph_magnifyingGlass_FPV_RIG_AnimBP");
		
		UmagnifyingGlass_FPV_RIG_AnimBP_C_ExecuteUbergraph_magnifyingGlass_FPV_RIG_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UmagnifyingGlass_FPV_RIG_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UmagnifyingGlass_FPV_RIG_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass magnifyingGlass_FPV_RIG_AnimBP.magnifyingGlass_FPV_RIG_AnimBP_C");
		return ptr;
	}

}


