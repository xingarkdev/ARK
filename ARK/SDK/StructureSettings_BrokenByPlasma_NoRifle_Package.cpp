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
	 * 		Name   -> Function StructureSettings_BrokenByPlasma_NoRifle.StructureSettings_BrokenByPlasma_NoRifle_C.ExecuteUbergraph_StructureSettings_BrokenByPlasma_NoRifle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStructureSettings_BrokenByPlasma_NoRifle_C::ExecuteUbergraph_StructureSettings_BrokenByPlasma_NoRifle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureSettings_BrokenByPlasma_NoRifle.StructureSettings_BrokenByPlasma_NoRifle_C.ExecuteUbergraph_StructureSettings_BrokenByPlasma_NoRifle");
		
		UStructureSettings_BrokenByPlasma_NoRifle_C_ExecuteUbergraph_StructureSettings_BrokenByPlasma_NoRifle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStructureSettings_BrokenByPlasma_NoRifle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStructureSettings_BrokenByPlasma_NoRifle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StructureSettings_BrokenByPlasma_NoRifle.StructureSettings_BrokenByPlasma_NoRifle_C");
		return ptr;
	}

}


