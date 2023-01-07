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
	 * WidgetBlueprintGeneratedClass ContextMenuItem_SimpleCaption.ContextMenuItem_SimpleCaption_C
	 * Size -> 0x0018 (FullSize[0x0358] - InheritedSize[0x0340])
	 */
	class UContextMenuItem_SimpleCaption_C : public UContextMenuItem
	{
	public:
		class UCustomButtonWidget*                                 Button;                                                  // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UMenuAnchor*                                         Submenu;                                                 // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              SubmenuIndicator;                                        // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_ContextMenuItem_SimpleCaption(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
