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
	 * 		Name   -> Function Buff_DinoTekHelmet_Tapejara.Buff_DinoTekHelmet_Tapejara_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DinoTekHelmet_Tapejara_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Tapejara.Buff_DinoTekHelmet_Tapejara_C.UserConstructionScript");
		
		ABuff_DinoTekHelmet_Tapejara_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DinoTekHelmet_Tapejara.Buff_DinoTekHelmet_Tapejara_C.ExecuteUbergraph_Buff_DinoTekHelmet_Tapejara
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DinoTekHelmet_Tapejara_C::ExecuteUbergraph_Buff_DinoTekHelmet_Tapejara(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Tapejara.Buff_DinoTekHelmet_Tapejara_C.ExecuteUbergraph_Buff_DinoTekHelmet_Tapejara");
		
		ABuff_DinoTekHelmet_Tapejara_C_ExecuteUbergraph_Buff_DinoTekHelmet_Tapejara_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_DinoTekHelmet_Tapejara_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_DinoTekHelmet_Tapejara_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DinoTekHelmet_Tapejara.Buff_DinoTekHelmet_Tapejara_C");
		return ptr;
	}

}


