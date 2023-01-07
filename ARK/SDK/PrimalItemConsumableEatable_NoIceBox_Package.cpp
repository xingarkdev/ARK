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
	 * 		Name   -> Function PrimalItemConsumableEatable_NoIceBox.PrimalItemConsumableEatable_NoIceBox_C.ExecuteUbergraph_PrimalItemConsumableEatable_NoIceBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumableEatable_NoIceBox_C::ExecuteUbergraph_PrimalItemConsumableEatable_NoIceBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumableEatable_NoIceBox.PrimalItemConsumableEatable_NoIceBox_C.ExecuteUbergraph_PrimalItemConsumableEatable_NoIceBox");
		
		UPrimalItemConsumableEatable_NoIceBox_C_ExecuteUbergraph_PrimalItemConsumableEatable_NoIceBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumableEatable_NoIceBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumableEatable_NoIceBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumableEatable_NoIceBox.PrimalItemConsumableEatable_NoIceBox_C");
		return ptr;
	}

}


