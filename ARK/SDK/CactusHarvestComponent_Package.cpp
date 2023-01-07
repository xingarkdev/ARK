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
	 * 		Name   -> Function CactusHarvestComponent.CactusHarvestComponent_C.BPCustomHarvestResource
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalInventoryComponent*                   invComp                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumToGive                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      DamageTypeClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      ToActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t UCactusHarvestComponent_C::BPCustomHarvestResource(class UPrimalInventoryComponent* invComp, int32_t NumToGive, class UClass* DamageTypeClass, class AActor* ToActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CactusHarvestComponent.CactusHarvestComponent_C.BPCustomHarvestResource");
		
		UCactusHarvestComponent_C_BPCustomHarvestResource_Params params {};
		params.invComp = invComp;
		params.NumToGive = NumToGive;
		params.DamageTypeClass = DamageTypeClass;
		params.ToActor = ToActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function CactusHarvestComponent.CactusHarvestComponent_C.ExecuteUbergraph_CactusHarvestComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCactusHarvestComponent_C::ExecuteUbergraph_CactusHarvestComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CactusHarvestComponent.CactusHarvestComponent_C.ExecuteUbergraph_CactusHarvestComponent");
		
		UCactusHarvestComponent_C_ExecuteUbergraph_CactusHarvestComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCactusHarvestComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCactusHarvestComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CactusHarvestComponent.CactusHarvestComponent_C");
		return ptr;
	}

}


