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
	 * 		Name   -> Function Eel_AIController_BP_Tamed.Eel_AIController_BP_Tamed_C.BPGetTargetingDesire
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      forTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ForTargetingDesireValue                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AEel_AIController_BP_Tamed_C::BPGetTargetingDesire(class AActor* forTarget, float ForTargetingDesireValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Eel_AIController_BP_Tamed.Eel_AIController_BP_Tamed_C.BPGetTargetingDesire");
		
		AEel_AIController_BP_Tamed_C_BPGetTargetingDesire_Params params {};
		params.forTarget = forTarget;
		params.ForTargetingDesireValue = ForTargetingDesireValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Eel_AIController_BP_Tamed.Eel_AIController_BP_Tamed_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEel_AIController_BP_Tamed_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Eel_AIController_BP_Tamed.Eel_AIController_BP_Tamed_C.UserConstructionScript");
		
		AEel_AIController_BP_Tamed_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Eel_AIController_BP_Tamed.Eel_AIController_BP_Tamed_C.ExecuteUbergraph_Eel_AIController_BP_Tamed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEel_AIController_BP_Tamed_C::ExecuteUbergraph_Eel_AIController_BP_Tamed(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Eel_AIController_BP_Tamed.Eel_AIController_BP_Tamed_C.ExecuteUbergraph_Eel_AIController_BP_Tamed");
		
		AEel_AIController_BP_Tamed_C_ExecuteUbergraph_Eel_AIController_BP_Tamed_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEel_AIController_BP_Tamed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEel_AIController_BP_Tamed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Eel_AIController_BP_Tamed.Eel_AIController_BP_Tamed_C");
		return ptr;
	}

}


