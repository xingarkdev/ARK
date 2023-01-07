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
	 * 		Name   -> Function Buff_PoisonImmunity_Biolum.Buff_PoisonImmunity_Biolum_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_PoisonImmunity_Biolum_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_PoisonImmunity_Biolum.Buff_PoisonImmunity_Biolum_C.UserConstructionScript");
		
		ABuff_PoisonImmunity_Biolum_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_PoisonImmunity_Biolum.Buff_PoisonImmunity_Biolum_C.ExecuteUbergraph_Buff_PoisonImmunity_Biolum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_PoisonImmunity_Biolum_C::ExecuteUbergraph_Buff_PoisonImmunity_Biolum(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_PoisonImmunity_Biolum.Buff_PoisonImmunity_Biolum_C.ExecuteUbergraph_Buff_PoisonImmunity_Biolum");
		
		ABuff_PoisonImmunity_Biolum_C_ExecuteUbergraph_Buff_PoisonImmunity_Biolum_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_PoisonImmunity_Biolum_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_PoisonImmunity_Biolum_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_PoisonImmunity_Biolum.Buff_PoisonImmunity_Biolum_C");
		return ptr;
	}

}


