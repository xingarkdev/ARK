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
	 * 		Name   -> Function Buff_ImmuneToShock_CastByWildDino.Buff_ImmuneToShock_CastByWildDino_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ImmuneToShock_CastByWildDino_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ImmuneToShock_CastByWildDino.Buff_ImmuneToShock_CastByWildDino_C.UserConstructionScript");
		
		ABuff_ImmuneToShock_CastByWildDino_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_ImmuneToShock_CastByWildDino.Buff_ImmuneToShock_CastByWildDino_C.ExecuteUbergraph_Buff_ImmuneToShock_CastByWildDino
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_ImmuneToShock_CastByWildDino_C::ExecuteUbergraph_Buff_ImmuneToShock_CastByWildDino(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ImmuneToShock_CastByWildDino.Buff_ImmuneToShock_CastByWildDino_C.ExecuteUbergraph_Buff_ImmuneToShock_CastByWildDino");
		
		ABuff_ImmuneToShock_CastByWildDino_C_ExecuteUbergraph_Buff_ImmuneToShock_CastByWildDino_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_ImmuneToShock_CastByWildDino_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_ImmuneToShock_CastByWildDino_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ImmuneToShock_CastByWildDino.Buff_ImmuneToShock_CastByWildDino_C");
		return ptr;
	}

}


