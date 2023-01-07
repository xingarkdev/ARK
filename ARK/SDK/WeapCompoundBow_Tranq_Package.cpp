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
	 * 		Name   -> Function WeapCompoundBow_Tranq.WeapCompoundBow_Tranq_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapCompoundBow_Tranq_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapCompoundBow_Tranq.WeapCompoundBow_Tranq_C.UserConstructionScript");
		
		AWeapCompoundBow_Tranq_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapCompoundBow_Tranq.WeapCompoundBow_Tranq_C.ExecuteUbergraph_WeapCompoundBow_Tranq
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapCompoundBow_Tranq_C::ExecuteUbergraph_WeapCompoundBow_Tranq(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapCompoundBow_Tranq.WeapCompoundBow_Tranq_C.ExecuteUbergraph_WeapCompoundBow_Tranq");
		
		AWeapCompoundBow_Tranq_C_ExecuteUbergraph_WeapCompoundBow_Tranq_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapCompoundBow_Tranq_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapCompoundBow_Tranq_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapCompoundBow_Tranq.WeapCompoundBow_Tranq_C");
		return ptr;
	}

}


