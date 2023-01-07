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
	 * Class MediaAssets.MediaPlayer
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UMediaPlayer : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnMediaClosed;                                           // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnMediaOpened;                                           // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		bool                                                       AutoPlay : 1;                                            // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, Protected
		unsigned char                                              UnknownData_PPX3[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AutoPlayRate;                                            // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		bool                                                       Looping : 1;                                             // 0x0050(0x0001) BIT_FIELD Edit, NoDestructor, Protected
		unsigned char                                              UnknownData_8K1E[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EMediaPlayerStreamModes                                    StreamMode;                                              // 0x0054(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_UXGN[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              URL;                                                     // 0x0058(0x0010) Edit, ZeroConstructor, Protected
		unsigned char                                              UnknownData_7N0A[0x40];                                  // 0x0068(0x0040) MISSED OFFSET (PADDING)

	public:
		bool SupportsSeeking();
		bool SupportsScrubbing();
		bool SupportsRate(float Rate, bool Unthinned);
		bool SetRate(float Rate);
		void SetMute(bool bMute);
		bool SetLooping(bool InLooping);
		bool Seek(const struct FTimespan& InTime);
		bool Rewind();
		bool Play();
		bool Pause();
		bool OpenUrl(const class FString& NewUrl);
		void OnMediaPlayerMediaOpened__DelegateSignature(const class FString& OpenedUrl);
		void OnMediaPlayerMediaClosed__DelegateSignature();
		bool IsStopped();
		bool IsPlaying();
		bool IsPaused();
		bool IsLooping();
		class FString GetUrl();
		struct FTimespan GetTime();
		float GetRate();
		bool GetMute();
		struct FTimespan GetDuration();
		bool CanPlay();
		bool CanPause();
		static UClass* StaticClass();
	};

	/**
	 * Class MediaAssets.MediaSoundWave
	 * Size -> 0x0048 (FullSize[0x0248] - InheritedSize[0x0200])
	 */
	class UMediaSoundWave : public USoundWave
	{
	public:
		int32_t                                                    AudioTrackIndex;                                         // 0x0200(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6W3V[0x4];                                   // 0x0204(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMediaPlayer*                                        MediaPlayer;                                             // 0x0208(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GTTI[0x38];                                  // 0x0210(0x0038) MISSED OFFSET (PADDING)

	public:
		void SetMediaPlayer(class UMediaPlayer* InMediaPlayer);
		static UClass* StaticClass();
	};

	/**
	 * Class MediaAssets.MediaTexture
	 * Size -> 0x0058 (FullSize[0x0108] - InheritedSize[0x00B0])
	 */
	class UMediaTexture : public UTexture
	{
	public:
		ETextureAddress                                            AddressX;                                                // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable
		ETextureAddress                                            AddressY;                                                // 0x00B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable
		unsigned char                                              UnknownData_PDLX[0x2];                                   // 0x00B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ClearColor;                                              // 0x00B4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    VideoTrackIndex;                                         // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UMediaPlayer*                                        MediaPlayer;                                             // 0x00C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_J8GT[0x38];                                  // 0x00D0(0x0038) MISSED OFFSET (PADDING)

	public:
		void SetMediaPlayer(class UMediaPlayer* InMediaPlayer);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
