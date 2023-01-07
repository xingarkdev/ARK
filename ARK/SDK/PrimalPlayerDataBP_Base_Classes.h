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
	 * BlueprintGeneratedClass PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C
	 * Size -> 0x0048 (FullSize[0x0558] - InheritedSize[0x0510])
	 */
	class UPrimalPlayerDataBP_Base_C : public UPrimalPlayerData
	{
	public:
		int32_t                                                    NumAscensions;                                           // 0x0510(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CE7B[0x4];                                   // 0x0514(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              AscensionData;                                           // 0x0518(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic
		TArray<class FName>                                        BossDinoNameTagAscensionDataMap;                         // 0x0528(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    SavedPlayerDataVersion;                                  // 0x0538(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    CurrentPlayerDataVersion;                                // 0x053C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    HexagonCount;                                            // 0x0540(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    NumChibiLevelUpsData;                                    // 0x0544(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        GeneralizedUnlockedAchievementTags;                      // 0x0548(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic

	public:
		void SetChibiLevels(int32_t newLevels, class AShooterPlayerController* ForPC);
		bool HasGeneralizedAchievementTag(const class FName& Tag);
		void GrantGeneralizedAchievementTag(const class FName& ObtainedAchievementTag, class AShooterPlayerController* ForPC);
		void BPForceDefeatedBoss(int32_t DifficultyIndex, const class FName& BossName, class AShooterPlayerController* PlayerController);
		bool SetPlayerHexagonCount(int32_t NewHexagonCount);
		int32_t GetPlayerHexagonCount();
		void BPCreatedNewPlayerData();
		void DefeatedBoss(class APrimalDinoCharacter* BossChar, int32_t DifficultyIndex, const class FName& TagOverride, class AShooterPlayerController* ForPC);
		void ExecuteUbergraph_PrimalPlayerDataBP_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
