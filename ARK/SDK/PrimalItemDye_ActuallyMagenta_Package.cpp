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
	 * 		Name   -> Function PrimalItemDye_ActuallyMagenta.PrimalItemDye_ActuallyMagenta_C.ExecuteUbergraph_PrimalItemDye_ActuallyMagenta
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemDye_ActuallyMagenta_C::ExecuteUbergraph_PrimalItemDye_ActuallyMagenta(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemDye_ActuallyMagenta.PrimalItemDye_ActuallyMagenta_C.ExecuteUbergraph_PrimalItemDye_ActuallyMagenta");
		
		UPrimalItemDye_ActuallyMagenta_C_ExecuteUbergraph_PrimalItemDye_ActuallyMagenta_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemDye_ActuallyMagenta_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemDye_ActuallyMagenta_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemDye_ActuallyMagenta.PrimalItemDye_ActuallyMagenta_C");
		return ptr;
	}

}


