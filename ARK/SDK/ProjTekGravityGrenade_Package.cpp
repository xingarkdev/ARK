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
	 * 		Name   -> Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjTekGravityGrenade_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.UserConstructionScript");
		
		AProjTekGravityGrenade_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.OnExplode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (Parm, OutParm, ReferenceParm)
	 */
	void AProjTekGravityGrenade_C::OnExplode(struct FHitResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.OnExplode");
		
		AProjTekGravityGrenade_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.ApplyImpulseToDroppedItems
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class ADroppedItem*>                        Items                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		struct FVector                                     EffectOrigin                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjTekGravityGrenade_C::ApplyImpulseToDroppedItems(TArray<class ADroppedItem*>* Items, const struct FVector& EffectOrigin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.ApplyImpulseToDroppedItems");
		
		AProjTekGravityGrenade_C_ApplyImpulseToDroppedItems_Params params {};
		params.EffectOrigin = EffectOrigin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjTekGravityGrenade_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.ReceiveBeginPlay");
		
		AProjTekGravityGrenade_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.ExecuteUbergraph_ProjTekGravityGrenade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjTekGravityGrenade_C::ExecuteUbergraph_ProjTekGravityGrenade(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.ExecuteUbergraph_ProjTekGravityGrenade");
		
		AProjTekGravityGrenade_C_ExecuteUbergraph_ProjTekGravityGrenade_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjTekGravityGrenade_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjTekGravityGrenade_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjTekGravityGrenade.ProjTekGravityGrenade_C");
		return ptr;
	}

}


