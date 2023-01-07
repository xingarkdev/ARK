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
	 * 		Name   -> Function BaseHumanAnimBP_Fists.BaseHumanAnimBP_Fists_C.ExecuteUbergraph_BaseHumanAnimBP_Fists
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBaseHumanAnimBP_Fists_C::ExecuteUbergraph_BaseHumanAnimBP_Fists(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP_Fists.BaseHumanAnimBP_Fists_C.ExecuteUbergraph_BaseHumanAnimBP_Fists");
		
		UBaseHumanAnimBP_Fists_C_ExecuteUbergraph_BaseHumanAnimBP_Fists_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseHumanAnimBP_Fists_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseHumanAnimBP_Fists_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BaseHumanAnimBP_Fists.BaseHumanAnimBP_Fists_C");
		return ptr;
	}

}


