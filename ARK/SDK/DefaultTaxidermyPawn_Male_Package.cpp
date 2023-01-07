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
	 * 		Name   -> Function DefaultTaxidermyPawn_Male.DefaultTaxidermyPawn_Male_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADefaultTaxidermyPawn_Male_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultTaxidermyPawn_Male.DefaultTaxidermyPawn_Male_C.UserConstructionScript");
		
		ADefaultTaxidermyPawn_Male_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DefaultTaxidermyPawn_Male.DefaultTaxidermyPawn_Male_C.ExecuteUbergraph_DefaultTaxidermyPawn_Male
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADefaultTaxidermyPawn_Male_C::ExecuteUbergraph_DefaultTaxidermyPawn_Male(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultTaxidermyPawn_Male.DefaultTaxidermyPawn_Male_C.ExecuteUbergraph_DefaultTaxidermyPawn_Male");
		
		ADefaultTaxidermyPawn_Male_C_ExecuteUbergraph_DefaultTaxidermyPawn_Male_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADefaultTaxidermyPawn_Male_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADefaultTaxidermyPawn_Male_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DefaultTaxidermyPawn_Male.DefaultTaxidermyPawn_Male_C");
		return ptr;
	}

}


