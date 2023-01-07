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
	 * 		Name   -> Function ChalicoThrowMudState_Friendly.ChalicoThrowMudState_Friendly_C.BPRangedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     TargetLocation                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TargetVelocity                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UChalicoThrowMudState_Friendly_C::BPRangedAttack(struct FVector* TargetLocation, struct FVector* TargetVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChalicoThrowMudState_Friendly.ChalicoThrowMudState_Friendly_C.BPRangedAttack");
		
		UChalicoThrowMudState_Friendly_C_BPRangedAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetLocation != nullptr)
			*TargetLocation = params.TargetLocation;
		if (TargetVelocity != nullptr)
			*TargetVelocity = params.TargetVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ChalicoThrowMudState_Friendly.ChalicoThrowMudState_Friendly_C.ExecuteUbergraph_ChalicoThrowMudState_Friendly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChalicoThrowMudState_Friendly_C::ExecuteUbergraph_ChalicoThrowMudState_Friendly(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChalicoThrowMudState_Friendly.ChalicoThrowMudState_Friendly_C.ExecuteUbergraph_ChalicoThrowMudState_Friendly");
		
		UChalicoThrowMudState_Friendly_C_ExecuteUbergraph_ChalicoThrowMudState_Friendly_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChalicoThrowMudState_Friendly_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChalicoThrowMudState_Friendly_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChalicoThrowMudState_Friendly.ChalicoThrowMudState_Friendly_C");
		return ptr;
	}

}


