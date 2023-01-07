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
	 * 		Name   -> Function Electric_Cable_Vertical.Electric_Cable_Vertical_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AElectric_Cable_Vertical_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Electric_Cable_Vertical.Electric_Cable_Vertical_C.UserConstructionScript");
		
		AElectric_Cable_Vertical_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Electric_Cable_Vertical.Electric_Cable_Vertical_C.ExecuteUbergraph_Electric_Cable_Vertical
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AElectric_Cable_Vertical_C::ExecuteUbergraph_Electric_Cable_Vertical(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Electric_Cable_Vertical.Electric_Cable_Vertical_C.ExecuteUbergraph_Electric_Cable_Vertical");
		
		AElectric_Cable_Vertical_C_ExecuteUbergraph_Electric_Cable_Vertical_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AElectric_Cable_Vertical_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AElectric_Cable_Vertical_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Electric_Cable_Vertical.Electric_Cable_Vertical_C");
		return ptr;
	}

}


