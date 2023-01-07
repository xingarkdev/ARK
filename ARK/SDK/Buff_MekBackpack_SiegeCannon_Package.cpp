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
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPAdjustImpulseFromDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     DesiredImpulse                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DamageTaken                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class APawn*                                       PawnInstigator                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	struct FVector ABuff_MekBackpack_SiegeCannon_C::BPAdjustImpulseFromDamage(const struct FVector& DesiredImpulse, float DamageTaken, const struct FDamageEvent& TheDamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPAdjustImpulseFromDamage");
		
		ABuff_MekBackpack_SiegeCannon_C_BPAdjustImpulseFromDamage_Params params {};
		params.DesiredImpulse = DesiredImpulse;
		params.DamageTaken = DamageTaken;
		params.TheDamageEvent = TheDamageEvent;
		params.PawnInstigator = PawnInstigator;
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
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BuffTickServer
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BuffTickServer");
		
		ABuff_MekBackpack_SiegeCannon_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPPreventInstigatorMovementMode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_MekBackpack_SiegeCannon_C::BPPreventInstigatorMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPPreventInstigatorMovementMode");
		
		ABuff_MekBackpack_SiegeCannon_C_BPPreventInstigatorMovementMode_Params params {};
		params.NewMovementMode = NewMovementMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BuffAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitInfo                                                    (Parm, OutParm, ReferenceParm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      TheDamgeType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABuff_MekBackpack_SiegeCannon_C::BuffAdjustDamage(float Damage, struct FHitResult* HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* TheDamgeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BuffAdjustDamage");
		
		ABuff_MekBackpack_SiegeCannon_C_BuffAdjustDamage_Params params {};
		params.Damage = Damage;
		params.EventInstigator = EventInstigator;
		params.DamageCauser = DamageCauser;
		params.TheDamgeType = TheDamgeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitInfo != nullptr)
			*HitInfo = params.HitInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.NotifySetRider
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Rider                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::NotifySetRider(class AShooterCharacter* Rider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.NotifySetRider");
		
		ABuff_MekBackpack_SiegeCannon_C_NotifySetRider_Params params {};
		params.Rider = Rider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.GetFireAnim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     FireDirection                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     MekForwardDirection                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimMontage*                                ResultAnim                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::GetFireAnim(const struct FVector& FireDirection, const struct FVector& MekForwardDirection, class UAnimMontage** ResultAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.GetFireAnim");
		
		ABuff_MekBackpack_SiegeCannon_C_GetFireAnim_Params params {};
		params.FireDirection = FireDirection;
		params.MekForwardDirection = MekForwardDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultAnim != nullptr)
			*ResultAnim = params.ResultAnim;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPInstigatorPossessed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 ByController                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::BPInstigatorPossessed(class AController* ByController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPInstigatorPossessed");
		
		ABuff_MekBackpack_SiegeCannon_C_BPInstigatorPossessed_Params params {};
		params.ByController = ByController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.GetBackpackSaveData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMekBackpackData                            Data                                                       (Parm, OutParm)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::GetBackpackSaveData(struct FMekBackpackData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.GetBackpackSaveData");
		
		ABuff_MekBackpack_SiegeCannon_C_GetBackpackSaveData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.RestoreBackpackSaveData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMekBackpackData                            SaveData                                                   (Parm)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::RestoreBackpackSaveData(const struct FMekBackpackData& SaveData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.RestoreBackpackSaveData");
		
		ABuff_MekBackpack_SiegeCannon_C_RestoreBackpackSaveData_Params params {};
		params.SaveData = SaveData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnRep_PreventSword
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::OnRep_PreventSword()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnRep_PreventSword");
		
		ABuff_MekBackpack_SiegeCannon_C_OnRep_PreventSword_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.NotifyInventoryChange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ItemAdded                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ItemEquipped                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::NotifyInventoryChange(class UPrimalItem* Item, bool ItemAdded, bool ItemEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.NotifyInventoryChange");
		
		ABuff_MekBackpack_SiegeCannon_C_NotifyInventoryChange_Params params {};
		params.Item = Item;
		params.ItemAdded = ItemAdded;
		params.ItemEquipped = ItemEquipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPActivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::BPActivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPActivated");
		
		ABuff_MekBackpack_SiegeCannon_C_BPActivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnRep_SiegeCannonMalfunctioned
	 * 		Flags  -> (HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::OnRep_SiegeCannonMalfunctioned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnRep_SiegeCannonMalfunctioned");
		
		ABuff_MekBackpack_SiegeCannon_C_OnRep_SiegeCannonMalfunctioned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.SubtractAmmo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::SubtractAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.SubtractAmmo");
		
		ABuff_MekBackpack_SiegeCannon_C_SubtractAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.GetCurrentAmmo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AmmoAmount                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::GetCurrentAmmo(int32_t* AmmoAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.GetCurrentAmmo");
		
		ABuff_MekBackpack_SiegeCannon_C_GetCurrentAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoAmount != nullptr)
			*AmmoAmount = params.AmmoAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPGetHUDElements");
		
		ABuff_MekBackpack_SiegeCannon_C_BPGetHUDElements_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutElements != nullptr)
			*OutElements = params.OutElements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OverrideTurnInPlaceSpeed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DefaultSpeed                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewSpeed                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::OverrideTurnInPlaceSpeed(float DefaultSpeed, float* NewSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OverrideTurnInPlaceSpeed");
		
		ABuff_MekBackpack_SiegeCannon_C_OverrideTurnInPlaceSpeed_Params params {};
		params.DefaultSpeed = DefaultSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewSpeed != nullptr)
			*NewSpeed = params.NewSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowHurtAnim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Allow                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::AllowHurtAnim(bool* Allow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowHurtAnim");
		
		ABuff_MekBackpack_SiegeCannon_C_AllowHurtAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allow != nullptr)
			*Allow = params.Allow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.PreventJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_MekBackpack_SiegeCannon_C::PreventJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.PreventJump");
		
		ABuff_MekBackpack_SiegeCannon_C_PreventJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowTargeting
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Allow                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::AllowTargeting(bool* Allow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowTargeting");
		
		ABuff_MekBackpack_SiegeCannon_C_AllowTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allow != nullptr)
			*Allow = params.Allow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPPreventFirstPerson
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_MekBackpack_SiegeCannon_C::BPPreventFirstPerson()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPPreventFirstPerson");
		
		ABuff_MekBackpack_SiegeCannon_C_BPPreventFirstPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowMekHover
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanHover                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::AllowMekHover(bool* CanHover)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowMekHover");
		
		ABuff_MekBackpack_SiegeCannon_C_AllowMekHover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanHover != nullptr)
			*CanHover = params.CanHover;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowMekSword
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Allowed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::AllowMekSword(bool* Allowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowMekSword");
		
		ABuff_MekBackpack_SiegeCannon_C_AllowMekSword_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allowed != nullptr)
			*Allowed = params.Allowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowMekPistol
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Allowed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::AllowMekPistol(bool* Allowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowMekPistol");
		
		ABuff_MekBackpack_SiegeCannon_C_AllowMekPistol_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allowed != nullptr)
			*Allowed = params.Allowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.GetLaunchParams
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AMek_Character_BP_C*                         Mek                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Direction                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Speed                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::GetLaunchParams(class AMek_Character_BP_C* Mek, struct FVector* Location, struct FVector* Direction, float* Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.GetLaunchParams");
		
		ABuff_MekBackpack_SiegeCannon_C_GetLaunchParams_Params params {};
		params.Mek = Mek;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		if (Direction != nullptr)
			*Direction = params.Direction;
		if (Speed != nullptr)
			*Speed = params.Speed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BuffTickClient
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BuffTickClient");
		
		ABuff_MekBackpack_SiegeCannon_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnRep_InSiegeMode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::OnRep_InSiegeMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnRep_InSiegeMode");
		
		ABuff_MekBackpack_SiegeCannon_C_OnRep_InSiegeMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.CanDeactivateBackpack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanDeactivate                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::CanDeactivateBackpack(bool* CanDeactivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.CanDeactivateBackpack");
		
		ABuff_MekBackpack_SiegeCannon_C_CanDeactivateBackpack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanDeactivate != nullptr)
			*CanDeactivate = params.CanDeactivate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.CanActivateBackpack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanActivate                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      FailureMessage                                             (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::CanActivateBackpack(bool* CanActivate, class FString* FailureMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.CanActivateBackpack");
		
		ABuff_MekBackpack_SiegeCannon_C_CanActivateBackpack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanActivate != nullptr)
			*CanActivate = params.CanActivate;
		if (FailureMessage != nullptr)
			*FailureMessage = params.FailureMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.IsBackpackActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::IsBackpackActive(bool* IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.IsBackpackActive");
		
		ABuff_MekBackpack_SiegeCannon_C_IsBackpackActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsActive != nullptr)
			*IsActive = params.IsActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.UserConstructionScript");
		
		ABuff_MekBackpack_SiegeCannon_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnBackpackActivated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::OnBackpackActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnBackpackActivated");
		
		ABuff_MekBackpack_SiegeCannon_C_OnBackpackActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnBackpackDeactivated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::OnBackpackDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnBackpackDeactivated");
		
		ABuff_MekBackpack_SiegeCannon_C_OnBackpackDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiSiegeModeStateChanged
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::MultiSiegeModeStateChanged(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiSiegeModeStateChanged");
		
		ABuff_MekBackpack_SiegeCannon_C_MultiSiegeModeStateChanged_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnAnimNotifyEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        EventName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::OnAnimNotifyEvent(const class FName& EventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnAnimNotifyEvent");
		
		ABuff_MekBackpack_SiegeCannon_C_OnAnimNotifyEvent_Params params {};
		params.EventName = EventName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.ServerUpdateFireOrientation
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     FireLoc                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     FireDir                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::ServerUpdateFireOrientation(const struct FVector& FireLoc, const struct FVector& FireDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.ServerUpdateFireOrientation");
		
		ABuff_MekBackpack_SiegeCannon_C_ServerUpdateFireOrientation_Params params {};
		params.FireLoc = FireLoc;
		params.FireDir = FireDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.NotifyStopAttack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::NotifyStopAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.NotifyStopAttack");
		
		ABuff_MekBackpack_SiegeCannon_C_NotifyStopAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.ServerRequestStartChargingAttack
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::ServerRequestStartChargingAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.ServerRequestStartChargingAttack");
		
		ABuff_MekBackpack_SiegeCannon_C_ServerRequestStartChargingAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.DoAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::DoAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.DoAttack");
		
		ABuff_MekBackpack_SiegeCannon_C_DoAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.ServerRequestStopChargingAttack
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::ServerRequestStopChargingAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.ServerRequestStopChargingAttack");
		
		ABuff_MekBackpack_SiegeCannon_C_ServerRequestStopChargingAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiAttackComplete
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::MultiAttackComplete(bool Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiAttackComplete");
		
		ABuff_MekBackpack_SiegeCannon_C_MultiAttackComplete_Params params {};
		params.Success = Success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiStartChargingAttack
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::MultiStartChargingAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiStartChargingAttack");
		
		ABuff_MekBackpack_SiegeCannon_C_MultiStartChargingAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiStopChargingAttack
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::MultiStopChargingAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiStopChargingAttack");
		
		ABuff_MekBackpack_SiegeCannon_C_MultiStopChargingAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.NotifyStartAttack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::NotifyStartAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.NotifyStartAttack");
		
		ABuff_MekBackpack_SiegeCannon_C_NotifyStartAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.SetBackpackMalfunctioned
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsBackpackDisabled                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::SetBackpackMalfunctioned(bool IsBackpackDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.SetBackpackMalfunctioned");
		
		ABuff_MekBackpack_SiegeCannon_C_SetBackpackMalfunctioned_Params params {};
		params.IsBackpackDisabled = IsBackpackDisabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiUpdateAmmoQuantity
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Quantity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::MultiUpdateAmmoQuantity(int32_t Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiUpdateAmmoQuantity");
		
		ABuff_MekBackpack_SiegeCannon_C_MultiUpdateAmmoQuantity_Params params {};
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.SyncClientAmmo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::SyncClientAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.SyncClientAmmo");
		
		ABuff_MekBackpack_SiegeCannon_C_SyncClientAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.ExecuteUbergraph_Buff_MekBackpack_SiegeCannon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_SiegeCannon_C::ExecuteUbergraph_Buff_MekBackpack_SiegeCannon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.ExecuteUbergraph_Buff_MekBackpack_SiegeCannon");
		
		ABuff_MekBackpack_SiegeCannon_C_ExecuteUbergraph_Buff_MekBackpack_SiegeCannon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_MekBackpack_SiegeCannon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_MekBackpack_SiegeCannon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C");
		return ptr;
	}

}


