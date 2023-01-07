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
	 * 		Name   -> Function WeapCompoundBow_Stone.WeapCompoundBow_Stone_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapCompoundBow_Stone_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapCompoundBow_Stone.WeapCompoundBow_Stone_C.UserConstructionScript");
		
		AWeapCompoundBow_Stone_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapCompoundBow_Stone.WeapCompoundBow_Stone_C.ExecuteUbergraph_WeapCompoundBow_Stone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapCompoundBow_Stone_C::ExecuteUbergraph_WeapCompoundBow_Stone(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapCompoundBow_Stone.WeapCompoundBow_Stone_C.ExecuteUbergraph_WeapCompoundBow_Stone");
		
		AWeapCompoundBow_Stone_C_ExecuteUbergraph_WeapCompoundBow_Stone_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapCompoundBow_Stone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapCompoundBow_Stone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapCompoundBow_Stone.WeapCompoundBow_Stone_C");
		return ptr;
	}

}


