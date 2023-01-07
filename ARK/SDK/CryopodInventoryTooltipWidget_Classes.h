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
	 * WidgetBlueprintGeneratedClass CryopodInventoryTooltipWidget.CryopodInventoryTooltipWidget_C
	 * Size -> 0x0028 (FullSize[0x0458] - InheritedSize[0x0430])
	 */
	class UCryopodInventoryTooltipWidget_C : public UPrimalCryopodTooltipWidget
	{
	public:
		class UImage*                                              DinoIcon;                                                // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              FatherIcon;                                              // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              GenderIcon;                                              // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              MotherIcon;                                              // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UToolTipWidgetPrimalItem_Inventory_C*                TooltipEmptyCryopod;                                     // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_CryopodInventoryTooltipWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
