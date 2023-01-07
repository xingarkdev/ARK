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
	 * 		Name   -> Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.CanBeViewed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ByActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_Base_PointOfInterest_C::CanBeViewed(class AActor* ByActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.CanBeViewed");
		
		ABuff_Base_PointOfInterest_C_CanBeViewed_Params params {};
		params.ByActor = ByActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.GetPointCustomData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UClass* ABuff_Base_PointOfInterest_C::GetPointCustomData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.GetPointCustomData");
		
		ABuff_Base_PointOfInterest_C_GetPointCustomData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.GetPointOfInterestData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FPointOfInterestData ABuff_Base_PointOfInterest_C::GetPointOfInterestData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.GetPointOfInterestData");
		
		ABuff_Base_PointOfInterest_C_GetPointOfInterestData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.InititalizePointOfInterest
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Base_PointOfInterest_C::InititalizePointOfInterest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.InititalizePointOfInterest");
		
		ABuff_Base_PointOfInterest_C_InititalizePointOfInterest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Base_PointOfInterest_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.UserConstructionScript");
		
		ABuff_Base_PointOfInterest_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.SetPointTagUniqueState
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewUniqueState                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Base_PointOfInterest_C::SetPointTagUniqueState(bool bNewUniqueState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.SetPointTagUniqueState");
		
		ABuff_Base_PointOfInterest_C_SetPointTagUniqueState_Params params {};
		params.bNewUniqueState = bNewUniqueState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.UnviewPoint
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      UnviewedByActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Base_PointOfInterest_C::UnviewPoint(class AActor* UnviewedByActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.UnviewPoint");
		
		ABuff_Base_PointOfInterest_C_UnviewPoint_Params params {};
		params.UnviewedByActor = UnviewedByActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.ViewPoint
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ViewedByActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Base_PointOfInterest_C::ViewPoint(class AActor* ViewedByActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.ViewPoint");
		
		ABuff_Base_PointOfInterest_C_ViewPoint_Params params {};
		params.ViewedByActor = ViewedByActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.ExecuteUbergraph_Buff_Base_PointOfInterest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Base_PointOfInterest_C::ExecuteUbergraph_Buff_Base_PointOfInterest(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.ExecuteUbergraph_Buff_Base_PointOfInterest");
		
		ABuff_Base_PointOfInterest_C_ExecuteUbergraph_Buff_Base_PointOfInterest_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Base_PointOfInterest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Base_PointOfInterest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C");
		return ptr;
	}

}


