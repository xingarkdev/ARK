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
	 * 		Name   -> Function Base_DoubleDoorframe.Base_DoubleDoorframe_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABase_DoubleDoorframe_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_DoubleDoorframe.Base_DoubleDoorframe_C.UserConstructionScript");
		
		ABase_DoubleDoorframe_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Base_DoubleDoorframe.Base_DoubleDoorframe_C.ExecuteUbergraph_Base_DoubleDoorframe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_DoubleDoorframe_C::ExecuteUbergraph_Base_DoubleDoorframe(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_DoubleDoorframe.Base_DoubleDoorframe_C.ExecuteUbergraph_Base_DoubleDoorframe");
		
		ABase_DoubleDoorframe_C_ExecuteUbergraph_Base_DoubleDoorframe_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABase_DoubleDoorframe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABase_DoubleDoorframe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Base_DoubleDoorframe.Base_DoubleDoorframe_C");
		return ptr;
	}

}


