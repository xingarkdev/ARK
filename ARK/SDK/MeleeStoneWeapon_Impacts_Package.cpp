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
	 * 		Name   -> Function MeleeStoneWeapon_Impacts.MeleeStoneWeapon_Impacts_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMeleeStoneWeapon_Impacts_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeleeStoneWeapon_Impacts.MeleeStoneWeapon_Impacts_C.UserConstructionScript");
		
		AMeleeStoneWeapon_Impacts_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function MeleeStoneWeapon_Impacts.MeleeStoneWeapon_Impacts_C.ExecuteUbergraph_MeleeStoneWeapon_Impacts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMeleeStoneWeapon_Impacts_C::ExecuteUbergraph_MeleeStoneWeapon_Impacts(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeleeStoneWeapon_Impacts.MeleeStoneWeapon_Impacts_C.ExecuteUbergraph_MeleeStoneWeapon_Impacts");
		
		AMeleeStoneWeapon_Impacts_C_ExecuteUbergraph_MeleeStoneWeapon_Impacts_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMeleeStoneWeapon_Impacts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMeleeStoneWeapon_Impacts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MeleeStoneWeapon_Impacts.MeleeStoneWeapon_Impacts_C");
		return ptr;
	}

}


