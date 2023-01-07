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
	 * 		Name   -> Function WoodHarvestComponent_LessWood_Swamp.WoodHarvestComponent_LessWood_Swamp_C.ExecuteUbergraph_WoodHarvestComponent_LessWood_Swamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWoodHarvestComponent_LessWood_Swamp_C::ExecuteUbergraph_WoodHarvestComponent_LessWood_Swamp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WoodHarvestComponent_LessWood_Swamp.WoodHarvestComponent_LessWood_Swamp_C.ExecuteUbergraph_WoodHarvestComponent_LessWood_Swamp");
		
		UWoodHarvestComponent_LessWood_Swamp_C_ExecuteUbergraph_WoodHarvestComponent_LessWood_Swamp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWoodHarvestComponent_LessWood_Swamp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWoodHarvestComponent_LessWood_Swamp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WoodHarvestComponent_LessWood_Swamp.WoodHarvestComponent_LessWood_Swamp_C");
		return ptr;
	}

}


