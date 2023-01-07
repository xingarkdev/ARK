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
	 * 		Name   -> Function Greenhouse_Sloped_Wall_Right.Greenhouse_Sloped_Wall_Right_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGreenhouse_Sloped_Wall_Right_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greenhouse_Sloped_Wall_Right.Greenhouse_Sloped_Wall_Right_C.UserConstructionScript");
		
		AGreenhouse_Sloped_Wall_Right_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Greenhouse_Sloped_Wall_Right.Greenhouse_Sloped_Wall_Right_C.ExecuteUbergraph_Greenhouse_Sloped_Wall_Right
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGreenhouse_Sloped_Wall_Right_C::ExecuteUbergraph_Greenhouse_Sloped_Wall_Right(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greenhouse_Sloped_Wall_Right.Greenhouse_Sloped_Wall_Right_C.ExecuteUbergraph_Greenhouse_Sloped_Wall_Right");
		
		AGreenhouse_Sloped_Wall_Right_C_ExecuteUbergraph_Greenhouse_Sloped_Wall_Right_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGreenhouse_Sloped_Wall_Right_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGreenhouse_Sloped_Wall_Right_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Greenhouse_Sloped_Wall_Right.Greenhouse_Sloped_Wall_Right_C");
		return ptr;
	}

}


