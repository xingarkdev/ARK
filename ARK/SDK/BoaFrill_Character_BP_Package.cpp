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
	 * 		Name   -> Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.Get Scaled Affinity Based on Dino
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              InputAffinity                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABoaFrill_Character_BP_C::GetScaledAffinityBasedonDino(float InputAffinity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.Get Scaled Affinity Based on Dino");
		
		ABoaFrill_Character_BP_C_GetScaledAffinityBasedonDino_Params params {};
		params.InputAffinity = InputAffinity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float ABoaFrill_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.BPAdjustDamage");
		
		ABoaFrill_Character_BP_C_BPAdjustDamage_Params params {};
		params.IncomingDamage = IncomingDamage;
		params.TheDamageEvent = TheDamageEvent;
		params.EventInstigator = EventInstigator;
		params.DamageCauser = DamageCauser;
		params.bIsPointDamage = bIsPointDamage;
		params.PointHitInfo = PointHitInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.TameIfAllowed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABoaFrill_Character_BP_C::TameIfAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.TameIfAllowed");
		
		ABoaFrill_Character_BP_C_TameIfAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.ResetEggSeeking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABoaFrill_Character_BP_C::ResetEggSeeking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.ResetEggSeeking");
		
		ABoaFrill_Character_BP_C_ResetEggSeeking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.IncreaseTamingAffinity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           TamingPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ValueForTaming                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABoaFrill_Character_BP_C::IncreaseTamingAffinity(class AShooterCharacter* TamingPlayer, float ValueForTaming)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.IncreaseTamingAffinity");
		
		ABoaFrill_Character_BP_C_IncreaseTamingAffinity_Params params {};
		params.TamingPlayer = TamingPlayer;
		params.ValueForTaming = ValueForTaming;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.Update Taming
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ValueForTaming                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            DroppedByShooterChar                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABoaFrill_Character_BP_C::UpdateTaming(float ValueForTaming, class APrimalCharacter* DroppedByShooterChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.Update Taming");
		
		ABoaFrill_Character_BP_C_UpdateTaming_Params params {};
		params.ValueForTaming = ValueForTaming;
		params.DroppedByShooterChar = DroppedByShooterChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABoaFrill_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.BPSetupTamed");
		
		ABoaFrill_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABoaFrill_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.UserConstructionScript");
		
		ABoaFrill_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABoaFrill_Character_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.Timeline_0__FinishedFunc");
		
		ABoaFrill_Character_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABoaFrill_Character_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.Timeline_0__UpdateFunc");
		
		ABoaFrill_Character_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABoaFrill_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.BPTimerServer");
		
		ABoaFrill_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.DissolveEggItem
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABoaFrill_Character_BP_C::DissolveEggItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.DissolveEggItem");
		
		ABoaFrill_Character_BP_C_DissolveEggItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.EatEgg
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABoaFrill_Character_BP_C::EatEgg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.EatEgg");
		
		ABoaFrill_Character_BP_C_EatEgg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.UpdateSeekEgg
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABoaFrill_Character_BP_C::UpdateSeekEgg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.UpdateSeekEgg");
		
		ABoaFrill_Character_BP_C_UpdateSeekEgg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.RestartBrain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABoaFrill_Character_BP_C::RestartBrain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.RestartBrain");
		
		ABoaFrill_Character_BP_C_RestartBrain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.StartEggMoving
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABoaFrill_Character_BP_C::StartEggMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.StartEggMoving");
		
		ABoaFrill_Character_BP_C_StartEggMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.StartUpdateEggSeekTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABoaFrill_Character_BP_C::StartUpdateEggSeekTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.StartUpdateEggSeekTimer");
		
		ABoaFrill_Character_BP_C_StartUpdateEggSeekTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.MoveToEgg
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABoaFrill_Character_BP_C::MoveToEgg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.MoveToEgg");
		
		ABoaFrill_Character_BP_C_MoveToEgg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.ExecuteUbergraph_BoaFrill_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABoaFrill_Character_BP_C::ExecuteUbergraph_BoaFrill_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.ExecuteUbergraph_BoaFrill_Character_BP");
		
		ABoaFrill_Character_BP_C_ExecuteUbergraph_BoaFrill_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABoaFrill_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABoaFrill_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BoaFrill_Character_BP.BoaFrill_Character_BP_C");
		return ptr;
	}

}


