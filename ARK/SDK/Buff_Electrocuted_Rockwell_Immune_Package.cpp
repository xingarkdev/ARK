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
	 * 		Name   -> Function Buff_Electrocuted_Rockwell_Immune.Buff_Electrocuted_Rockwell_Immune_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Electrocuted_Rockwell_Immune_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Electrocuted_Rockwell_Immune.Buff_Electrocuted_Rockwell_Immune_C.UserConstructionScript");
		
		ABuff_Electrocuted_Rockwell_Immune_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Electrocuted_Rockwell_Immune.Buff_Electrocuted_Rockwell_Immune_C.ExecuteUbergraph_Buff_Electrocuted_Rockwell_Immune
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Electrocuted_Rockwell_Immune_C::ExecuteUbergraph_Buff_Electrocuted_Rockwell_Immune(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Electrocuted_Rockwell_Immune.Buff_Electrocuted_Rockwell_Immune_C.ExecuteUbergraph_Buff_Electrocuted_Rockwell_Immune");
		
		ABuff_Electrocuted_Rockwell_Immune_C_ExecuteUbergraph_Buff_Electrocuted_Rockwell_Immune_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Electrocuted_Rockwell_Immune_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Electrocuted_Rockwell_Immune_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Electrocuted_Rockwell_Immune.Buff_Electrocuted_Rockwell_Immune_C");
		return ptr;
	}

}


