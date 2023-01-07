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
	 * 		Name   -> Function StoneHarvestComponent_RequiresMetal.StoneHarvestComponent_RequiresMetal_C.ExecuteUbergraph_StoneHarvestComponent_RequiresMetal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStoneHarvestComponent_RequiresMetal_C::ExecuteUbergraph_StoneHarvestComponent_RequiresMetal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StoneHarvestComponent_RequiresMetal.StoneHarvestComponent_RequiresMetal_C.ExecuteUbergraph_StoneHarvestComponent_RequiresMetal");
		
		UStoneHarvestComponent_RequiresMetal_C_ExecuteUbergraph_StoneHarvestComponent_RequiresMetal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStoneHarvestComponent_RequiresMetal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStoneHarvestComponent_RequiresMetal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StoneHarvestComponent_RequiresMetal.StoneHarvestComponent_RequiresMetal_C");
		return ptr;
	}

}


