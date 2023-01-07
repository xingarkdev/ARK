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
	 * 		Name   -> Function ProjTekDinoHelmet_Tapejara.ProjTekDinoHelmet_Tapejara_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjTekDinoHelmet_Tapejara_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjTekDinoHelmet_Tapejara.ProjTekDinoHelmet_Tapejara_C.UserConstructionScript");
		
		AProjTekDinoHelmet_Tapejara_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjTekDinoHelmet_Tapejara.ProjTekDinoHelmet_Tapejara_C.ExecuteUbergraph_ProjTekDinoHelmet_Tapejara
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjTekDinoHelmet_Tapejara_C::ExecuteUbergraph_ProjTekDinoHelmet_Tapejara(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjTekDinoHelmet_Tapejara.ProjTekDinoHelmet_Tapejara_C.ExecuteUbergraph_ProjTekDinoHelmet_Tapejara");
		
		AProjTekDinoHelmet_Tapejara_C_ExecuteUbergraph_ProjTekDinoHelmet_Tapejara_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjTekDinoHelmet_Tapejara_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjTekDinoHelmet_Tapejara_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjTekDinoHelmet_Tapejara.ProjTekDinoHelmet_Tapejara_C");
		return ptr;
	}

}


