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
	 * 		Name   -> Function Buff_ChargeEmitter_Foliage_FlashBang.Buff_ChargeEmitter_Foliage_FlashBang_C.GetActorsToIgnoreOnRaycast
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      emitterActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_ChargeEmitter_Foliage_FlashBang_C::GetActorsToIgnoreOnRaycast(class AActor* emitterActor, TArray<class AActor*>* ActorsToIgnore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Foliage_FlashBang.Buff_ChargeEmitter_Foliage_FlashBang_C.GetActorsToIgnoreOnRaycast");
		
		ABuff_ChargeEmitter_Foliage_FlashBang_C_GetActorsToIgnoreOnRaycast_Params params {};
		params.emitterActor = emitterActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorsToIgnore != nullptr)
			*ActorsToIgnore = params.ActorsToIgnore;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter_Foliage_FlashBang.Buff_ChargeEmitter_Foliage_FlashBang_C.CanEmitCharge
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canEmit                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_Foliage_FlashBang_C::CanEmitCharge(bool* canEmit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Foliage_FlashBang.Buff_ChargeEmitter_Foliage_FlashBang_C.CanEmitCharge");
		
		ABuff_ChargeEmitter_Foliage_FlashBang_C_CanEmitCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canEmit != nullptr)
			*canEmit = params.canEmit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter_Foliage_FlashBang.Buff_ChargeEmitter_Foliage_FlashBang_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ChargeEmitter_Foliage_FlashBang_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Foliage_FlashBang.Buff_ChargeEmitter_Foliage_FlashBang_C.UserConstructionScript");
		
		ABuff_ChargeEmitter_Foliage_FlashBang_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ChargeEmitter_Foliage_FlashBang.Buff_ChargeEmitter_Foliage_FlashBang_C.ExecuteUbergraph_Buff_ChargeEmitter_Foliage_FlashBang
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ChargeEmitter_Foliage_FlashBang_C::ExecuteUbergraph_Buff_ChargeEmitter_Foliage_FlashBang(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Foliage_FlashBang.Buff_ChargeEmitter_Foliage_FlashBang_C.ExecuteUbergraph_Buff_ChargeEmitter_Foliage_FlashBang");
		
		ABuff_ChargeEmitter_Foliage_FlashBang_C_ExecuteUbergraph_Buff_ChargeEmitter_Foliage_FlashBang_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_ChargeEmitter_Foliage_FlashBang_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_ChargeEmitter_Foliage_FlashBang_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeEmitter_Foliage_FlashBang.Buff_ChargeEmitter_Foliage_FlashBang_C");
		return ptr;
	}

}


