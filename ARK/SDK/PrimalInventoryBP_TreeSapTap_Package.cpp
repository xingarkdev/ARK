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
	 * 		Name   -> Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.BPOnComponentCreated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalInventoryBP_TreeSapTap_C::BPOnComponentCreated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.BPOnComponentCreated");
		
		UPrimalInventoryBP_TreeSapTap_C_BPOnComponentCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.BPCustomRemoteInventoryAllowAddItems
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 anItem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            anItemQuantityOverride                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRequestedByPlayer                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UPrimalInventoryBP_TreeSapTap_C::BPCustomRemoteInventoryAllowAddItems(class AShooterPlayerController* PC, class UPrimalItem* anItem, int32_t anItemQuantityOverride, bool bRequestedByPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.BPCustomRemoteInventoryAllowAddItems");
		
		UPrimalInventoryBP_TreeSapTap_C_BPCustomRemoteInventoryAllowAddItems_Params params {};
		params.PC = PC;
		params.anItem = anItem;
		params.anItemQuantityOverride = anItemQuantityOverride;
		params.bRequestedByPlayer = bRequestedByPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.FindNearbySapTaps
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumOutTaps                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_TreeSapTap_C::FindNearbySapTaps(int32_t* NumOutTaps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.FindNearbySapTaps");
		
		UPrimalInventoryBP_TreeSapTap_C_FindNearbySapTaps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumOutTaps != nullptr)
			*NumOutTaps = params.NumOutTaps;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.BPInventoryRefresh
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalInventoryBP_TreeSapTap_C::BPInventoryRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.BPInventoryRefresh");
		
		UPrimalInventoryBP_TreeSapTap_C_BPInventoryRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.ExecuteUbergraph_PrimalInventoryBP_TreeSapTap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_TreeSapTap_C::ExecuteUbergraph_PrimalInventoryBP_TreeSapTap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.ExecuteUbergraph_PrimalInventoryBP_TreeSapTap");
		
		UPrimalInventoryBP_TreeSapTap_C_ExecuteUbergraph_PrimalInventoryBP_TreeSapTap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalInventoryBP_TreeSapTap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalInventoryBP_TreeSapTap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C");
		return ptr;
	}

}


