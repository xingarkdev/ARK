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
	 * 		Name   -> Function Bigfoot_Anim_Blueprint_Zipline.Bigfoot_Anim_Blueprint_Zipline_C.ExecuteUbergraph_Bigfoot_Anim_Blueprint_Zipline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBigfoot_Anim_Blueprint_Zipline_C::ExecuteUbergraph_Bigfoot_Anim_Blueprint_Zipline(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bigfoot_Anim_Blueprint_Zipline.Bigfoot_Anim_Blueprint_Zipline_C.ExecuteUbergraph_Bigfoot_Anim_Blueprint_Zipline");
		
		UBigfoot_Anim_Blueprint_Zipline_C_ExecuteUbergraph_Bigfoot_Anim_Blueprint_Zipline_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBigfoot_Anim_Blueprint_Zipline_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBigfoot_Anim_Blueprint_Zipline_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Bigfoot_Anim_Blueprint_Zipline.Bigfoot_Anim_Blueprint_Zipline_C");
		return ptr;
	}

}


