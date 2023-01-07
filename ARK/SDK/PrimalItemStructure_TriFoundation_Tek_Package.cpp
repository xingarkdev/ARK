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
	 * 		Name   -> Function PrimalItemStructure_TriFoundation_Tek.PrimalItemStructure_TriFoundation_Tek_C.ExecuteUbergraph_PrimalItemStructure_TriFoundation_Tek
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_TriFoundation_Tek_C::ExecuteUbergraph_PrimalItemStructure_TriFoundation_Tek(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TriFoundation_Tek.PrimalItemStructure_TriFoundation_Tek_C.ExecuteUbergraph_PrimalItemStructure_TriFoundation_Tek");
		
		UPrimalItemStructure_TriFoundation_Tek_C_ExecuteUbergraph_PrimalItemStructure_TriFoundation_Tek_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemStructure_TriFoundation_Tek_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemStructure_TriFoundation_Tek_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TriFoundation_Tek.PrimalItemStructure_TriFoundation_Tek_C");
		return ptr;
	}

}


