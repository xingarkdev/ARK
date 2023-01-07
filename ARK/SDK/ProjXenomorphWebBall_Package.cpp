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
	 * 		Name   -> Function ProjXenomorphWebBall.ProjXenomorphWebBall_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjXenomorphWebBall_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjXenomorphWebBall.ProjXenomorphWebBall_C.UserConstructionScript");
		
		AProjXenomorphWebBall_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjXenomorphWebBall.ProjXenomorphWebBall_C.ExecuteUbergraph_ProjXenomorphWebBall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjXenomorphWebBall_C::ExecuteUbergraph_ProjXenomorphWebBall(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjXenomorphWebBall.ProjXenomorphWebBall_C.ExecuteUbergraph_ProjXenomorphWebBall");
		
		AProjXenomorphWebBall_C_ExecuteUbergraph_ProjXenomorphWebBall_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjXenomorphWebBall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjXenomorphWebBall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjXenomorphWebBall.ProjXenomorphWebBall_C");
		return ptr;
	}

}


