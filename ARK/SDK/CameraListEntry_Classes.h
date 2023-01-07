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
	 * WidgetBlueprintGeneratedClass CameraListEntry.CameraListEntry_C
	 * Size -> 0x004D (FullSize[0x0565] - InheritedSize[0x0518])
	 */
	class UCameraListEntry_C : public UBaseSelectableButtonWidget
	{
	public:
		class UCustomButtonWidget*                                 Button;                                                  // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          DistanceLabel;                                           // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          EntryName;                                               // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UBorder*                                             SelectedBorder;                                          // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USecurityCameraHUD_C*                                ParentHUD;                                               // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CameraIndex;                                             // 0x0540(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             CameraLocation;                                          // 0x0544(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              CameraName;                                              // 0x0550(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      Distance;                                                // 0x0560(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x0564(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void SetSelected(bool IsSelected);
		void InitForCamera(class USecurityCameraHUD_C* OwningHUD, const class FString& CameraName, const struct FVector& Location, int32_t index, float Distance);
		void BndEvt__Button_K2Node_ComponentBoundEvent_304_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_CameraListEntry(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
