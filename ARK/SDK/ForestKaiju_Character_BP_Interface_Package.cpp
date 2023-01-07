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
	 * 		Name   -> Function ForestKaiju_Character_BP_Interface.ForestKaiju_Character_BP_Interface_C.SetVar_FKArenaManager
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ArenaManager                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UForestKaiju_Character_BP_Interface_C::SetVar_FKArenaManager(class AActor* ArenaManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP_Interface.ForestKaiju_Character_BP_Interface_C.SetVar_FKArenaManager");
		
		UForestKaiju_Character_BP_Interface_C_SetVar_FKArenaManager_Params params {};
		params.ArenaManager = ArenaManager;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ForestKaiju_Character_BP_Interface.ForestKaiju_Character_BP_Interface_C.CallFunc_StunKaiju
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UForestKaiju_Character_BP_Interface_C::CallFunc_StunKaiju()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP_Interface.ForestKaiju_Character_BP_Interface_C.CallFunc_StunKaiju");
		
		UForestKaiju_Character_BP_Interface_C_CallFunc_StunKaiju_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ForestKaiju_Character_BP_Interface.ForestKaiju_Character_BP_Interface_C.GetVar_IsProtecting
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UForestKaiju_Character_BP_Interface_C::GetVar_IsProtecting(bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP_Interface.ForestKaiju_Character_BP_Interface_C.GetVar_IsProtecting");
		
		UForestKaiju_Character_BP_Interface_C_GetVar_IsProtecting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UForestKaiju_Character_BP_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UForestKaiju_Character_BP_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ForestKaiju_Character_BP_Interface.ForestKaiju_Character_BP_Interface_C");
		return ptr;
	}

}


