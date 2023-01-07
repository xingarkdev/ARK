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
	 * 		Name   -> Function DefaultTaxidermyPawn_Female.DefaultTaxidermyPawn_Female_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADefaultTaxidermyPawn_Female_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultTaxidermyPawn_Female.DefaultTaxidermyPawn_Female_C.UserConstructionScript");
		
		ADefaultTaxidermyPawn_Female_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DefaultTaxidermyPawn_Female.DefaultTaxidermyPawn_Female_C.ExecuteUbergraph_DefaultTaxidermyPawn_Female
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADefaultTaxidermyPawn_Female_C::ExecuteUbergraph_DefaultTaxidermyPawn_Female(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultTaxidermyPawn_Female.DefaultTaxidermyPawn_Female_C.ExecuteUbergraph_DefaultTaxidermyPawn_Female");
		
		ADefaultTaxidermyPawn_Female_C_ExecuteUbergraph_DefaultTaxidermyPawn_Female_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADefaultTaxidermyPawn_Female_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADefaultTaxidermyPawn_Female_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DefaultTaxidermyPawn_Female.DefaultTaxidermyPawn_Female_C");
		return ptr;
	}

}


