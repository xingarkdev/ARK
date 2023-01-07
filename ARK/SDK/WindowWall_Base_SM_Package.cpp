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
	 * 		Name   -> Function WindowWall_Base_SM.WindowWall_Base_SM_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWindowWall_Base_SM_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WindowWall_Base_SM.WindowWall_Base_SM_C.UserConstructionScript");
		
		AWindowWall_Base_SM_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WindowWall_Base_SM.WindowWall_Base_SM_C.ExecuteUbergraph_WindowWall_Base_SM
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWindowWall_Base_SM_C::ExecuteUbergraph_WindowWall_Base_SM(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WindowWall_Base_SM.WindowWall_Base_SM_C.ExecuteUbergraph_WindowWall_Base_SM");
		
		AWindowWall_Base_SM_C_ExecuteUbergraph_WindowWall_Base_SM_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWindowWall_Base_SM_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWindowWall_Base_SM_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WindowWall_Base_SM.WindowWall_Base_SM_C");
		return ptr;
	}

}


