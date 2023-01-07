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
	 * 		Name   -> Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.GetBackpackSaveData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMekBackpackData                            Data                                                       (Parm, OutParm)
	 */
	void ABuff_MekBackpack_MissilePod_C::GetBackpackSaveData(struct FMekBackpackData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.GetBackpackSaveData");
		
		ABuff_MekBackpack_MissilePod_C_GetBackpackSaveData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.RestoreBackpackSaveData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMekBackpackData                            SaveData                                                   (Parm)
	 */
	void ABuff_MekBackpack_MissilePod_C::RestoreBackpackSaveData(const struct FMekBackpackData& SaveData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.RestoreBackpackSaveData");
		
		ABuff_MekBackpack_MissilePod_C_RestoreBackpackSaveData_Params params {};
		params.SaveData = SaveData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.NotifyInventoryChange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ItemAdded                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ItemEquipped                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_MissilePod_C::NotifyInventoryChange(class UPrimalItem* Item, bool ItemAdded, bool ItemEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.NotifyInventoryChange");
		
		ABuff_MekBackpack_MissilePod_C_NotifyInventoryChange_Params params {};
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
	 * 		Name   -> Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.GetHUDProgressBarPercent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ABuff_MekBackpack_MissilePod_C::GetHUDProgressBarPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.GetHUDProgressBarPercent");
		
		ABuff_MekBackpack_MissilePod_C_GetHUDProgressBarPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.BPActivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_MissilePod_C::BPActivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.BPActivated");
		
		ABuff_MekBackpack_MissilePod_C_BPActivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.OnRep_MissilePodMalfunctioned
	 * 		Flags  -> (HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_MissilePod_C::OnRep_MissilePodMalfunctioned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.OnRep_MissilePodMalfunctioned");
		
		ABuff_MekBackpack_MissilePod_C_OnRep_MissilePodMalfunctioned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.BPDrawBuffStatusHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              XPos                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              YPos                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ScaleMult                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_MissilePod_C::BPDrawBuffStatusHUD(class AShooterHUD* HUD, float XPos, float YPos, float ScaleMult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.BPDrawBuffStatusHUD");
		
		ABuff_MekBackpack_MissilePod_C_BPDrawBuffStatusHUD_Params params {};
		params.HUD = HUD;
		params.XPos = XPos;
		params.YPos = YPos;
		params.ScaleMult = ScaleMult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.TryUseAmmo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_MissilePod_C::TryUseAmmo(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.TryUseAmmo");
		
		ABuff_MekBackpack_MissilePod_C_TryUseAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.GetCurrentAmmo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AmmoQuantity                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_MissilePod_C::GetCurrentAmmo(int32_t* AmmoQuantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.GetCurrentAmmo");
		
		ABuff_MekBackpack_MissilePod_C_GetCurrentAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoQuantity != nullptr)
			*AmmoQuantity = params.AmmoQuantity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.GetFireDirection
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_MissilePod_C::GetFireDirection(struct FVector* Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.GetFireDirection");
		
		ABuff_MekBackpack_MissilePod_C_GetFireDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Direction != nullptr)
			*Direction = params.Direction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.AllowMekHover
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanHover                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_MissilePod_C::AllowMekHover(bool* CanHover)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.AllowMekHover");
		
		ABuff_MekBackpack_MissilePod_C_AllowMekHover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanHover != nullptr)
			*CanHover = params.CanHover;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_MissilePod_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.BuffTickClient");
		
		ABuff_MekBackpack_MissilePod_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.IsBackpackActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_MissilePod_C::IsBackpackActive(bool* IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.IsBackpackActive");
		
		ABuff_MekBackpack_MissilePod_C_IsBackpackActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsActive != nullptr)
			*IsActive = params.IsActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_MissilePod_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.UserConstructionScript");
		
		ABuff_MekBackpack_MissilePod_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.NotifyStartTargeting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_MissilePod_C::NotifyStartTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.NotifyStartTargeting");
		
		ABuff_MekBackpack_MissilePod_C_NotifyStartTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.NotifyStopTargeting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_MissilePod_C::NotifyStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.NotifyStopTargeting");
		
		ABuff_MekBackpack_MissilePod_C_NotifyStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.ServerRequestAttack
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_MissilePod_C::ServerRequestAttack(const struct FVector& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.ServerRequestAttack");
		
		ABuff_MekBackpack_MissilePod_C_ServerRequestAttack_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.NotifyActivateBackpack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_MissilePod_C::NotifyActivateBackpack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.NotifyActivateBackpack");
		
		ABuff_MekBackpack_MissilePod_C_NotifyActivateBackpack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.OnAnimNotifyEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        EventName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_MissilePod_C::OnAnimNotifyEvent(const class FName& EventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.OnAnimNotifyEvent");
		
		ABuff_MekBackpack_MissilePod_C_OnAnimNotifyEvent_Params params {};
		params.EventName = EventName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.SetBackpackMalfunctioned
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsBackpackDisabled                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_MissilePod_C::SetBackpackMalfunctioned(bool IsBackpackDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.SetBackpackMalfunctioned");
		
		ABuff_MekBackpack_MissilePod_C_SetBackpackMalfunctioned_Params params {};
		params.IsBackpackDisabled = IsBackpackDisabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.MultiUpdateAmmoQuantity
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Quantity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_MissilePod_C::MultiUpdateAmmoQuantity(int32_t Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.MultiUpdateAmmoQuantity");
		
		ABuff_MekBackpack_MissilePod_C_MultiUpdateAmmoQuantity_Params params {};
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.SyncClientAmmo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_MissilePod_C::SyncClientAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.SyncClientAmmo");
		
		ABuff_MekBackpack_MissilePod_C_SyncClientAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.ExecuteUbergraph_Buff_MekBackpack_MissilePod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_MissilePod_C::ExecuteUbergraph_Buff_MekBackpack_MissilePod(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.ExecuteUbergraph_Buff_MekBackpack_MissilePod");
		
		ABuff_MekBackpack_MissilePod_C_ExecuteUbergraph_Buff_MekBackpack_MissilePod_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_MekBackpack_MissilePod_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_MekBackpack_MissilePod_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C");
		return ptr;
	}

}


