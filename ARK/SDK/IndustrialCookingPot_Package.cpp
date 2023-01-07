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
	 * 		Name   -> Function IndustrialCookingPot.IndustrialCookingPot_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIndustrialCookingPot_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IndustrialCookingPot.IndustrialCookingPot_C.UserConstructionScript");
		
		AIndustrialCookingPot_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IndustrialCookingPot.IndustrialCookingPot_C.ExecuteUbergraph_IndustrialCookingPot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIndustrialCookingPot_C::ExecuteUbergraph_IndustrialCookingPot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IndustrialCookingPot.IndustrialCookingPot_C.ExecuteUbergraph_IndustrialCookingPot");
		
		AIndustrialCookingPot_C_ExecuteUbergraph_IndustrialCookingPot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIndustrialCookingPot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIndustrialCookingPot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IndustrialCookingPot.IndustrialCookingPot_C");
		return ptr;
	}

}


