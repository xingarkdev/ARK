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
	 * 		Name   -> Function WeapRifleTracerRound.WeapRifleTracerRound_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapRifleTracerRound_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapRifleTracerRound.WeapRifleTracerRound_C.UserConstructionScript");
		
		AWeapRifleTracerRound_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapRifleTracerRound.WeapRifleTracerRound_C.ExecuteUbergraph_WeapRifleTracerRound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapRifleTracerRound_C::ExecuteUbergraph_WeapRifleTracerRound(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapRifleTracerRound.WeapRifleTracerRound_C.ExecuteUbergraph_WeapRifleTracerRound");
		
		AWeapRifleTracerRound_C_ExecuteUbergraph_WeapRifleTracerRound_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapRifleTracerRound_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapRifleTracerRound_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapRifleTracerRound.WeapRifleTracerRound_C");
		return ptr;
	}

}


