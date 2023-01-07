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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class UMG.Visual
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVisual : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Widget
	 * Size -> 0x0160 (FullSize[0x0188] - InheritedSize[0x0028])
	 */
	class UWidget : public UVisual
	{
	public:
		bool                                                       bIsVariable;                                             // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bCreatedByConstructionScript;                            // 0x0029(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O9ZX[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPanelSlot*                                          Slot;                                                    // 0x0030(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor
		bool                                                       bIsEnabled;                                              // 0x0038(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HKIC[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CustomData;                                              // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FScriptDelegate                                      bIsEnabledDelegate;                                      // 0x0050(0x0010) ZeroConstructor, InstancedReference, NoDestructor
		class FText                                                ToolTipText;                                             // 0x0060(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_ADXW[0x10];                                  // 0x0078(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FScriptDelegate                                      ToolTipTextDelegate;                                     // 0x0088(0x0010) ZeroConstructor, InstancedReference, NoDestructor
		bool                                                       bUseCustomTooltip;                                       // 0x0098(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EAlignHorizontalUI                                         CustomToolTipHorizontalAlignment;                        // 0x0099(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EAlignVerticalUI                                           CustomToolTipVerticalAlignment;                          // 0x009A(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EOrientation                                               CustomToolTipOrientation;                                // 0x009B(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      GamepadSelectClosestDistanceMultiplier;                  // 0x009C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDisableAxisOrientedSweepTestOnMe;                       // 0x00A0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1ZN7[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CustomToolTipBlueprintOverride;                          // 0x00A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           CustomToolTipPadding;                                    // 0x00B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              CustomToolTipString;                                     // 0x00B8(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance
		unsigned char                                              UnknownData_BTWB[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESlateVisibility                                           Visiblity;                                               // 0x00D0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2AHL[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      VisiblityDelegate;                                       // 0x00D4(0x0010) ZeroConstructor, InstancedReference, NoDestructor
		EMouseCursor                                               Cursor;                                                  // 0x00E4(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_F9O9[0x3];                                   // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      CursorDelegate;                                          // 0x00E8(0x0010) ZeroConstructor, InstancedReference, NoDestructor
		struct FWidgetTransform                                    RenderTransform;                                         // 0x00F8(0x001C) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
		struct FVector2D                                           RenderTransformPivot;                                    // 0x0114(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Highlightable;                                           // 0x011C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDontRenderHighlight;                                    // 0x011D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseWindowClippingForHighlight;                          // 0x011E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bPrimalSetupSpecialAdjacents;                            // 0x011F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                AdjacentUpName;                                          // 0x0120(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                AdjacentDownName;                                        // 0x0128(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                AdjacentRightName;                                       // 0x0130(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                AdjacentLeftName;                                        // 0x0138(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NOIX[0x40];                                  // 0x0140(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bDesignTime;                                             // 0x0180(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_E7DW[0x7];                                   // 0x0181(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetVisibility(ESlateVisibility InVisibility);
		void SetToolTipText(const class FText& InToolTipText);
		void SetRenderTranslation(const struct FVector2D& Translation);
		void SetRenderTransformPivot(const struct FVector2D& Pivot);
		void SetRenderTransform(const struct FWidgetTransform& InTransform);
		void SetRenderShear(const struct FVector2D& Shear);
		void SetRenderScale(const struct FVector2D& Scale);
		void SetRenderAngle(float Angle);
		void SetKeyboardFocus();
		void SetIsEnabled(bool bInIsEnabled);
		void RemoveFromParent();
		struct FEventReply OnReply__DelegateSignature();
		struct FEventReply OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		bool IsHovered();
		bool HasMouseCapture();
		bool HasKeyboardFocus();
		bool HasFocusedDescendants();
		ESlateVisibility GetVisibility();
		struct FVector GetVector__DelegateSignature();
		struct FVector2D GetVector2D__DelegateSignature();
		class FText GetText__DelegateSignature();
		ESlateVisibility GetSlateVisibility__DelegateSignature();
		struct FLinearColor GetSlateColor__DelegateSignature();
		class USlateBrushAsset* GetSlateBrushAsset__DelegateSignature();
		struct FSlateBrush GetSlateBrush__DelegateSignature();
		class UPanelWidget* GetParent();
		EMouseCursor GetMouseCursor__DelegateSignature();
		struct FMargin GetMargin__DelegateSignature();
		struct FLinearColor GetLinearColor__DelegateSignature();
		bool GetIsThisAndParentsEnabled();
		bool GetIsEnabled();
		int32_t GetInt32__DelegateSignature();
		float GetFloat__DelegateSignature();
		struct FVector2D GetDesiredSize();
		class UWidget* GetContent__DelegateSignature();
		ESlateCheckBoxState GetCheckBoxState__DelegateSignature();
		bool GetBool__DelegateSignature();
		class UWidget* GenerateWidgetForString__DelegateSignature(const class FString& Item);
		class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);
		void ForceLayoutPrepass();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UserWidget
	 * Size -> 0x00B8 (FullSize[0x0240] - InheritedSize[0x0188])
	 */
	class UUserWidget : public UWidget
	{
	public:
		int32_t                                                    SceneStackPriority;                                      // 0x0188(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bSupportsKeyboardFocus;                                  // 0x018C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_S499[0x3];                                   // 0x018D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DPIScaler;                                               // 0x0190(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V363[0x4];                                   // 0x0194(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWidget*>                                     Components;                                              // 0x0198(0x0010) ZeroConstructor, Transient
		class UWidgetTree*                                         WidgetTree;                                              // 0x01A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		TArray<class UUMGSequencePlayer*>                          ActiveSequencePlayers;                                   // 0x01B0(0x0010) ZeroConstructor, Transient
		TArray<class UUMGSequencePlayer*>                          StoppedSequencePlayers;                                  // 0x01C0(0x0010) ZeroConstructor, Transient
		unsigned char                                              UnknownData_MI6V[0x70];                                  // 0x01D0(0x0070) MISSED OFFSET (PADDING)

	public:
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void StopAnimationByString(const class FString& Name);
		void StopAnimation(class UWidgetAnimation* InAnimation);
		void SetZOrderInViewport(int32_t ZOrder);
		void SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale);
		void SetDesiredSizeInViewport(const struct FVector2D& Size);
		void SetAnchorsInViewport(const struct FAnchors& Anchors);
		void SetAlignmentInViewport(const struct FVector2D& Alignment);
		void RemoveFromViewport();
		bool PlayAnimationByString(const class FString& Name);
		void PlayAnimation(class UWidgetAnimation* InAnimation);
		void OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility Visibility);
		struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
		struct FEventReply OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
		struct FEventReply OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent);
		struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
		struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyboardEvent& InKeyboardEvent);
		void OnPaint(struct FPaintContext* Context);
		struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
		struct FEventReply OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent);
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyboardEvent& InKeyboardEvent);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyboardEvent& InKeyboardEvent);
		struct FEventReply OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent);
		struct FEventReply OnKeyboardFocusReceived(const struct FGeometry& MyGeometry, const struct FKeyboardFocusEvent& InKeyboardFocusEvent);
		void OnKeyboardFocusLost(const struct FKeyboardFocusEvent& InKeyboardFocusEvent);
		bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
		void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		struct FEventReply OnControllerButtonReleased(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent);
		struct FEventReply OnControllerButtonPressed(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent);
		struct FEventReply OnControllerAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent);
		void OnConstructEvent__DelegateSignature();
		ESlateVisibility GetVisiblity();
		class APawn* GetOwningPlayerPawn();
		class APlayerController* GetOwningPlayer();
		class ULocalPlayer* GetOwningLocalPlayer();
		bool GetIsVisible();
		void Construct();
		void CloseScene();
		void AddToViewport();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.PanelWidget
	 * Size -> 0x0018 (FullSize[0x01A0] - InheritedSize[0x0188])
	 */
	class UPanelWidget : public UWidget
	{
	public:
		TArray<class UPanelSlot*>                                  Slots;                                                   // 0x0188(0x0010) ZeroConstructor
		bool                                                       ClipChildren;                                            // 0x0198(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseScaledClipForChildren;                                // 0x0199(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bCanNavigateToDifferentPanel;                            // 0x019A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bHighlightInsteadOfChild;                                // 0x019B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8WEE[0x4];                                   // 0x019C(0x0004) MISSED OFFSET (PADDING)

	public:
		bool RemoveChildAt(int32_t index);
		bool RemoveChild(class UWidget* Content);
		void InsertChildAt(int32_t index, class UWidget* Content);
		bool HasAnyChildren();
		int32_t GetChildrenCount();
		int32_t GetChildIndex(class UWidget* Content);
		class UWidget* GetChildAt(int32_t index);
		void ClearChildren();
		class UPanelSlot* AddChild(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ContentWidget
	 * Size -> 0x0000 (FullSize[0x01A0] - InheritedSize[0x01A0])
	 */
	class UContentWidget : public UPanelWidget
	{
	public:
		class UPanelSlot* GetContentSlot();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Button
	 * Size -> 0x02F0 (FullSize[0x0490] - InheritedSize[0x01A0])
	 */
	class UButton : public UContentWidget
	{
	public:
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x01A0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		struct FButtonStyle                                        WidgetStyle;                                             // 0x01A8(0x0248) Edit, BlueprintVisible
		bool                                                       bUseDisabledStyle;                                       // 0x03F0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AAL8[0x3];                                   // 0x03F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ColorAndOpacity;                                         // 0x03F4(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        BackgroundColor;                                         // 0x0404(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EButtonClickMethod                                         ClickMethod;                                             // 0x0414(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		EButtonTouchMethod                                         TouchMethod;                                             // 0x0415(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_9Q14[0x2];                                   // 0x0416(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       IsFocusable : 1;                                         // 0x0418(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay
		bool                                                       bForceHandleMouseDown : 1;                               // 0x0418(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay
		bool                                                       bRedirectGamepadPressToClick : 1;                        // 0x0418(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_NH43[0x7];                                   // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x0420(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnClickedObject;                                         // 0x0430(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnSecondaryClicked;                                      // 0x0440(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnSecondaryClickedObject;                                // 0x0450(0x0010) ZeroConstructor, InstancedReference
		class FScriptMulticastDelegate                             OnGamepadClicked;                                        // 0x0460(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnGamepadClickedObject;                                  // 0x0470(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_SRZ6[0x10];                                  // 0x0480(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
		void SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
		void OnButtonClickedEventObject__DelegateSignature(class UWidget* clickedWidget);
		void OnButtonClickedEvent__DelegateSignature();
		void MimickClicked(bool bFromGamepad);
		bool IsPressed();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ScrollBox
	 * Size -> 0x04A0 (FullSize[0x0640] - InheritedSize[0x01A0])
	 */
	class UScrollBox : public UPanelWidget
	{
	public:
		struct FScrollBoxStyle                                     WidgetStyle;                                             // 0x01A0(0x01E8) Edit, BlueprintVisible
		struct FScrollBarStyle                                     WidgetBarStyle;                                          // 0x0388(0x0260) Edit, BlueprintVisible
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x05E8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class USlateWidgetStyleAsset*                              BarStyle;                                                // 0x05F0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		EOrientation                                               Orientation;                                             // 0x05F8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VMW2[0x3];                                   // 0x05F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumPreviewWidgets;                                       // 0x05FC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    NumWidgetsBeforeWrapping;                                // 0x0600(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           WidgetSize;                                              // 0x0604(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           WidgetPadding;                                           // 0x060C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EHorizontalAlignment                                       WidgetHorizontalAlignment;                               // 0x0614(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EVerticalAlignment                                         WidgetVerticalAlignment;                                 // 0x0615(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseWidgetPaddingAsMargin;                                // 0x0616(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0KNC[0x1];                                   // 0x0617(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             WidgetMargin;                                            // 0x0618(0x0010) Edit, DisableEditOnInstance
		bool                                                       bGamepadMovementMovesScrollBox;                          // 0x0628(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPrimalAllowRightSpecialStickScroll;                     // 0x0629(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6MXL[0x16];                                  // 0x062A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetScrollOffset(float NewScrollOffset);
		float GetScrollOffset();
		float GetScrollMax();
		struct FVector2D GetScrollContentSize();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Border
	 * Size -> 0x0140 (FullSize[0x02E0] - InheritedSize[0x01A0])
	 */
	class UBorder : public UContentWidget
	{
	public:
		struct FLinearColor                                        ContentColorAndOpacity;                                  // 0x01A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptDelegate                                      ContentColorAndOpacityDelegate;                          // 0x01B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor
		struct FMargin                                             Padding;                                                 // 0x01C0(0x0010) Edit, DisableEditOnInstance
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x01D0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x01D1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KB4G[0x6];                                   // 0x01D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         Background;                                              // 0x01D8(0x0078) Edit, DisableEditOnInstance
		class FScriptDelegate                                      BackgroundDelegate;                                      // 0x0250(0x0010) ZeroConstructor, InstancedReference, NoDestructor
		struct FLinearColor                                        BrushColor;                                              // 0x0260(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptDelegate                                      BrushColorDelegate;                                      // 0x0270(0x0010) ZeroConstructor, InstancedReference, NoDestructor
		bool                                                       bShowEffectWhenDisabled;                                 // 0x0280(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_LP5P[0x3];                                   // 0x0281(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnMouseButtonDownEvent;                                  // 0x0284(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor
		class FScriptDelegate                                      OnMouseButtonUpEvent;                                    // 0x0294(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor
		class FScriptDelegate                                      OnMouseMoveEvent;                                        // 0x02A4(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor
		class FScriptDelegate                                      OnMouseDoubleClickEvent;                                 // 0x02B4(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor
		unsigned char                                              UnknownData_5VHN[0x14];                                  // 0x02C4(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USlateBrushAsset*                                    Brush;                                                   // 0x02D8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		void SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity);
		void SetBrushFromTexture(class UTexture2D* Texture);
		void SetBrushFromMaterial(class UMaterialInterface* Material);
		void SetBrushFromAsset(class USlateBrushAsset* Asset);
		void SetBrushColor(const struct FLinearColor& InBrushColor);
		class UMaterialInstanceDynamic* GetDynamicMaterial();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.EditableText
	 * Size -> 0x0350 (FullSize[0x04D8] - InheritedSize[0x0188])
	 */
	class UEditableText : public UWidget
	{
	public:
		class FText                                                Text;                                                    // 0x0188(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_YS1Q[0x10];                                  // 0x01A0(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FScriptDelegate                                      TextDelegate;                                            // 0x01B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor
		class FText                                                HintText;                                                // 0x01C0(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_BVL6[0x10];                                  // 0x01D8(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FScriptDelegate                                      HintTextDelegate;                                        // 0x01E8(0x0010) ZeroConstructor, InstancedReference, NoDestructor
		struct FEditableTextStyle                                  WidgetStyle;                                             // 0x01F8(0x0230) Edit, BlueprintVisible
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x0428(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class USlateBrushAsset*                                    BackgroundImageSelected;                                 // 0x0430(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class USlateBrushAsset*                                    BackgroundImageSelectionTarget;                          // 0x0438(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class USlateBrushAsset*                                    BackgroundImageComposing;                                // 0x0440(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class USlateBrushAsset*                                    CaretImage;                                              // 0x0448(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		struct FSlateFontInfo                                      Font;                                                    // 0x0450(0x0020) Edit, DisableEditOnInstance
		struct FSlateColor                                         ColorAndOpacity;                                         // 0x0470(0x0028) Edit, DisableEditOnInstance
		bool                                                       IsReadOnly;                                              // 0x0498(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsPassword;                                              // 0x0499(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6EZS[0x2];                                   // 0x049A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumDesiredWidth;                                     // 0x049C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsCaretMovedWhenGainFocus;                               // 0x04A0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		bool                                                       SelectAllTextWhenFocused;                                // 0x04A1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		bool                                                       RevertTextOnEscape;                                      // 0x04A2(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		bool                                                       ClearKeyboardFocusOnCommit;                              // 0x04A3(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		bool                                                       SelectAllTextOnCommit;                                   // 0x04A4(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_FD4W[0x3];                                   // 0x04A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTextChanged;                                           // 0x04A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnTextCommitted;                                         // 0x04B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_9G4Y[0x10];                                  // 0x04C8(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetText(const class FText& InText);
		void SetIsReadOnly(bool InbIsReadyOnly);
		void SetIsPassword(bool InbIsPassword);
		void SetHintText(const class FText& InHintText);
		void OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		class FText GetText();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.DragDropOperation
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UDragDropOperation : public UObject
	{
	public:
		class FString                                              Tag;                                                     // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn
		class UObject*                                             Payload;                                                 // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		class UWidget*                                             DefaultDragVisual;                                       // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnDrop;                                                  // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnDragCancelled;                                         // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnDragged;                                               // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable

	public:
		void OnDragDropMulticast__DelegateSignature(class UDragDropOperation* Operation);
		void Drop(const struct FPointerEvent& PointerEvent);
		void Dragged(const struct FPointerEvent& PointerEvent);
		void DragCancelled(const struct FPointerEvent& PointerEvent);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieScene2DTransformSection
	 * Size -> 0x02D8 (FullSize[0x0310] - InheritedSize[0x0038])
	 */
	class UMovieScene2DTransformSection : public UMovieSceneSection
	{
	public:
		struct FRichCurve                                          Translation[0x2];                                        // 0x0038(0x00D0)
		struct FRichCurve                                          Rotation;                                                // 0x0108(0x0068)
		struct FRichCurve                                          Scale[0x2];                                              // 0x0170(0x00D0)
		struct FRichCurve                                          Shear[0x2];                                              // 0x0240(0x00D0)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieScene2DTransformTrack
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieSceneMarginSection
	 * Size -> 0x01A0 (FullSize[0x01D8] - InheritedSize[0x0038])
	 */
	class UMovieSceneMarginSection : public UMovieSceneSection
	{
	public:
		struct FRichCurve                                          TopCurve;                                                // 0x0038(0x0068)
		struct FRichCurve                                          LeftCurve;                                               // 0x00A0(0x0068)
		struct FRichCurve                                          RightCurve;                                              // 0x0108(0x0068)
		struct FRichCurve                                          BottomCurve;                                             // 0x0170(0x0068)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieSceneMarginTrack
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.NamedSlotInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNamedSlotInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SlateBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FVector2D STATIC_LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate);
		bool STATIC_IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
		struct FVector2D STATIC_GetLocalSize(const struct FGeometry& Geometry);
		struct FVector2D STATIC_AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UMGSequencePlayer
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UUMGSequencePlayer : public UObject
	{
	public:
		unsigned char                                              UnknownData_SLCF[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidgetAnimation*                                    Animation;                                               // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class UMovieSceneBindings*                                 RuntimeBindings;                                         // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8HCP[0x50];                                  // 0x0040(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.PanelSlot
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPanelSlot : public UVisual
	{
	public:
		class UPanelWidget*                                        Parent;                                                  // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidget*                                             Content;                                                 // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.BorderSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UBorderSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, DisableEditOnInstance, Protected
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_RTOE[0x16];                                  // 0x004A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ButtonSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UButtonSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, DisableEditOnInstance
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DWQL[0x16];                                  // 0x004A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.CanvasPanelSlot
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UCanvasPanelSlot : public UPanelSlot
	{
	public:
		struct FAnchorData                                         LayoutData;                                              // 0x0038(0x0028) Edit, DisableEditOnInstance
		bool                                                       bAutoSize;                                               // 0x0060(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_POE3[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ZOrder;                                                  // 0x0064(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IF8O[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetZOrder(int32_t InZOrder);
		void SetSize(const struct FVector2D& InSize);
		void SetPosition(const struct FVector2D& InPosition);
		void SetOffsets(const struct FMargin& InOffset);
		void SetMinimum(const struct FVector2D& InMinimumAnchors);
		void SetMaximum(const struct FVector2D& InMaximumAnchors);
		void SetAutoSize(bool InbAutoSize);
		void SetAnchors(const struct FAnchors& InAnchors);
		void SetAlignment(const struct FVector2D& InAlignment);
		struct FVector2D GetSize();
		struct FVector2D GetPosition();
		struct FAnchors GetAnchors();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.GridSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UGridSlot : public UPanelSlot
	{
	public:
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0038(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0039(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YFDF[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Row;                                                     // 0x003C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    RowSpan;                                                 // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    Column;                                                  // 0x0044(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    ColumnSpan;                                              // 0x0048(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    Layer;                                                   // 0x004C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           Nudge;                                                   // 0x0050(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LUFT[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetRowSpan(int32_t InRowSpan);
		void SetRow(int32_t InRow);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		void SetColumnSpan(int32_t InColumnSpan);
		void SetColumn(int32_t InColumn);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.HorizontalBoxSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UHorizontalBoxSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, DisableEditOnInstance
		struct FSlateChildSize                                     Size;                                                    // 0x0048(0x0008) Edit, DisableEditOnInstance
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0050(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0051(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TFE5[0xE];                                   // 0x0052(0x000E) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetSize(const struct FSlateChildSize& InSize);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.OverlaySlot
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UOverlaySlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, DisableEditOnInstance
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XXQ4[0xE];                                   // 0x004A(0x000E) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ScaleBoxSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UScaleBoxSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, DisableEditOnInstance
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J13Q[0x16];                                  // 0x004A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ScrollBoxSlot
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UScrollBoxSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, DisableEditOnInstance
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MN72[0xF];                                   // 0x0049(0x000F) MISSED OFFSET (PADDING)

	public:
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SizeBoxSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class USizeBoxSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, DisableEditOnInstance, Protected
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_C2H0[0x16];                                  // 0x004A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UniformGridSlot
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UUniformGridSlot : public UPanelSlot
	{
	public:
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0038(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0039(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LWJ0[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Row;                                                     // 0x003C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    Column;                                                  // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q4M3[0xC];                                   // 0x0044(0x000C) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetRow(int32_t InRow);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		void SetColumn(int32_t InColumn);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.VerticalBoxSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UVerticalBoxSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, DisableEditOnInstance
		struct FSlateChildSize                                     Size;                                                    // 0x0048(0x0008) Edit, DisableEditOnInstance
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0050(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0051(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N7GI[0xE];                                   // 0x0052(0x000E) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetSize(const struct FSlateChildSize& InSize);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetSwitcherSlot
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UWidgetSwitcherSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, DisableEditOnInstance
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XW0Y[0xE];                                   // 0x004A(0x000E) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.CircularThrobber
	 * Size -> 0x00A0 (FullSize[0x0228] - InheritedSize[0x0188])
	 */
	class UCircularThrobber : public UWidget
	{
	public:
		int32_t                                                    NumberOfPieces;                                          // 0x0188(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected
		float                                                      Period;                                                  // 0x018C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected
		float                                                      Radius;                                                  // 0x0190(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_92SJ[0x4];                                   // 0x0194(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USlateBrushAsset*                                    PieceImage;                                              // 0x0198(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected
		struct FSlateBrush                                         Image;                                                   // 0x01A0(0x0078) Edit, DisableEditOnInstance, Protected
		unsigned char                                              UnknownData_LIVA[0x10];                                  // 0x0218(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetRadius(float InRadius);
		void SetPeriod(float InPeriod);
		void SetNumberOfPieces(int32_t InNumberOfPieces);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ComboBox
	 * Size -> 0x0030 (FullSize[0x01B8] - InheritedSize[0x0188])
	 */
	class UComboBox : public UWidget
	{
	public:
		TArray<class UObject*>                                     Items;                                                   // 0x0188(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FScriptDelegate                                      OnGenerateWidgetEvent;                                   // 0x0198(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor
		unsigned char                                              UnknownData_4IRB[0x10];                                  // 0x01A8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ComboBoxString
	 * Size -> 0x04B0 (FullSize[0x0638] - InheritedSize[0x0188])
	 */
	class UComboBoxString : public UWidget
	{
	public:
		struct FComboBoxStyle                                      WidgetStyle;                                             // 0x0188(0x0398) Edit, BlueprintVisible
		struct FSlateFontInfo                                      Font;                                                    // 0x0520(0x0020) Edit, DisableEditOnInstance
		struct FSlateColor                                         TextColorAndOpacity;                                     // 0x0540(0x0028) Edit, DisableEditOnInstance
		struct FSlateColor                                         ForegroundColor;                                         // 0x0568(0x0028) Edit, DisableEditOnInstance
		TArray<class FString>                                      DefaultOptions;                                          // 0x0590(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance
		class FString                                              SelectedOption;                                          // 0x05A0(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance
		struct FMargin                                             ContentPadding;                                          // 0x05B0(0x0010) Edit, DisableEditOnInstance
		float                                                      MaxListHeight;                                           // 0x05C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		bool                                                       HasDownArrow;                                            // 0x05C4(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_NNXC[0x3];                                   // 0x05C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnGenerateWidgetEvent;                                   // 0x05C8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x05D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnOpening;                                               // 0x05E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_4WN3[0x40];                                  // 0x05F8(0x0040) MISSED OFFSET (PADDING)

	public:
		void SetSelectedOption(const class FString& Option);
		void SetSelectedIndex(int32_t index);
		bool RemoveOption(const class FString& Option);
		void RefreshOptions();
		void OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void OnOpeningEvent__DelegateSignature();
		class FString GetSelectedOption();
		int32_t GetSelectedIndex();
		class FString GetOptionAtIndex(int32_t index);
		int32_t FindOptionIndex(const class FString& Option);
		void ClearSelection();
		void ClearOptions();
		void AddOption(const class FString& Option);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.EditableTextBox
	 * Size -> 0x0628 (FullSize[0x07B0] - InheritedSize[0x0188])
	 */
	class UEditableTextBox : public UWidget
	{
	public:
		struct FEditableTextBoxStyle                               WidgetStyle;                                             // 0x0188(0x0510) Edit, BlueprintVisible
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x0698(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class FText                                                Text;                                                    // 0x06A0(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_DI71[0x10];                                  // 0x06B8(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FScriptDelegate                                      TextDelegate;                                            // 0x06C8(0x0010) ZeroConstructor, InstancedReference, NoDestructor
		class FText                                                HintText;                                                // 0x06D8(0x0018) ELEMENT_SIZE_MISMATCH Edit, BlueprintReadOnly, DisableEditOnInstance
		unsigned char                                              UnknownData_909X[0x10];                                  // 0x06F0(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FScriptDelegate                                      HintTextDelegate;                                        // 0x0700(0x0010) ZeroConstructor, InstancedReference, NoDestructor
		struct FSlateFontInfo                                      Font;                                                    // 0x0710(0x0020) Edit, DisableEditOnInstance
		struct FLinearColor                                        ForegroundColor;                                         // 0x0730(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        BackgroundColor;                                         // 0x0740(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        ReadOnlyForegroundColor;                                 // 0x0750(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsReadOnly;                                              // 0x0760(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsPassword;                                              // 0x0761(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N1CB[0x2];                                   // 0x0762(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumDesiredWidth;                                     // 0x0764(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FMargin                                             Padding;                                                 // 0x0768(0x0010) Edit, DisableEditOnInstance
		bool                                                       IsCaretMovedWhenGainFocus;                               // 0x0778(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		bool                                                       SelectAllTextWhenFocused;                                // 0x0779(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		bool                                                       RevertTextOnEscape;                                      // 0x077A(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		bool                                                       ClearKeyboardFocusOnCommit;                              // 0x077B(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		bool                                                       SelectAllTextOnCommit;                                   // 0x077C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		bool                                                       ShouldHandleEscape;                                      // 0x077D(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_8GC6[0x2];                                   // 0x077E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTextChanged;                                           // 0x0780(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnTextCommitted;                                         // 0x0790(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_QECS[0x10];                                  // 0x07A0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetText(const class FText& InText);
		void SetError(const class FText& InError);
		void OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		class FText GetText();
		void ClearError();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Image
	 * Size -> 0x00D8 (FullSize[0x0260] - InheritedSize[0x0188])
	 */
	class UImage : public UWidget
	{
	public:
		class USlateBrushAsset*                                    Image;                                                   // 0x0188(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		struct FSlateBrush                                         Brush;                                                   // 0x0190(0x0078) Edit, DisableEditOnInstance
		class FScriptDelegate                                      BrushDelegate;                                           // 0x0208(0x0010) ZeroConstructor, InstancedReference, NoDestructor
		struct FLinearColor                                        ColorAndOpacity;                                         // 0x0218(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptDelegate                                      ColorAndOpacityDelegate;                                 // 0x0228(0x0010) ZeroConstructor, InstancedReference, NoDestructor
		bool                                                       EnableDefaultDisabledEffect;                             // 0x0238(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BW8T[0x3];                                   // 0x0239(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnMouseButtonDownEvent;                                  // 0x023C(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor
		unsigned char                                              UnknownData_B1KV[0x14];                                  // 0x024C(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetOpacity(float InOpacity);
		void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
		void SetBrushFromTexture(class UTexture2D* Texture);
		void SetBrushFromMaterial(class UMaterialInterface* Material);
		void SetBrushFromAsset(class USlateBrushAsset* Asset);
		class UMaterialInstanceDynamic* GetDynamicMaterial();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MultiLineEditableText
	 * Size -> 0x0198 (FullSize[0x0320] - InheritedSize[0x0188])
	 */
	class UMultiLineEditableText : public UWidget
	{
	public:
		struct FTextBlockStyle                                     WidgetStyle;                                             // 0x0188(0x0118) Edit, BlueprintVisible
		class FText                                                Text;                                                    // 0x02A0(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_IKJE[0x10];                                  // 0x02B8(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ETextJustify                                               Justification;                                           // 0x02C8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAutoWrapText;                                           // 0x02C9(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IXS4[0x2];                                   // 0x02CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WrapTextAt;                                              // 0x02CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		struct FSlateFontInfo                                      Font;                                                    // 0x02D0(0x0020) Edit, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnTextChanged;                                           // 0x02F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnTextCommitted;                                         // 0x0300(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_3H5M[0x10];                                  // 0x0310(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetText(const class FText& InText);
		void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnMultiLineEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		class FText GetText();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MultiLineEditableTextBox
	 * Size -> 0x06F0 (FullSize[0x0878] - InheritedSize[0x0188])
	 */
	class UMultiLineEditableTextBox : public UWidget
	{
	public:
		struct FEditableTextBoxStyle                               WidgetStyle;                                             // 0x0188(0x0510) Edit, BlueprintVisible
		struct FTextBlockStyle                                     TextStyle;                                               // 0x0698(0x0118) Edit, BlueprintVisible
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x07B0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class FText                                                Text;                                                    // 0x07B8(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_AFVH[0x10];                                  // 0x07D0(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ETextJustify                                               Justification;                                           // 0x07E0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAutoWrapText;                                           // 0x07E1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AGCJ[0x2];                                   // 0x07E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WrapTextAt;                                              // 0x07E4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_XMVT[0x10];                                  // 0x07E8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      Font;                                                    // 0x07F8(0x0020) Edit, DisableEditOnInstance
		struct FLinearColor                                        ForegroundColor;                                         // 0x0818(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        BackgroundColor;                                         // 0x0828(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        ReadOnlyForegroundColor;                                 // 0x0838(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptMulticastDelegate                             OnTextChanged;                                           // 0x0848(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnTextCommitted;                                         // 0x0858(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_8GSN[0x10];                                  // 0x0868(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetText(const class FText& InText);
		void SetError(const class FText& InError);
		void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		class FText GetText();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.NativeWidgetHost
	 * Size -> 0x0010 (FullSize[0x0198] - InheritedSize[0x0188])
	 */
	class UNativeWidgetHost : public UWidget
	{
	public:
		unsigned char                                              UnknownData_76AL[0x10];                                  // 0x0188(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.CanvasPanel
	 * Size -> 0x0038 (FullSize[0x01D8] - InheritedSize[0x01A0])
	 */
	class UCanvasPanel : public UPanelWidget
	{
	public:
		struct FLinearColor                                        ColorAndOpacity;                                         // 0x01A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptDelegate                                      ColorAndOpacityDelegate;                                 // 0x01B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor
		unsigned char                                              UnknownData_WWAT[0x18];                                  // 0x01C0(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.CheckBox
	 * Size -> 0x05C8 (FullSize[0x0768] - InheritedSize[0x01A0])
	 */
	class UCheckBox : public UContentWidget
	{
	public:
		struct FCheckBoxStyle                                      WidgetStyle;                                             // 0x01A0(0x0508) Edit, BlueprintVisible
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x06A8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class USlateBrushAsset*                                    UncheckedImage;                                          // 0x06B0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class USlateBrushAsset*                                    UncheckedHoveredImage;                                   // 0x06B8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class USlateBrushAsset*                                    UncheckedPressedImage;                                   // 0x06C0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class USlateBrushAsset*                                    CheckedImage;                                            // 0x06C8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class USlateBrushAsset*                                    CheckedHoveredImage;                                     // 0x06D0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class USlateBrushAsset*                                    CheckedPressedImage;                                     // 0x06D8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class USlateBrushAsset*                                    UndeterminedImage;                                       // 0x06E0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class USlateBrushAsset*                                    UndeterminedHoveredImage;                                // 0x06E8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class USlateBrushAsset*                                    UndeterminedPressedImage;                                // 0x06F0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		ESlateCheckBoxState                                        CheckedState;                                            // 0x06F8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7OUK[0x3];                                   // 0x06F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      CheckedStateDelegate;                                    // 0x06FC(0x0010) ZeroConstructor, InstancedReference, NoDestructor
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x070C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KMU4[0x3];                                   // 0x070D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             Padding;                                                 // 0x0710(0x0010) Edit, DisableEditOnInstance
		struct FSlateColor                                         BorderBackgroundColor;                                   // 0x0720(0x0028) Edit, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnCheckStateChanged;                                     // 0x0748(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_CAJQ[0x10];                                  // 0x0758(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetIsChecked(bool InIsChecked);
		void SetCheckedState(ESlateCheckBoxState InCheckedState);
		void OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		bool IsPressed();
		bool IsChecked();
		ESlateCheckBoxState GetCheckedState();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MenuAnchor
	 * Size -> 0x0058 (FullSize[0x01F8] - InheritedSize[0x01A0])
	 */
	class UMenuAnchor : public UContentWidget
	{
	public:
		bool                                                       IgnoreClicksOutside;                                     // 0x01A0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GLX5[0x7];                                   // 0x01A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              MenuClass;                                               // 0x01A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptDelegate                                      OnGetMenuContentEvent;                                   // 0x01B0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor
		class FScriptDelegate                                      OnIsOpenChanged;                                         // 0x01C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor
		EMenuPlacement                                             Placement;                                               // 0x01D0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_66WH[0x3];                                   // 0x01D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Padding;                                                 // 0x01D4(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1OLR[0x14];                                  // 0x01DC(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidget*                                             CurrentMenuContent;                                      // 0x01F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected

	public:
		void SetIsOpen(bool InIsOpen, bool bFocusMenu);
		void SetIgnoreClicksOutside(bool Ignore);
		void OnIsOpenChanged__DelegateSignature(bool IsOpen);
		bool IsOpen();
		bool GetIgnoreClicksOutside();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ScaleBox
	 * Size -> 0x0018 (FullSize[0x01B8] - InheritedSize[0x01A0])
	 */
	class UScaleBox : public UContentWidget
	{
	public:
		EStretchDirection                                          StretchDirection;                                        // 0x01A0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EStretch                                                   Stretch;                                                 // 0x01A1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A2NP[0x16];                                  // 0x01A2(0x0016) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SizeBox
	 * Size -> 0x0030 (FullSize[0x01D0] - InheritedSize[0x01A0])
	 */
	class USizeBox : public UContentWidget
	{
	public:
		bool                                                       bOverride_WidthOverride : 1;                             // 0x01A0(0x0001) BIT_FIELD NoDestructor, Protected
		bool                                                       bOverride_HeightOverride : 1;                            // 0x01A0(0x0001) BIT_FIELD NoDestructor, Protected
		bool                                                       bOverride_MinDesiredWidth : 1;                           // 0x01A0(0x0001) BIT_FIELD NoDestructor, Protected
		bool                                                       bOverride_MinDesiredHeight : 1;                          // 0x01A0(0x0001) BIT_FIELD NoDestructor, Protected
		bool                                                       bOverride_MaxDesiredWidth : 1;                           // 0x01A0(0x0001) BIT_FIELD NoDestructor, Protected
		bool                                                       bOverride_MaxDesiredHeight : 1;                          // 0x01A0(0x0001) BIT_FIELD NoDestructor, Protected
		unsigned char                                              UnknownData_BMFQ[0x3];                                   // 0x01A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WidthOverride;                                           // 0x01A4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected
		float                                                      HeightOverride;                                          // 0x01A8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected
		float                                                      MinDesiredWidth;                                         // 0x01AC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected
		float                                                      MinDesiredHeight;                                        // 0x01B0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected
		float                                                      MaxDesiredWidth;                                         // 0x01B4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected
		float                                                      MaxDesiredHeight;                                        // 0x01B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_B60H[0x14];                                  // 0x01BC(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetWidthOverride(float InWidthOverride);
		void SetMinDesiredWidth(float InMinDesiredWidth);
		void SetMinDesiredHeight(float InMinDesiredHeight);
		void SetMaxDesiredWidth(float InMaxDesiredWidth);
		void SetMaxDesiredHeight(float InMaxDesiredHeight);
		void SetHeightOverride(float InHeightOverride);
		void ClearWidthOverride();
		void ClearMinDesiredWidth();
		void ClearMinDesiredHeight();
		void ClearMaxDesiredWidth();
		void ClearMaxDesiredHeight();
		void ClearHeightOverride();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Viewport
	 * Size -> 0x0038 (FullSize[0x01D8] - InheritedSize[0x01A0])
	 */
	class UViewport : public UContentWidget
	{
	public:
		struct FLinearColor                                        BackgroundColor;                                         // 0x01A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C37W[0x28];                                  // 0x01B0(0x0028) MISSED OFFSET (PADDING)

	public:
		class AActor* Spawn(class UClass* ActorClass);
		void SetViewRotation(const struct FRotator& Rotation);
		void SetViewLocation(const struct FVector& Location);
		struct FRotator GetViewRotation();
		class UWorld* GetViewportWorld();
		struct FVector GetViewLocation();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.GridPanel
	 * Size -> 0x0030 (FullSize[0x01D0] - InheritedSize[0x01A0])
	 */
	class UGridPanel : public UPanelWidget
	{
	public:
		TArray<float>                                              ColumnFill;                                              // 0x01A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              RowFill;                                                 // 0x01B0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		unsigned char                                              UnknownData_NDQ8[0x10];                                  // 0x01C0(0x0010) MISSED OFFSET (PADDING)

	public:
		class UGridSlot* AddChildToGrid(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.HorizontalBox
	 * Size -> 0x0010 (FullSize[0x01B0] - InheritedSize[0x01A0])
	 */
	class UHorizontalBox : public UPanelWidget
	{
	public:
		unsigned char                                              UnknownData_JX3H[0x10];                                  // 0x01A0(0x0010) MISSED OFFSET (PADDING)

	public:
		class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Overlay
	 * Size -> 0x0010 (FullSize[0x01B0] - InheritedSize[0x01A0])
	 */
	class UOverlay : public UPanelWidget
	{
	public:
		unsigned char                                              UnknownData_QZFZ[0x10];                                  // 0x01A0(0x0010) MISSED OFFSET (PADDING)

	public:
		class UOverlaySlot* AddChildToOverlay(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ScrollBar
	 * Size -> 0x0288 (FullSize[0x0428] - InheritedSize[0x01A0])
	 */
	class UScrollBar : public UPanelWidget
	{
	public:
		struct FScrollBarStyle                                     WidgetStyle;                                             // 0x01A0(0x0260) Edit, BlueprintVisible
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x0400(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		bool                                                       bAlwaysShowScrollbar;                                    // 0x0408(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EOrientation                                               Orientation;                                             // 0x0409(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0GQE[0x2];                                   // 0x040A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Thickness;                                               // 0x040C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PEAO[0x14];                                  // 0x0414(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetState(float InOffsetFraction, float InThumbSizeFraction);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UniformGridPanel
	 * Size -> 0x0028 (FullSize[0x01C8] - InheritedSize[0x01A0])
	 */
	class UUniformGridPanel : public UPanelWidget
	{
	public:
		struct FMargin                                             SlotPadding;                                             // 0x01A0(0x0010) Edit, DisableEditOnInstance
		float                                                      MinDesiredSlotWidth;                                     // 0x01B0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinDesiredSlotHeight;                                    // 0x01B4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G903[0x10];                                  // 0x01B8(0x0010) MISSED OFFSET (PADDING)

	public:
		class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.VerticalBox
	 * Size -> 0x0010 (FullSize[0x01B0] - InheritedSize[0x01A0])
	 */
	class UVerticalBox : public UPanelWidget
	{
	public:
		unsigned char                                              UnknownData_M2NV[0x10];                                  // 0x01A0(0x0010) MISSED OFFSET (PADDING)

	public:
		class UVerticalBoxSlot* AddChildVerticalBox(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetSwitcher
	 * Size -> 0x0018 (FullSize[0x01B8] - InheritedSize[0x01A0])
	 */
	class UWidgetSwitcher : public UPanelWidget
	{
	public:
		int32_t                                                    ActiveWidgetIndex;                                       // 0x01A0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XH62[0x14];                                  // 0x01A4(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetActiveWidgetIndex(int32_t index);
		void SetActiveWidget(class UWidget* Widget);
		int32_t GetNumWidgets();
		int32_t GetActiveWidgetIndex();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ProgressBar
	 * Size -> 0x01D0 (FullSize[0x0358] - InheritedSize[0x0188])
	 */
	class UProgressBar : public UWidget
	{
	public:
		struct FProgressBarStyle                                   WidgetStyle;                                             // 0x0188(0x0170) Edit, BlueprintVisible
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x02F8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class USlateBrushAsset*                                    BackgroundImage;                                         // 0x0300(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class USlateBrushAsset*                                    FillImage;                                               // 0x0308(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class USlateBrushAsset*                                    MarqueeImage;                                            // 0x0310(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		EProgressBarFillType                                       BarFillType;                                             // 0x0318(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsMarquee;                                              // 0x0319(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bInterpolatePercent;                                     // 0x031A(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OTSN[0x1];                                   // 0x031B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InterpolatePercentSpeed;                                 // 0x031C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Percent;                                                 // 0x0320(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptDelegate                                      PercentDelegate;                                         // 0x0324(0x0010) ZeroConstructor, InstancedReference, NoDestructor
		struct FLinearColor                                        FillColorAndOpacity;                                     // 0x0334(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6XOF[0x14];                                  // 0x0344(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetPercentInterpolationKey(int32_t InterpKey);
		void SetPercent(float InPercent, int32_t InterpKey);
		void SetIsMarquee(bool InbIsMarquee);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Slider
	 * Size -> 0x0268 (FullSize[0x03F0] - InheritedSize[0x0188])
	 */
	class USlider : public UWidget
	{
	public:
		struct FSliderStyle                                        WidgetStyle;                                             // 0x0188(0x01E8) Edit, BlueprintVisible
		float                                                      Value;                                                   // 0x0370(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptDelegate                                      ValueDelegate;                                           // 0x0374(0x0010) ZeroConstructor, InstancedReference, NoDestructor
		EOrientation                                               Orientation;                                             // 0x0384(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0Q8F[0x3];                                   // 0x0385(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        SliderBarColor;                                          // 0x0388(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        SliderHandleColor;                                       // 0x0398(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IndentHandle;                                            // 0x03A8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		bool                                                       Locked;                                                  // 0x03A9(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_R2T4[0x6];                                   // 0x03AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMouseCaptureBegin;                                     // 0x03B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnMouseCaptureEnd;                                       // 0x03C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x03D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_6HX1[0x10];                                  // 0x03E0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetValue(float InValue);
		void SetSliderHandleColor(const struct FLinearColor& InSliderHandleColor);
		void SetSliderBarColor(const struct FLinearColor& InSliderBarColor);
		void OnMouseCaptureEndEvent__DelegateSignature();
		void OnMouseCaptureBeginEvent__DelegateSignature();
		void OnFloatValueChangedEvent__DelegateSignature(float Value);
		float GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Spacer
	 * Size -> 0x0018 (FullSize[0x01A0] - InheritedSize[0x0188])
	 */
	class USpacer : public UWidget
	{
	public:
		struct FVector2D                                           Size;                                                    // 0x0188(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7QOR[0x10];                                  // 0x0190(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetSize(const struct FVector2D& InSize);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SpinBox
	 * Size -> 0x0378 (FullSize[0x0500] - InheritedSize[0x0188])
	 */
	class USpinBox : public UWidget
	{
	public:
		struct FSpinBoxStyle                                       WidgetStyle;                                             // 0x0188(0x0298) Edit, BlueprintVisible
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x0420(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		float                                                      Value;                                                   // 0x0428(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Delta;                                                   // 0x042C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SliderExponent;                                          // 0x0430(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BFFX[0x4];                                   // 0x0434(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      Font;                                                    // 0x0438(0x0020) Edit, DisableEditOnInstance
		float                                                      MinDesiredWidth;                                         // 0x0458(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		bool                                                       ClearKeyboardFocusOnCommit;                              // 0x045C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		bool                                                       SelectAllTextOnCommit;                                   // 0x045D(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_C3EU[0x2];                                   // 0x045E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         ForegroundColor;                                         // 0x0460(0x0028) Edit, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x0488(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnValueCommitted;                                        // 0x0498(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnBeginSliderMovement;                                   // 0x04A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnEndSliderMovement;                                     // 0x04B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptDelegate                                      ValueDelegate;                                           // 0x04C8(0x0010) ZeroConstructor, InstancedReference, NoDestructor
		bool                                                       bOverride_MinValue : 1;                                  // 0x04D8(0x0001) BIT_FIELD NoDestructor, Protected
		bool                                                       bOverride_MaxValue : 1;                                  // 0x04D8(0x0001) BIT_FIELD NoDestructor, Protected
		bool                                                       bOverride_MinSliderValue : 1;                            // 0x04D8(0x0001) BIT_FIELD NoDestructor, Protected
		bool                                                       bOverride_MaxSliderValue : 1;                            // 0x04D8(0x0001) BIT_FIELD NoDestructor, Protected
		unsigned char                                              UnknownData_HIVC[0x3];                                   // 0x04D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinValue;                                                // 0x04DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected
		float                                                      MaxValue;                                                // 0x04E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected
		float                                                      MinSliderValue;                                          // 0x04E4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected
		float                                                      MaxSliderValue;                                          // 0x04E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_CF67[0x14];                                  // 0x04EC(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetValue(float newValue);
		void SetMinValue(float newValue);
		void SetMinSliderValue(float newValue);
		void SetMaxValue(float newValue);
		void SetMaxSliderValue(float newValue);
		void SetForegroundColor(const struct FSlateColor& InForegroundColor);
		void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
		void OnSpinBoxBeginSliderMovement__DelegateSignature();
		float GetValue();
		float GetMinValue();
		float GetMinSliderValue();
		float GetMaxValue();
		float GetMaxSliderValue();
		void ClearMinValue();
		void ClearMinSliderValue();
		void ClearMaxValue();
		void ClearMaxSliderValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.TableViewBase
	 * Size -> 0x0000 (FullSize[0x0188] - InheritedSize[0x0188])
	 */
	class UTableViewBase : public UWidget
	{
	public:
		class UWidget* OnGenerateRowUObject__DelegateSignature(class UObject* Item);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ListView
	 * Size -> 0x0040 (FullSize[0x01C8] - InheritedSize[0x0188])
	 */
	class UListView : public UTableViewBase
	{
	public:
		float                                                      ItemHeight;                                              // 0x0188(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K1KB[0x4];                                   // 0x018C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     Items;                                                   // 0x0190(0x0010) Edit, BlueprintVisible, ZeroConstructor
		ESelectionMode                                             SelectionMode;                                           // 0x01A0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WBSW[0x3];                                   // 0x01A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnGenerateRowEvent;                                      // 0x01A4(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor
		unsigned char                                              UnknownData_LVB2[0x14];                                  // 0x01B4(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.TileView
	 * Size -> 0x0040 (FullSize[0x01C8] - InheritedSize[0x0188])
	 */
	class UTileView : public UTableViewBase
	{
	public:
		float                                                      ItemWidth;                                               // 0x0188(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ItemHeight;                                              // 0x018C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UObject*>                                     Items;                                                   // 0x0190(0x0010) Edit, BlueprintVisible, ZeroConstructor
		ESelectionMode                                             SelectionMode;                                           // 0x01A0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0Y1L[0x3];                                   // 0x01A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnGenerateTileEvent;                                     // 0x01A4(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor
		unsigned char                                              UnknownData_XQ1G[0x14];                                  // 0x01B4(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetItemWidth(float Width);
		void SetItemHeight(float Height);
		void RequestListRefresh();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.TextBlock
	 * Size -> 0x0210 (FullSize[0x0398] - InheritedSize[0x0188])
	 */
	class UTextBlock : public UWidget
	{
	public:
		struct FTextBlockStyle                                     WidgetStyle;                                             // 0x0188(0x0118) Edit, BlueprintVisible
		class USlateWidgetStyleAsset*                              Style;                                                   // 0x02A0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		class FText                                                Text;                                                    // 0x02A8(0x0018) ELEMENT_SIZE_MISMATCH Edit, BlueprintReadOnly, DisableEditOnInstance
		unsigned char                                              UnknownData_65UZ[0x10];                                  // 0x02C0(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FScriptDelegate                                      TextDelegate;                                            // 0x02D0(0x0010) ZeroConstructor, InstancedReference, NoDestructor
		struct FSlateColor                                         ColorAndOpacity;                                         // 0x02E0(0x0028) Edit, DisableEditOnInstance
		class FScriptDelegate                                      ColorAndOpacityDelegate;                                 // 0x0308(0x0010) ZeroConstructor, InstancedReference, NoDestructor
		struct FSlateFontInfo                                      Font;                                                    // 0x0318(0x0020) Edit, DisableEditOnInstance
		struct FVector2D                                           ShadowOffset;                                            // 0x0338(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        ShadowColorAndOpacity;                                   // 0x0340(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptDelegate                                      ShadowColorAndOpacityDelegate;                           // 0x0350(0x0010) ZeroConstructor, InstancedReference, NoDestructor
		ETextJustify                                               Justification;                                           // 0x0360(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CenterVertically;                                        // 0x0361(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDisableInternalClipping;                                // 0x0362(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DontApplyDisabledEffect;                                 // 0x0363(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AutoWrapText;                                            // 0x0364(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J787[0x3];                                   // 0x0365(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WrapTextAt;                                              // 0x0368(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		float                                                      MinDesiredWidth;                                         // 0x036C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		struct FMargin                                             Margin;                                                  // 0x0370(0x0010) Edit, DisableEditOnInstance, AdvancedDisplay
		float                                                      LineHeightPercentage;                                    // 0x0380(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_O4AT[0x14];                                  // 0x0384(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetText(const class FText& InText);
		void SetString(const class FString& InString);
		void SetShadowOffset(const struct FVector2D& InShadowOffset);
		void SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
		void SetJustification(ETextJustify Value);
		void SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
		class FText GetText();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Throbber
	 * Size -> 0x0098 (FullSize[0x0220] - InheritedSize[0x0188])
	 */
	class UThrobber : public UWidget
	{
	public:
		int32_t                                                    NumberOfPieces;                                          // 0x0188(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected
		bool                                                       bAnimateHorizontally;                                    // 0x018C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected
		bool                                                       bAnimateVertically;                                      // 0x018D(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected
		bool                                                       bAnimateOpacity;                                         // 0x018E(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_Z62L[0x1];                                   // 0x018F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USlateBrushAsset*                                    PieceImage;                                              // 0x0190(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected
		struct FSlateBrush                                         Image;                                                   // 0x0198(0x0078) Edit, DisableEditOnInstance, Protected
		unsigned char                                              UnknownData_FRJT[0x10];                                  // 0x0210(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetNumberOfPieces(int32_t InNumberOfPieces);
		void SetAnimateVertically(bool bInAnimateVertically);
		void SetAnimateOpacity(bool bInAnimateOpacity);
		void SetAnimateHorizontally(bool bInAnimateHorizontally);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetAnimation
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UWidgetAnimation : public UObject
	{
	public:
		class UMovieScene*                                         MovieScene;                                              // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FWidgetAnimationBinding>                     AnimationBindings;                                       // 0x0030(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetBlueprintGeneratedClass
	 * Size -> 0x0038 (FullSize[0x0210] - InheritedSize[0x01D8])
	 */
	class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
	{
	public:
		class UWidgetTree*                                         WidgetTree;                                              // 0x01D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FDelegateRuntimeBinding>                     Bindings;                                                // 0x01E0(0x0010) ZeroConstructor
		TArray<class UWidgetAnimation*>                            Animations;                                              // 0x01F0(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_NXXI[0x10];                                  // 0x0200(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FEventReply STATIC_Unhandled();
		void STATIC_SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport);
		void STATIC_SetInputMode_GameOnly(class APlayerController* Target);
		void STATIC_SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport);
		void STATIC_SetFocusToGameViewport();
		struct FEventReply STATIC_ReleaseMouseCapture(struct FEventReply* Reply);
		struct FEventReply STATIC_ReleaseJoystickCapture(struct FEventReply* Reply, bool bInAllJoysticks);
		struct FSlateBrush STATIC_NoResourceBrush();
		struct FSlateBrush STATIC_MakeBrushFromTexture(class UTexture2D* Texture, int32_t Width, int32_t Height);
		struct FSlateBrush STATIC_MakeBrushFromMaterial(class UMaterialInterface* Material, int32_t Width, int32_t Height);
		struct FSlateBrush STATIC_MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);
		struct FEventReply STATIC_Handled();
		struct FEventReply STATIC_EndDragDrop(struct FEventReply* Reply);
		void STATIC_DrawText(struct FPaintContext* Context, const class FString& InString, const struct FVector2D& Position, const struct FLinearColor& Tint);
		void STATIC_DrawLine(struct FPaintContext* Context, const struct FVector2D& PositionA, const struct FVector2D& PositionB, float Thickness, const struct FLinearColor& Tint, bool bAntiAlias);
		void STATIC_DrawBox(struct FPaintContext* Context, const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint);
		struct FEventReply STATIC_DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);
		struct FEventReply STATIC_DetectDrag(struct FEventReply* Reply, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);
		class UDragDropOperation* STATIC_CreateDragDropOperation(class UClass* OperationClass);
		class UUserWidget* STATIC_Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer);
		struct FEventReply STATIC_CaptureMouse(struct FEventReply* Reply, class UWidget* CapturingWidget);
		struct FEventReply STATIC_CaptureJoystick(struct FEventReply* Reply, class UWidget* CapturingWidget, bool bInAllJoysticks);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetLayoutLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UUniformGridSlot* STATIC_SlotAsUniformGridSlot(class UWidget* Widget);
		class UGridSlot* STATIC_SlotAsGridSlot(class UWidget* Widget);
		class UCanvasPanelSlot* STATIC_SlotAsCanvasSlot(class UWidget* Widget);
		struct FVector2D STATIC_GetViewportSize(class UObject* WorldContextObject);
		float STATIC_GetViewportScale(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetTree
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UWidgetTree : public UObject
	{
	public:
		class UWidget*                                             RootWidget;                                              // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class UWidget*>                                     AllWidgets;                                              // 0x0030(0x0010) ZeroConstructor, Protected

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
