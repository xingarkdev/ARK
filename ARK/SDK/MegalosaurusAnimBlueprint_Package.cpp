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
	 * 		Name   -> Function MegalosaurusAnimBlueprint.MegalosaurusAnimBlueprint_C.ExecuteUbergraph_MegalosaurusAnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMegalosaurusAnimBlueprint_C::ExecuteUbergraph_MegalosaurusAnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MegalosaurusAnimBlueprint.MegalosaurusAnimBlueprint_C.ExecuteUbergraph_MegalosaurusAnimBlueprint");
		
		UMegalosaurusAnimBlueprint_C_ExecuteUbergraph_MegalosaurusAnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMegalosaurusAnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMegalosaurusAnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass MegalosaurusAnimBlueprint.MegalosaurusAnimBlueprint_C");
		return ptr;
	}

}


