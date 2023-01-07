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
	 * 		Name   -> Function Gate_Large_AdobeBase.Gate_Large_AdobeBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGate_Large_AdobeBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gate_Large_AdobeBase.Gate_Large_AdobeBase_C.UserConstructionScript");
		
		AGate_Large_AdobeBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Gate_Large_AdobeBase.Gate_Large_AdobeBase_C.ExecuteUbergraph_Gate_Large_AdobeBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGate_Large_AdobeBase_C::ExecuteUbergraph_Gate_Large_AdobeBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gate_Large_AdobeBase.Gate_Large_AdobeBase_C.ExecuteUbergraph_Gate_Large_AdobeBase");
		
		AGate_Large_AdobeBase_C_ExecuteUbergraph_Gate_Large_AdobeBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGate_Large_AdobeBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGate_Large_AdobeBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Gate_Large_AdobeBase.Gate_Large_AdobeBase_C");
		return ptr;
	}

}


