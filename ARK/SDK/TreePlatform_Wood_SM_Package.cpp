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
	 * 		Name   -> Function TreePlatform_Wood_SM.TreePlatform_Wood_SM_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATreePlatform_Wood_SM_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TreePlatform_Wood_SM.TreePlatform_Wood_SM_C.UserConstructionScript");
		
		ATreePlatform_Wood_SM_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TreePlatform_Wood_SM.TreePlatform_Wood_SM_C.ExecuteUbergraph_TreePlatform_Wood_SM
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATreePlatform_Wood_SM_C::ExecuteUbergraph_TreePlatform_Wood_SM(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TreePlatform_Wood_SM.TreePlatform_Wood_SM_C.ExecuteUbergraph_TreePlatform_Wood_SM");
		
		ATreePlatform_Wood_SM_C_ExecuteUbergraph_TreePlatform_Wood_SM_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATreePlatform_Wood_SM_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATreePlatform_Wood_SM_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TreePlatform_Wood_SM.TreePlatform_Wood_SM_C");
		return ptr;
	}

}


