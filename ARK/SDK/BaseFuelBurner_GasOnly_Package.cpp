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
	 * 		Name   -> Function BaseFuelBurner_GasOnly.BaseFuelBurner_GasOnly_C.NotifyCraftingFinished
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseFuelBurner_GasOnly_C::NotifyCraftingFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseFuelBurner_GasOnly.BaseFuelBurner_GasOnly_C.NotifyCraftingFinished");
		
		ABaseFuelBurner_GasOnly_C_NotifyCraftingFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BaseFuelBurner_GasOnly.BaseFuelBurner_GasOnly_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseFuelBurner_GasOnly_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseFuelBurner_GasOnly.BaseFuelBurner_GasOnly_C.UserConstructionScript");
		
		ABaseFuelBurner_GasOnly_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BaseFuelBurner_GasOnly.BaseFuelBurner_GasOnly_C.ExecuteUbergraph_BaseFuelBurner_GasOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseFuelBurner_GasOnly_C::ExecuteUbergraph_BaseFuelBurner_GasOnly(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseFuelBurner_GasOnly.BaseFuelBurner_GasOnly_C.ExecuteUbergraph_BaseFuelBurner_GasOnly");
		
		ABaseFuelBurner_GasOnly_C_ExecuteUbergraph_BaseFuelBurner_GasOnly_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseFuelBurner_GasOnly_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseFuelBurner_GasOnly_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseFuelBurner_GasOnly.BaseFuelBurner_GasOnly_C");
		return ptr;
	}

}


