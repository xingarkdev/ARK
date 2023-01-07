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
	 * Function UMG.Widget.SetVisibility
	 */
	struct UWidget_SetVisibility_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.SetToolTipText
	 */
	struct UWidget_SetToolTipText_Params
	{
	public:
		class FText                                                InToolTipText;                                           // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG.Widget.SetRenderTranslation
	 */
	struct UWidget_SetRenderTranslation_Params
	{
	public:
		struct FVector2D                                           Translation;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.SetRenderTransformPivot
	 */
	struct UWidget_SetRenderTransformPivot_Params
	{
	public:
		struct FVector2D                                           Pivot;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.SetRenderTransform
	 */
	struct UWidget_SetRenderTransform_Params
	{
	public:
		struct FWidgetTransform                                    InTransform;                                             // 0x0000(0x001C)  (Parm)
	};

	/**
	 * Function UMG.Widget.SetRenderShear
	 */
	struct UWidget_SetRenderShear_Params
	{
	public:
		struct FVector2D                                           Shear;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.SetRenderScale
	 */
	struct UWidget_SetRenderScale_Params
	{
	public:
		struct FVector2D                                           Scale;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.SetRenderAngle
	 */
	struct UWidget_SetRenderAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.SetKeyboardFocus
	 */
	struct UWidget_SetKeyboardFocus_Params
	{	};

	/**
	 * Function UMG.Widget.SetIsEnabled
	 */
	struct UWidget_SetIsEnabled_Params
	{
	public:
		bool                                                       bInIsEnabled;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.RemoveFromParent
	 */
	struct UWidget_RemoveFromParent_Params
	{	};

	/**
	 * Function UMG.Widget.OnReply__DelegateSignature
	 */
	struct UWidget_OnReply__DelegateSignature_Params
	{
	public:
		struct FEventReply                                         ReturnValue;                                             // 0x0000(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.Widget.OnPointerEvent__DelegateSignature
	 */
	struct UWidget_OnPointerEvent__DelegateSignature_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BKTZ[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.Widget.IsHovered
	 */
	struct UWidget_IsHovered_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.HasMouseCapture
	 */
	struct UWidget_HasMouseCapture_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.HasKeyboardFocus
	 */
	struct UWidget_HasKeyboardFocus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.HasFocusedDescendants
	 */
	struct UWidget_HasFocusedDescendants_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.GetVisibility
	 */
	struct UWidget_GetVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.GetVector__DelegateSignature
	 */
	struct UWidget_GetVector__DelegateSignature_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.GetVector2D__DelegateSignature
	 */
	struct UWidget_GetVector2D__DelegateSignature_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.GetText__DelegateSignature
	 */
	struct UWidget_GetText__DelegateSignature_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.Widget.GetSlateVisibility__DelegateSignature
	 */
	struct UWidget_GetSlateVisibility__DelegateSignature_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.GetSlateColor__DelegateSignature
	 */
	struct UWidget_GetSlateColor__DelegateSignature_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.GetSlateBrushAsset__DelegateSignature
	 */
	struct UWidget_GetSlateBrushAsset__DelegateSignature_Params
	{
	public:
		class USlateBrushAsset*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.GetSlateBrush__DelegateSignature
	 */
	struct UWidget_GetSlateBrush__DelegateSignature_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0078)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.Widget.GetParent
	 */
	struct UWidget_GetParent_Params
	{
	public:
		class UPanelWidget*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.GetMouseCursor__DelegateSignature
	 */
	struct UWidget_GetMouseCursor__DelegateSignature_Params
	{
	public:
		EMouseCursor                                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.GetMargin__DelegateSignature
	 */
	struct UWidget_GetMargin__DelegateSignature_Params
	{
	public:
		struct FMargin                                             ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.Widget.GetLinearColor__DelegateSignature
	 */
	struct UWidget_GetLinearColor__DelegateSignature_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.GetIsThisAndParentsEnabled
	 */
	struct UWidget_GetIsThisAndParentsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.GetIsEnabled
	 */
	struct UWidget_GetIsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.GetInt32__DelegateSignature
	 */
	struct UWidget_GetInt32__DelegateSignature_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.GetFloat__DelegateSignature
	 */
	struct UWidget_GetFloat__DelegateSignature_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.GetDesiredSize
	 */
	struct UWidget_GetDesiredSize_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.GetContent__DelegateSignature
	 */
	struct UWidget_GetContent__DelegateSignature_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.GetCheckBoxState__DelegateSignature
	 */
	struct UWidget_GetCheckBoxState__DelegateSignature_Params
	{
	public:
		ESlateCheckBoxState                                        ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.GetBool__DelegateSignature
	 */
	struct UWidget_GetBool__DelegateSignature_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.GenerateWidgetForString__DelegateSignature
	 */
	struct UWidget_GenerateWidgetForString__DelegateSignature_Params
	{
	public:
		class FString                                              Item;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.GenerateWidgetForObject__DelegateSignature
	 */
	struct UWidget_GenerateWidgetForObject__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Widget.ForceLayoutPrepass
	 */
	struct UWidget_ForceLayoutPrepass_Params
	{	};

	/**
	 * Function UMG.UserWidget.Tick
	 */
	struct UUserWidget_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.UserWidget.StopAnimationByString
	 */
	struct UUserWidget_StopAnimationByString_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function UMG.UserWidget.StopAnimation
	 */
	struct UUserWidget_StopAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.UserWidget.SetZOrderInViewport
	 */
	struct UUserWidget_SetZOrderInViewport_Params
	{
	public:
		int32_t                                                    ZOrder;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.UserWidget.SetPositionInViewport
	 */
	struct UUserWidget_SetPositionInViewport_Params
	{
	public:
		struct FVector2D                                           Position;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bRemoveDPIScale;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.UserWidget.SetDesiredSizeInViewport
	 */
	struct UUserWidget_SetDesiredSizeInViewport_Params
	{
	public:
		struct FVector2D                                           Size;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.UserWidget.SetAnchorsInViewport
	 */
	struct UUserWidget_SetAnchorsInViewport_Params
	{
	public:
		struct FAnchors                                            Anchors;                                                 // 0x0000(0x0010)  (Parm)
	};

	/**
	 * Function UMG.UserWidget.SetAlignmentInViewport
	 */
	struct UUserWidget_SetAlignmentInViewport_Params
	{
	public:
		struct FVector2D                                           Alignment;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.UserWidget.RemoveFromViewport
	 */
	struct UUserWidget_RemoveFromViewport_Params
	{	};

	/**
	 * Function UMG.UserWidget.PlayAnimationByString
	 */
	struct UUserWidget_PlayAnimationByString_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.UserWidget.PlayAnimation
	 */
	struct UUserWidget_PlayAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.UserWidget.OnVisibilityChangedEvent__DelegateSignature
	 */
	struct UUserWidget_OnVisibilityChangedEvent__DelegateSignature_Params
	{
	public:
		ESlateVisibility                                           Visibility;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.UserWidget.OnTouchStarted
	 */
	struct UUserWidget_OnTouchStarted_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3RVF[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       InTouchEvent;                                            // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.UserWidget.OnTouchMoved
	 */
	struct UUserWidget_OnTouchMoved_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8G0S[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       InTouchEvent;                                            // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.UserWidget.OnTouchGesture
	 */
	struct UUserWidget_OnTouchGesture_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AUIN[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       GestureEvent;                                            // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.UserWidget.OnTouchEnded
	 */
	struct UUserWidget_OnTouchEnded_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H5XF[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       InTouchEvent;                                            // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.UserWidget.OnPreviewMouseButtonDown
	 */
	struct UUserWidget_OnPreviewMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_10QQ[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.UserWidget.OnPreviewKeyDown
	 */
	struct UUserWidget_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JTX4[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKeyboardEvent                                      InKeyboardEvent;                                         // 0x0038(0x0040)  (Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.UserWidget.OnPaint
	 */
	struct UUserWidget_OnPaint_Params
	{
	public:
		struct FPaintContext                                       Context;                                                 // 0x0000(0x0030)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG.UserWidget.OnMouseWheel
	 */
	struct UUserWidget_OnMouseWheel_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_03BL[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.UserWidget.OnMouseMove
	 */
	struct UUserWidget_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L0DM[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.UserWidget.OnMouseLeave
	 */
	struct UUserWidget_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG.UserWidget.OnMouseEnter
	 */
	struct UUserWidget_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2IDJ[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG.UserWidget.OnMouseButtonUp
	 */
	struct UUserWidget_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3XUG[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.UserWidget.OnMouseButtonDown
	 */
	struct UUserWidget_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BCN7[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.UserWidget.OnMouseButtonDoubleClick
	 */
	struct UUserWidget_OnMouseButtonDoubleClick_Params
	{
	public:
		struct FGeometry                                           InMyGeometry;                                            // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZTT0[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       InMouseEvent;                                            // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.UserWidget.OnMotionDetected
	 */
	struct UUserWidget_OnMotionDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_76TV[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMotionEvent                                        InMotionEvent;                                           // 0x0038(0x0058)  (Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0090(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.UserWidget.OnKeyUp
	 */
	struct UUserWidget_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NHVO[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKeyboardEvent                                      InKeyboardEvent;                                         // 0x0038(0x0040)  (Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.UserWidget.OnKeyDown
	 */
	struct UUserWidget_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EY4X[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKeyboardEvent                                      InKeyboardEvent;                                         // 0x0038(0x0040)  (Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.UserWidget.OnKeyChar
	 */
	struct UUserWidget_OnKeyChar_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MD3O[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCharacterEvent                                     InCharacterEvent;                                        // 0x0038(0x0028)  (Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0060(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.UserWidget.OnKeyboardFocusReceived
	 */
	struct UUserWidget_OnKeyboardFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		struct FKeyboardFocusEvent                                 InKeyboardFocusEvent;                                    // 0x0034(0x0008)  (Parm)
		unsigned char                                              UnknownData_14HD[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.UserWidget.OnKeyboardFocusLost
	 */
	struct UUserWidget_OnKeyboardFocusLost_Params
	{
	public:
		struct FKeyboardFocusEvent                                 InKeyboardFocusEvent;                                    // 0x0000(0x0008)  (Parm)
	};

	/**
	 * Function UMG.UserWidget.OnDrop
	 */
	struct UUserWidget_OnDrop_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C1HK[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.UserWidget.OnDragOver
	 */
	struct UUserWidget_OnDragOver_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MAZZ[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.UserWidget.OnDragLeave
	 */
	struct UUserWidget_OnDragLeave_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x0078(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.UserWidget.OnDragEnter
	 */
	struct UUserWidget_OnDragEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N4AZ[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.UserWidget.OnDragDetected
	 */
	struct UUserWidget_OnDragDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F3R8[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.UserWidget.OnDragCancelled
	 */
	struct UUserWidget_OnDragCancelled_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x0078(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.UserWidget.OnControllerButtonReleased
	 */
	struct UUserWidget_OnControllerButtonReleased_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UGKM[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FControllerEvent                                    ControllerEvent;                                         // 0x0038(0x0040)  (Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.UserWidget.OnControllerButtonPressed
	 */
	struct UUserWidget_OnControllerButtonPressed_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X27M[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FControllerEvent                                    ControllerEvent;                                         // 0x0038(0x0040)  (Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.UserWidget.OnControllerAnalogValueChanged
	 */
	struct UUserWidget_OnControllerAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TSX4[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FControllerEvent                                    ControllerEvent;                                         // 0x0038(0x0040)  (Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.UserWidget.OnConstructEvent__DelegateSignature
	 */
	struct UUserWidget_OnConstructEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG.UserWidget.GetVisiblity
	 */
	struct UUserWidget_GetVisiblity_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.UserWidget.GetOwningPlayerPawn
	 */
	struct UUserWidget_GetOwningPlayerPawn_Params
	{
	public:
		class APawn*                                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.UserWidget.GetOwningPlayer
	 */
	struct UUserWidget_GetOwningPlayer_Params
	{
	public:
		class APlayerController*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.UserWidget.GetOwningLocalPlayer
	 */
	struct UUserWidget_GetOwningLocalPlayer_Params
	{
	public:
		class ULocalPlayer*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.UserWidget.GetIsVisible
	 */
	struct UUserWidget_GetIsVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.UserWidget.Construct
	 */
	struct UUserWidget_Construct_Params
	{	};

	/**
	 * Function UMG.UserWidget.CloseScene
	 */
	struct UUserWidget_CloseScene_Params
	{	};

	/**
	 * Function UMG.UserWidget.AddToViewport
	 */
	struct UUserWidget_AddToViewport_Params
	{	};

	/**
	 * Function UMG.PanelWidget.RemoveChildAt
	 */
	struct UPanelWidget_RemoveChildAt_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.PanelWidget.RemoveChild
	 */
	struct UPanelWidget_RemoveChild_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.PanelWidget.InsertChildAt
	 */
	struct UPanelWidget_InsertChildAt_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CMZW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             Content;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.PanelWidget.HasAnyChildren
	 */
	struct UPanelWidget_HasAnyChildren_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.PanelWidget.GetChildrenCount
	 */
	struct UPanelWidget_GetChildrenCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.PanelWidget.GetChildIndex
	 */
	struct UPanelWidget_GetChildIndex_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.PanelWidget.GetChildAt
	 */
	struct UPanelWidget_GetChildAt_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_10XH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.PanelWidget.ClearChildren
	 */
	struct UPanelWidget_ClearChildren_Params
	{	};

	/**
	 * Function UMG.PanelWidget.AddChild
	 */
	struct UPanelWidget_AddChild_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPanelSlot*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.ContentWidget.GetContentSlot
	 */
	struct UContentWidget_GetContentSlot_Params
	{
	public:
		class UPanelSlot*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Button.SetColorAndOpacity
	 */
	struct UButton_SetColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        InColorAndOpacity;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Button.SetBackgroundColor
	 */
	struct UButton_SetBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        InBackgroundColor;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Button.OnButtonClickedEventObject__DelegateSignature
	 */
	struct UButton_OnButtonClickedEventObject__DelegateSignature_Params
	{
	public:
		class UWidget*                                             clickedWidget;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Button.OnButtonClickedEvent__DelegateSignature
	 */
	struct UButton_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG.Button.MimickClicked
	 */
	struct UButton_MimickClicked_Params
	{
	public:
		bool                                                       bFromGamepad;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Button.IsPressed
	 */
	struct UButton_IsPressed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.ScrollBox.SetScrollOffset
	 */
	struct UScrollBox_SetScrollOffset_Params
	{
	public:
		float                                                      NewScrollOffset;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.ScrollBox.GetScrollOffset
	 */
	struct UScrollBox_GetScrollOffset_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.ScrollBox.GetScrollMax
	 */
	struct UScrollBox_GetScrollMax_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.ScrollBox.GetScrollContentSize
	 */
	struct UScrollBox_GetScrollContentSize_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Border.SetVerticalAlignment
	 */
	struct UBorder_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Border.SetPadding
	 */
	struct UBorder_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm)
	};

	/**
	 * Function UMG.Border.SetHorizontalAlignment
	 */
	struct UBorder_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Border.SetContentColorAndOpacity
	 */
	struct UBorder_SetContentColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        InContentColorAndOpacity;                                // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Border.SetBrushFromTexture
	 */
	struct UBorder_SetBrushFromTexture_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Border.SetBrushFromMaterial
	 */
	struct UBorder_SetBrushFromMaterial_Params
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Border.SetBrushFromAsset
	 */
	struct UBorder_SetBrushFromAsset_Params
	{
	public:
		class USlateBrushAsset*                                    Asset;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Border.SetBrushColor
	 */
	struct UBorder_SetBrushColor_Params
	{
	public:
		struct FLinearColor                                        InBrushColor;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Border.GetDynamicMaterial
	 */
	struct UBorder_GetDynamicMaterial_Params
	{
	public:
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.EditableText.SetText
	 */
	struct UEditableText_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UMG.EditableText.SetIsReadOnly
	 */
	struct UEditableText_SetIsReadOnly_Params
	{
	public:
		bool                                                       InbIsReadyOnly;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.EditableText.SetIsPassword
	 */
	struct UEditableText_SetIsPassword_Params
	{
	public:
		bool                                                       InbIsPassword;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.EditableText.SetHintText
	 */
	struct UEditableText_SetHintText_Params
	{
	public:
		class FText                                                InHintText;                                              // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UEditableText_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG.EditableText.GetText
	 */
	struct UEditableText_GetText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.DragDropOperation.OnDragDropMulticast__DelegateSignature
	 */
	struct UDragDropOperation_OnDragDropMulticast__DelegateSignature_Params
	{
	public:
		class UDragDropOperation*                                  Operation;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.DragDropOperation.Drop
	 */
	struct UDragDropOperation_Drop_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG.DragDropOperation.Dragged
	 */
	struct UDragDropOperation_Dragged_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG.DragDropOperation.DragCancelled
	 */
	struct UDragDropOperation_DragCancelled_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG.SlateBlueprintLibrary.LocalToAbsolute
	 */
	struct USlateBlueprintLibrary_LocalToAbsolute_Params
	{
	public:
		struct FGeometry                                           Geometry;                                                // 0x0000(0x0034)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector2D                                           LocalCoordinate;                                         // 0x0034(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           ReturnValue;                                             // 0x003C(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.SlateBlueprintLibrary.IsUnderLocation
	 */
	struct USlateBlueprintLibrary_IsUnderLocation_Params
	{
	public:
		struct FGeometry                                           Geometry;                                                // 0x0000(0x0034)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector2D                                           AbsoluteCoordinate;                                      // 0x0034(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x003C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.SlateBlueprintLibrary.GetLocalSize
	 */
	struct USlateBlueprintLibrary_GetLocalSize_Params
	{
	public:
		struct FGeometry                                           Geometry;                                                // 0x0000(0x0034)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector2D                                           ReturnValue;                                             // 0x0034(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
	 */
	struct USlateBlueprintLibrary_AbsoluteToLocal_Params
	{
	public:
		struct FGeometry                                           Geometry;                                                // 0x0000(0x0034)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector2D                                           AbsoluteCoordinate;                                      // 0x0034(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           ReturnValue;                                             // 0x003C(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.BorderSlot.SetVerticalAlignment
	 */
	struct UBorderSlot_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.BorderSlot.SetPadding
	 */
	struct UBorderSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm)
	};

	/**
	 * Function UMG.BorderSlot.SetHorizontalAlignment
	 */
	struct UBorderSlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.ButtonSlot.SetVerticalAlignment
	 */
	struct UButtonSlot_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.ButtonSlot.SetPadding
	 */
	struct UButtonSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm)
	};

	/**
	 * Function UMG.ButtonSlot.SetHorizontalAlignment
	 */
	struct UButtonSlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.CanvasPanelSlot.SetZOrder
	 */
	struct UCanvasPanelSlot_SetZOrder_Params
	{
	public:
		int32_t                                                    InZOrder;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.CanvasPanelSlot.SetSize
	 */
	struct UCanvasPanelSlot_SetSize_Params
	{
	public:
		struct FVector2D                                           InSize;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.CanvasPanelSlot.SetPosition
	 */
	struct UCanvasPanelSlot_SetPosition_Params
	{
	public:
		struct FVector2D                                           InPosition;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.CanvasPanelSlot.SetOffsets
	 */
	struct UCanvasPanelSlot_SetOffsets_Params
	{
	public:
		struct FMargin                                             InOffset;                                                // 0x0000(0x0010)  (Parm)
	};

	/**
	 * Function UMG.CanvasPanelSlot.SetMinimum
	 */
	struct UCanvasPanelSlot_SetMinimum_Params
	{
	public:
		struct FVector2D                                           InMinimumAnchors;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.CanvasPanelSlot.SetMaximum
	 */
	struct UCanvasPanelSlot_SetMaximum_Params
	{
	public:
		struct FVector2D                                           InMaximumAnchors;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.CanvasPanelSlot.SetAutoSize
	 */
	struct UCanvasPanelSlot_SetAutoSize_Params
	{
	public:
		bool                                                       InbAutoSize;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.CanvasPanelSlot.SetAnchors
	 */
	struct UCanvasPanelSlot_SetAnchors_Params
	{
	public:
		struct FAnchors                                            InAnchors;                                               // 0x0000(0x0010)  (Parm)
	};

	/**
	 * Function UMG.CanvasPanelSlot.SetAlignment
	 */
	struct UCanvasPanelSlot_SetAlignment_Params
	{
	public:
		struct FVector2D                                           InAlignment;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.CanvasPanelSlot.GetSize
	 */
	struct UCanvasPanelSlot_GetSize_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.CanvasPanelSlot.GetPosition
	 */
	struct UCanvasPanelSlot_GetPosition_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.CanvasPanelSlot.GetAnchors
	 */
	struct UCanvasPanelSlot_GetAnchors_Params
	{
	public:
		struct FAnchors                                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.GridSlot.SetVerticalAlignment
	 */
	struct UGridSlot_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.GridSlot.SetRowSpan
	 */
	struct UGridSlot_SetRowSpan_Params
	{
	public:
		int32_t                                                    InRowSpan;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.GridSlot.SetRow
	 */
	struct UGridSlot_SetRow_Params
	{
	public:
		int32_t                                                    InRow;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.GridSlot.SetHorizontalAlignment
	 */
	struct UGridSlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.GridSlot.SetColumnSpan
	 */
	struct UGridSlot_SetColumnSpan_Params
	{
	public:
		int32_t                                                    InColumnSpan;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.GridSlot.SetColumn
	 */
	struct UGridSlot_SetColumn_Params
	{
	public:
		int32_t                                                    InColumn;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.HorizontalBoxSlot.SetVerticalAlignment
	 */
	struct UHorizontalBoxSlot_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.HorizontalBoxSlot.SetSize
	 */
	struct UHorizontalBoxSlot_SetSize_Params
	{
	public:
		struct FSlateChildSize                                     InSize;                                                  // 0x0000(0x0008)  (Parm)
	};

	/**
	 * Function UMG.HorizontalBoxSlot.SetPadding
	 */
	struct UHorizontalBoxSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm)
	};

	/**
	 * Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
	 */
	struct UHorizontalBoxSlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.OverlaySlot.SetVerticalAlignment
	 */
	struct UOverlaySlot_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.OverlaySlot.SetPadding
	 */
	struct UOverlaySlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm)
	};

	/**
	 * Function UMG.OverlaySlot.SetHorizontalAlignment
	 */
	struct UOverlaySlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.ScaleBoxSlot.SetVerticalAlignment
	 */
	struct UScaleBoxSlot_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.ScaleBoxSlot.SetPadding
	 */
	struct UScaleBoxSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm)
	};

	/**
	 * Function UMG.ScaleBoxSlot.SetHorizontalAlignment
	 */
	struct UScaleBoxSlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.ScrollBoxSlot.SetPadding
	 */
	struct UScrollBoxSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm)
	};

	/**
	 * Function UMG.ScrollBoxSlot.SetHorizontalAlignment
	 */
	struct UScrollBoxSlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.SizeBoxSlot.SetVerticalAlignment
	 */
	struct USizeBoxSlot_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.SizeBoxSlot.SetPadding
	 */
	struct USizeBoxSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm)
	};

	/**
	 * Function UMG.SizeBoxSlot.SetHorizontalAlignment
	 */
	struct USizeBoxSlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.UniformGridSlot.SetVerticalAlignment
	 */
	struct UUniformGridSlot_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.UniformGridSlot.SetRow
	 */
	struct UUniformGridSlot_SetRow_Params
	{
	public:
		int32_t                                                    InRow;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.UniformGridSlot.SetHorizontalAlignment
	 */
	struct UUniformGridSlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.UniformGridSlot.SetColumn
	 */
	struct UUniformGridSlot_SetColumn_Params
	{
	public:
		int32_t                                                    InColumn;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.VerticalBoxSlot.SetVerticalAlignment
	 */
	struct UVerticalBoxSlot_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.VerticalBoxSlot.SetSize
	 */
	struct UVerticalBoxSlot_SetSize_Params
	{
	public:
		struct FSlateChildSize                                     InSize;                                                  // 0x0000(0x0008)  (Parm)
	};

	/**
	 * Function UMG.VerticalBoxSlot.SetPadding
	 */
	struct UVerticalBoxSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm)
	};

	/**
	 * Function UMG.VerticalBoxSlot.SetHorizontalAlignment
	 */
	struct UVerticalBoxSlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
	 */
	struct UWidgetSwitcherSlot_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.WidgetSwitcherSlot.SetPadding
	 */
	struct UWidgetSwitcherSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm)
	};

	/**
	 * Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
	 */
	struct UWidgetSwitcherSlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.CircularThrobber.SetRadius
	 */
	struct UCircularThrobber_SetRadius_Params
	{
	public:
		float                                                      InRadius;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.CircularThrobber.SetPeriod
	 */
	struct UCircularThrobber_SetPeriod_Params
	{
	public:
		float                                                      InPeriod;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.CircularThrobber.SetNumberOfPieces
	 */
	struct UCircularThrobber_SetNumberOfPieces_Params
	{
	public:
		int32_t                                                    InNumberOfPieces;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.ComboBoxString.SetSelectedOption
	 */
	struct UComboBoxString_SetSelectedOption_Params
	{
	public:
		class FString                                              Option;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function UMG.ComboBoxString.SetSelectedIndex
	 */
	struct UComboBoxString_SetSelectedIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.ComboBoxString.RemoveOption
	 */
	struct UComboBoxString_RemoveOption_Params
	{
	public:
		class FString                                              Option;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.ComboBoxString.RefreshOptions
	 */
	struct UComboBoxString_RefreshOptions_Params
	{	};

	/**
	 * Function UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
	 */
	struct UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
	 */
	struct UComboBoxString_OnOpeningEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG.ComboBoxString.GetSelectedOption
	 */
	struct UComboBoxString_GetSelectedOption_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function UMG.ComboBoxString.GetSelectedIndex
	 */
	struct UComboBoxString_GetSelectedIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.ComboBoxString.GetOptionAtIndex
	 */
	struct UComboBoxString_GetOptionAtIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V6N2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function UMG.ComboBoxString.FindOptionIndex
	 */
	struct UComboBoxString_FindOptionIndex_Params
	{
	public:
		class FString                                              Option;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.ComboBoxString.ClearSelection
	 */
	struct UComboBoxString_ClearSelection_Params
	{	};

	/**
	 * Function UMG.ComboBoxString.ClearOptions
	 */
	struct UComboBoxString_ClearOptions_Params
	{	};

	/**
	 * Function UMG.ComboBoxString.AddOption
	 */
	struct UComboBoxString_AddOption_Params
	{
	public:
		class FString                                              Option;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function UMG.EditableTextBox.SetText
	 */
	struct UEditableTextBox_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UMG.EditableTextBox.SetError
	 */
	struct UEditableTextBox_SetError_Params
	{
	public:
		class FText                                                InError;                                                 // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG.EditableTextBox.GetText
	 */
	struct UEditableTextBox_GetText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.EditableTextBox.ClearError
	 */
	struct UEditableTextBox_ClearError_Params
	{	};

	/**
	 * Function UMG.Image.SetOpacity
	 */
	struct UImage_SetOpacity_Params
	{
	public:
		float                                                      InOpacity;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Image.SetColorAndOpacity
	 */
	struct UImage_SetColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        InColorAndOpacity;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Image.SetBrushFromTexture
	 */
	struct UImage_SetBrushFromTexture_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Image.SetBrushFromMaterial
	 */
	struct UImage_SetBrushFromMaterial_Params
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Image.SetBrushFromAsset
	 */
	struct UImage_SetBrushFromAsset_Params
	{
	public:
		class USlateBrushAsset*                                    Asset;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Image.GetDynamicMaterial
	 */
	struct UImage_GetDynamicMaterial_Params
	{
	public:
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.MultiLineEditableText.SetText
	 */
	struct UMultiLineEditableText_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
	 */
	struct UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
	 */
	struct UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG.MultiLineEditableText.GetText
	 */
	struct UMultiLineEditableText_GetText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.MultiLineEditableTextBox.SetText
	 */
	struct UMultiLineEditableTextBox_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UMG.MultiLineEditableTextBox.SetError
	 */
	struct UMultiLineEditableTextBox_SetError_Params
	{
	public:
		class FText                                                InError;                                                 // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG.MultiLineEditableTextBox.GetText
	 */
	struct UMultiLineEditableTextBox_GetText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.CanvasPanel.SetColorAndOpacity
	 */
	struct UCanvasPanel_SetColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        InColorAndOpacity;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.CheckBox.SetIsChecked
	 */
	struct UCheckBox_SetIsChecked_Params
	{
	public:
		bool                                                       InIsChecked;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.CheckBox.SetCheckedState
	 */
	struct UCheckBox_SetCheckedState_Params
	{
	public:
		ESlateCheckBoxState                                        InCheckedState;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.CheckBox.OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UCheckBox_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.CheckBox.IsPressed
	 */
	struct UCheckBox_IsPressed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.CheckBox.IsChecked
	 */
	struct UCheckBox_IsChecked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.CheckBox.GetCheckedState
	 */
	struct UCheckBox_GetCheckedState_Params
	{
	public:
		ESlateCheckBoxState                                        ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.MenuAnchor.SetIsOpen
	 */
	struct UMenuAnchor_SetIsOpen_Params
	{
	public:
		bool                                                       InIsOpen;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFocusMenu;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.MenuAnchor.SetIgnoreClicksOutside
	 */
	struct UMenuAnchor_SetIgnoreClicksOutside_Params
	{
	public:
		bool                                                       Ignore;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.MenuAnchor.OnIsOpenChanged__DelegateSignature
	 */
	struct UMenuAnchor_OnIsOpenChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.MenuAnchor.IsOpen
	 */
	struct UMenuAnchor_IsOpen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.MenuAnchor.GetIgnoreClicksOutside
	 */
	struct UMenuAnchor_GetIgnoreClicksOutside_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.SizeBox.SetWidthOverride
	 */
	struct USizeBox_SetWidthOverride_Params
	{
	public:
		float                                                      InWidthOverride;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.SizeBox.SetMinDesiredWidth
	 */
	struct USizeBox_SetMinDesiredWidth_Params
	{
	public:
		float                                                      InMinDesiredWidth;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.SizeBox.SetMinDesiredHeight
	 */
	struct USizeBox_SetMinDesiredHeight_Params
	{
	public:
		float                                                      InMinDesiredHeight;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.SizeBox.SetMaxDesiredWidth
	 */
	struct USizeBox_SetMaxDesiredWidth_Params
	{
	public:
		float                                                      InMaxDesiredWidth;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.SizeBox.SetMaxDesiredHeight
	 */
	struct USizeBox_SetMaxDesiredHeight_Params
	{
	public:
		float                                                      InMaxDesiredHeight;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.SizeBox.SetHeightOverride
	 */
	struct USizeBox_SetHeightOverride_Params
	{
	public:
		float                                                      InHeightOverride;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.SizeBox.ClearWidthOverride
	 */
	struct USizeBox_ClearWidthOverride_Params
	{	};

	/**
	 * Function UMG.SizeBox.ClearMinDesiredWidth
	 */
	struct USizeBox_ClearMinDesiredWidth_Params
	{	};

	/**
	 * Function UMG.SizeBox.ClearMinDesiredHeight
	 */
	struct USizeBox_ClearMinDesiredHeight_Params
	{	};

	/**
	 * Function UMG.SizeBox.ClearMaxDesiredWidth
	 */
	struct USizeBox_ClearMaxDesiredWidth_Params
	{	};

	/**
	 * Function UMG.SizeBox.ClearMaxDesiredHeight
	 */
	struct USizeBox_ClearMaxDesiredHeight_Params
	{	};

	/**
	 * Function UMG.SizeBox.ClearHeightOverride
	 */
	struct USizeBox_ClearHeightOverride_Params
	{	};

	/**
	 * Function UMG.Viewport.Spawn
	 */
	struct UViewport_Spawn_Params
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Viewport.SetViewRotation
	 */
	struct UViewport_SetViewRotation_Params
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Viewport.SetViewLocation
	 */
	struct UViewport_SetViewLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Viewport.GetViewRotation
	 */
	struct UViewport_GetViewRotation_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Viewport.GetViewportWorld
	 */
	struct UViewport_GetViewportWorld_Params
	{
	public:
		class UWorld*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Viewport.GetViewLocation
	 */
	struct UViewport_GetViewLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.GridPanel.AddChildToGrid
	 */
	struct UGridPanel_AddChildToGrid_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UGridSlot*                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.HorizontalBox.AddChildToHorizontalBox
	 */
	struct UHorizontalBox_AddChildToHorizontalBox_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UHorizontalBoxSlot*                                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Overlay.AddChildToOverlay
	 */
	struct UOverlay_AddChildToOverlay_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UOverlaySlot*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.ScrollBar.SetState
	 */
	struct UScrollBar_SetState_Params
	{
	public:
		float                                                      InOffsetFraction;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      InThumbSizeFraction;                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.UniformGridPanel.AddChildToUniformGrid
	 */
	struct UUniformGridPanel_AddChildToUniformGrid_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UUniformGridSlot*                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.VerticalBox.AddChildVerticalBox
	 */
	struct UVerticalBox_AddChildVerticalBox_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UVerticalBoxSlot*                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.WidgetSwitcher.SetActiveWidgetIndex
	 */
	struct UWidgetSwitcher_SetActiveWidgetIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.WidgetSwitcher.SetActiveWidget
	 */
	struct UWidgetSwitcher_SetActiveWidget_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.WidgetSwitcher.GetNumWidgets
	 */
	struct UWidgetSwitcher_GetNumWidgets_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.WidgetSwitcher.GetActiveWidgetIndex
	 */
	struct UWidgetSwitcher_GetActiveWidgetIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.ProgressBar.SetPercentInterpolationKey
	 */
	struct UProgressBar_SetPercentInterpolationKey_Params
	{
	public:
		int32_t                                                    InterpKey;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.ProgressBar.SetPercent
	 */
	struct UProgressBar_SetPercent_Params
	{
	public:
		float                                                      InPercent;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    InterpKey;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.ProgressBar.SetIsMarquee
	 */
	struct UProgressBar_SetIsMarquee_Params
	{
	public:
		bool                                                       InbIsMarquee;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Slider.SetValue
	 */
	struct USlider_SetValue_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Slider.SetSliderHandleColor
	 */
	struct USlider_SetSliderHandleColor_Params
	{
	public:
		struct FLinearColor                                        InSliderHandleColor;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Slider.SetSliderBarColor
	 */
	struct USlider_SetSliderBarColor_Params
	{
	public:
		struct FLinearColor                                        InSliderBarColor;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Slider.OnMouseCaptureEndEvent__DelegateSignature
	 */
	struct USlider_OnMouseCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG.Slider.OnMouseCaptureBeginEvent__DelegateSignature
	 */
	struct USlider_OnMouseCaptureBeginEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG.Slider.OnFloatValueChangedEvent__DelegateSignature
	 */
	struct USlider_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Slider.GetValue
	 */
	struct USlider_GetValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Spacer.SetSize
	 */
	struct USpacer_SetSize_Params
	{
	public:
		struct FVector2D                                           InSize;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.SpinBox.SetValue
	 */
	struct USpinBox_SetValue_Params
	{
	public:
		float                                                      newValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.SpinBox.SetMinValue
	 */
	struct USpinBox_SetMinValue_Params
	{
	public:
		float                                                      newValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.SpinBox.SetMinSliderValue
	 */
	struct USpinBox_SetMinSliderValue_Params
	{
	public:
		float                                                      newValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.SpinBox.SetMaxValue
	 */
	struct USpinBox_SetMaxValue_Params
	{
	public:
		float                                                      newValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.SpinBox.SetMaxSliderValue
	 */
	struct USpinBox_SetMaxSliderValue_Params
	{
	public:
		float                                                      newValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.SpinBox.SetForegroundColor
	 */
	struct USpinBox_SetForegroundColor_Params
	{
	public:
		struct FSlateColor                                         InForegroundColor;                                       // 0x0000(0x0028)  (Parm)
	};

	/**
	 * Function UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
	 */
	struct USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ETextCommit                                                CommitMethod;                                            // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
	 */
	struct USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
	 */
	struct USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Params
	{	};

	/**
	 * Function UMG.SpinBox.GetValue
	 */
	struct USpinBox_GetValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.SpinBox.GetMinValue
	 */
	struct USpinBox_GetMinValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.SpinBox.GetMinSliderValue
	 */
	struct USpinBox_GetMinSliderValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.SpinBox.GetMaxValue
	 */
	struct USpinBox_GetMaxValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.SpinBox.GetMaxSliderValue
	 */
	struct USpinBox_GetMaxSliderValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.SpinBox.ClearMinValue
	 */
	struct USpinBox_ClearMinValue_Params
	{	};

	/**
	 * Function UMG.SpinBox.ClearMinSliderValue
	 */
	struct USpinBox_ClearMinSliderValue_Params
	{	};

	/**
	 * Function UMG.SpinBox.ClearMaxValue
	 */
	struct USpinBox_ClearMaxValue_Params
	{	};

	/**
	 * Function UMG.SpinBox.ClearMaxSliderValue
	 */
	struct USpinBox_ClearMaxSliderValue_Params
	{	};

	/**
	 * Function UMG.TableViewBase.OnGenerateRowUObject__DelegateSignature
	 */
	struct UTableViewBase_OnGenerateRowUObject__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.TileView.SetItemWidth
	 */
	struct UTileView_SetItemWidth_Params
	{
	public:
		float                                                      Width;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.TileView.SetItemHeight
	 */
	struct UTileView_SetItemHeight_Params
	{
	public:
		float                                                      Height;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.TileView.RequestListRefresh
	 */
	struct UTileView_RequestListRefresh_Params
	{	};

	/**
	 * Function UMG.TextBlock.SetText
	 */
	struct UTextBlock_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UMG.TextBlock.SetString
	 */
	struct UTextBlock_SetString_Params
	{
	public:
		class FString                                              InString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function UMG.TextBlock.SetShadowOffset
	 */
	struct UTextBlock_SetShadowOffset_Params
	{
	public:
		struct FVector2D                                           InShadowOffset;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.TextBlock.SetShadowColorAndOpacity
	 */
	struct UTextBlock_SetShadowColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        InShadowColorAndOpacity;                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.TextBlock.SetJustification
	 */
	struct UTextBlock_SetJustification_Params
	{
	public:
		ETextJustify                                               Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.TextBlock.SetColorAndOpacity
	 */
	struct UTextBlock_SetColorAndOpacity_Params
	{
	public:
		struct FSlateColor                                         InColorAndOpacity;                                       // 0x0000(0x0028)  (Parm)
	};

	/**
	 * Function UMG.TextBlock.GetText
	 */
	struct UTextBlock_GetText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.Throbber.SetNumberOfPieces
	 */
	struct UThrobber_SetNumberOfPieces_Params
	{
	public:
		int32_t                                                    InNumberOfPieces;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Throbber.SetAnimateVertically
	 */
	struct UThrobber_SetAnimateVertically_Params
	{
	public:
		bool                                                       bInAnimateVertically;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Throbber.SetAnimateOpacity
	 */
	struct UThrobber_SetAnimateOpacity_Params
	{
	public:
		bool                                                       bInAnimateOpacity;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.Throbber.SetAnimateHorizontally
	 */
	struct UThrobber_SetAnimateHorizontally_Params
	{
	public:
		bool                                                       bInAnimateHorizontally;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.Unhandled
	 */
	struct UWidgetBlueprintLibrary_Unhandled_Params
	{
	public:
		struct FEventReply                                         ReturnValue;                                             // 0x0000(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
	 */
	struct UWidgetBlueprintLibrary_SetInputMode_UIOnly_Params
	{
	public:
		class APlayerController*                                   Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UWidget*                                             InWidgetToFocus;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLockMouseToViewport;                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
	 */
	struct UWidgetBlueprintLibrary_SetInputMode_GameOnly_Params
	{
	public:
		class APlayerController*                                   Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
	 */
	struct UWidgetBlueprintLibrary_SetInputMode_GameAndUI_Params
	{
	public:
		class APlayerController*                                   Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UWidget*                                             InWidgetToFocus;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLockMouseToViewport;                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
	 */
	struct UWidgetBlueprintLibrary_SetFocusToGameViewport_Params
	{	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
	 */
	struct UWidgetBlueprintLibrary_ReleaseMouseCapture_Params
	{
	public:
		struct FEventReply                                         Reply;                                                   // 0x0000(0x00A0)  (Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A0(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
	 */
	struct UWidgetBlueprintLibrary_ReleaseJoystickCapture_Params
	{
	public:
		struct FEventReply                                         Reply;                                                   // 0x0000(0x00A0)  (Parm, OutParm, ReferenceParm)
		bool                                                       bInAllJoysticks;                                         // 0x00A0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EQP3[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.NoResourceBrush
	 */
	struct UWidgetBlueprintLibrary_NoResourceBrush_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0078)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
	 */
	struct UWidgetBlueprintLibrary_MakeBrushFromTexture_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Width;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Height;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FSlateBrush                                         ReturnValue;                                             // 0x0010(0x0078)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
	 */
	struct UWidgetBlueprintLibrary_MakeBrushFromMaterial_Params
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Width;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Height;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FSlateBrush                                         ReturnValue;                                             // 0x0010(0x0078)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
	 */
	struct UWidgetBlueprintLibrary_MakeBrushFromAsset_Params
	{
	public:
		class USlateBrushAsset*                                    BrushAsset;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FSlateBrush                                         ReturnValue;                                             // 0x0008(0x0078)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.Handled
	 */
	struct UWidgetBlueprintLibrary_Handled_Params
	{
	public:
		struct FEventReply                                         ReturnValue;                                             // 0x0000(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.EndDragDrop
	 */
	struct UWidgetBlueprintLibrary_EndDragDrop_Params
	{
	public:
		struct FEventReply                                         Reply;                                                   // 0x0000(0x00A0)  (Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A0(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.DrawText
	 */
	struct UWidgetBlueprintLibrary_DrawText_Params
	{
	public:
		struct FPaintContext                                       Context;                                                 // 0x0000(0x0030)  (Parm, OutParm, ReferenceParm)
		class FString                                              InString;                                                // 0x0030(0x0010)  (Parm, ZeroConstructor)
		struct FVector2D                                           Position;                                                // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        Tint;                                                    // 0x0048(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.DrawLine
	 */
	struct UWidgetBlueprintLibrary_DrawLine_Params
	{
	public:
		struct FPaintContext                                       Context;                                                 // 0x0000(0x0030)  (Parm, OutParm, ReferenceParm)
		struct FVector2D                                           PositionA;                                               // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           PositionB;                                               // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Thickness;                                               // 0x0040(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        Tint;                                                    // 0x0044(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAntiAlias;                                              // 0x0054(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.DrawBox
	 */
	struct UWidgetBlueprintLibrary_DrawBox_Params
	{
	public:
		struct FPaintContext                                       Context;                                                 // 0x0000(0x0030)  (Parm, OutParm, ReferenceParm)
		struct FVector2D                                           Position;                                                // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           Size;                                                    // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USlateBrushAsset*                                    Brush;                                                   // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        Tint;                                                    // 0x0048(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
	 */
	struct UWidgetBlueprintLibrary_DetectDragIfPressed_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
		class UWidget*                                             WidgetDetectingDrag;                                     // 0x0078(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FKey                                                DragKey;                                                 // 0x0080(0x0018)  (Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0098(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.DetectDrag
	 */
	struct UWidgetBlueprintLibrary_DetectDrag_Params
	{
	public:
		struct FEventReply                                         Reply;                                                   // 0x0000(0x00A0)  (Parm, OutParm, ReferenceParm)
		class UWidget*                                             WidgetDetectingDrag;                                     // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FKey                                                DragKey;                                                 // 0x00A8(0x0018)  (Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x00C0(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
	 */
	struct UWidgetBlueprintLibrary_CreateDragDropOperation_Params
	{
	public:
		class UClass*                                              OperationClass;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UDragDropOperation*                                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.Create
	 */
	struct UWidgetBlueprintLibrary_Create_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              WidgetType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APlayerController*                                   OwningPlayer;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UUserWidget*                                         ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.CaptureMouse
	 */
	struct UWidgetBlueprintLibrary_CaptureMouse_Params
	{
	public:
		struct FEventReply                                         Reply;                                                   // 0x0000(0x00A0)  (Parm, OutParm, ReferenceParm)
		class UWidget*                                             CapturingWidget;                                         // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.CaptureJoystick
	 */
	struct UWidgetBlueprintLibrary_CaptureJoystick_Params
	{
	public:
		struct FEventReply                                         Reply;                                                   // 0x0000(0x00A0)  (Parm, OutParm, ReferenceParm)
		class UWidget*                                             CapturingWidget;                                         // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInAllJoysticks;                                         // 0x00A8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DSRU[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
	 */
	struct UWidgetLayoutLibrary_SlotAsUniformGridSlot_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UUniformGridSlot*                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
	 */
	struct UWidgetLayoutLibrary_SlotAsGridSlot_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UGridSlot*                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
	 */
	struct UWidgetLayoutLibrary_SlotAsCanvasSlot_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UCanvasPanelSlot*                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.WidgetLayoutLibrary.GetViewportSize
	 */
	struct UWidgetLayoutLibrary_GetViewportSize_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG.WidgetLayoutLibrary.GetViewportScale
	 */
	struct UWidgetLayoutLibrary_GetViewportScale_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
