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
	 * 		Name   -> Function IceJumper_SnowballProj.IceJumper_SnowballProj_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_SnowballProj_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_SnowballProj.IceJumper_SnowballProj_C.UserConstructionScript");
		
		AIceJumper_SnowballProj_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceJumper_SnowballProj.IceJumper_SnowballProj_C.ExecuteUbergraph_IceJumper_SnowballProj
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_SnowballProj_C::ExecuteUbergraph_IceJumper_SnowballProj(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_SnowballProj.IceJumper_SnowballProj_C.ExecuteUbergraph_IceJumper_SnowballProj");
		
		AIceJumper_SnowballProj_C_ExecuteUbergraph_IceJumper_SnowballProj_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIceJumper_SnowballProj_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIceJumper_SnowballProj_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IceJumper_SnowballProj.IceJumper_SnowballProj_C");
		return ptr;
	}

}


