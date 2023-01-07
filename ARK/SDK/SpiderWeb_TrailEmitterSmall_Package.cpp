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
	 * 		Name   -> Function SpiderWeb_TrailEmitterSmall.SpiderWeb_TrailEmitterSmall_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpiderWeb_TrailEmitterSmall_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpiderWeb_TrailEmitterSmall.SpiderWeb_TrailEmitterSmall_C.UserConstructionScript");
		
		ASpiderWeb_TrailEmitterSmall_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SpiderWeb_TrailEmitterSmall.SpiderWeb_TrailEmitterSmall_C.ExecuteUbergraph_SpiderWeb_TrailEmitterSmall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpiderWeb_TrailEmitterSmall_C::ExecuteUbergraph_SpiderWeb_TrailEmitterSmall(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpiderWeb_TrailEmitterSmall.SpiderWeb_TrailEmitterSmall_C.ExecuteUbergraph_SpiderWeb_TrailEmitterSmall");
		
		ASpiderWeb_TrailEmitterSmall_C_ExecuteUbergraph_SpiderWeb_TrailEmitterSmall_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpiderWeb_TrailEmitterSmall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpiderWeb_TrailEmitterSmall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpiderWeb_TrailEmitterSmall.SpiderWeb_TrailEmitterSmall_C");
		return ptr;
	}

}


