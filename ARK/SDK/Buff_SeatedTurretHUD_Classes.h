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
	 * BlueprintGeneratedClass Buff_SeatedTurretHUD.Buff_SeatedTurretHUD_C
	 * Size -> 0x0070 (FullSize[0x09F0] - InheritedSize[0x0980])
	 */
	class ABuff_SeatedTurretHUD_C : public ABuff_Base_C
	{
	public:
		struct FHUDRichTextOverlayData                             SwitchAmmoInputTextOverlay;                              // 0x0980(0x0060) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       HasSwitchAmmoInputText;                                  // 0x09E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XU0Z[0x7];                                   // 0x09E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterPlayerController*                            ShooterPC;                                               // 0x09E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void NotifyDismount();
		void BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_SeatedTurretHUD(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
