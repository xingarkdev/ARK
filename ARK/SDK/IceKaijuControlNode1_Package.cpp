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
	 * 		Name   -> Function IceKaijuControlNode1.IceKaijuControlNode1_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceKaijuControlNode1_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaijuControlNode1.IceKaijuControlNode1_C.UserConstructionScript");
		
		AIceKaijuControlNode1_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IceKaijuControlNode1.IceKaijuControlNode1_C.ExecuteUbergraph_IceKaijuControlNode1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceKaijuControlNode1_C::ExecuteUbergraph_IceKaijuControlNode1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceKaijuControlNode1.IceKaijuControlNode1_C.ExecuteUbergraph_IceKaijuControlNode1");
		
		AIceKaijuControlNode1_C_ExecuteUbergraph_IceKaijuControlNode1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIceKaijuControlNode1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIceKaijuControlNode1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IceKaijuControlNode1.IceKaijuControlNode1_C");
		return ptr;
	}

}


