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
	 * 		Name   -> Function ProjHarpoon_Tranq.ProjHarpoon_Tranq_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjHarpoon_Tranq_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjHarpoon_Tranq.ProjHarpoon_Tranq_C.UserConstructionScript");
		
		AProjHarpoon_Tranq_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjHarpoon_Tranq.ProjHarpoon_Tranq_C.ExecuteUbergraph_ProjHarpoon_Tranq
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjHarpoon_Tranq_C::ExecuteUbergraph_ProjHarpoon_Tranq(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjHarpoon_Tranq.ProjHarpoon_Tranq_C.ExecuteUbergraph_ProjHarpoon_Tranq");
		
		AProjHarpoon_Tranq_C_ExecuteUbergraph_ProjHarpoon_Tranq_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjHarpoon_Tranq_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjHarpoon_Tranq_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjHarpoon_Tranq.ProjHarpoon_Tranq_C");
		return ptr;
	}

}


