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
	 * 		Name   -> Function ProjDart_RefinedTranq.ProjDart_RefinedTranq_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjDart_RefinedTranq_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjDart_RefinedTranq.ProjDart_RefinedTranq_C.UserConstructionScript");
		
		AProjDart_RefinedTranq_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjDart_RefinedTranq.ProjDart_RefinedTranq_C.ExecuteUbergraph_ProjDart_RefinedTranq
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjDart_RefinedTranq_C::ExecuteUbergraph_ProjDart_RefinedTranq(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjDart_RefinedTranq.ProjDart_RefinedTranq_C.ExecuteUbergraph_ProjDart_RefinedTranq");
		
		AProjDart_RefinedTranq_C_ExecuteUbergraph_ProjDart_RefinedTranq_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjDart_RefinedTranq_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjDart_RefinedTranq_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjDart_RefinedTranq.ProjDart_RefinedTranq_C");
		return ptr;
	}

}


