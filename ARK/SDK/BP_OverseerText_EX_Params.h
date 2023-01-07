#pragma once

/**
 * Name: ARK
 * Version: 1.0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_OverseerText_EX.BP_OverseerText_EX_C.ConstructionProcess
	 */
	struct ABP_OverseerText_EX_C_ConstructionProcess_Params
	{	};

	/**
	 * Function BP_OverseerText_EX.BP_OverseerText_EX_C.InitializeGlyphs
	 */
	struct ABP_OverseerText_EX_C_InitializeGlyphs_Params
	{
	public:
		TArray<class FString>                                      FormattedText;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BP_OverseerText_EX.BP_OverseerText_EX_C.SplitEveryOtherLine
	 */
	struct ABP_OverseerText_EX_C_SplitEveryOtherLine_Params
	{
	public:
		class FString                                              Line;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor)
		class FString                                              StartingText;                                            // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
		class FString                                              OffsetText;                                              // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BP_OverseerText_EX.BP_OverseerText_EX_C.Convert To Base
	 */
	struct ABP_OverseerText_EX_C_ConvertToBase_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Base;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              converted;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BP_OverseerText_EX.BP_OverseerText_EX_C.FormatReadableText
	 */
	struct ABP_OverseerText_EX_C_FormatReadableText_Params
	{
	public:
		TArray<class FString>                                      OriginalText;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    MaxCharPerLine;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M83T[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      FormattedText;                                           // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BP_OverseerText_EX.BP_OverseerText_EX_C.Setup
	 */
	struct ABP_OverseerText_EX_C_Setup_Params
	{
	public:
		TArray<class FString>                                      OriginalText;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    WordsPerRow;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OverseerText_EX.BP_OverseerText_EX_C.RenderOriginalText
	 */
	struct ABP_OverseerText_EX_C_RenderOriginalText_Params
	{
	public:
		TArray<class FString>                                      Text;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		class UTextRenderComponent*                                TextRender;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    TranslationLevel;                                        // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OverseerText_EX.BP_OverseerText_EX_C.RenderGlyph
	 */
	struct ABP_OverseerText_EX_C_RenderGlyph_Params
	{
	public:
		class FString                                              GlyphRepresentation;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UTextRenderComponent*                                TextRender;                                              // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       offsetLeft;                                              // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Offset;                                                  // 0x0029(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M8BS[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_OverseerText_EX.BP_OverseerText_EX_C.Translation
	 */
	struct ABP_OverseerText_EX_C_Translation_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor)
		class FString                                              GlyphTranslation;                                        // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BP_OverseerText_EX.BP_OverseerText_EX_C.UserConstructionScript
	 */
	struct ABP_OverseerText_EX_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_OverseerText_EX.BP_OverseerText_EX_C.DisplayTranslation__FinishedFunc
	 */
	struct ABP_OverseerText_EX_C_DisplayTranslation__FinishedFunc_Params
	{	};

	/**
	 * Function BP_OverseerText_EX.BP_OverseerText_EX_C.DisplayTranslation__UpdateFunc
	 */
	struct ABP_OverseerText_EX_C_DisplayTranslation__UpdateFunc_Params
	{	};

	/**
	 * Function BP_OverseerText_EX.BP_OverseerText_EX_C.ReceiveBeginPlay
	 */
	struct ABP_OverseerText_EX_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_OverseerText_EX.BP_OverseerText_EX_C.BndEvt__MyBounds_K2Node_ComponentBoundEvent_150_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_OverseerText_EX_C_BndEvt__MyBounds_K2Node_ComponentBoundEvent_150_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromSweep;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7DMM[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0018(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_OverseerText_EX.BP_OverseerText_EX_C.BndEvt__MyBounds_K2Node_ComponentBoundEvent_383_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_OverseerText_EX_C_BndEvt__MyBounds_K2Node_ComponentBoundEvent_383_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OverseerText_EX.BP_OverseerText_EX_C.CheckHelmet
	 */
	struct ABP_OverseerText_EX_C_CheckHelmet_Params
	{	};

	/**
	 * Function BP_OverseerText_EX.BP_OverseerText_EX_C.ExecuteUbergraph_BP_OverseerText_EX
	 */
	struct ABP_OverseerText_EX_C_ExecuteUbergraph_BP_OverseerText_EX_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
