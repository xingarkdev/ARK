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
	 * WidgetBlueprintGeneratedClass DyeRegionButton.DyeRegionButton_C
	 * Size -> 0x0008 (FullSize[0x0568] - InheritedSize[0x0560])
	 */
	class UDyeRegionButton_C : public UDyeRegionButtonWidget
	{
	public:
		class UCustomButtonWidget*                                 Button;                                                  // 0x0560(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_DyeRegionButton(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
