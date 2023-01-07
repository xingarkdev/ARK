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
	 * 		Name   -> Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.MaybeLiqBombTowardsDK
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAIKaiju_EvaluateTarget_SRV_C::MaybeLiqBombTowardsDK()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.MaybeLiqBombTowardsDK");
		
		UAIKaiju_EvaluateTarget_SRV_C_MaybeLiqBombTowardsDK_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.IsTamedAndPassive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPassive                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIKaiju_EvaluateTarget_SRV_C::IsTamedAndPassive(bool* IsPassive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.IsTamedAndPassive");
		
		UAIKaiju_EvaluateTarget_SRV_C_IsTamedAndPassive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsPassive != nullptr)
			*IsPassive = params.IsPassive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ChooseLeapTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAIKaiju_EvaluateTarget_SRV_C::ChooseLeapTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ChooseLeapTarget");
		
		UAIKaiju_EvaluateTarget_SRV_C_ChooseLeapTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.GetHighestPriorityActor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AActor*>                              EnemyList                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class AActor*                                      HighestPriTarget                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIKaiju_EvaluateTarget_SRV_C::GetHighestPriorityActor(TArray<class AActor*>* EnemyList, class AActor** HighestPriTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.GetHighestPriorityActor");
		
		UAIKaiju_EvaluateTarget_SRV_C_GetHighestPriorityActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EnemyList != nullptr)
			*EnemyList = params.EnemyList;
		if (HighestPriTarget != nullptr)
			*HighestPriTarget = params.HighestPriTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.AllowedToTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Allowed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIKaiju_EvaluateTarget_SRV_C::AllowedToTarget(bool* Allowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.AllowedToTarget");
		
		UAIKaiju_EvaluateTarget_SRV_C_AllowedToTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allowed != nullptr)
			*Allowed = params.Allowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ChooseQuadWithMostEnemies
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAIKaiju_EvaluateTarget_SRV_C::ChooseQuadWithMostEnemies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ChooseQuadWithMostEnemies");
		
		UAIKaiju_EvaluateTarget_SRV_C_ChooseQuadWithMostEnemies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.MaybeAcquireClusterTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAIKaiju_EvaluateTarget_SRV_C::MaybeAcquireClusterTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.MaybeAcquireClusterTarget");
		
		UAIKaiju_EvaluateTarget_SRV_C_MaybeAcquireClusterTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.MaybeShakePlayersOff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAIKaiju_EvaluateTarget_SRV_C::MaybeShakePlayersOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.MaybeShakePlayersOff");
		
		UAIKaiju_EvaluateTarget_SRV_C_MaybeShakePlayersOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ChooseCloseQuadrantWithMostEnemy
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAIKaiju_EvaluateTarget_SRV_C::ChooseCloseQuadrantWithMostEnemy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ChooseCloseQuadrantWithMostEnemy");
		
		UAIKaiju_EvaluateTarget_SRV_C_ChooseCloseQuadrantWithMostEnemy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.AddToCloseQuadrantArray
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Attacker                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIKaiju_EvaluateTarget_SRV_C::AddToCloseQuadrantArray(class AActor* Attacker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.AddToCloseQuadrantArray");
		
		UAIKaiju_EvaluateTarget_SRV_C_AddToCloseQuadrantArray_Params params {};
		params.Attacker = Attacker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.IsAttackerUsingRangedWeapon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     Attacker                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UsingRanged                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIKaiju_EvaluateTarget_SRV_C::IsAttackerUsingRangedWeapon(class UObject* Attacker, bool* UsingRanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.IsAttackerUsingRangedWeapon");
		
		UAIKaiju_EvaluateTarget_SRV_C_IsAttackerUsingRangedWeapon_Params params {};
		params.Attacker = Attacker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UsingRanged != nullptr)
			*UsingRanged = params.UsingRanged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ClearTargeting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAIKaiju_EvaluateTarget_SRV_C::ClearTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ClearTargeting");
		
		UAIKaiju_EvaluateTarget_SRV_C_ClearTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.TargetAcquire
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIKaiju_EvaluateTarget_SRV_C::TargetAcquire(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.TargetAcquire");
		
		UAIKaiju_EvaluateTarget_SRV_C_TargetAcquire_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ReceiveActivation
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIKaiju_EvaluateTarget_SRV_C::ReceiveActivation(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ReceiveActivation");
		
		UAIKaiju_EvaluateTarget_SRV_C_ReceiveActivation_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIKaiju_EvaluateTarget_SRV_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ReceiveTick");
		
		UAIKaiju_EvaluateTarget_SRV_C_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ExecuteUbergraph_AIKaiju_EvaluateTarget_SRV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIKaiju_EvaluateTarget_SRV_C::ExecuteUbergraph_AIKaiju_EvaluateTarget_SRV(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ExecuteUbergraph_AIKaiju_EvaluateTarget_SRV");
		
		UAIKaiju_EvaluateTarget_SRV_C_ExecuteUbergraph_AIKaiju_EvaluateTarget_SRV_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIKaiju_EvaluateTarget_SRV_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIKaiju_EvaluateTarget_SRV_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C");
		return ptr;
	}

}


