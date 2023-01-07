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
	 * Enum SlateCore.EButtonClickMethod
	 */
	enum class EButtonClickMethod : uint8_t
	{
		DownAndUp = 0,
		MouseDown = 1,
		MouseUp   = 2,
		MAX       = 3
	};

	/**
	 * Enum SlateCore.EButtonTouchMethod
	 */
	enum class EButtonTouchMethod : uint8_t
	{
		DownAndUp  = 0,
		PreciseTap = 1,
		MAX        = 2
	};

	/**
	 * Enum SlateCore.EFocusMoveDirection
	 */
	enum class EFocusMoveDirection : uint8_t
	{
		Next     = 0,
		Previous = 1,
		MAX      = 2
	};

	/**
	 * Enum SlateCore.EHorizontalAlignment
	 */
	enum class EHorizontalAlignment : uint8_t
	{
		HAlign_Fill   = 0,
		HAlign_Left   = 1,
		HAlign_Center = 2,
		HAlign_Right  = 3,
		HAlign_MAX    = 4
	};

	/**
	 * Enum SlateCore.EVerticalAlignment
	 */
	enum class EVerticalAlignment : uint8_t
	{
		VAlign_Fill   = 0,
		VAlign_Top    = 1,
		VAlign_Center = 2,
		VAlign_Bottom = 3,
		VAlign_MAX    = 4
	};

	/**
	 * Enum SlateCore.EMenuPlacement
	 */
	enum class EMenuPlacement : uint8_t
	{
		MenuPlacement_BelowAnchor   = 0,
		MenuPlacement_ComboBox      = 1,
		MenuPlacement_ComboBoxRight = 2,
		MenuPlacement_MenuRight     = 3,
		MenuPlacement_AboveAnchor   = 4,
		MenuPlacement_MAX           = 5
	};

	/**
	 * Enum SlateCore.EOrientation
	 */
	enum class EOrientation : uint8_t
	{
		Orient_Horizontal = 0,
		Orient_Vertical   = 1,
		Orient_MAX        = 2
	};

	/**
	 * Enum SlateCore.EScrollDirection
	 */
	enum class EScrollDirection : uint8_t
	{
		Scroll_Down = 0,
		Scroll_Up   = 1,
		Scroll_MAX  = 2
	};

	/**
	 * Enum SlateCore.ETextCommit
	 */
	enum class ETextCommit : uint8_t
	{
		Default          = 0,
		OnEnter          = 1,
		OnUserMovedFocus = 2,
		OnCleared        = 3,
		MAX              = 4
	};

	/**
	 * Enum SlateCore.ESelectInfo
	 */
	enum class ESelectInfo : uint8_t
	{
		OnKeyPress   = 0,
		OnNavigation = 1,
		OnMouseClick = 2,
		Direct       = 3,
		MAX          = 4
	};

	/**
	 * Enum SlateCore.ESlateColorStylingMode
	 */
	enum class ESlateColorStylingMode : uint8_t
	{
		UseColor_Specified          = 0,
		UseColor_Specified_Link     = 1,
		UseColor_Foreground         = 2,
		UseColor_Foreground_Subdued = 3,
		UseColor_MAX                = 4
	};

	/**
	 * Enum SlateCore.ESlateBrushDrawType
	 */
	enum class ESlateBrushDrawType : uint8_t
	{
		NoDrawType = 0,
		Box        = 1,
		Border     = 2,
		Image      = 3,
		MAX        = 4
	};

	/**
	 * Enum SlateCore.ESlateBrushTileType
	 */
	enum class ESlateBrushTileType : uint8_t
	{
		NoTile     = 0,
		Horizontal = 1,
		Vertical   = 2,
		Both       = 3,
		MAX        = 4
	};

	/**
	 * Enum SlateCore.ESlateBrushMirrorType
	 */
	enum class ESlateBrushMirrorType : uint8_t
	{
		NoMirror   = 0,
		Horizontal = 1,
		Vertical   = 2,
		Both       = 3,
		MAX        = 4
	};

	/**
	 * Enum SlateCore.ESlateBrushImageType
	 */
	enum class ESlateBrushImageType : uint8_t
	{
		NoImage   = 0,
		FullColor = 1,
		Linear    = 2,
		MAX       = 3
	};

	/**
	 * Enum SlateCore.EFontHinting
	 */
	enum class EFontHinting : uint8_t
	{
		Default    = 0,
		Auto       = 1,
		AutoLight  = 2,
		Monochrome = 3,
		None       = 4,
		MAX        = 5
	};

	/**
	 * Enum SlateCore.EKeyboardFocusCause
	 */
	enum class EKeyboardFocusCause : uint8_t
	{
		Mouse                = 0,
		Keyboard             = 1,
		SetDirectly          = 2,
		Cleared              = 3,
		OtherWidgetLostFocus = 4,
		WindowActivate       = 5,
		MAX                  = 6
	};

	/**
	 * Enum SlateCore.SlateTypes.ESlateCheckBoxType
	 */
	enum class ESlateCheckBoxType : uint8_t
	{
		CheckBox     = 0,
		ToggleButton = 1,
		MAX          = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SlateCore.SlateWidgetStyle
	 * Size -> 0x0008
	 */
	struct FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_78FL[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.Margin
	 * Size -> 0x0010
	 */
	struct FMargin
	{
	public:
		float                                                      Left;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Top;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Right;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Bottom;                                                  // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct SlateCore.SlateColor
	 * Size -> 0x0028
	 */
	struct FSlateColor
	{
	public:
		struct FLinearColor                                        SpecifiedColor;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		ESlateColorStylingMode                                     ColorUseRule;                                            // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_1N6N[0x17];                                  // 0x0011(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.SlateBrush
	 * Size -> 0x0078
	 */
	struct FSlateBrush
	{
	public:
		struct FVector2D                                           ImageSize;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		ESlateBrushDrawType                                        DrawAs;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BNMB[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             Margin;                                                  // 0x000C(0x0010) Edit, BlueprintVisible
		struct FLinearColor                                        Tint;                                                    // 0x001C(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BIZ2[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         TintColor;                                               // 0x0030(0x0028) Edit, BlueprintVisible
		ESlateBrushTileType                                        Tiling;                                                  // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		ESlateBrushMirrorType                                      Mirroring;                                               // 0x0059(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		ESlateBrushImageType                                       ImageType;                                               // 0x005A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_36L1[0x5];                                   // 0x005B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             ResourceObject;                                          // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		class FName                                                ResourceName;                                            // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		bool                                                       bIsDynamicallyLoaded;                                    // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		bool                                                       bHasUObject;                                             // 0x0071(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_PCOD[0x6];                                   // 0x0072(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.SlateSound
	 * Size -> 0x0018
	 */
	struct FSlateSound
	{
	public:
		class UObject*                                             ResourceObject;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_4AME[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.SlateTypes.ButtonStyle
	 * Size -> 0x0240 (FullSize[0x0248] - InheritedSize[0x0008])
	 */
	struct FButtonStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         Normal;                                                  // 0x0008(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         Hovered;                                                 // 0x0080(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         Pressed;                                                 // 0x00F8(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         Disabled;                                                // 0x0170(0x0078) Edit, BlueprintVisible
		struct FMargin                                             NormalPadding;                                           // 0x01E8(0x0010) Edit, BlueprintVisible
		struct FMargin                                             PressedPadding;                                          // 0x01F8(0x0010) Edit, BlueprintVisible
		struct FSlateSound                                         PressedSlateSound;                                       // 0x0208(0x0018) Edit, BlueprintVisible
		struct FSlateSound                                         HoveredSlateSound;                                       // 0x0220(0x0018) Edit, BlueprintVisible
		class FName                                                PressedSound;                                            // 0x0238(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class FName                                                HoveredSound;                                            // 0x0240(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct SlateCore.SlateFontInfo
	 * Size -> 0x0020
	 */
	struct FSlateFontInfo
	{
	public:
		class UObject*                                             FontObject;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FontDrawScalar;                                          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       EnableOutlineAndGlowInShader;                            // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HF6P[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FontName;                                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    Size;                                                    // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EFontHinting                                               Hinting;                                                 // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VR1A[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.SlateTypes.TextBlockStyle
	 * Size -> 0x0110 (FullSize[0x0118] - InheritedSize[0x0008])
	 */
	struct FTextBlockStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateFontInfo                                      Font;                                                    // 0x0008(0x0020) Edit, BlueprintVisible
		struct FSlateColor                                         ColorAndOpacity;                                         // 0x0028(0x0028) Edit, BlueprintVisible
		struct FVector2D                                           ShadowOffset;                                            // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        ShadowColorAndOpacity;                                   // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FSlateColor                                         SelectedBackgroundColor;                                 // 0x0068(0x0028) Edit
		struct FLinearColor                                        HighlightColor;                                          // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		struct FSlateBrush                                         HighlightShape;                                          // 0x00A0(0x0078) Edit, BlueprintVisible, AdvancedDisplay
	};

	/**
	 * ScriptStruct SlateCore.SlateTypes.WindowStyle
	 * Size -> 0x0DA8 (FullSize[0x0DB0] - InheritedSize[0x0008])
	 */
	struct FWindowStyle : public FSlateWidgetStyle
	{
	public:
		struct FButtonStyle                                        MinimizeButtonStyle;                                     // 0x0008(0x0248) Edit, BlueprintVisible
		struct FButtonStyle                                        MaximizeButtonStyle;                                     // 0x0250(0x0248) Edit, BlueprintVisible
		struct FButtonStyle                                        RestoreButtonStyle;                                      // 0x0498(0x0248) Edit, BlueprintVisible
		struct FButtonStyle                                        CloseButtonStyle;                                        // 0x06E0(0x0248) Edit, BlueprintVisible
		struct FTextBlockStyle                                     TitleTextStyle;                                          // 0x0928(0x0118) Edit, BlueprintVisible
		struct FSlateBrush                                         ActiveTitleBrush;                                        // 0x0A40(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         InactiveTitleBrush;                                      // 0x0AB8(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         FlashTitleBrush;                                         // 0x0B30(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         OutlineBrush;                                            // 0x0BA8(0x0078) Edit, BlueprintVisible
		struct FSlateColor                                         OutlineColor;                                            // 0x0C20(0x0028) Edit, BlueprintVisible
		struct FSlateBrush                                         BorderBrush;                                             // 0x0C48(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         BackgroundBrush;                                         // 0x0CC0(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         ChildBackgroundBrush;                                    // 0x0D38(0x0078) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.SlateTypes.ScrollBorderStyle
	 * Size -> 0x00F0 (FullSize[0x00F8] - InheritedSize[0x0008])
	 */
	struct FScrollBorderStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         TopShadowBrush;                                          // 0x0008(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         BottomShadowBrush;                                       // 0x0080(0x0078) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.SlateTypes.ScrollBoxStyle
	 * Size -> 0x01E0 (FullSize[0x01E8] - InheritedSize[0x0008])
	 */
	struct FScrollBoxStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         TopShadowBrush;                                          // 0x0008(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         BottomShadowBrush;                                       // 0x0080(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         LeftShadowBrush;                                         // 0x00F8(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         RightShadowBrush;                                        // 0x0170(0x0078) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.SlateTypes.DockTabStyle
	 * Size -> 0x05D0 (FullSize[0x05D8] - InheritedSize[0x0008])
	 */
	struct FDockTabStyle : public FSlateWidgetStyle
	{
	public:
		struct FButtonStyle                                        CloseButtonStyle;                                        // 0x0008(0x0248) Edit
		struct FSlateBrush                                         NormalBrush;                                             // 0x0250(0x0078) Edit
		struct FSlateBrush                                         ActiveBrush;                                             // 0x02C8(0x0078) Edit
		struct FSlateBrush                                         ColorOverlayBrush;                                       // 0x0340(0x0078) Edit
		struct FSlateBrush                                         ForegroundBrush;                                         // 0x03B8(0x0078) Edit
		struct FSlateBrush                                         HoveredBrush;                                            // 0x0430(0x0078) Edit
		struct FSlateBrush                                         ContentAreaBrush;                                        // 0x04A8(0x0078) Edit
		struct FSlateBrush                                         TabWellBrush;                                            // 0x0520(0x0078) Edit
		struct FMargin                                             TabPadding;                                              // 0x0598(0x0010) Edit
		float                                                      OverlapWidth;                                            // 0x05A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YVMC[0x4];                                   // 0x05AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         FlashColor;                                              // 0x05B0(0x0028) Edit
	};

	/**
	 * ScriptStruct SlateCore.SlateTypes.TableColumnHeaderStyle
	 * Size -> 0x0438 (FullSize[0x0440] - InheritedSize[0x0008])
	 */
	struct FTableColumnHeaderStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         SortPrimaryAscendingImage;                               // 0x0008(0x0078) Edit
		struct FSlateBrush                                         SortPrimaryDescendingImage;                              // 0x0080(0x0078) Edit
		struct FSlateBrush                                         SortSecondaryAscendingImage;                             // 0x00F8(0x0078) Edit
		struct FSlateBrush                                         SortSecondaryDescendingImage;                            // 0x0170(0x0078) Edit
		struct FSlateBrush                                         NormalBrush;                                             // 0x01E8(0x0078) Edit
		struct FSlateBrush                                         HoveredBrush;                                            // 0x0260(0x0078) Edit
		struct FSlateBrush                                         MenuDropdownImage;                                       // 0x02D8(0x0078) Edit
		struct FSlateBrush                                         MenuDropdownNormalBorderBrush;                           // 0x0350(0x0078) Edit
		struct FSlateBrush                                         MenuDropdownHoveredBorderBrush;                          // 0x03C8(0x0078) Edit
	};

	/**
	 * ScriptStruct SlateCore.SlateTypes.SplitterStyle
	 * Size -> 0x00F0 (FullSize[0x00F8] - InheritedSize[0x0008])
	 */
	struct FSplitterStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         HandleNormalBrush;                                       // 0x0008(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         HandleHighlightBrush;                                    // 0x0080(0x0078) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.SlateTypes.HeaderRowStyle
	 * Size -> 0x0A18 (FullSize[0x0A20] - InheritedSize[0x0008])
	 */
	struct FHeaderRowStyle : public FSlateWidgetStyle
	{
	public:
		struct FTableColumnHeaderStyle                             ColumnStyle;                                             // 0x0008(0x0440) Edit
		struct FTableColumnHeaderStyle                             LastColumnStyle;                                         // 0x0448(0x0440) Edit
		struct FSplitterStyle                                      ColumnSplitterStyle;                                     // 0x0888(0x00F8) Edit
		struct FSlateBrush                                         BackgroundBrush;                                         // 0x0980(0x0078) Edit
		struct FSlateColor                                         ForegroundColor;                                         // 0x09F8(0x0028) Edit
	};

	/**
	 * ScriptStruct SlateCore.SlateTypes.TableRowStyle
	 * Size -> 0x0578 (FullSize[0x0580] - InheritedSize[0x0008])
	 */
	struct FTableRowStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         SelectorFocusedBrush;                                    // 0x0008(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         ActiveHoveredBrush;                                      // 0x0080(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         ActiveBrush;                                             // 0x00F8(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         InactiveHoveredBrush;                                    // 0x0170(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         InactiveBrush;                                           // 0x01E8(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         EvenRowBackgroundHoveredBrush;                           // 0x0260(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         EvenRowBackgroundBrush;                                  // 0x02D8(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         OddRowBackgroundHoveredBrush;                            // 0x0350(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         OddRowBackgroundBrush;                                   // 0x03C8(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         DragDropLineIndicatorBrush;                              // 0x0440(0x0078) Edit
		struct FSlateBrush                                         DragDropBorderIndicatorBrush;                            // 0x04B8(0x0078) Edit
		struct FSlateColor                                         TextColor;                                               // 0x0530(0x0028) Edit, BlueprintVisible
		struct FSlateColor                                         SelectedTextColor;                                       // 0x0558(0x0028) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.SlateTypes.SpinBoxStyle
	 * Size -> 0x0290 (FullSize[0x0298] - InheritedSize[0x0008])
	 */
	struct FSpinBoxStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         BackgroundBrush;                                         // 0x0008(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         HoveredBackgroundBrush;                                  // 0x0080(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         ActiveFillBrush;                                         // 0x00F8(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         InactiveFillBrush;                                       // 0x0170(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         ArrowsImage;                                             // 0x01E8(0x0078) Edit, BlueprintVisible
		struct FSlateColor                                         ForegroundColor;                                         // 0x0260(0x0028)
		struct FMargin                                             TextPadding;                                             // 0x0288(0x0010) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.SlateTypes.InlineTextImageStyle
	 * Size -> 0x0080 (FullSize[0x0088] - InheritedSize[0x0008])
	 */
	struct FInlineTextImageStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         Image;                                                   // 0x0008(0x0078) Edit
		int16_t                                                    Baseline;                                                // 0x0080(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GQ3J[0x6];                                   // 0x0082(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.SlateTypes.SliderStyle
	 * Size -> 0x01E0 (FullSize[0x01E8] - InheritedSize[0x0008])
	 */
	struct FSliderStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         NormalBarImage;                                          // 0x0008(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         DisabledBarImage;                                        // 0x0080(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         NormalThumbImage;                                        // 0x00F8(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         DisabledThumbImage;                                      // 0x0170(0x0078) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.SlateTypes.VolumeControlStyle
	 * Size -> 0x0440 (FullSize[0x0448] - InheritedSize[0x0008])
	 */
	struct FVolumeControlStyle : public FSlateWidgetStyle
	{
	public:
		struct FSliderStyle                                        SliderStyle;                                             // 0x0008(0x01E8) Edit
		struct FSlateBrush                                         HighVolumeImage;                                         // 0x01F0(0x0078) Edit
		struct FSlateBrush                                         MidVolumeImage;                                          // 0x0268(0x0078) Edit
		struct FSlateBrush                                         LowVolumeImage;                                          // 0x02E0(0x0078) Edit
		struct FSlateBrush                                         NoVolumeImage;                                           // 0x0358(0x0078) Edit
		struct FSlateBrush                                         MutedImage;                                              // 0x03D0(0x0078) Edit
	};

	/**
	 * ScriptStruct SlateCore.SlateTypes.ScrollBarStyle
	 * Size -> 0x0258 (FullSize[0x0260] - InheritedSize[0x0008])
	 */
	struct FScrollBarStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         HorizontalBackgroundImage;                               // 0x0008(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         VerticalBackgroundImage;                                 // 0x0080(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         NormalThumbImage;                                        // 0x00F8(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         HoveredThumbImage;                                       // 0x0170(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         DraggedThumbImage;                                       // 0x01E8(0x0078) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.SlateTypes.EditableTextBoxStyle
	 * Size -> 0x0508 (FullSize[0x0510] - InheritedSize[0x0008])
	 */
	struct FEditableTextBoxStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         BackgroundImageNormal;                                   // 0x0008(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         BackgroundImageHovered;                                  // 0x0080(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         BackgroundImageFocused;                                  // 0x00F8(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         BackgroundImageReadOnly;                                 // 0x0170(0x0078) Edit, BlueprintVisible
		struct FMargin                                             Padding;                                                 // 0x01E8(0x0010) Edit, BlueprintVisible
		struct FSlateFontInfo                                      Font;                                                    // 0x01F8(0x0020) Edit, BlueprintVisible
		struct FSlateColor                                         ForegroundColor;                                         // 0x0218(0x0028) Edit, BlueprintVisible
		struct FSlateColor                                         BackgroundColor;                                         // 0x0240(0x0028) Edit, BlueprintVisible
		struct FSlateColor                                         ReadOnlyForegroundColor;                                 // 0x0268(0x0028) Edit, BlueprintVisible
		struct FMargin                                             HScrollBarPadding;                                       // 0x0290(0x0010) Edit, BlueprintVisible
		struct FMargin                                             VScrollBarPadding;                                       // 0x02A0(0x0010) Edit, BlueprintVisible
		struct FScrollBarStyle                                     ScrollBarStyle;                                          // 0x02B0(0x0260) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.SlateTypes.SearchBoxStyle
	 * Size -> 0x0710 (FullSize[0x0718] - InheritedSize[0x0008])
	 */
	struct FSearchBoxStyle : public FSlateWidgetStyle
	{
	public:
		struct FEditableTextBoxStyle                               TextBoxStyle;                                            // 0x0008(0x0510) Edit
		struct FSlateFontInfo                                      ActiveFontInfo;                                          // 0x0518(0x0020) Edit
		struct FSlateBrush                                         UpArrowImage;                                            // 0x0538(0x0078) Edit
		struct FSlateBrush                                         DownArrowImage;                                          // 0x05B0(0x0078) Edit
		struct FSlateBrush                                         GlassImage;                                              // 0x0628(0x0078) Edit
		struct FSlateBrush                                         ClearImage;                                              // 0x06A0(0x0078) Edit
	};

	/**
	 * ScriptStruct SlateCore.SlateTypes.ExpandableAreaStyle
	 * Size -> 0x00F0 (FullSize[0x00F8] - InheritedSize[0x0008])
	 */
	struct FExpandableAreaStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         CollapsedImage;                                          // 0x0008(0x0078) Edit
		struct FSlateBrush                                         ExpandedImage;                                           // 0x0080(0x0078) Edit
	};

	/**
	 * ScriptStruct SlateCore.SlateTypes.ProgressBarStyle
	 * Size -> 0x0168 (FullSize[0x0170] - InheritedSize[0x0008])
	 */
	struct FProgressBarStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         BackgroundImage;                                         // 0x0008(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         FillImage;                                               // 0x0080(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         MarqueeImage;                                            // 0x00F8(0x0078) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.SlateTypes.InlineEditableTextBlockStyle
	 * Size -> 0x0628 (FullSize[0x0630] - InheritedSize[0x0008])
	 */
	struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
	{
	public:
		struct FEditableTextBoxStyle                               EditableTextBoxStyle;                                    // 0x0008(0x0510) Edit, BlueprintVisible
		struct FTextBlockStyle                                     TextStyle;                                               // 0x0518(0x0118) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.SlateTypes.EditableTextStyle
	 * Size -> 0x0228 (FullSize[0x0230] - InheritedSize[0x0008])
	 */
	struct FEditableTextStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateFontInfo                                      Font;                                                    // 0x0008(0x0020) Edit, BlueprintVisible
		struct FSlateColor                                         ColorAndOpacity;                                         // 0x0028(0x0028) Edit, BlueprintVisible
		struct FSlateBrush                                         BackgroundImageSelected;                                 // 0x0050(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         BackgroundImageSelectionTarget;                          // 0x00C8(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         BackgroundImageComposing;                                // 0x0140(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         CaretImage;                                              // 0x01B8(0x0078) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.SlateTypes.HyperlinkStyle
	 * Size -> 0x0370 (FullSize[0x0378] - InheritedSize[0x0008])
	 */
	struct FHyperlinkStyle : public FSlateWidgetStyle
	{
	public:
		struct FButtonStyle                                        UnderlineStyle;                                          // 0x0008(0x0248) Edit, BlueprintVisible
		struct FTextBlockStyle                                     TextStyle;                                               // 0x0250(0x0118) Edit, BlueprintVisible
		struct FMargin                                             Padding;                                                 // 0x0368(0x0010) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.SlateTypes.ComboButtonStyle
	 * Size -> 0x0348 (FullSize[0x0350] - InheritedSize[0x0008])
	 */
	struct FComboButtonStyle : public FSlateWidgetStyle
	{
	public:
		struct FButtonStyle                                        ButtonStyle;                                             // 0x0008(0x0248) Edit, BlueprintVisible
		struct FSlateBrush                                         DownArrowImage;                                          // 0x0250(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         MenuBorderBrush;                                         // 0x02C8(0x0078) Edit, BlueprintVisible
		struct FMargin                                             MenuBorderPadding;                                       // 0x0340(0x0010) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct SlateCore.SlateTypes.ComboBoxStyle
	 * Size -> 0x0390 (FullSize[0x0398] - InheritedSize[0x0008])
	 */
	struct FComboBoxStyle : public FSlateWidgetStyle
	{
	public:
		struct FComboButtonStyle                                   ComboButtonStyle;                                        // 0x0008(0x0350) Edit, BlueprintVisible
		struct FSlateSound                                         PressedSlateSound;                                       // 0x0358(0x0018) Edit, BlueprintVisible
		struct FSlateSound                                         SelectionChangeSlateSound;                               // 0x0370(0x0018) Edit, BlueprintVisible
		class FName                                                PressedSound;                                            // 0x0388(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class FName                                                SelectionChangeSound;                                    // 0x0390(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct SlateCore.SlateTypes.CheckBoxStyle
	 * Size -> 0x0500 (FullSize[0x0508] - InheritedSize[0x0008])
	 */
	struct FCheckBoxStyle : public FSlateWidgetStyle
	{
	public:
		ESlateCheckBoxType                                         CheckBoxType;                                            // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MIEX[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         UncheckedImage;                                          // 0x0010(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         UncheckedHoveredImage;                                   // 0x0088(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         UncheckedPressedImage;                                   // 0x0100(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         CheckedImage;                                            // 0x0178(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         CheckedHoveredImage;                                     // 0x01F0(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         CheckedPressedImage;                                     // 0x0268(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         UndeterminedImage;                                       // 0x02E0(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         UndeterminedHoveredImage;                                // 0x0358(0x0078) Edit, BlueprintVisible
		struct FSlateBrush                                         UndeterminedPressedImage;                                // 0x03D0(0x0078) Edit, BlueprintVisible
		struct FMargin                                             Padding;                                                 // 0x0448(0x0010) Edit, BlueprintVisible
		struct FSlateColor                                         ForegroundColor;                                         // 0x0458(0x0028) Edit, BlueprintVisible
		struct FSlateColor                                         BorderBackgroundColor;                                   // 0x0480(0x0028) Edit, BlueprintVisible
		struct FSlateSound                                         CheckedSlateSound;                                       // 0x04A8(0x0018) Edit, BlueprintVisible
		struct FSlateSound                                         UncheckedSlateSound;                                     // 0x04C0(0x0018) Edit, BlueprintVisible
		struct FSlateSound                                         HoveredSlateSound;                                       // 0x04D8(0x0018) Edit, BlueprintVisible
		class FName                                                CheckedSound;                                            // 0x04F0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class FName                                                UncheckedSound;                                          // 0x04F8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class FName                                                HoveredSound;                                            // 0x0500(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct SlateCore.InputEvent
	 * Size -> 0x0020
	 */
	struct FInputEvent
	{
	public:
		unsigned char                                              UnknownData_RPK2[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.PointerEvent
	 * Size -> 0x0058 (FullSize[0x0078] - InheritedSize[0x0020])
	 */
	struct FPointerEvent : public FInputEvent
	{
	public:
		unsigned char                                              UnknownData_B901[0x58];                                  // 0x0020(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.Geometry
	 * Size -> 0x0034
	 */
	struct FGeometry
	{
	public:
		unsigned char                                              UnknownData_FOCX[0x34];                                  // 0x0000(0x0034) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.ControllerEvent
	 * Size -> 0x0020 (FullSize[0x0040] - InheritedSize[0x0020])
	 */
	struct FControllerEvent : public FInputEvent
	{
	public:
		unsigned char                                              UnknownData_POGR[0x20];                                  // 0x0020(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.KeyboardFocusEvent
	 * Size -> 0x0008
	 */
	struct FKeyboardFocusEvent
	{
	public:
		unsigned char                                              UnknownData_QXUV[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.CharacterEvent
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FCharacterEvent : public FInputEvent
	{
	public:
		unsigned char                                              UnknownData_MNKW[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.KeyboardEvent
	 * Size -> 0x0020 (FullSize[0x0040] - InheritedSize[0x0020])
	 */
	struct FKeyboardEvent : public FInputEvent
	{
	public:
		unsigned char                                              UnknownData_VF8X[0x20];                                  // 0x0020(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.MotionEvent
	 * Size -> 0x0038 (FullSize[0x0058] - InheritedSize[0x0020])
	 */
	struct FMotionEvent : public FInputEvent
	{
	public:
		unsigned char                                              UnknownData_V1JC[0x38];                                  // 0x0020(0x0038) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
