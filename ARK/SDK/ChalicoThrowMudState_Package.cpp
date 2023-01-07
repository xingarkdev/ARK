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
	 * 		Name   -> Function ChalicoThrowMudState.ChalicoThrowMudState_C.ExecuteUbergraph_ChalicoThrowMudState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChalicoThrowMudState_C::ExecuteUbergraph_ChalicoThrowMudState(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChalicoThrowMudState.ChalicoThrowMudState_C.ExecuteUbergraph_ChalicoThrowMudState");
		
		UChalicoThrowMudState_C_ExecuteUbergraph_ChalicoThrowMudState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChalicoThrowMudState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChalicoThrowMudState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChalicoThrowMudState.ChalicoThrowMudState_C");
		return ptr;
	}

}


