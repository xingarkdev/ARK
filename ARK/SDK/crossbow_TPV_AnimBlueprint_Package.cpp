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
	 * 		Name   -> Function crossbow_TPV_AnimBlueprint.crossbow_TPV_AnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Ucrossbow_TPV_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function crossbow_TPV_AnimBlueprint.crossbow_TPV_AnimBlueprint_C.BlueprintUpdateAnimation");
		
		Ucrossbow_TPV_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function crossbow_TPV_AnimBlueprint.crossbow_TPV_AnimBlueprint_C.AnimNotify_HideFire
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void Ucrossbow_TPV_AnimBlueprint_C::AnimNotify_HideFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function crossbow_TPV_AnimBlueprint.crossbow_TPV_AnimBlueprint_C.AnimNotify_HideFire");
		
		Ucrossbow_TPV_AnimBlueprint_C_AnimNotify_HideFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function crossbow_TPV_AnimBlueprint.crossbow_TPV_AnimBlueprint_C.AnimNotify_ShowFire
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void Ucrossbow_TPV_AnimBlueprint_C::AnimNotify_ShowFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function crossbow_TPV_AnimBlueprint.crossbow_TPV_AnimBlueprint_C.AnimNotify_ShowFire");
		
		Ucrossbow_TPV_AnimBlueprint_C_AnimNotify_ShowFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function crossbow_TPV_AnimBlueprint.crossbow_TPV_AnimBlueprint_C.ExecuteUbergraph_crossbow_TPV_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Ucrossbow_TPV_AnimBlueprint_C::ExecuteUbergraph_crossbow_TPV_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function crossbow_TPV_AnimBlueprint.crossbow_TPV_AnimBlueprint_C.ExecuteUbergraph_crossbow_TPV_AnimBlueprint");
		
		Ucrossbow_TPV_AnimBlueprint_C_ExecuteUbergraph_crossbow_TPV_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Ucrossbow_TPV_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Ucrossbow_TPV_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass crossbow_TPV_AnimBlueprint.crossbow_TPV_AnimBlueprint_C");
		return ptr;
	}

}


