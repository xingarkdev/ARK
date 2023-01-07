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
	 * 		Name   -> Function WeapOneShotRifleScoped.WeapOneShotRifleScoped_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapOneShotRifleScoped_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapOneShotRifleScoped.WeapOneShotRifleScoped_C.UserConstructionScript");
		
		AWeapOneShotRifleScoped_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapOneShotRifleScoped.WeapOneShotRifleScoped_C.ExecuteUbergraph_WeapOneShotRifleScoped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapOneShotRifleScoped_C::ExecuteUbergraph_WeapOneShotRifleScoped(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapOneShotRifleScoped.WeapOneShotRifleScoped_C.ExecuteUbergraph_WeapOneShotRifleScoped");
		
		AWeapOneShotRifleScoped_C_ExecuteUbergraph_WeapOneShotRifleScoped_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapOneShotRifleScoped_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapOneShotRifleScoped_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapOneShotRifleScoped.WeapOneShotRifleScoped_C");
		return ptr;
	}

}


