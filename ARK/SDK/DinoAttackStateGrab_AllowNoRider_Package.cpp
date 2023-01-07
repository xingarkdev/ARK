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
	 * 		Name   -> Function DinoAttackStateGrab_AllowNoRider.DinoAttackStateGrab_AllowNoRider_C.ExecuteUbergraph_DinoAttackStateGrab_AllowNoRider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateGrab_AllowNoRider_C::ExecuteUbergraph_DinoAttackStateGrab_AllowNoRider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateGrab_AllowNoRider.DinoAttackStateGrab_AllowNoRider_C.ExecuteUbergraph_DinoAttackStateGrab_AllowNoRider");
		
		UDinoAttackStateGrab_AllowNoRider_C_ExecuteUbergraph_DinoAttackStateGrab_AllowNoRider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackStateGrab_AllowNoRider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackStateGrab_AllowNoRider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateGrab_AllowNoRider.DinoAttackStateGrab_AllowNoRider_C");
		return ptr;
	}

}


