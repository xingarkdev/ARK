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
	 * 		Name   -> Function DesertKaiju_Character_BP_Interface.DesertKaiju_Character_BP_Interface_C.SetVar_DKArenaManager
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ArenaManager                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDesertKaiju_Character_BP_Interface_C::SetVar_DKArenaManager(class AActor* ArenaManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP_Interface.DesertKaiju_Character_BP_Interface_C.SetVar_DKArenaManager");
		
		UDesertKaiju_Character_BP_Interface_C_SetVar_DKArenaManager_Params params {};
		params.ArenaManager = ArenaManager;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_Character_BP_Interface.DesertKaiju_Character_BP_Interface_C.CallFunc_StunKaiju
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDesertKaiju_Character_BP_Interface_C::CallFunc_StunKaiju()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP_Interface.DesertKaiju_Character_BP_Interface_C.CallFunc_StunKaiju");
		
		UDesertKaiju_Character_BP_Interface_C_CallFunc_StunKaiju_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDesertKaiju_Character_BP_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDesertKaiju_Character_BP_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DesertKaiju_Character_BP_Interface.DesertKaiju_Character_BP_Interface_C");
		return ptr;
	}

}


