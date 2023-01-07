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
	 * 		Name   -> Function PrimalInventoryBP_TekSecurityConsole.PrimalInventoryBP_TekSecurityConsole_C.OnConsoleUpdated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalInventoryBP_TekSecurityConsole_C::OnConsoleUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TekSecurityConsole.PrimalInventoryBP_TekSecurityConsole_C.OnConsoleUpdated");
		
		UPrimalInventoryBP_TekSecurityConsole_C_OnConsoleUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalInventoryBP_TekSecurityConsole.PrimalInventoryBP_TekSecurityConsole_C.BPNotifyItemAdded
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 anItem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bEquipItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_TekSecurityConsole_C::BPNotifyItemAdded(class UPrimalItem* anItem, bool bEquipItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TekSecurityConsole.PrimalInventoryBP_TekSecurityConsole_C.BPNotifyItemAdded");
		
		UPrimalInventoryBP_TekSecurityConsole_C_BPNotifyItemAdded_Params params {};
		params.anItem = anItem;
		params.bEquipItem = bEquipItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalInventoryBP_TekSecurityConsole.PrimalInventoryBP_TekSecurityConsole_C.ExecuteUbergraph_PrimalInventoryBP_TekSecurityConsole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_TekSecurityConsole_C::ExecuteUbergraph_PrimalInventoryBP_TekSecurityConsole(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TekSecurityConsole.PrimalInventoryBP_TekSecurityConsole_C.ExecuteUbergraph_PrimalInventoryBP_TekSecurityConsole");
		
		UPrimalInventoryBP_TekSecurityConsole_C_ExecuteUbergraph_PrimalInventoryBP_TekSecurityConsole_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalInventoryBP_TekSecurityConsole_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalInventoryBP_TekSecurityConsole_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_TekSecurityConsole.PrimalInventoryBP_TekSecurityConsole_C");
		return ptr;
	}

}


