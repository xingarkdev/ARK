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
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnSyncColorization
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_Base_C::OnSyncColorization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnSyncColorization");
		
		ABuff_MekBackpack_Base_C_OnSyncColorization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifySetRider
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Rider                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Base_C::NotifySetRider(class AShooterCharacter* Rider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifySetRider");
		
		ABuff_MekBackpack_Base_C_NotifySetRider_Params params {};
		params.Rider = Rider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.RestoreBackpackSaveData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMekBackpackData                            SaveData                                                   (Parm)
	 */
	void ABuff_MekBackpack_Base_C::RestoreBackpackSaveData(const struct FMekBackpackData& SaveData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.RestoreBackpackSaveData");
		
		ABuff_MekBackpack_Base_C_RestoreBackpackSaveData_Params params {};
		params.SaveData = SaveData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.GetBackpackSaveData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMekBackpackData                            Data                                                       (Parm, OutParm)
	 */
	void ABuff_MekBackpack_Base_C::GetBackpackSaveData(struct FMekBackpackData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.GetBackpackSaveData");
		
		ABuff_MekBackpack_Base_C_GetBackpackSaveData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyInventoryChange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ItemAdded                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ItemEquipped                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Base_C::NotifyInventoryChange(class UPrimalItem* Item, bool ItemAdded, bool ItemEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyInventoryChange");
		
		ABuff_MekBackpack_Base_C_NotifyInventoryChange_Params params {};
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
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.BPActivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Base_C::BPActivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.BPActivated");
		
		ABuff_MekBackpack_Base_C_BPActivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.SetBackpackMalfunctioned
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsBackpackDisabled                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Base_C::SetBackpackMalfunctioned(bool IsBackpackDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.SetBackpackMalfunctioned");
		
		ABuff_MekBackpack_Base_C_SetBackpackMalfunctioned_Params params {};
		params.IsBackpackDisabled = IsBackpackDisabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyActivateBackpack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_Base_C::NotifyActivateBackpack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyActivateBackpack");
		
		ABuff_MekBackpack_Base_C_NotifyActivateBackpack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OverrideTurnInPlaceSpeed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DefaultSpeed                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewSpeed                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Base_C::OverrideTurnInPlaceSpeed(float DefaultSpeed, float* NewSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OverrideTurnInPlaceSpeed");
		
		ABuff_MekBackpack_Base_C_OverrideTurnInPlaceSpeed_Params params {};
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
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStopAttack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_Base_C::NotifyStopAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStopAttack");
		
		ABuff_MekBackpack_Base_C_NotifyStopAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStartAttack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Base_C::NotifyStartAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStartAttack");
		
		ABuff_MekBackpack_Base_C_NotifyStartAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowHurtAnim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Allow                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Base_C::AllowHurtAnim(bool* Allow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowHurtAnim");
		
		ABuff_MekBackpack_Base_C_AllowHurtAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allow != nullptr)
			*Allow = params.Allow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowTargeting
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Allow                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Base_C::AllowTargeting(bool* Allow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowTargeting");
		
		ABuff_MekBackpack_Base_C_AllowTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allow != nullptr)
			*Allow = params.Allow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStopHover
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_Base_C::NotifyStopHover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStopHover");
		
		ABuff_MekBackpack_Base_C_NotifyStopHover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStartHover
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_Base_C::NotifyStartHover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStartHover");
		
		ABuff_MekBackpack_Base_C_NotifyStartHover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowMekHover
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanHover                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Base_C::AllowMekHover(bool* CanHover)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowMekHover");
		
		ABuff_MekBackpack_Base_C_AllowMekHover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanHover != nullptr)
			*CanHover = params.CanHover;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStopTargeting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_Base_C::NotifyStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStopTargeting");
		
		ABuff_MekBackpack_Base_C_NotifyStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStartTargeting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_Base_C::NotifyStartTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStartTargeting");
		
		ABuff_MekBackpack_Base_C_NotifyStartTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnAnimNotifyEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        EventName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Base_C::OnAnimNotifyEvent(const class FName& EventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnAnimNotifyEvent");
		
		ABuff_MekBackpack_Base_C_OnAnimNotifyEvent_Params params {};
		params.EventName = EventName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowMekPistol
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Allowed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Base_C::AllowMekPistol(bool* Allowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowMekPistol");
		
		ABuff_MekBackpack_Base_C_AllowMekPistol_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allowed != nullptr)
			*Allowed = params.Allowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowMekSword
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Allowed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Base_C::AllowMekSword(bool* Allowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowMekSword");
		
		ABuff_MekBackpack_Base_C_AllowMekSword_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allowed != nullptr)
			*Allowed = params.Allowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnBackpackAttack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_Base_C::OnBackpackAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnBackpackAttack");
		
		ABuff_MekBackpack_Base_C_OnBackpackAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Base_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.BPDeactivated");
		
		ABuff_MekBackpack_Base_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.GetMek
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AMek_Character_BP_C*                         MekChar                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Base_C::GetMek(bool* IsValid, class AMek_Character_BP_C** MekChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.GetMek");
		
		ABuff_MekBackpack_Base_C_GetMek_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (MekChar != nullptr)
			*MekChar = params.MekChar;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.IsBackpackActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Base_C::IsBackpackActive(bool* IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.IsBackpackActive");
		
		ABuff_MekBackpack_Base_C_IsBackpackActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsActive != nullptr)
			*IsActive = params.IsActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.CanDeactivateBackpack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanDeactivate                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Base_C::CanDeactivateBackpack(bool* CanDeactivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.CanDeactivateBackpack");
		
		ABuff_MekBackpack_Base_C_CanDeactivateBackpack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanDeactivate != nullptr)
			*CanDeactivate = params.CanDeactivate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.CanActivateBackpack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanActivate                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      FailureMessage                                             (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_MekBackpack_Base_C::CanActivateBackpack(bool* CanActivate, class FString* FailureMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.CanActivateBackpack");
		
		ABuff_MekBackpack_Base_C_CanActivateBackpack_Params params {};
		
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
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnBackpackDeactivated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_Base_C::OnBackpackDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnBackpackDeactivated");
		
		ABuff_MekBackpack_Base_C_OnBackpackDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnBackpackActivated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_Base_C::OnBackpackActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnBackpackActivated");
		
		ABuff_MekBackpack_Base_C_OnBackpackActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.UserConstructionScript");
		
		ABuff_MekBackpack_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.ExecuteUbergraph_Buff_MekBackpack_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Base_C::ExecuteUbergraph_Buff_MekBackpack_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.ExecuteUbergraph_Buff_MekBackpack_Base");
		
		ABuff_MekBackpack_Base_C_ExecuteUbergraph_Buff_MekBackpack_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_MekBackpack_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_MekBackpack_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_MekBackpack_Base.Buff_MekBackpack_Base_C");
		return ptr;
	}

}


