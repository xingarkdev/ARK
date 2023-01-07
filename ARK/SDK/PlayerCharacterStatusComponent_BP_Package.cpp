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
	 * 		Name   -> Function PlayerCharacterStatusComponent_BP.PlayerCharacterStatusComponent_BP_C.BPModifyMaxExperiencePoints
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InMaxExperiencePoints                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float UPlayerCharacterStatusComponent_BP_C::BPModifyMaxExperiencePoints(float InMaxExperiencePoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCharacterStatusComponent_BP.PlayerCharacterStatusComponent_BP_C.BPModifyMaxExperiencePoints");
		
		UPlayerCharacterStatusComponent_BP_C_BPModifyMaxExperiencePoints_Params params {};
		params.InMaxExperiencePoints = InMaxExperiencePoints;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerCharacterStatusComponent_BP.PlayerCharacterStatusComponent_BP_C.BPModifyMaxLevel
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InMaxLevel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t UPlayerCharacterStatusComponent_BP_C::BPModifyMaxLevel(int32_t InMaxLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCharacterStatusComponent_BP.PlayerCharacterStatusComponent_BP_C.BPModifyMaxLevel");
		
		UPlayerCharacterStatusComponent_BP_C_BPModifyMaxLevel_Params params {};
		params.InMaxLevel = InMaxLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlayerCharacterStatusComponent_BP.PlayerCharacterStatusComponent_BP_C.ExecuteUbergraph_PlayerCharacterStatusComponent_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerCharacterStatusComponent_BP_C::ExecuteUbergraph_PlayerCharacterStatusComponent_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCharacterStatusComponent_BP.PlayerCharacterStatusComponent_BP_C.ExecuteUbergraph_PlayerCharacterStatusComponent_BP");
		
		UPlayerCharacterStatusComponent_BP_C_ExecuteUbergraph_PlayerCharacterStatusComponent_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerCharacterStatusComponent_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerCharacterStatusComponent_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerCharacterStatusComponent_BP.PlayerCharacterStatusComponent_BP_C");
		return ptr;
	}

}


