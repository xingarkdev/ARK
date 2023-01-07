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
	 * 		Name   -> Function Buff_PreventFreezing_Fenrir.Buff_PreventFreezing_Fenrir_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_PreventFreezing_Fenrir_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_PreventFreezing_Fenrir.Buff_PreventFreezing_Fenrir_C.UserConstructionScript");
		
		ABuff_PreventFreezing_Fenrir_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_PreventFreezing_Fenrir.Buff_PreventFreezing_Fenrir_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_PreventFreezing_Fenrir_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_PreventFreezing_Fenrir.Buff_PreventFreezing_Fenrir_C.BuffTickServer");
		
		ABuff_PreventFreezing_Fenrir_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_PreventFreezing_Fenrir.Buff_PreventFreezing_Fenrir_C.ExecuteUbergraph_Buff_PreventFreezing_Fenrir
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_PreventFreezing_Fenrir_C::ExecuteUbergraph_Buff_PreventFreezing_Fenrir(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_PreventFreezing_Fenrir.Buff_PreventFreezing_Fenrir_C.ExecuteUbergraph_Buff_PreventFreezing_Fenrir");
		
		ABuff_PreventFreezing_Fenrir_C_ExecuteUbergraph_Buff_PreventFreezing_Fenrir_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_PreventFreezing_Fenrir_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_PreventFreezing_Fenrir_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_PreventFreezing_Fenrir.Buff_PreventFreezing_Fenrir_C");
		return ptr;
	}

}


