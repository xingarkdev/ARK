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
	 * 		Name   -> Function WoodHarvestComponent_LessWood.WoodHarvestComponent_LessWood_C.ExecuteUbergraph_WoodHarvestComponent_LessWood
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWoodHarvestComponent_LessWood_C::ExecuteUbergraph_WoodHarvestComponent_LessWood(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WoodHarvestComponent_LessWood.WoodHarvestComponent_LessWood_C.ExecuteUbergraph_WoodHarvestComponent_LessWood");
		
		UWoodHarvestComponent_LessWood_C_ExecuteUbergraph_WoodHarvestComponent_LessWood_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWoodHarvestComponent_LessWood_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWoodHarvestComponent_LessWood_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WoodHarvestComponent_LessWood.WoodHarvestComponent_LessWood_C");
		return ptr;
	}

}


