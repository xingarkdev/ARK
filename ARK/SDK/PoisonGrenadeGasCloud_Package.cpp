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
	 * 		Name   -> Function PoisonGrenadeGasCloud.PoisonGrenadeGasCloud_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APoisonGrenadeGasCloud_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoisonGrenadeGasCloud.PoisonGrenadeGasCloud_C.UserConstructionScript");
		
		APoisonGrenadeGasCloud_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PoisonGrenadeGasCloud.PoisonGrenadeGasCloud_C.ExecuteUbergraph_PoisonGrenadeGasCloud
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APoisonGrenadeGasCloud_C::ExecuteUbergraph_PoisonGrenadeGasCloud(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoisonGrenadeGasCloud.PoisonGrenadeGasCloud_C.ExecuteUbergraph_PoisonGrenadeGasCloud");
		
		APoisonGrenadeGasCloud_C_ExecuteUbergraph_PoisonGrenadeGasCloud_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APoisonGrenadeGasCloud_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APoisonGrenadeGasCloud_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PoisonGrenadeGasCloud.PoisonGrenadeGasCloud_C");
		return ptr;
	}

}


