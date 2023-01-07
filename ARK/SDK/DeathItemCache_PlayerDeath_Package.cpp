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
	 * 		Name   -> Function DeathItemCache_PlayerDeath.DeathItemCache_PlayerDeath_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADeathItemCache_PlayerDeath_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeathItemCache_PlayerDeath.DeathItemCache_PlayerDeath_C.UserConstructionScript");
		
		ADeathItemCache_PlayerDeath_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DeathItemCache_PlayerDeath.DeathItemCache_PlayerDeath_C.ExecuteUbergraph_DeathItemCache_PlayerDeath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeathItemCache_PlayerDeath_C::ExecuteUbergraph_DeathItemCache_PlayerDeath(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeathItemCache_PlayerDeath.DeathItemCache_PlayerDeath_C.ExecuteUbergraph_DeathItemCache_PlayerDeath");
		
		ADeathItemCache_PlayerDeath_C_ExecuteUbergraph_DeathItemCache_PlayerDeath_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADeathItemCache_PlayerDeath_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADeathItemCache_PlayerDeath_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DeathItemCache_PlayerDeath.DeathItemCache_PlayerDeath_C");
		return ptr;
	}

}


