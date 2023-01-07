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
	 * 		Name   -> Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CheckIfTargetIsCloseToPaws
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FoundPawAttack                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            QuadIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseIceBreath                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_IceKaijuFindBestMeleeAttack_C::CheckIfTargetIsCloseToPaws(bool* FoundPawAttack, int32_t* QuadIndex, bool* UseIceBreath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CheckIfTargetIsCloseToPaws");
		
		UTask_IceKaijuFindBestMeleeAttack_C_CheckIfTargetIsCloseToPaws_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundPawAttack != nullptr)
			*FoundPawAttack = params.FoundPawAttack;
		if (QuadIndex != nullptr)
			*QuadIndex = params.QuadIndex;
		if (UseIceBreath != nullptr)
			*UseIceBreath = params.UseIceBreath;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.SetTargetQuadrant
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTask_IceKaijuFindBestMeleeAttack_C::SetTargetQuadrant()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.SetTargetQuadrant");
		
		UTask_IceKaijuFindBestMeleeAttack_C_SetTargetQuadrant_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CanAngryAttack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AIceKaiju_Character_BP_C*                    MyIceKaiju                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UTask_IceKaijuFindBestMeleeAttack_C::CanAngryAttack(class AIceKaiju_Character_BP_C** MyIceKaiju)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CanAngryAttack");
		
		UTask_IceKaijuFindBestMeleeAttack_C_CanAngryAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MyIceKaiju != nullptr)
			*MyIceKaiju = params.MyIceKaiju;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CanIceBreath
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AIceKaiju_Character_BP_C*                    MyIceKaiju                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UTask_IceKaijuFindBestMeleeAttack_C::CanIceBreath(class AIceKaiju_Character_BP_C** MyIceKaiju)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CanIceBreath");
		
		UTask_IceKaijuFindBestMeleeAttack_C_CanIceBreath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MyIceKaiju != nullptr)
			*MyIceKaiju = params.MyIceKaiju;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CanGroundSmash
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AIceKaiju_Character_BP_C*                    MyIceKaiju                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UTask_IceKaijuFindBestMeleeAttack_C::CanGroundSmash(class AIceKaiju_Character_BP_C** MyIceKaiju)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CanGroundSmash");
		
		UTask_IceKaijuFindBestMeleeAttack_C_CanGroundSmash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MyIceKaiju != nullptr)
			*MyIceKaiju = params.MyIceKaiju;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CanUseGroundSmash
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsOnCooldown                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_IceKaijuFindBestMeleeAttack_C::CanUseGroundSmash(bool* IsOnCooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CanUseGroundSmash");
		
		UTask_IceKaijuFindBestMeleeAttack_C_CanUseGroundSmash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOnCooldown != nullptr)
			*IsOnCooldown = params.IsOnCooldown;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_IceKaijuFindBestMeleeAttack_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.ReceiveExecute");
		
		UTask_IceKaijuFindBestMeleeAttack_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.ExecuteUbergraph_Task_IceKaijuFindBestMeleeAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTask_IceKaijuFindBestMeleeAttack_C::ExecuteUbergraph_Task_IceKaijuFindBestMeleeAttack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.ExecuteUbergraph_Task_IceKaijuFindBestMeleeAttack");
		
		UTask_IceKaijuFindBestMeleeAttack_C_ExecuteUbergraph_Task_IceKaijuFindBestMeleeAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTask_IceKaijuFindBestMeleeAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTask_IceKaijuFindBestMeleeAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C");
		return ptr;
	}

}


