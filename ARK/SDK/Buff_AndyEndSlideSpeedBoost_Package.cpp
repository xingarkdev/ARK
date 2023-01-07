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
	 * 		Name   -> Function Buff_AndyEndSlideSpeedBoost.Buff_AndyEndSlideSpeedBoost_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_AndyEndSlideSpeedBoost_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AndyEndSlideSpeedBoost.Buff_AndyEndSlideSpeedBoost_C.UserConstructionScript");
		
		ABuff_AndyEndSlideSpeedBoost_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_AndyEndSlideSpeedBoost.Buff_AndyEndSlideSpeedBoost_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_AndyEndSlideSpeedBoost_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AndyEndSlideSpeedBoost.Buff_AndyEndSlideSpeedBoost_C.BPSetupForInstigator");
		
		ABuff_AndyEndSlideSpeedBoost_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_AndyEndSlideSpeedBoost.Buff_AndyEndSlideSpeedBoost_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_AndyEndSlideSpeedBoost_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AndyEndSlideSpeedBoost.Buff_AndyEndSlideSpeedBoost_C.ReceiveTick");
		
		ABuff_AndyEndSlideSpeedBoost_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_AndyEndSlideSpeedBoost.Buff_AndyEndSlideSpeedBoost_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_AndyEndSlideSpeedBoost_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AndyEndSlideSpeedBoost.Buff_AndyEndSlideSpeedBoost_C.BPDeactivated");
		
		ABuff_AndyEndSlideSpeedBoost_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_AndyEndSlideSpeedBoost.Buff_AndyEndSlideSpeedBoost_C.ExecuteUbergraph_Buff_AndyEndSlideSpeedBoost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_AndyEndSlideSpeedBoost_C::ExecuteUbergraph_Buff_AndyEndSlideSpeedBoost(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AndyEndSlideSpeedBoost.Buff_AndyEndSlideSpeedBoost_C.ExecuteUbergraph_Buff_AndyEndSlideSpeedBoost");
		
		ABuff_AndyEndSlideSpeedBoost_C_ExecuteUbergraph_Buff_AndyEndSlideSpeedBoost_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_AndyEndSlideSpeedBoost_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_AndyEndSlideSpeedBoost_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_AndyEndSlideSpeedBoost.Buff_AndyEndSlideSpeedBoost_C");
		return ptr;
	}

}


