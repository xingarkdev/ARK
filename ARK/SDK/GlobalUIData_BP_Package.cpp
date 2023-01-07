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
	 * 		Name   -> Function GlobalUIData_BP.GlobalUIData_BP_C.BPGetHUDElements_Module_FuelOrAmmo_ExtraBar
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SlotOffset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SlotSpan                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            StateIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      ExtendedInfoText                                           (Parm, ZeroConstructor)
	 * 		struct FHUDElement                                 OutHUDElement                                              (Parm, OutParm)
	 */
	void UGlobalUIData_BP_C::BPGetHUDElements_Module_FuelOrAmmo_ExtraBar(int32_t SlotOffset, int32_t SlotSpan, int32_t StateIndex, float Progress, const class FString& ExtendedInfoText, struct FHUDElement* OutHUDElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalUIData_BP.GlobalUIData_BP_C.BPGetHUDElements_Module_FuelOrAmmo_ExtraBar");
		
		UGlobalUIData_BP_C_BPGetHUDElements_Module_FuelOrAmmo_ExtraBar_Params params {};
		params.SlotOffset = SlotOffset;
		params.SlotSpan = SlotSpan;
		params.StateIndex = StateIndex;
		params.Progress = Progress;
		params.ExtendedInfoText = ExtendedInfoText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHUDElement != nullptr)
			*OutHUDElement = params.OutHUDElement;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function GlobalUIData_BP.GlobalUIData_BP_C.BPGetHUDElements_Module_FuelOrAmmo
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            StateIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      MainText                                                   (Parm, ZeroConstructor)
	 * 		class FString                                      ExtendedInfoText                                           (Parm, ZeroConstructor)
	 * 		class UTexture2D*                                  Icon                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHUDElement                                 OutHUDElement                                              (Parm, OutParm)
	 */
	void UGlobalUIData_BP_C::BPGetHUDElements_Module_FuelOrAmmo(int32_t SlotIndex, int32_t StateIndex, float Progress, const class FString& MainText, const class FString& ExtendedInfoText, class UTexture2D* Icon, struct FHUDElement* OutHUDElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalUIData_BP.GlobalUIData_BP_C.BPGetHUDElements_Module_FuelOrAmmo");
		
		UGlobalUIData_BP_C_BPGetHUDElements_Module_FuelOrAmmo_Params params {};
		params.SlotIndex = SlotIndex;
		params.StateIndex = StateIndex;
		params.Progress = Progress;
		params.MainText = MainText;
		params.ExtendedInfoText = ExtendedInfoText;
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHUDElement != nullptr)
			*OutHUDElement = params.OutHUDElement;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function GlobalUIData_BP.GlobalUIData_BP_C.BPGetHUDElements_Module_Struggle
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              StruggleProgressPercent                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      RichTextOverride                                           (Parm, ZeroConstructor)
	 * 		class AActor*                                      Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         Elements                                                   (Parm, OutParm, ZeroConstructor)
	 * 		struct FHUDRichTextOverlayData                     OutHUDRichTextOverlay                                      (Parm, OutParm)
	 */
	void UGlobalUIData_BP_C::BPGetHUDElements_Module_Struggle(class APlayerController* ForPC, float StruggleProgressPercent, const class FString& RichTextOverride, class AActor* Instigator, TArray<struct FHUDElement>* Elements, struct FHUDRichTextOverlayData* OutHUDRichTextOverlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalUIData_BP.GlobalUIData_BP_C.BPGetHUDElements_Module_Struggle");
		
		UGlobalUIData_BP_C_BPGetHUDElements_Module_Struggle_Params params {};
		params.ForPC = ForPC;
		params.StruggleProgressPercent = StruggleProgressPercent;
		params.RichTextOverride = RichTextOverride;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Elements != nullptr)
			*Elements = params.Elements;
		if (OutHUDRichTextOverlay != nullptr)
			*OutHUDRichTextOverlay = params.OutHUDRichTextOverlay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function GlobalUIData_BP.GlobalUIData_BP_C.ExecuteUbergraph_GlobalUIData_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGlobalUIData_BP_C::ExecuteUbergraph_GlobalUIData_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalUIData_BP.GlobalUIData_BP_C.ExecuteUbergraph_GlobalUIData_BP");
		
		UGlobalUIData_BP_C_ExecuteUbergraph_GlobalUIData_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlobalUIData_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalUIData_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GlobalUIData_BP.GlobalUIData_BP_C");
		return ptr;
	}

}


