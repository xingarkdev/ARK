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
	 * 		Name   -> Function SeedWithSilkHarvestComponent.SeedWithSilkHarvestComponent_C.ExecuteUbergraph_SeedWithSilkHarvestComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USeedWithSilkHarvestComponent_C::ExecuteUbergraph_SeedWithSilkHarvestComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SeedWithSilkHarvestComponent.SeedWithSilkHarvestComponent_C.ExecuteUbergraph_SeedWithSilkHarvestComponent");
		
		USeedWithSilkHarvestComponent_C_ExecuteUbergraph_SeedWithSilkHarvestComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USeedWithSilkHarvestComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeedWithSilkHarvestComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SeedWithSilkHarvestComponent.SeedWithSilkHarvestComponent_C");
		return ptr;
	}

}


