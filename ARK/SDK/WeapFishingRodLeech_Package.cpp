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
	 * 		Name   -> Function WeapFishingRodLeech.WeapFishingRodLeech_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapFishingRodLeech_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRodLeech.WeapFishingRodLeech_C.UserConstructionScript");
		
		AWeapFishingRodLeech_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapFishingRodLeech.WeapFishingRodLeech_C.ExecuteUbergraph_WeapFishingRodLeech
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapFishingRodLeech_C::ExecuteUbergraph_WeapFishingRodLeech(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapFishingRodLeech.WeapFishingRodLeech_C.ExecuteUbergraph_WeapFishingRodLeech");
		
		AWeapFishingRodLeech_C_ExecuteUbergraph_WeapFishingRodLeech_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapFishingRodLeech_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapFishingRodLeech_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapFishingRodLeech.WeapFishingRodLeech_C");
		return ptr;
	}

}


