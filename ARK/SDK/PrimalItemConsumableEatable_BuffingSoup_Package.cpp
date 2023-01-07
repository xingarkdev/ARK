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
	 * 		Name   -> Function PrimalItemConsumableEatable_BuffingSoup.PrimalItemConsumableEatable_BuffingSoup_C.ExecuteUbergraph_PrimalItemConsumableEatable_BuffingSoup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumableEatable_BuffingSoup_C::ExecuteUbergraph_PrimalItemConsumableEatable_BuffingSoup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumableEatable_BuffingSoup.PrimalItemConsumableEatable_BuffingSoup_C.ExecuteUbergraph_PrimalItemConsumableEatable_BuffingSoup");
		
		UPrimalItemConsumableEatable_BuffingSoup_C_ExecuteUbergraph_PrimalItemConsumableEatable_BuffingSoup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumableEatable_BuffingSoup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumableEatable_BuffingSoup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumableEatable_BuffingSoup.PrimalItemConsumableEatable_BuffingSoup_C");
		return ptr;
	}

}


