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
	 * 		Name   -> Function TPV_CruiseMissile_HF_AnimBP.TPV_CruiseMissile_HF_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTPV_CruiseMissile_HF_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TPV_CruiseMissile_HF_AnimBP.TPV_CruiseMissile_HF_AnimBP_C.BlueprintUpdateAnimation");
		
		UTPV_CruiseMissile_HF_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TPV_CruiseMissile_HF_AnimBP.TPV_CruiseMissile_HF_AnimBP_C.ExecuteUbergraph_TPV_CruiseMissile_HF_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTPV_CruiseMissile_HF_AnimBP_C::ExecuteUbergraph_TPV_CruiseMissile_HF_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TPV_CruiseMissile_HF_AnimBP.TPV_CruiseMissile_HF_AnimBP_C.ExecuteUbergraph_TPV_CruiseMissile_HF_AnimBP");
		
		UTPV_CruiseMissile_HF_AnimBP_C_ExecuteUbergraph_TPV_CruiseMissile_HF_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTPV_CruiseMissile_HF_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTPV_CruiseMissile_HF_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass TPV_CruiseMissile_HF_AnimBP.TPV_CruiseMissile_HF_AnimBP_C");
		return ptr;
	}

}


