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
	 * 		Name   -> Function PrimalItemConsumable_BugRepellant.PrimalItemConsumable_BugRepellant_C.ExecuteUbergraph_PrimalItemConsumable_BugRepellant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_BugRepellant_C::ExecuteUbergraph_PrimalItemConsumable_BugRepellant(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_BugRepellant.PrimalItemConsumable_BugRepellant_C.ExecuteUbergraph_PrimalItemConsumable_BugRepellant");
		
		UPrimalItemConsumable_BugRepellant_C_ExecuteUbergraph_PrimalItemConsumable_BugRepellant_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_BugRepellant_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_BugRepellant_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_BugRepellant.PrimalItemConsumable_BugRepellant_C");
		return ptr;
	}

}


