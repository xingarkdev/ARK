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
	 * 		Name   -> Function Underwater_Base_SM_Full.Underwater_Base_SM_Full_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUnderwater_Base_SM_Full_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Underwater_Base_SM_Full.Underwater_Base_SM_Full_C.UserConstructionScript");
		
		AUnderwater_Base_SM_Full_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Underwater_Base_SM_Full.Underwater_Base_SM_Full_C.ExecuteUbergraph_Underwater_Base_SM_Full
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AUnderwater_Base_SM_Full_C::ExecuteUbergraph_Underwater_Base_SM_Full(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Underwater_Base_SM_Full.Underwater_Base_SM_Full_C.ExecuteUbergraph_Underwater_Base_SM_Full");
		
		AUnderwater_Base_SM_Full_C_ExecuteUbergraph_Underwater_Base_SM_Full_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUnderwater_Base_SM_Full_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnderwater_Base_SM_Full_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Underwater_Base_SM_Full.Underwater_Base_SM_Full_C");
		return ptr;
	}

}


