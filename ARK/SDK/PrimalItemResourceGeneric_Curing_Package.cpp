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
	 * 		Name   -> Function PrimalItemResourceGeneric_Curing.PrimalItemResourceGeneric_Curing_C.ExecuteUbergraph_PrimalItemResourceGeneric_Curing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemResourceGeneric_Curing_C::ExecuteUbergraph_PrimalItemResourceGeneric_Curing(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemResourceGeneric_Curing.PrimalItemResourceGeneric_Curing_C.ExecuteUbergraph_PrimalItemResourceGeneric_Curing");
		
		UPrimalItemResourceGeneric_Curing_C_ExecuteUbergraph_PrimalItemResourceGeneric_Curing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemResourceGeneric_Curing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemResourceGeneric_Curing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResourceGeneric_Curing.PrimalItemResourceGeneric_Curing_C");
		return ptr;
	}

}


