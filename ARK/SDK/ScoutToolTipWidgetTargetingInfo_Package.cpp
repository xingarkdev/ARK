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
	 * 		Name   -> Function ScoutToolTipWidgetTargetingInfo.ScoutToolTipWidgetTargetingInfo_C.ExecuteUbergraph_ScoutToolTipWidgetTargetingInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScoutToolTipWidgetTargetingInfo_C::ExecuteUbergraph_ScoutToolTipWidgetTargetingInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoutToolTipWidgetTargetingInfo.ScoutToolTipWidgetTargetingInfo_C.ExecuteUbergraph_ScoutToolTipWidgetTargetingInfo");
		
		UScoutToolTipWidgetTargetingInfo_C_ExecuteUbergraph_ScoutToolTipWidgetTargetingInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScoutToolTipWidgetTargetingInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScoutToolTipWidgetTargetingInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScoutToolTipWidgetTargetingInfo.ScoutToolTipWidgetTargetingInfo_C");
		return ptr;
	}

}


