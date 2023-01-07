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
	 * 		Name   -> Function Greenhouse_Wall.Greenhouse_Wall_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGreenhouse_Wall_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greenhouse_Wall.Greenhouse_Wall_C.UserConstructionScript");
		
		AGreenhouse_Wall_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Greenhouse_Wall.Greenhouse_Wall_C.ExecuteUbergraph_Greenhouse_Wall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGreenhouse_Wall_C::ExecuteUbergraph_Greenhouse_Wall(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greenhouse_Wall.Greenhouse_Wall_C.ExecuteUbergraph_Greenhouse_Wall");
		
		AGreenhouse_Wall_C_ExecuteUbergraph_Greenhouse_Wall_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGreenhouse_Wall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGreenhouse_Wall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Greenhouse_Wall.Greenhouse_Wall_C");
		return ptr;
	}

}


