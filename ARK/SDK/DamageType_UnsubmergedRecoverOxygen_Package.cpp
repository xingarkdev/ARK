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
	 * 		Name   -> Function DamageType_UnsubmergedRecoverOxygen.DamageType_UnsubmergedRecoverOxygen_C.ExecuteUbergraph_DamageType_UnsubmergedRecoverOxygen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDamageType_UnsubmergedRecoverOxygen_C::ExecuteUbergraph_DamageType_UnsubmergedRecoverOxygen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DamageType_UnsubmergedRecoverOxygen.DamageType_UnsubmergedRecoverOxygen_C.ExecuteUbergraph_DamageType_UnsubmergedRecoverOxygen");
		
		UDamageType_UnsubmergedRecoverOxygen_C_ExecuteUbergraph_DamageType_UnsubmergedRecoverOxygen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDamageType_UnsubmergedRecoverOxygen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDamageType_UnsubmergedRecoverOxygen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DamageType_UnsubmergedRecoverOxygen.DamageType_UnsubmergedRecoverOxygen_C");
		return ptr;
	}

}


