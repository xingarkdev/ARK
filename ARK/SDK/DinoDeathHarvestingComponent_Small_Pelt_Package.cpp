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
	 * 		Name   -> Function DinoDeathHarvestingComponent_Small_Pelt.DinoDeathHarvestingComponent_Small_Pelt_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Small_Pelt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoDeathHarvestingComponent_Small_Pelt_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Small_Pelt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Small_Pelt.DinoDeathHarvestingComponent_Small_Pelt_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Small_Pelt");
		
		UDinoDeathHarvestingComponent_Small_Pelt_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Small_Pelt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoDeathHarvestingComponent_Small_Pelt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoDeathHarvestingComponent_Small_Pelt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Small_Pelt.DinoDeathHarvestingComponent_Small_Pelt_C");
		return ptr;
	}

}


