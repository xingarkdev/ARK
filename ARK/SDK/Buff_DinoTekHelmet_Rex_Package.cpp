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
	 * 		Name   -> Function Buff_DinoTekHelmet_Rex.Buff_DinoTekHelmet_Rex_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DinoTekHelmet_Rex_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Rex.Buff_DinoTekHelmet_Rex_C.UserConstructionScript");
		
		ABuff_DinoTekHelmet_Rex_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DinoTekHelmet_Rex.Buff_DinoTekHelmet_Rex_C.ExecuteUbergraph_Buff_DinoTekHelmet_Rex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DinoTekHelmet_Rex_C::ExecuteUbergraph_Buff_DinoTekHelmet_Rex(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Rex.Buff_DinoTekHelmet_Rex_C.ExecuteUbergraph_Buff_DinoTekHelmet_Rex");
		
		ABuff_DinoTekHelmet_Rex_C_ExecuteUbergraph_Buff_DinoTekHelmet_Rex_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_DinoTekHelmet_Rex_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_DinoTekHelmet_Rex_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DinoTekHelmet_Rex.Buff_DinoTekHelmet_Rex_C");
		return ptr;
	}

}


