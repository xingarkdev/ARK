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
	 * BlueprintGeneratedClass PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C
	 * Size -> 0x0019 (FullSize[0x0B01] - InheritedSize[0x0AE8])
	 */
	class UPrimalItemSkin_ChibiDino_Base_C : public UPrimalItem_Base_C
	{
	public:
		int32_t                                                    ChibiLevel;                                              // 0x0AE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ChibiXP;                                                 // 0x0AEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<float>                                              LevelExperienceRequirements;                             // 0x0AF0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       bHasLoadedNetItemInfo;                                   // 0x0B00(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		class FString BPGetItemName(const class FString& ItemNameIn, class AShooterPlayerController* ForPC);
		void BlueprintEquipped(bool bIsFromSaveGame);
		void BPSetupHUDIconMaterial(class UMaterialInstanceDynamic* theMID);
		void GetXPRequiredforPreviousLevel(float* XPOut);
		class FString BPGetCustomInventoryWidgetText();
		void GetXPRequiredForNextLevel(float* XPOut);
		float BPGetItemDurabilityPercentage();
		void BPClientHandleItemNetExecCommand(const class FName& CommandName, struct FBPNetExecParams* ExecParams, class AShooterPlayerController* ForPC);
		void RefreshLevelData(class APrimalCharacter* forChar);
		void AddXP(float XPAmount, class APrimalCharacter* forChar);
		void BPEquippedItemOnXPEarning(class APrimalCharacter* forChar, float howMuchXP, EXPType TheXPType);
		void BPInitFromItemNetInfo();
		class FString BPGetItemDescription(const class FString& InDescription, bool bGetLongDescription, class AShooterPlayerController* ForPC);
		void BPAddedAttachments();
		void ExecuteUbergraph_PrimalItemSkin_ChibiDino_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
