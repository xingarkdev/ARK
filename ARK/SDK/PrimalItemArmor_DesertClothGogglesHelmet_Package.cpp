﻿/**
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
	 * 		Name   -> Function PrimalItemArmor_DesertClothGogglesHelmet.PrimalItemArmor_DesertClothGogglesHelmet_C.BlueprintEquipped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsFromSaveGame                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemArmor_DesertClothGogglesHelmet_C::BlueprintEquipped(bool bIsFromSaveGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_DesertClothGogglesHelmet.PrimalItemArmor_DesertClothGogglesHelmet_C.BlueprintEquipped");
		
		UPrimalItemArmor_DesertClothGogglesHelmet_C_BlueprintEquipped_Params params {};
		params.bIsFromSaveGame = bIsFromSaveGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemArmor_DesertClothGogglesHelmet.PrimalItemArmor_DesertClothGogglesHelmet_C.BlueprintUnequipped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemArmor_DesertClothGogglesHelmet_C::BlueprintUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_DesertClothGogglesHelmet.PrimalItemArmor_DesertClothGogglesHelmet_C.BlueprintUnequipped");
		
		UPrimalItemArmor_DesertClothGogglesHelmet_C_BlueprintUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemArmor_DesertClothGogglesHelmet.PrimalItemArmor_DesertClothGogglesHelmet_C.ExecuteUbergraph_PrimalItemArmor_DesertClothGogglesHelmet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemArmor_DesertClothGogglesHelmet_C::ExecuteUbergraph_PrimalItemArmor_DesertClothGogglesHelmet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_DesertClothGogglesHelmet.PrimalItemArmor_DesertClothGogglesHelmet_C.ExecuteUbergraph_PrimalItemArmor_DesertClothGogglesHelmet");
		
		UPrimalItemArmor_DesertClothGogglesHelmet_C_ExecuteUbergraph_PrimalItemArmor_DesertClothGogglesHelmet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemArmor_DesertClothGogglesHelmet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemArmor_DesertClothGogglesHelmet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_DesertClothGogglesHelmet.PrimalItemArmor_DesertClothGogglesHelmet_C");
		return ptr;
	}

}


