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
	 * 		Name   -> Function DinoDropInventoryComponent_Carnivore_Huge_FireWyvern.DinoDropInventoryComponent_Carnivore_Huge_FireWyvern_C.ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Huge_FireWyvern
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoDropInventoryComponent_Carnivore_Huge_FireWyvern_C::ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Huge_FireWyvern(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoDropInventoryComponent_Carnivore_Huge_FireWyvern.DinoDropInventoryComponent_Carnivore_Huge_FireWyvern_C.ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Huge_FireWyvern");
		
		UDinoDropInventoryComponent_Carnivore_Huge_FireWyvern_C_ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Huge_FireWyvern_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoDropInventoryComponent_Carnivore_Huge_FireWyvern_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoDropInventoryComponent_Carnivore_Huge_FireWyvern_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Carnivore_Huge_FireWyvern.DinoDropInventoryComponent_Carnivore_Huge_FireWyvern_C");
		return ptr;
	}

}


