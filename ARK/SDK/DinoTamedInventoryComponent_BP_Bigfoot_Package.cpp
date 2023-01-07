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
	 * 		Name   -> Function DinoTamedInventoryComponent_BP_Bigfoot.DinoTamedInventoryComponent_BP_Bigfoot_C.ExecuteUbergraph_DinoTamedInventoryComponent_BP_Bigfoot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoTamedInventoryComponent_BP_Bigfoot_C::ExecuteUbergraph_DinoTamedInventoryComponent_BP_Bigfoot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_BP_Bigfoot.DinoTamedInventoryComponent_BP_Bigfoot_C.ExecuteUbergraph_DinoTamedInventoryComponent_BP_Bigfoot");
		
		UDinoTamedInventoryComponent_BP_Bigfoot_C_ExecuteUbergraph_DinoTamedInventoryComponent_BP_Bigfoot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoTamedInventoryComponent_BP_Bigfoot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoTamedInventoryComponent_BP_Bigfoot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_BP_Bigfoot.DinoTamedInventoryComponent_BP_Bigfoot_C");
		return ptr;
	}

}


