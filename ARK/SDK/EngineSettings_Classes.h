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
	 * Class EngineSettings.ConsoleSettings
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UConsoleSettings : public UObject
	{
	public:
		int32_t                                                    MaxScrollbackSize;                                       // 0x0028(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TJ30[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAutoCompleteCommand>                        ManualAutoCompleteList;                                  // 0x0030(0x0010) Edit, ZeroConstructor, Config
		TArray<class FString>                                      AutoCompleteMapPaths;                                    // 0x0040(0x0010) Edit, ZeroConstructor, Config

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EngineSettings.GameMapsSettings
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UGameMapsSettings : public UObject
	{
	public:
		class FString                                              EditorStartupMap;                                        // 0x0028(0x0010) Edit, ZeroConstructor, Config
		class FString                                              LocalMapOptions;                                         // 0x0038(0x0010) Edit, ZeroConstructor, Config, AdvancedDisplay
		class FString                                              TransitionMap;                                           // 0x0048(0x0010) Edit, ZeroConstructor, Config, AdvancedDisplay
		bool                                                       bUseSplitscreen;                                         // 0x0058(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor
		ETwoPlayerSplitScreenType                                  TwoPlayerSplitscreenLayout;                              // 0x0059(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor
		EThreePlayerSplitScreenType                                ThreePlayerSplitscreenLayout;                            // 0x005A(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y3CA[0x5];                                   // 0x005B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStringClassReference                               GameInstanceClass;                                       // 0x0060(0x0010) Edit, ZeroConstructor, Config, NoClear
		class FString                                              GameDefaultMap;                                          // 0x0070(0x0010) Edit, ZeroConstructor, Config
		class FString                                              ServerDefaultMap;                                        // 0x0080(0x0010) Edit, ZeroConstructor, Config, AdvancedDisplay
		struct FStringClassReference                               GlobalDefaultGameMode;                                   // 0x0090(0x0010) Edit, ZeroConstructor, Config, NoClear
		struct FStringClassReference                               GlobalDefaultServerGameMode;                             // 0x00A0(0x0010) Edit, ZeroConstructor, Config, AdvancedDisplay

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EngineSettings.GameNetworkManagerSettings
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UGameNetworkManagerSettings : public UObject
	{
	public:
		int32_t                                                    MinDynamicBandwidth;                                     // 0x0028(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor
		int32_t                                                    MaxDynamicBandwidth;                                     // 0x002C(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor
		int32_t                                                    TotalNetBandwidth;                                       // 0x0030(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor
		int32_t                                                    BadPingThreshold;                                        // 0x0034(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor
		bool                                                       bIsStandbyCheckingEnabled : 1;                           // 0x0038(0x0001) BIT_FIELD Edit, Config, NoDestructor
		unsigned char                                              UnknownData_MYX5[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StandbyRxCheatTime;                                      // 0x003C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor
		float                                                      StandbyTxCheatTime;                                      // 0x0040(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor
		float                                                      PercentMissingForRxStandby;                              // 0x0044(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor
		float                                                      PercentMissingForTxStandby;                              // 0x0048(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor
		float                                                      PercentForBadPing;                                       // 0x004C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor
		float                                                      JoinInProgressStandbyWaitTime;                           // 0x0050(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WJHX[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EngineSettings.GameSessionSettings
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGameSessionSettings : public UObject
	{
	public:
		int32_t                                                    MaxSpectators;                                           // 0x0028(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor
		int32_t                                                    MaxPlayers;                                              // 0x002C(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor
		bool                                                       bRequiresPushToTalk : 1;                                 // 0x0030(0x0001) BIT_FIELD Edit, Config, GlobalConfig, NoDestructor
		unsigned char                                              UnknownData_Y3YQ[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EngineSettings.GeneralEngineSettings
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeneralEngineSettings : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EngineSettings.GeneralProjectSettings
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UGeneralProjectSettings : public UObject
	{
	public:
		class FString                                              CompanyName;                                             // 0x0028(0x0010) Edit, ZeroConstructor, Config
		class FString                                              CopyrightNotice;                                         // 0x0038(0x0010) Edit, ZeroConstructor, Config
		class FString                                              Description;                                             // 0x0048(0x0010) Edit, ZeroConstructor, Config
		class FString                                              Homepage;                                                // 0x0058(0x0010) Edit, ZeroConstructor, Config
		class FString                                              LicensingTerms;                                          // 0x0068(0x0010) Edit, ZeroConstructor, Config
		class FString                                              PrivacyPolicy;                                           // 0x0078(0x0010) Edit, ZeroConstructor, Config
		struct FGuid                                               ProjectID;                                               // 0x0088(0x0010) Edit, ZeroConstructor, Config
		class FString                                              ProjectName;                                             // 0x0098(0x0010) Edit, ZeroConstructor, Config
		class FString                                              ProjectVersion;                                          // 0x00A8(0x0010) Edit, ZeroConstructor, Config
		class FString                                              SupportContact;                                          // 0x00B8(0x0010) Edit, ZeroConstructor, Config

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EngineSettings.HudSettings
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UHudSettings : public UObject
	{
	public:
		bool                                                       bShowHUD : 1;                                            // 0x0028(0x0001) BIT_FIELD Edit, Config, NoDestructor
		unsigned char                                              UnknownData_SG28[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        DebugDisplay;                                            // 0x0030(0x0010) Edit, ZeroConstructor, Config, GlobalConfig

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
