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
	 * 		Name   -> Function DinoColorSet_Stego_Bionic.DinoColorSet_Stego_Bionic_C.ExecuteUbergraph_DinoColorSet_Stego_Bionic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoColorSet_Stego_Bionic_C::ExecuteUbergraph_DinoColorSet_Stego_Bionic(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoColorSet_Stego_Bionic.DinoColorSet_Stego_Bionic_C.ExecuteUbergraph_DinoColorSet_Stego_Bionic");
		
		UDinoColorSet_Stego_Bionic_C_ExecuteUbergraph_DinoColorSet_Stego_Bionic_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoColorSet_Stego_Bionic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoColorSet_Stego_Bionic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_Stego_Bionic.DinoColorSet_Stego_Bionic_C");
		return ptr;
	}

}


