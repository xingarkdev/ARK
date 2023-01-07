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
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.UpdateTetherAfterLoad
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_DinoLeash_C::UpdateTetherAfterLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.UpdateTetherAfterLoad");
		
		AStructure_DinoLeash_C_UpdateTetherAfterLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.BPPostLoadedFromSaveGame
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_DinoLeash_C::BPPostLoadedFromSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.BPPostLoadedFromSaveGame");
		
		AStructure_DinoLeash_C_BPPostLoadedFromSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float AStructure_DinoLeash_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.BPAdjustDamage");
		
		AStructure_DinoLeash_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.UpdateVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_DinoLeash_C::UpdateVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.UpdateVisibility");
		
		AStructure_DinoLeash_C_UpdateVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_DinoLeash_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.ReceiveBeginPlay");
		
		AStructure_DinoLeash_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_DinoLeash_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.BPUnstasis");
		
		AStructure_DinoLeash_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.Get Is Active
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool AStructure_DinoLeash_C::GetIsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.Get Is Active");
		
		AStructure_DinoLeash_C_GetIsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.BPContainerDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_DinoLeash_C::BPContainerDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.BPContainerDeactivated");
		
		AStructure_DinoLeash_C_BPContainerDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.BPContainerActivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_DinoLeash_C::BPContainerActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.BPContainerActivated");
		
		AStructure_DinoLeash_C_BPContainerActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.BlueprintDrawPreviewHUD
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_DinoLeash_C::BlueprintDrawPreviewHUD(class AShooterHUD* HUD, float CenterX, float CenterY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.BlueprintDrawPreviewHUD");
		
		AStructure_DinoLeash_C_BlueprintDrawPreviewHUD_Params params {};
		params.HUD = HUD;
		params.CenterX = CenterX;
		params.CenterY = CenterY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.GetMaximumAllowedRadius
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              MaxRadius                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MaxSetting                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_DinoLeash_C::GetMaximumAllowedRadius(float* MaxRadius, int32_t* MaxSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.GetMaximumAllowedRadius");
		
		AStructure_DinoLeash_C_GetMaximumAllowedRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxRadius != nullptr)
			*MaxRadius = params.MaxRadius;
		if (MaxSetting != nullptr)
			*MaxSetting = params.MaxSetting;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.TetherDinosInRadius
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_DinoLeash_C::TetherDinosInRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.TetherDinosInRadius");
		
		AStructure_DinoLeash_C_TetherDinosInRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.SetEffectRadius
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              EffectRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ForceSet                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_DinoLeash_C::SetEffectRadius(float EffectRadius, bool ForceSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.SetEffectRadius");
		
		AStructure_DinoLeash_C_SetEffectRadius_Params params {};
		params.EffectRadius = EffectRadius;
		params.ForceSet = ForceSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.OnRep_EffectRadius
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_DinoLeash_C::OnRep_EffectRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.OnRep_EffectRadius");
		
		AStructure_DinoLeash_C_OnRep_EffectRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_DinoLeash_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.BPClientDoMultiUse");
		
		AStructure_DinoLeash_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.BPIsAllowedToBuild
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlacementData                              OutPlacementData                                           (Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            CurrentAllowedReason                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t AStructure_DinoLeash_C::BPIsAllowedToBuild(struct FPlacementData* OutPlacementData, int32_t CurrentAllowedReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.BPIsAllowedToBuild");
		
		AStructure_DinoLeash_C_BPIsAllowedToBuild_Params params {};
		params.CurrentAllowedReason = CurrentAllowedReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPlacementData != nullptr)
			*OutPlacementData = params.OutPlacementData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.BPPlacedStructure
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_DinoLeash_C::BPPlacedStructure(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.BPPlacedStructure");
		
		AStructure_DinoLeash_C_BPPlacedStructure_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.Activate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Activated                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_DinoLeash_C::Activate(bool Activated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.Activate");
		
		AStructure_DinoLeash_C_Activate_Params params {};
		params.Activated = Activated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.OnRep_Activated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_DinoLeash_C::OnRep_Activated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.OnRep_Activated");
		
		AStructure_DinoLeash_C_OnRep_Activated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AStructure_DinoLeash_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.BPTryMultiUse");
		
		AStructure_DinoLeash_C_BPTryMultiUse_Params params {};
		params.ForPC = ForPC;
		params.UseIndex = UseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AStructure_DinoLeash_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.BPGetMultiUseEntries");
		
		AStructure_DinoLeash_C_BPGetMultiUseEntries_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MultiUseEntries != nullptr)
			*MultiUseEntries = params.MultiUseEntries;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_DinoLeash_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.UserConstructionScript");
		
		AStructure_DinoLeash_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.AddTetherToDino
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_DinoLeash_C::AddTetherToDino(class APrimalDinoCharacter* Dino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.AddTetherToDino");
		
		AStructure_DinoLeash_C_AddTetherToDino_Params params {};
		params.Dino = Dino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.MovementTetherEvent__DelegateSignature_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      TetherObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_DinoLeash_C::MovementTetherEvent__DelegateSignature_Event(class APawn* Pawn, class AActor* TetherObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.MovementTetherEvent__DelegateSignature_Event");
		
		AStructure_DinoLeash_C_MovementTetherEvent__DelegateSignature_Event_Params params {};
		params.Pawn = Pawn;
		params.TetherObject = TetherObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.RemoveTetherFromDino
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_DinoLeash_C::RemoveTetherFromDino(class APrimalDinoCharacter* Dino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.RemoveTetherFromDino");
		
		AStructure_DinoLeash_C_RemoveTetherFromDino_Params params {};
		params.Dino = Dino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_174_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (Parm, OutParm, ReferenceParm)
	 */
	void AStructure_DinoLeash_C::BndEvt__Sphere1_K2Node_ComponentBoundEvent_174_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_174_ComponentBeginOverlapSignature__DelegateSignature");
		
		AStructure_DinoLeash_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_174_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SweepResult != nullptr)
			*SweepResult = params.SweepResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_177_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_DinoLeash_C::BndEvt__Sphere1_K2Node_ComponentBoundEvent_177_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_177_ComponentEndOverlapSignature__DelegateSignature");
		
		AStructure_DinoLeash_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_177_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_DinoLeash.Structure_DinoLeash_C.ExecuteUbergraph_Structure_DinoLeash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_DinoLeash_C::ExecuteUbergraph_Structure_DinoLeash(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.ExecuteUbergraph_Structure_DinoLeash");
		
		AStructure_DinoLeash_C_ExecuteUbergraph_Structure_DinoLeash_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStructure_DinoLeash_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStructure_DinoLeash_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Structure_DinoLeash.Structure_DinoLeash_C");
		return ptr;
	}

}


