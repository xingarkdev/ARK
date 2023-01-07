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
	 * 		Name   -> Function Buff_EncapsulateFixedTime.Buff_EncapsulateFixedTime_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_EncapsulateFixedTime_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_EncapsulateFixedTime.Buff_EncapsulateFixedTime_C.UserConstructionScript");
		
		ABuff_EncapsulateFixedTime_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_EncapsulateFixedTime.Buff_EncapsulateFixedTime_C.ExecuteUbergraph_Buff_EncapsulateFixedTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_EncapsulateFixedTime_C::ExecuteUbergraph_Buff_EncapsulateFixedTime(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_EncapsulateFixedTime.Buff_EncapsulateFixedTime_C.ExecuteUbergraph_Buff_EncapsulateFixedTime");
		
		ABuff_EncapsulateFixedTime_C_ExecuteUbergraph_Buff_EncapsulateFixedTime_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_EncapsulateFixedTime_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_EncapsulateFixedTime_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_EncapsulateFixedTime.Buff_EncapsulateFixedTime_C");
		return ptr;
	}

}


