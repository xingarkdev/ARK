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
	 * 		Name   -> Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPGetItemName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ItemNameIn                                                 (Parm, ZeroConstructor)
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString UPrimalItemSkin_ChibiDino_Base_C::BPGetItemName(const class FString& ItemNameIn, class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPGetItemName");
		
		UPrimalItemSkin_ChibiDino_Base_C_BPGetItemName_Params params {};
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
	 * 		Name   -> Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BlueprintEquipped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsFromSaveGame                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_ChibiDino_Base_C::BlueprintEquipped(bool bIsFromSaveGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BlueprintEquipped");
		
		UPrimalItemSkin_ChibiDino_Base_C_BlueprintEquipped_Params params {};
		params.bIsFromSaveGame = bIsFromSaveGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPSetupHUDIconMaterial
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    theMID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_ChibiDino_Base_C::BPSetupHUDIconMaterial(class UMaterialInstanceDynamic* theMID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPSetupHUDIconMaterial");
		
		UPrimalItemSkin_ChibiDino_Base_C_BPSetupHUDIconMaterial_Params params {};
		params.theMID = theMID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.Get XPRequired for PreviousLevel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              XPOut                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_ChibiDino_Base_C::GetXPRequiredforPreviousLevel(float* XPOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.Get XPRequired for PreviousLevel");
		
		UPrimalItemSkin_ChibiDino_Base_C_GetXPRequiredforPreviousLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (XPOut != nullptr)
			*XPOut = params.XPOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPGetCustomInventoryWidgetText
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FString UPrimalItemSkin_ChibiDino_Base_C::BPGetCustomInventoryWidgetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPGetCustomInventoryWidgetText");
		
		UPrimalItemSkin_ChibiDino_Base_C_BPGetCustomInventoryWidgetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.GetXPRequiredForNextLevel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              XPOut                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_ChibiDino_Base_C::GetXPRequiredForNextLevel(float* XPOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.GetXPRequiredForNextLevel");
		
		UPrimalItemSkin_ChibiDino_Base_C_GetXPRequiredForNextLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (XPOut != nullptr)
			*XPOut = params.XPOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPGetItemDurabilityPercentage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float UPrimalItemSkin_ChibiDino_Base_C::BPGetItemDurabilityPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPGetItemDurabilityPercentage");
		
		UPrimalItemSkin_ChibiDino_Base_C_BPGetItemDurabilityPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPClientHandleItemNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_ChibiDino_Base_C::BPClientHandleItemNetExecCommand(const class FName& CommandName, struct FBPNetExecParams* ExecParams, class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPClientHandleItemNetExecCommand");
		
		UPrimalItemSkin_ChibiDino_Base_C_BPClientHandleItemNetExecCommand_Params params {};
		params.CommandName = CommandName;
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExecParams != nullptr)
			*ExecParams = params.ExecParams;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.RefreshLevelData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forChar                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_ChibiDino_Base_C::RefreshLevelData(class APrimalCharacter* forChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.RefreshLevelData");
		
		UPrimalItemSkin_ChibiDino_Base_C_RefreshLevelData_Params params {};
		params.forChar = forChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.AddXP
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              XPAmount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            forChar                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_ChibiDino_Base_C::AddXP(float XPAmount, class APrimalCharacter* forChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.AddXP");
		
		UPrimalItemSkin_ChibiDino_Base_C_AddXP_Params params {};
		params.XPAmount = XPAmount;
		params.forChar = forChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPEquippedItemOnXPEarning
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forChar                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              howMuchXP                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EXPType                                            TheXPType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_ChibiDino_Base_C::BPEquippedItemOnXPEarning(class APrimalCharacter* forChar, float howMuchXP, EXPType TheXPType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPEquippedItemOnXPEarning");
		
		UPrimalItemSkin_ChibiDino_Base_C_BPEquippedItemOnXPEarning_Params params {};
		params.forChar = forChar;
		params.howMuchXP = howMuchXP;
		params.TheXPType = TheXPType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPInitFromItemNetInfo
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemSkin_ChibiDino_Base_C::BPInitFromItemNetInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPInitFromItemNetInfo");
		
		UPrimalItemSkin_ChibiDino_Base_C_BPInitFromItemNetInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPGetItemDescription
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InDescription                                              (Parm, ZeroConstructor)
	 * 		bool                                               bGetLongDescription                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString UPrimalItemSkin_ChibiDino_Base_C::BPGetItemDescription(const class FString& InDescription, bool bGetLongDescription, class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPGetItemDescription");
		
		UPrimalItemSkin_ChibiDino_Base_C_BPGetItemDescription_Params params {};
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
	 * 		Name   -> Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPAddedAttachments
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemSkin_ChibiDino_Base_C::BPAddedAttachments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPAddedAttachments");
		
		UPrimalItemSkin_ChibiDino_Base_C_BPAddedAttachments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_ChibiDino_Base_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Base");
		
		UPrimalItemSkin_ChibiDino_Base_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemSkin_ChibiDino_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemSkin_ChibiDino_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C");
		return ptr;
	}

}


