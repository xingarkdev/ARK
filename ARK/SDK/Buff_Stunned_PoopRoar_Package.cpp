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
	 * 		Name   -> Function Buff_Stunned_PoopRoar.Buff_Stunned_PoopRoar_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Stunned_PoopRoar_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Stunned_PoopRoar.Buff_Stunned_PoopRoar_C.UserConstructionScript");
		
		ABuff_Stunned_PoopRoar_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Stunned_PoopRoar.Buff_Stunned_PoopRoar_C.ExecuteUbergraph_Buff_Stunned_PoopRoar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Stunned_PoopRoar_C::ExecuteUbergraph_Buff_Stunned_PoopRoar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Stunned_PoopRoar.Buff_Stunned_PoopRoar_C.ExecuteUbergraph_Buff_Stunned_PoopRoar");
		
		ABuff_Stunned_PoopRoar_C_ExecuteUbergraph_Buff_Stunned_PoopRoar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Stunned_PoopRoar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Stunned_PoopRoar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Stunned_PoopRoar.Buff_Stunned_PoopRoar_C");
		return ptr;
	}

}


