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
	 * 		Name   -> Function WeapMachinedShotgun_HoloScope.WeapMachinedShotgun_HoloScope_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapMachinedShotgun_HoloScope_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapMachinedShotgun_HoloScope.WeapMachinedShotgun_HoloScope_C.UserConstructionScript");
		
		AWeapMachinedShotgun_HoloScope_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapMachinedShotgun_HoloScope.WeapMachinedShotgun_HoloScope_C.ExecuteUbergraph_WeapMachinedShotgun_HoloScope
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapMachinedShotgun_HoloScope_C::ExecuteUbergraph_WeapMachinedShotgun_HoloScope(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapMachinedShotgun_HoloScope.WeapMachinedShotgun_HoloScope_C.ExecuteUbergraph_WeapMachinedShotgun_HoloScope");
		
		AWeapMachinedShotgun_HoloScope_C_ExecuteUbergraph_WeapMachinedShotgun_HoloScope_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapMachinedShotgun_HoloScope_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapMachinedShotgun_HoloScope_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapMachinedShotgun_HoloScope.WeapMachinedShotgun_HoloScope_C");
		return ptr;
	}

}


