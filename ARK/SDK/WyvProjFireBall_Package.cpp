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
	 * 		Name   -> Function WyvProjFireBall.WyvProjFireBall_C.GetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class FName AWyvProjFireBall_C::GetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WyvProjFireBall.WyvProjFireBall_C.GetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim");
		
		AWyvProjFireBall_C_GetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WyvProjFireBall.WyvProjFireBall_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWyvProjFireBall_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WyvProjFireBall.WyvProjFireBall_C.UserConstructionScript");
		
		AWyvProjFireBall_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WyvProjFireBall.WyvProjFireBall_C.ExecuteUbergraph_WyvProjFireBall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWyvProjFireBall_C::ExecuteUbergraph_WyvProjFireBall(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WyvProjFireBall.WyvProjFireBall_C.ExecuteUbergraph_WyvProjFireBall");
		
		AWyvProjFireBall_C_ExecuteUbergraph_WyvProjFireBall_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWyvProjFireBall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWyvProjFireBall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WyvProjFireBall.WyvProjFireBall_C");
		return ptr;
	}

}


