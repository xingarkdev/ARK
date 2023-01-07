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
	 * 		Name   -> Function DamageType_TekPistol_Stun.DamageType_TekPistol_Stun_C.ExecuteUbergraph_DamageType_TekPistol_Stun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDamageType_TekPistol_Stun_C::ExecuteUbergraph_DamageType_TekPistol_Stun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DamageType_TekPistol_Stun.DamageType_TekPistol_Stun_C.ExecuteUbergraph_DamageType_TekPistol_Stun");
		
		UDamageType_TekPistol_Stun_C_ExecuteUbergraph_DamageType_TekPistol_Stun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDamageType_TekPistol_Stun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDamageType_TekPistol_Stun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DamageType_TekPistol_Stun.DamageType_TekPistol_Stun_C");
		return ptr;
	}

}


