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
	 * 		Name   -> Function MuzzleFlashEmitterTekTurret.MuzzleFlashEmitterTekTurret_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMuzzleFlashEmitterTekTurret_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MuzzleFlashEmitterTekTurret.MuzzleFlashEmitterTekTurret_C.UserConstructionScript");
		
		AMuzzleFlashEmitterTekTurret_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function MuzzleFlashEmitterTekTurret.MuzzleFlashEmitterTekTurret_C.ExecuteUbergraph_MuzzleFlashEmitterTekTurret
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMuzzleFlashEmitterTekTurret_C::ExecuteUbergraph_MuzzleFlashEmitterTekTurret(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MuzzleFlashEmitterTekTurret.MuzzleFlashEmitterTekTurret_C.ExecuteUbergraph_MuzzleFlashEmitterTekTurret");
		
		AMuzzleFlashEmitterTekTurret_C_ExecuteUbergraph_MuzzleFlashEmitterTekTurret_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMuzzleFlashEmitterTekTurret_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMuzzleFlashEmitterTekTurret_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MuzzleFlashEmitterTekTurret.MuzzleFlashEmitterTekTurret_C");
		return ptr;
	}

}


