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
	 * 		Name   -> Function LeftClimbing_ImpactEffect_Rock.LeftClimbing_ImpactEffect_Rock_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALeftClimbing_ImpactEffect_Rock_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeftClimbing_ImpactEffect_Rock.LeftClimbing_ImpactEffect_Rock_C.UserConstructionScript");
		
		ALeftClimbing_ImpactEffect_Rock_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function LeftClimbing_ImpactEffect_Rock.LeftClimbing_ImpactEffect_Rock_C.ExecuteUbergraph_LeftClimbing_ImpactEffect_Rock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALeftClimbing_ImpactEffect_Rock_C::ExecuteUbergraph_LeftClimbing_ImpactEffect_Rock(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeftClimbing_ImpactEffect_Rock.LeftClimbing_ImpactEffect_Rock_C.ExecuteUbergraph_LeftClimbing_ImpactEffect_Rock");
		
		ALeftClimbing_ImpactEffect_Rock_C_ExecuteUbergraph_LeftClimbing_ImpactEffect_Rock_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALeftClimbing_ImpactEffect_Rock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALeftClimbing_ImpactEffect_Rock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LeftClimbing_ImpactEffect_Rock.LeftClimbing_ImpactEffect_Rock_C");
		return ptr;
	}

}


