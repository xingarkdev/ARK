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
	 * 		Name   -> Function WyvAttackStateFire.WyvAttackStateFire_C.ExecuteUbergraph_WyvAttackStateFire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWyvAttackStateFire_C::ExecuteUbergraph_WyvAttackStateFire(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WyvAttackStateFire.WyvAttackStateFire_C.ExecuteUbergraph_WyvAttackStateFire");
		
		UWyvAttackStateFire_C_ExecuteUbergraph_WyvAttackStateFire_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWyvAttackStateFire_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWyvAttackStateFire_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WyvAttackStateFire.WyvAttackStateFire_C");
		return ptr;
	}

}


