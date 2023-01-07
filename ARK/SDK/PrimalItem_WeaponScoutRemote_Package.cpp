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
	 * 		Name   -> Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.GetScoutStats
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<float>                                      Stats                                                      (Parm, OutParm, ZeroConstructor)
	 */
	void UPrimalItem_WeaponScoutRemote_C::GetScoutStats(TArray<float>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.GetScoutStats");
		
		UPrimalItem_WeaponScoutRemote_C_GetScoutStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Stats != nullptr)
			*Stats = params.Stats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BPGetItemIcon
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UTexture2D* UPrimalItem_WeaponScoutRemote_C::BPGetItemIcon(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BPGetItemIcon");
		
		UPrimalItem_WeaponScoutRemote_C_BPGetItemIcon_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BPGetItemName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ItemNameIn                                                 (Parm, ZeroConstructor)
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString UPrimalItem_WeaponScoutRemote_C::BPGetItemName(const class FString& ItemNameIn, class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BPGetItemName");
		
		UPrimalItem_WeaponScoutRemote_C_BPGetItemName_Params params {};
		params.ItemNameIn = ItemNameIn;
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.SetScoutCharacterStatusValues
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<float>                                      Stats                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UPrimalItem_WeaponScoutRemote_C::SetScoutCharacterStatusValues(TArray<float>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.SetScoutCharacterStatusValues");
		
		UPrimalItem_WeaponScoutRemote_C_SetScoutCharacterStatusValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Stats != nullptr)
			*Stats = params.Stats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.OnRep_ScoutStats
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItem_WeaponScoutRemote_C::OnRep_ScoutStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.OnRep_ScoutStats");
		
		UPrimalItem_WeaponScoutRemote_C_OnRep_ScoutStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BPGetItemDescription
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InDescription                                              (Parm, ZeroConstructor)
	 * 		bool                                               bGetLongDescription                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString UPrimalItem_WeaponScoutRemote_C::BPGetItemDescription(const class FString& InDescription, bool bGetLongDescription, class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BPGetItemDescription");
		
		UPrimalItem_WeaponScoutRemote_C_BPGetItemDescription_Params params {};
		params.InDescription = InDescription;
		params.bGetLongDescription = bGetLongDescription;
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.ScoutPossessedBySurvivor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItem_WeaponScoutRemote_C::ScoutPossessedBySurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.ScoutPossessedBySurvivor");
		
		UPrimalItem_WeaponScoutRemote_C_ScoutPossessedBySurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.ScoutReleasedPossessingSurvivor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItem_WeaponScoutRemote_C::ScoutReleasedPossessingSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.ScoutReleasedPossessingSurvivor");
		
		UPrimalItem_WeaponScoutRemote_C_ScoutReleasedPossessingSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BlueprintUnequipped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItem_WeaponScoutRemote_C::BlueprintUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BlueprintUnequipped");
		
		UPrimalItem_WeaponScoutRemote_C_BlueprintUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.Can FireWeapon
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EScoutRemoteReturnCode                             FailReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_WeaponScoutRemote_C::CanFireWeapon(bool* Result, EScoutRemoteReturnCode* FailReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.Can FireWeapon");
		
		UPrimalItem_WeaponScoutRemote_C_CanFireWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (FailReason != nullptr)
			*FailReason = params.FailReason;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BlueprintEquipped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsFromSaveGame                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_WeaponScoutRemote_C::BlueprintEquipped(bool bIsFromSaveGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.BlueprintEquipped");
		
		UPrimalItem_WeaponScoutRemote_C_BlueprintEquipped_Params params {};
		params.bIsFromSaveGame = bIsFromSaveGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.ExecuteUbergraph_PrimalItem_WeaponScoutRemote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_WeaponScoutRemote_C::ExecuteUbergraph_PrimalItem_WeaponScoutRemote(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C.ExecuteUbergraph_PrimalItem_WeaponScoutRemote");
		
		UPrimalItem_WeaponScoutRemote_C_ExecuteUbergraph_PrimalItem_WeaponScoutRemote_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItem_WeaponScoutRemote_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItem_WeaponScoutRemote_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C");
		return ptr;
	}

}


