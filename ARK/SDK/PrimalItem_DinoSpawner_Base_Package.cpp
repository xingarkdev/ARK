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
	 * 		Name   -> Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BPGetCustomInventoryWidgetTextColor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FColor UPrimalItem_DinoSpawner_Base_C::BPGetCustomInventoryWidgetTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BPGetCustomInventoryWidgetTextColor");
		
		UPrimalItem_DinoSpawner_Base_C_BPGetCustomInventoryWidgetTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BPGetCustomInventoryWidgetText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class FString UPrimalItem_DinoSpawner_Base_C::BPGetCustomInventoryWidgetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BPGetCustomInventoryWidgetText");
		
		UPrimalItem_DinoSpawner_Base_C_BPGetCustomInventoryWidgetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.DoesClientHaveStatData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasData                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_DinoSpawner_Base_C::DoesClientHaveStatData(bool* HasData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.DoesClientHaveStatData");
		
		UPrimalItem_DinoSpawner_Base_C_DoesClientHaveStatData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasData != nullptr)
			*HasData = params.HasData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BPCanUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIgnoreCooldown                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UPrimalItem_DinoSpawner_Base_C::BPCanUse(bool bIgnoreCooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BPCanUse");
		
		UPrimalItem_DinoSpawner_Base_C_BPCanUse_Params params {};
		params.bIgnoreCooldown = bIgnoreCooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.GetDinoColorizationData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasAnyColorData                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<unsigned char>                              ColorData                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void UPrimalItem_DinoSpawner_Base_C::GetDinoColorizationData(bool* HasAnyColorData, TArray<unsigned char>* ColorData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.GetDinoColorizationData");
		
		UPrimalItem_DinoSpawner_Base_C_GetDinoColorizationData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasAnyColorData != nullptr)
			*HasAnyColorData = params.HasAnyColorData;
		if (ColorData != nullptr)
			*ColorData = params.ColorData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.PreDinoSpawned
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItem_DinoSpawner_Base_C::PreDinoSpawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.PreDinoSpawned");
		
		UPrimalItem_DinoSpawner_Base_C_PreDinoSpawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.CopyDinoStatsFromDino
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalCharacterStatusComponent*             StatusComp                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<int32_t>                                    StatOffsets                                                (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<unsigned char>                              Colorization                                               (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UPrimalItem_DinoSpawner_Base_C::CopyDinoStatsFromDino(class UPrimalCharacterStatusComponent* StatusComp, TArray<int32_t>* StatOffsets, TArray<unsigned char>* Colorization)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.CopyDinoStatsFromDino");
		
		UPrimalItem_DinoSpawner_Base_C_CopyDinoStatsFromDino_Params params {};
		params.StatusComp = StatusComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatOffsets != nullptr)
			*StatOffsets = params.StatOffsets;
		if (Colorization != nullptr)
			*Colorization = params.Colorization;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.GetStatDisplayString
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterStatusValue                        Stat                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            StatConvertMapIndex                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      StatDisplay                                                (Parm, OutParm, ZeroConstructor)
	 * 		class FString                                      ValueDisplay                                               (Parm, OutParm, ZeroConstructor)
	 * 		bool                                               ShowInTooltip                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_DinoSpawner_Base_C::GetStatDisplayString(EPrimalCharacterStatusValue Stat, int32_t Value, int32_t StatConvertMapIndex, class FString* StatDisplay, class FString* ValueDisplay, bool* ShowInTooltip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.GetStatDisplayString");
		
		UPrimalItem_DinoSpawner_Base_C_GetStatDisplayString_Params params {};
		params.Stat = Stat;
		params.Value = Value;
		params.StatConvertMapIndex = StatConvertMapIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatDisplay != nullptr)
			*StatDisplay = params.StatDisplay;
		if (ValueDisplay != nullptr)
			*ValueDisplay = params.ValueDisplay;
		if (ShowInTooltip != nullptr)
			*ShowInTooltip = params.ShowInTooltip;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.GetDinoStat
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterStatusValue                        statType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumDinoLevels                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            StatMapIndexUsed                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_DinoSpawner_Base_C::GetDinoStat(EPrimalCharacterStatusValue statType, int32_t* NumDinoLevels, int32_t* StatMapIndexUsed, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.GetDinoStat");
		
		UPrimalItem_DinoSpawner_Base_C_GetDinoStat_Params params {};
		params.statType = statType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumDinoLevels != nullptr)
			*NumDinoLevels = params.NumDinoLevels;
		if (StatMapIndexUsed != nullptr)
			*StatMapIndexUsed = params.StatMapIndexUsed;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BPGetItemDescription
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InDescription                                              (Parm, ZeroConstructor)
	 * 		bool                                               bGetLongDescription                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString UPrimalItem_DinoSpawner_Base_C::BPGetItemDescription(const class FString& InDescription, bool bGetLongDescription, class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BPGetItemDescription");
		
		UPrimalItem_DinoSpawner_Base_C_BPGetItemDescription_Params params {};
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
	 * 		Name   -> Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.OnDinoSpawned
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        NewDino                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_DinoSpawner_Base_C::OnDinoSpawned(class APrimalDinoCharacter* NewDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.OnDinoSpawned");
		
		UPrimalItem_DinoSpawner_Base_C_OnDinoSpawned_Params params {};
		params.NewDino = NewDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BlueprintUsed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItem_DinoSpawner_Base_C::BlueprintUsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BlueprintUsed");
		
		UPrimalItem_DinoSpawner_Base_C_BlueprintUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.ExecuteUbergraph_PrimalItem_DinoSpawner_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_DinoSpawner_Base_C::ExecuteUbergraph_PrimalItem_DinoSpawner_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.ExecuteUbergraph_PrimalItem_DinoSpawner_Base");
		
		UPrimalItem_DinoSpawner_Base_C_ExecuteUbergraph_PrimalItem_DinoSpawner_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItem_DinoSpawner_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItem_DinoSpawner_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C");
		return ptr;
	}

}


