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
	 * 		Name   -> Function MetalHarvestComponent_Rich.MetalHarvestComponent_Rich_C.ExecuteUbergraph_MetalHarvestComponent_Rich
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMetalHarvestComponent_Rich_C::ExecuteUbergraph_MetalHarvestComponent_Rich(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetalHarvestComponent_Rich.MetalHarvestComponent_Rich_C.ExecuteUbergraph_MetalHarvestComponent_Rich");
		
		UMetalHarvestComponent_Rich_C_ExecuteUbergraph_MetalHarvestComponent_Rich_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMetalHarvestComponent_Rich_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMetalHarvestComponent_Rich_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MetalHarvestComponent_Rich.MetalHarvestComponent_Rich_C");
		return ptr;
	}

}


