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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum UMG.ESlateVisibility
	 */
	enum class ESlateVisibility : uint8_t
	{
		Visible              = 0,
		Collapsed            = 1,
		Hidden               = 2,
		HitTestInvisible     = 3,
		SelfHitTestInvisible = 4,
		MAX                  = 5
	};

	/**
	 * Enum UMG.ESlateSizeRule
	 */
	enum class ESlateSizeRule : uint8_t
	{
		Automatic = 0,
		Fill      = 1,
		MAX       = 2
	};

	/**
	 * Enum UMG.EStretchDirection
	 */
	enum class EStretchDirection : uint8_t
	{
		Both     = 0,
		DownOnly = 1,
		UpOnly   = 2,
		MAX      = 3
	};

	/**
	 * Enum UMG.EStretch
	 */
	enum class EStretch : uint8_t
	{
		None        = 0,
		Fill        = 1,
		ScaleToFit  = 2,
		ScaleToFill = 3,
		MAX         = 4
	};

	/**
	 * Enum UMG.Widget.EAlignVerticalUI
	 */
	enum class EAlignVerticalUI : uint8_t
	{
		Top    = 0,
		Center = 1,
		Bottom = 2,
		MAX    = 3
	};

	/**
	 * Enum UMG.Widget.EAlignHorizontalUI
	 */
	enum class EAlignHorizontalUI : uint8_t
	{
		Left   = 0,
		Center = 1,
		Right  = 2,
		MAX    = 3
	};

	/**
	 * Enum UMG.WidgetBlueprintGeneratedClass.EBindingKind
	 */
	enum class EBindingKind : uint8_t
	{
		Function = 0,
		Property = 1,
		MAX      = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct UMG.WidgetTransform
	 * Size -> 0x001C
	 */
	struct FWidgetTransform
	{
	public:
		struct FVector2D                                           Translation;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           Scale;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           Shear;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Angle;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct UMG.EventReply
	 * Size -> 0x00A0
	 */
	struct FEventReply
	{
	public:
		unsigned char                                              UnknownData_609V[0xA0];                                  // 0x0000(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UMG.Anchors
	 * Size -> 0x0010
	 */
	struct FAnchors
	{
	public:
		struct FVector2D                                           Minimum;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           Maximum;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct UMG.UserWidget.PaintContext
	 * Size -> 0x0030
	 */
	struct FPaintContext
	{
	public:
		unsigned char                                              UnknownData_RH1B[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UMG.CanvasPanelSlot.AnchorData
	 * Size -> 0x0028
	 */
	struct FAnchorData
	{
	public:
		struct FMargin                                             Offsets;                                                 // 0x0000(0x0010) Edit, BlueprintVisible
		struct FAnchors                                            Anchors;                                                 // 0x0010(0x0010) Edit, BlueprintVisible
		struct FVector2D                                           Alignment;                                               // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct UMG.SlateChildSize
	 * Size -> 0x0008
	 */
	struct FSlateChildSize
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		ESlateSizeRule                                             SizeRule;                                                // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AEXB[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UMG.WidgetAnimation.WidgetAnimationBinding
	 * Size -> 0x0020
	 */
	struct FWidgetAnimationBinding
	{
	public:
		class FName                                                WidgetName;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                SlotWidgetName;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGuid                                               AnimationGuid;                                           // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct UMG.WidgetBlueprintGeneratedClass.DelegateRuntimeBinding
	 * Size -> 0x0028
	 */
	struct FDelegateRuntimeBinding
	{
	public:
		class FString                                              ObjectName;                                              // 0x0000(0x0010) ZeroConstructor
		class FName                                                PropertyName;                                            // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                FunctionName;                                            // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		EBindingKind                                               Kind;                                                    // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W13K[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
