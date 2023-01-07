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
	 * 		Name   -> Function CORE_PrimalGameData.CORE_PrimalGameData_C.ExecuteUbergraph_CORE_PrimalGameData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCORE_PrimalGameData_C::ExecuteUbergraph_CORE_PrimalGameData(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CORE_PrimalGameData.CORE_PrimalGameData_C.ExecuteUbergraph_CORE_PrimalGameData");
		
		UCORE_PrimalGameData_C_ExecuteUbergraph_CORE_PrimalGameData_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCORE_PrimalGameData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCORE_PrimalGameData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CORE_PrimalGameData.CORE_PrimalGameData_C");
		return ptr;
	}

}


