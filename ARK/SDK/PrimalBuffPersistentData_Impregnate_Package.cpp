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
	 * 		Name   -> Function PrimalBuffPersistentData_Impregnate.PrimalBuffPersistentData_Impregnate_C.ExecuteUbergraph_PrimalBuffPersistentData_Impregnate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalBuffPersistentData_Impregnate_C::ExecuteUbergraph_PrimalBuffPersistentData_Impregnate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalBuffPersistentData_Impregnate.PrimalBuffPersistentData_Impregnate_C.ExecuteUbergraph_PrimalBuffPersistentData_Impregnate");
		
		UPrimalBuffPersistentData_Impregnate_C_ExecuteUbergraph_PrimalBuffPersistentData_Impregnate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalBuffPersistentData_Impregnate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalBuffPersistentData_Impregnate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalBuffPersistentData_Impregnate.PrimalBuffPersistentData_Impregnate_C");
		return ptr;
	}

}


