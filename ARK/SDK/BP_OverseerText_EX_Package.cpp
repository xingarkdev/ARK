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
	 * 		Name   -> Function BP_OverseerText_EX.BP_OverseerText_EX_C.ConstructionProcess
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OverseerText_EX_C::ConstructionProcess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.ConstructionProcess");
		
		ABP_OverseerText_EX_C_ConstructionProcess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BP_OverseerText_EX.BP_OverseerText_EX_C.InitializeGlyphs
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              FormattedText                                              (Parm, OutParm, ZeroConstructor)
	 */
	void ABP_OverseerText_EX_C::InitializeGlyphs(TArray<class FString>* FormattedText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.InitializeGlyphs");
		
		ABP_OverseerText_EX_C_InitializeGlyphs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FormattedText != nullptr)
			*FormattedText = params.FormattedText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BP_OverseerText_EX.BP_OverseerText_EX_C.SplitEveryOtherLine
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Line                                                       (Parm, ZeroConstructor)
	 * 		class FString                                      StartingText                                               (Parm, OutParm, ZeroConstructor)
	 * 		class FString                                      OffsetText                                                 (Parm, OutParm, ZeroConstructor)
	 */
	void ABP_OverseerText_EX_C::SplitEveryOtherLine(const class FString& Line, class FString* StartingText, class FString* OffsetText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.SplitEveryOtherLine");
		
		ABP_OverseerText_EX_C_SplitEveryOtherLine_Params params {};
		params.Line = Line;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StartingText != nullptr)
			*StartingText = params.StartingText;
		if (OffsetText != nullptr)
			*OffsetText = params.OffsetText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BP_OverseerText_EX.BP_OverseerText_EX_C.Convert To Base
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Num                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Base                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      converted                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void ABP_OverseerText_EX_C::ConvertToBase(int32_t Num, int32_t Base, class FString* converted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.Convert To Base");
		
		ABP_OverseerText_EX_C_ConvertToBase_Params params {};
		params.Num = Num;
		params.Base = Base;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (converted != nullptr)
			*converted = params.converted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BP_OverseerText_EX.BP_OverseerText_EX_C.FormatReadableText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              OriginalText                                               (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		int32_t                                            MaxCharPerLine                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FString>                              FormattedText                                              (Parm, OutParm, ZeroConstructor)
	 */
	void ABP_OverseerText_EX_C::FormatReadableText(TArray<class FString>* OriginalText, int32_t MaxCharPerLine, TArray<class FString>* FormattedText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.FormatReadableText");
		
		ABP_OverseerText_EX_C_FormatReadableText_Params params {};
		params.MaxCharPerLine = MaxCharPerLine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OriginalText != nullptr)
			*OriginalText = params.OriginalText;
		if (FormattedText != nullptr)
			*FormattedText = params.FormattedText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BP_OverseerText_EX.BP_OverseerText_EX_C.Setup
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              OriginalText                                               (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		int32_t                                            WordsPerRow                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OverseerText_EX_C::Setup(TArray<class FString>* OriginalText, int32_t WordsPerRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.Setup");
		
		ABP_OverseerText_EX_C_Setup_Params params {};
		params.WordsPerRow = WordsPerRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OriginalText != nullptr)
			*OriginalText = params.OriginalText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BP_OverseerText_EX.BP_OverseerText_EX_C.RenderOriginalText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              Text                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class UTextRenderComponent*                        TextRender                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            TranslationLevel                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OverseerText_EX_C::RenderOriginalText(TArray<class FString>* Text, class UTextRenderComponent* TextRender, const struct FLinearColor& Color, int32_t TranslationLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.RenderOriginalText");
		
		ABP_OverseerText_EX_C_RenderOriginalText_Params params {};
		params.TextRender = TextRender;
		params.Color = Color;
		params.TranslationLevel = TranslationLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BP_OverseerText_EX.BP_OverseerText_EX_C.RenderGlyph
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      GlyphRepresentation                                        (Parm, ZeroConstructor)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTextRenderComponent*                        TextRender                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               offsetLeft                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OverseerText_EX_C::RenderGlyph(const class FString& GlyphRepresentation, const struct FLinearColor& Color, class UTextRenderComponent* TextRender, bool offsetLeft, bool Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.RenderGlyph");
		
		ABP_OverseerText_EX_C_RenderGlyph_Params params {};
		params.GlyphRepresentation = GlyphRepresentation;
		params.Color = Color;
		params.TextRender = TextRender;
		params.offsetLeft = offsetLeft;
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BP_OverseerText_EX.BP_OverseerText_EX_C.Translation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor)
	 * 		class FString                                      GlyphTranslation                                           (Parm, OutParm, ZeroConstructor)
	 */
	void ABP_OverseerText_EX_C::Translation(const class FString& Text, class FString* GlyphTranslation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.Translation");
		
		ABP_OverseerText_EX_C_Translation_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GlyphTranslation != nullptr)
			*GlyphTranslation = params.GlyphTranslation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BP_OverseerText_EX.BP_OverseerText_EX_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OverseerText_EX_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.UserConstructionScript");
		
		ABP_OverseerText_EX_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BP_OverseerText_EX.BP_OverseerText_EX_C.DisplayTranslation__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_OverseerText_EX_C::DisplayTranslation__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.DisplayTranslation__FinishedFunc");
		
		ABP_OverseerText_EX_C_DisplayTranslation__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BP_OverseerText_EX.BP_OverseerText_EX_C.DisplayTranslation__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_OverseerText_EX_C::DisplayTranslation__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.DisplayTranslation__UpdateFunc");
		
		ABP_OverseerText_EX_C_DisplayTranslation__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BP_OverseerText_EX.BP_OverseerText_EX_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OverseerText_EX_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.ReceiveBeginPlay");
		
		ABP_OverseerText_EX_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BP_OverseerText_EX.BP_OverseerText_EX_C.BndEvt__MyBounds_K2Node_ComponentBoundEvent_150_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (Parm, OutParm, ReferenceParm)
	 */
	void ABP_OverseerText_EX_C::BndEvt__MyBounds_K2Node_ComponentBoundEvent_150_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.BndEvt__MyBounds_K2Node_ComponentBoundEvent_150_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_OverseerText_EX_C_BndEvt__MyBounds_K2Node_ComponentBoundEvent_150_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_OverseerText_EX.BP_OverseerText_EX_C.BndEvt__MyBounds_K2Node_ComponentBoundEvent_383_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OverseerText_EX_C::BndEvt__MyBounds_K2Node_ComponentBoundEvent_383_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.BndEvt__MyBounds_K2Node_ComponentBoundEvent_383_ComponentEndOverlapSignature__DelegateSignature");
		
		ABP_OverseerText_EX_C_BndEvt__MyBounds_K2Node_ComponentBoundEvent_383_ComponentEndOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_OverseerText_EX.BP_OverseerText_EX_C.CheckHelmet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OverseerText_EX_C::CheckHelmet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.CheckHelmet");
		
		ABP_OverseerText_EX_C_CheckHelmet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BP_OverseerText_EX.BP_OverseerText_EX_C.ExecuteUbergraph_BP_OverseerText_EX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OverseerText_EX_C::ExecuteUbergraph_BP_OverseerText_EX(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OverseerText_EX.BP_OverseerText_EX_C.ExecuteUbergraph_BP_OverseerText_EX");
		
		ABP_OverseerText_EX_C_ExecuteUbergraph_BP_OverseerText_EX_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_OverseerText_EX_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_OverseerText_EX_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OverseerText_EX.BP_OverseerText_EX_C");
		return ptr;
	}

}


