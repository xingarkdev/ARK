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
	 * WidgetBlueprintGeneratedClass DataListButtonCenteredText.DataListButtonCenteredText_C
	 * Size -> 0x0010 (FullSize[0x06A8] - InheritedSize[0x0698])
	 */
	class UDataListButtonCenteredText_C : public UDinoListButtonWidget
	{
	public:
		class UCustomButtonWidget*                                 Button;                                                  // 0x0698(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UMenuAnchor*                                         CtxMenu;                                                 // 0x06A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_DataListButtonCenteredText(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
