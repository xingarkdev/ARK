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
	 * 		Name   -> Function BaseWall_Sloped_Right_SM.BaseWall_Sloped_Right_SM_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseWall_Sloped_Right_SM_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseWall_Sloped_Right_SM.BaseWall_Sloped_Right_SM_C.UserConstructionScript");
		
		ABaseWall_Sloped_Right_SM_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BaseWall_Sloped_Right_SM.BaseWall_Sloped_Right_SM_C.ExecuteUbergraph_BaseWall_Sloped_Right_SM
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseWall_Sloped_Right_SM_C::ExecuteUbergraph_BaseWall_Sloped_Right_SM(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseWall_Sloped_Right_SM.BaseWall_Sloped_Right_SM_C.ExecuteUbergraph_BaseWall_Sloped_Right_SM");
		
		ABaseWall_Sloped_Right_SM_C_ExecuteUbergraph_BaseWall_Sloped_Right_SM_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseWall_Sloped_Right_SM_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseWall_Sloped_Right_SM_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseWall_Sloped_Right_SM.BaseWall_Sloped_Right_SM_C");
		return ptr;
	}

}


