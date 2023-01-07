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
	 * 		Name   -> Function DinoDropInventoryComponent_Carnivore_Small_Otter.DinoDropInventoryComponent_Carnivore_Small_Otter_C.ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Small_Otter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoDropInventoryComponent_Carnivore_Small_Otter_C::ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Small_Otter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoDropInventoryComponent_Carnivore_Small_Otter.DinoDropInventoryComponent_Carnivore_Small_Otter_C.ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Small_Otter");
		
		UDinoDropInventoryComponent_Carnivore_Small_Otter_C_ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Small_Otter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoDropInventoryComponent_Carnivore_Small_Otter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoDropInventoryComponent_Carnivore_Small_Otter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Carnivore_Small_Otter.DinoDropInventoryComponent_Carnivore_Small_Otter_C");
		return ptr;
	}

}


