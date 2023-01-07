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
	 * 		Name   -> Function WeapHarpoonTranq.WeapHarpoonTranq_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapHarpoonTranq_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapHarpoonTranq.WeapHarpoonTranq_C.UserConstructionScript");
		
		AWeapHarpoonTranq_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapHarpoonTranq.WeapHarpoonTranq_C.ExecuteUbergraph_WeapHarpoonTranq
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapHarpoonTranq_C::ExecuteUbergraph_WeapHarpoonTranq(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapHarpoonTranq.WeapHarpoonTranq_C.ExecuteUbergraph_WeapHarpoonTranq");
		
		AWeapHarpoonTranq_C_ExecuteUbergraph_WeapHarpoonTranq_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapHarpoonTranq_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapHarpoonTranq_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapHarpoonTranq.WeapHarpoonTranq_C");
		return ptr;
	}

}


