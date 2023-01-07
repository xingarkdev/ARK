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
	 * 		Name   -> Function WeapSawedOffShotgun.WeapSawedOffShotgun_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapSawedOffShotgun_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapSawedOffShotgun.WeapSawedOffShotgun_C.UserConstructionScript");
		
		AWeapSawedOffShotgun_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapSawedOffShotgun.WeapSawedOffShotgun_C.ExecuteUbergraph_WeapSawedOffShotgun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapSawedOffShotgun_C::ExecuteUbergraph_WeapSawedOffShotgun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapSawedOffShotgun.WeapSawedOffShotgun_C.ExecuteUbergraph_WeapSawedOffShotgun");
		
		AWeapSawedOffShotgun_C_ExecuteUbergraph_WeapSawedOffShotgun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapSawedOffShotgun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapSawedOffShotgun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapSawedOffShotgun.WeapSawedOffShotgun_C");
		return ptr;
	}

}


