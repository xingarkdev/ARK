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
	 * 		Name   -> Function PrimalItemStructure_LamppostOmni.PrimalItemStructure_LamppostOmni_C.ExecuteUbergraph_PrimalItemStructure_LamppostOmni
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_LamppostOmni_C::ExecuteUbergraph_PrimalItemStructure_LamppostOmni(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_LamppostOmni.PrimalItemStructure_LamppostOmni_C.ExecuteUbergraph_PrimalItemStructure_LamppostOmni");
		
		UPrimalItemStructure_LamppostOmni_C_ExecuteUbergraph_PrimalItemStructure_LamppostOmni_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemStructure_LamppostOmni_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemStructure_LamppostOmni_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_LamppostOmni.PrimalItemStructure_LamppostOmni_C");
		return ptr;
	}

}


