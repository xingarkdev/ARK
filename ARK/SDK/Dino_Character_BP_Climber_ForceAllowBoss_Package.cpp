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
	 * 		Name   -> Function Dino_Character_BP_Climber_ForceAllowBoss.Dino_Character_BP_Climber_ForceAllowBoss_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_ForceAllowBoss_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber_ForceAllowBoss.Dino_Character_BP_Climber_ForceAllowBoss_C.UserConstructionScript");
		
		ADino_Character_BP_Climber_ForceAllowBoss_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Dino_Character_BP_Climber_ForceAllowBoss.Dino_Character_BP_Climber_ForceAllowBoss_C.ExecuteUbergraph_Dino_Character_BP_Climber_ForceAllowBoss
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_Climber_ForceAllowBoss_C::ExecuteUbergraph_Dino_Character_BP_Climber_ForceAllowBoss(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber_ForceAllowBoss.Dino_Character_BP_Climber_ForceAllowBoss_C.ExecuteUbergraph_Dino_Character_BP_Climber_ForceAllowBoss");
		
		ADino_Character_BP_Climber_ForceAllowBoss_C_ExecuteUbergraph_Dino_Character_BP_Climber_ForceAllowBoss_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADino_Character_BP_Climber_ForceAllowBoss_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADino_Character_BP_Climber_ForceAllowBoss_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Dino_Character_BP_Climber_ForceAllowBoss.Dino_Character_BP_Climber_ForceAllowBoss_C");
		return ptr;
	}

}


