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
	 * 		Name   -> Function MegaMek_Character_BP_Interface.MegaMek_Character_BP_Interface_C.StartSelfDestruct
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMegaMek_Character_BP_Interface_C::StartSelfDestruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP_Interface.MegaMek_Character_BP_Interface_C.StartSelfDestruct");
		
		UMegaMek_Character_BP_Interface_C_StartSelfDestruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function MegaMek_Character_BP_Interface.MegaMek_Character_BP_Interface_C.SetForceKill
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMegaMek_Character_BP_Interface_C::SetForceKill(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP_Interface.MegaMek_Character_BP_Interface_C.SetForceKill");
		
		UMegaMek_Character_BP_Interface_C_SetForceKill_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function MegaMek_Character_BP_Interface.MegaMek_Character_BP_Interface_C.SetStunned
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              StunDuration                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMegaMek_Character_BP_Interface_C::SetStunned(float StunDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP_Interface.MegaMek_Character_BP_Interface_C.SetStunned");
		
		UMegaMek_Character_BP_Interface_C_SetStunned_Params params {};
		params.StunDuration = StunDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMegaMek_Character_BP_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMegaMek_Character_BP_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MegaMek_Character_BP_Interface.MegaMek_Character_BP_Interface_C");
		return ptr;
	}

}


