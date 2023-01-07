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
	 * 		Name   -> Function SpiderS_Character_BP_Aggressive.SpiderS_Character_BP_Aggressive_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpiderS_Character_BP_Aggressive_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpiderS_Character_BP_Aggressive.SpiderS_Character_BP_Aggressive_C.UserConstructionScript");
		
		ASpiderS_Character_BP_Aggressive_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SpiderS_Character_BP_Aggressive.SpiderS_Character_BP_Aggressive_C.ExecuteUbergraph_SpiderS_Character_BP_Aggressive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpiderS_Character_BP_Aggressive_C::ExecuteUbergraph_SpiderS_Character_BP_Aggressive(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpiderS_Character_BP_Aggressive.SpiderS_Character_BP_Aggressive_C.ExecuteUbergraph_SpiderS_Character_BP_Aggressive");
		
		ASpiderS_Character_BP_Aggressive_C_ExecuteUbergraph_SpiderS_Character_BP_Aggressive_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpiderS_Character_BP_Aggressive_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpiderS_Character_BP_Aggressive_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpiderS_Character_BP_Aggressive.SpiderS_Character_BP_Aggressive_C");
		return ptr;
	}

}


