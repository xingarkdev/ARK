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
	 * 		Name   -> Function VH_Buggy_WheelFront.VH_Buggy_WheelFront_C.ExecuteUbergraph_VH_Buggy_WheelFront
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVH_Buggy_WheelFront_C::ExecuteUbergraph_VH_Buggy_WheelFront(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_Buggy_WheelFront.VH_Buggy_WheelFront_C.ExecuteUbergraph_VH_Buggy_WheelFront");
		
		UVH_Buggy_WheelFront_C_ExecuteUbergraph_VH_Buggy_WheelFront_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVH_Buggy_WheelFront_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVH_Buggy_WheelFront_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VH_Buggy_WheelFront.VH_Buggy_WheelFront_C");
		return ptr;
	}

}


