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
	 * 		Name   -> Function DinoTamedInventoryComponent_BP_Achatina.DinoTamedInventoryComponent_BP_Achatina_C.BPInventoryRefresh
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDinoTamedInventoryComponent_BP_Achatina_C::BPInventoryRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_BP_Achatina.DinoTamedInventoryComponent_BP_Achatina_C.BPInventoryRefresh");
		
		UDinoTamedInventoryComponent_BP_Achatina_C_BPInventoryRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoTamedInventoryComponent_BP_Achatina.DinoTamedInventoryComponent_BP_Achatina_C.ExecuteUbergraph_DinoTamedInventoryComponent_BP_Achatina
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoTamedInventoryComponent_BP_Achatina_C::ExecuteUbergraph_DinoTamedInventoryComponent_BP_Achatina(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_BP_Achatina.DinoTamedInventoryComponent_BP_Achatina_C.ExecuteUbergraph_DinoTamedInventoryComponent_BP_Achatina");
		
		UDinoTamedInventoryComponent_BP_Achatina_C_ExecuteUbergraph_DinoTamedInventoryComponent_BP_Achatina_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoTamedInventoryComponent_BP_Achatina_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoTamedInventoryComponent_BP_Achatina_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_BP_Achatina.DinoTamedInventoryComponent_BP_Achatina_C");
		return ptr;
	}

}


