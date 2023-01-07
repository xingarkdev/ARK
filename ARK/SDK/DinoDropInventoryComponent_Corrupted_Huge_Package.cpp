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
	 * 		Name   -> Function DinoDropInventoryComponent_Corrupted_Huge.DinoDropInventoryComponent_Corrupted_Huge_C.BPAllowUseInInventory
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 theItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsRemoteInventory                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterPlayerController*                    ByPC                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UDinoDropInventoryComponent_Corrupted_Huge_C::BPAllowUseInInventory(class UPrimalItem* theItem, bool bIsRemoteInventory, class AShooterPlayerController* ByPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoDropInventoryComponent_Corrupted_Huge.DinoDropInventoryComponent_Corrupted_Huge_C.BPAllowUseInInventory");
		
		UDinoDropInventoryComponent_Corrupted_Huge_C_BPAllowUseInInventory_Params params {};
		params.theItem = theItem;
		params.bIsRemoteInventory = bIsRemoteInventory;
		params.ByPC = ByPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoDropInventoryComponent_Corrupted_Huge.DinoDropInventoryComponent_Corrupted_Huge_C.BPRemoteInventoryAllowRemoveItems
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 anItemToTransfer                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UDinoDropInventoryComponent_Corrupted_Huge_C::BPRemoteInventoryAllowRemoveItems(class AShooterPlayerController* PC, class UPrimalItem* anItemToTransfer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoDropInventoryComponent_Corrupted_Huge.DinoDropInventoryComponent_Corrupted_Huge_C.BPRemoteInventoryAllowRemoveItems");
		
		UDinoDropInventoryComponent_Corrupted_Huge_C_BPRemoteInventoryAllowRemoveItems_Params params {};
		params.PC = PC;
		params.anItemToTransfer = anItemToTransfer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoDropInventoryComponent_Corrupted_Huge.DinoDropInventoryComponent_Corrupted_Huge_C.ExecuteUbergraph_DinoDropInventoryComponent_Corrupted_Huge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoDropInventoryComponent_Corrupted_Huge_C::ExecuteUbergraph_DinoDropInventoryComponent_Corrupted_Huge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoDropInventoryComponent_Corrupted_Huge.DinoDropInventoryComponent_Corrupted_Huge_C.ExecuteUbergraph_DinoDropInventoryComponent_Corrupted_Huge");
		
		UDinoDropInventoryComponent_Corrupted_Huge_C_ExecuteUbergraph_DinoDropInventoryComponent_Corrupted_Huge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoDropInventoryComponent_Corrupted_Huge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoDropInventoryComponent_Corrupted_Huge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Corrupted_Huge.DinoDropInventoryComponent_Corrupted_Huge_C");
		return ptr;
	}

}


