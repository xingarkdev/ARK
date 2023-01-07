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
	 * BlueprintGeneratedClass PrimalItem_StartingNote.PrimalItem_StartingNote_C
	 * Size -> 0x00B0 (FullSize[0x0B98] - InheritedSize[0x0AE8])
	 */
	class UPrimalItem_StartingNote_C : public UPrimalItem_Note_C
	{
	public:
		TArray<class UTexture2D*>                                  AscensionIcons;                                          // 0x0AE8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              LocalCustomItemDesc;                                     // 0x0AF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FString>                                      DifficultyStrings;                                       // 0x0B08(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FString>                                      BossStrings;                                             // 0x0B18(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FArrayOfStrings>                             BossPostStrings;                                         // 0x0B28(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UTexture2D*                                          LocalItemIcon;                                           // 0x0B38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UTexture2D*>                                  LocalAscensionIcons;                                     // 0x0B40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UTexture2D*>                                  SecondaryAscensionIcons;                                 // 0x0B50(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UTexture2D*                                          SecondaryIcon;                                           // 0x0B60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UTexture2D*>                                  TertiaryAscensionIcons;                                  // 0x0B68(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UTexture2D*                                          TertiaryIcon;                                            // 0x0B78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UTexture2D*>                                  QuaternaryAscensionIcons;                                // 0x0B80(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UTexture2D*                                          QuaternaryIcon;                                          // 0x0B90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPDrawItemIcon(class UCanvas* ItemCanvas, struct FVector2D* ItemCanvasSize, struct FVector2D* ItemCanvasScale, bool bItemEnabled, struct FLinearColor* TheTintColor);
		class UTexture2D* BPGetItemIcon(class AShooterPlayerController* ForPC);
		void IsLocalImplant(class AShooterPlayerController* ForPC, bool* IsLocal);
		class FString BPGetItemName(const class FString& ItemNameIn, class AShooterPlayerController* ForPC);
		void GetSurvivalQuotientString(TArray<float>* SurvData, class FString* OutString);
		class FString BPGetItemDescription(const class FString& InDescription, bool bGetLongDescription, class AShooterPlayerController* ForPC);
		void BPPreInitializeItem(class UWorld* OptionalInitWorld);
		void ExecuteUbergraph_PrimalItem_StartingNote(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
