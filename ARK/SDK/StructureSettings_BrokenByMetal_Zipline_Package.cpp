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
	 * 		Name   -> Function StructureSettings_BrokenByMetal_Zipline.StructureSettings_BrokenByMetal_Zipline_C.ExecuteUbergraph_StructureSettings_BrokenByMetal_Zipline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStructureSettings_BrokenByMetal_Zipline_C::ExecuteUbergraph_StructureSettings_BrokenByMetal_Zipline(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureSettings_BrokenByMetal_Zipline.StructureSettings_BrokenByMetal_Zipline_C.ExecuteUbergraph_StructureSettings_BrokenByMetal_Zipline");
		
		UStructureSettings_BrokenByMetal_Zipline_C_ExecuteUbergraph_StructureSettings_BrokenByMetal_Zipline_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStructureSettings_BrokenByMetal_Zipline_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStructureSettings_BrokenByMetal_Zipline_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StructureSettings_BrokenByMetal_Zipline.StructureSettings_BrokenByMetal_Zipline_C");
		return ptr;
	}

}


