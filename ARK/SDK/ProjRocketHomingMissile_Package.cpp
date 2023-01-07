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
	 * 		Name   -> Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjRocketHomingMissile_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.ReceiveTick");
		
		AProjRocketHomingMissile_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.IsTargetAlive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjRocketHomingMissile_C::IsTargetAlive(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.IsTargetAlive");
		
		AProjRocketHomingMissile_C_IsTargetAlive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjRocketHomingMissile_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.UserConstructionScript");
		
		AProjRocketHomingMissile_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.HomingBeep_Timeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AProjRocketHomingMissile_C::HomingBeep_Timeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.HomingBeep_Timeline__FinishedFunc");
		
		AProjRocketHomingMissile_C_HomingBeep_Timeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.HomingBeep_Timeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AProjRocketHomingMissile_C::HomingBeep_Timeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.HomingBeep_Timeline__UpdateFunc");
		
		AProjRocketHomingMissile_C_HomingBeep_Timeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.HomingBeep_Timeline__Beep__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AProjRocketHomingMissile_C::HomingBeep_Timeline__Beep__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.HomingBeep_Timeline__Beep__EventFunc");
		
		AProjRocketHomingMissile_C_HomingBeep_Timeline__Beep__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjRocketHomingMissile_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.ReceiveBeginPlay");
		
		AProjRocketHomingMissile_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.CheckDistToTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProjRocketHomingMissile_C::CheckDistToTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.CheckDistToTarget");
		
		AProjRocketHomingMissile_C_CheckDistToTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.ExecuteUbergraph_ProjRocketHomingMissile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjRocketHomingMissile_C::ExecuteUbergraph_ProjRocketHomingMissile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.ExecuteUbergraph_ProjRocketHomingMissile");
		
		AProjRocketHomingMissile_C_ExecuteUbergraph_ProjRocketHomingMissile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjRocketHomingMissile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjRocketHomingMissile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjRocketHomingMissile.ProjRocketHomingMissile_C");
		return ptr;
	}

}


