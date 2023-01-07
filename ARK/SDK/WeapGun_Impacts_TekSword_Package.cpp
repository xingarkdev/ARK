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
	 * 		Name   -> Function WeapGun_Impacts_TekSword.WeapGun_Impacts_TekSword_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGun_Impacts_TekSword_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGun_Impacts_TekSword.WeapGun_Impacts_TekSword_C.UserConstructionScript");
		
		AWeapGun_Impacts_TekSword_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapGun_Impacts_TekSword.WeapGun_Impacts_TekSword_C.ExecuteUbergraph_WeapGun_Impacts_TekSword
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapGun_Impacts_TekSword_C::ExecuteUbergraph_WeapGun_Impacts_TekSword(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGun_Impacts_TekSword.WeapGun_Impacts_TekSword_C.ExecuteUbergraph_WeapGun_Impacts_TekSword");
		
		AWeapGun_Impacts_TekSword_C_ExecuteUbergraph_WeapGun_Impacts_TekSword_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapGun_Impacts_TekSword_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapGun_Impacts_TekSword_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapGun_Impacts_TekSword.WeapGun_Impacts_TekSword_C");
		return ptr;
	}

}


