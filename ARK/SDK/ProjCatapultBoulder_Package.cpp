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
	 * 		Name   -> Function ProjCatapultBoulder.ProjCatapultBoulder_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjCatapultBoulder_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjCatapultBoulder.ProjCatapultBoulder_C.UserConstructionScript");
		
		AProjCatapultBoulder_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjCatapultBoulder.ProjCatapultBoulder_C.ExecuteUbergraph_ProjCatapultBoulder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjCatapultBoulder_C::ExecuteUbergraph_ProjCatapultBoulder(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjCatapultBoulder.ProjCatapultBoulder_C.ExecuteUbergraph_ProjCatapultBoulder");
		
		AProjCatapultBoulder_C_ExecuteUbergraph_ProjCatapultBoulder_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjCatapultBoulder_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjCatapultBoulder_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjCatapultBoulder.ProjCatapultBoulder_C");
		return ptr;
	}

}


