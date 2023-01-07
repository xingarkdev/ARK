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
	 * 		Name   -> Function DinoTekHelmetLaserImpactEmitter.DinoTekHelmetLaserImpactEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinoTekHelmetLaserImpactEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTekHelmetLaserImpactEmitter.DinoTekHelmetLaserImpactEmitter_C.UserConstructionScript");
		
		ADinoTekHelmetLaserImpactEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DinoTekHelmetLaserImpactEmitter.DinoTekHelmetLaserImpactEmitter_C.ExecuteUbergraph_DinoTekHelmetLaserImpactEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinoTekHelmetLaserImpactEmitter_C::ExecuteUbergraph_DinoTekHelmetLaserImpactEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTekHelmetLaserImpactEmitter.DinoTekHelmetLaserImpactEmitter_C.ExecuteUbergraph_DinoTekHelmetLaserImpactEmitter");
		
		ADinoTekHelmetLaserImpactEmitter_C_ExecuteUbergraph_DinoTekHelmetLaserImpactEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADinoTekHelmetLaserImpactEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADinoTekHelmetLaserImpactEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoTekHelmetLaserImpactEmitter.DinoTekHelmetLaserImpactEmitter_C");
		return ptr;
	}

}


