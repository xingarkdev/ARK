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
	 * 		Name   -> Function PrimalItemArmor_TekPants.PrimalItemArmor_TekPants_C.OverrideCrouchingSound
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USoundBase*                                  InSound                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsProne                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            soundState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class USoundBase* UPrimalItemArmor_TekPants_C::OverrideCrouchingSound(class USoundBase* InSound, bool bIsProne, int32_t soundState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekPants.PrimalItemArmor_TekPants_C.OverrideCrouchingSound");
		
		UPrimalItemArmor_TekPants_C_OverrideCrouchingSound_Params params {};
		params.InSound = InSound;
		params.bIsProne = bIsProne;
		params.soundState = soundState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemArmor_TekPants.PrimalItemArmor_TekPants_C.ExecuteUbergraph_PrimalItemArmor_TekPants
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemArmor_TekPants_C::ExecuteUbergraph_PrimalItemArmor_TekPants(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekPants.PrimalItemArmor_TekPants_C.ExecuteUbergraph_PrimalItemArmor_TekPants");
		
		UPrimalItemArmor_TekPants_C_ExecuteUbergraph_PrimalItemArmor_TekPants_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemArmor_TekPants_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemArmor_TekPants_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_TekPants.PrimalItemArmor_TekPants_C");
		return ptr;
	}

}


