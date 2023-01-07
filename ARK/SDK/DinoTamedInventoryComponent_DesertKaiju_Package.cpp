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
	 * 		Name   -> Function DinoTamedInventoryComponent_DesertKaiju.DinoTamedInventoryComponent_DesertKaiju_C.BPNotifyItemAdded
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 anItem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bEquipItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoTamedInventoryComponent_DesertKaiju_C::BPNotifyItemAdded(class UPrimalItem* anItem, bool bEquipItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_DesertKaiju.DinoTamedInventoryComponent_DesertKaiju_C.BPNotifyItemAdded");
		
		UDinoTamedInventoryComponent_DesertKaiju_C_BPNotifyItemAdded_Params params {};
		params.anItem = anItem;
		params.bEquipItem = bEquipItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoTamedInventoryComponent_DesertKaiju.DinoTamedInventoryComponent_DesertKaiju_C.EquipSaddle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UDinoTamedInventoryComponent_DesertKaiju_C::EquipSaddle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_DesertKaiju.DinoTamedInventoryComponent_DesertKaiju_C.EquipSaddle");
		
		UDinoTamedInventoryComponent_DesertKaiju_C_EquipSaddle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoTamedInventoryComponent_DesertKaiju.DinoTamedInventoryComponent_DesertKaiju_C.ExecuteUbergraph_DinoTamedInventoryComponent_DesertKaiju
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoTamedInventoryComponent_DesertKaiju_C::ExecuteUbergraph_DinoTamedInventoryComponent_DesertKaiju(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_DesertKaiju.DinoTamedInventoryComponent_DesertKaiju_C.ExecuteUbergraph_DinoTamedInventoryComponent_DesertKaiju");
		
		UDinoTamedInventoryComponent_DesertKaiju_C_ExecuteUbergraph_DinoTamedInventoryComponent_DesertKaiju_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoTamedInventoryComponent_DesertKaiju_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoTamedInventoryComponent_DesertKaiju_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_DesertKaiju.DinoTamedInventoryComponent_DesertKaiju_C");
		return ptr;
	}

}


