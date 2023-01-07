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
	 * 		Name   -> Function ProjCatapultBoulder_Fire.ProjCatapultBoulder_Fire_C.OnExplode
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (Parm, OutParm, ReferenceParm)
	 */
	void AProjCatapultBoulder_Fire_C::OnExplode(struct FHitResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjCatapultBoulder_Fire.ProjCatapultBoulder_Fire_C.OnExplode");
		
		AProjCatapultBoulder_Fire_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjCatapultBoulder_Fire.ProjCatapultBoulder_Fire_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjCatapultBoulder_Fire_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjCatapultBoulder_Fire.ProjCatapultBoulder_Fire_C.UserConstructionScript");
		
		AProjCatapultBoulder_Fire_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjCatapultBoulder_Fire.ProjCatapultBoulder_Fire_C.ExecuteUbergraph_ProjCatapultBoulder_Fire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjCatapultBoulder_Fire_C::ExecuteUbergraph_ProjCatapultBoulder_Fire(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjCatapultBoulder_Fire.ProjCatapultBoulder_Fire_C.ExecuteUbergraph_ProjCatapultBoulder_Fire");
		
		AProjCatapultBoulder_Fire_C_ExecuteUbergraph_ProjCatapultBoulder_Fire_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjCatapultBoulder_Fire_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjCatapultBoulder_Fire_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjCatapultBoulder_Fire.ProjCatapultBoulder_Fire_C");
		return ptr;
	}

}


