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
	 * Class MovieSceneCoreTypes.MovieScene3DTransformSection
	 * Size -> 0x03A8 (FullSize[0x03E0] - InheritedSize[0x0038])
	 */
	class UMovieScene3DTransformSection : public UMovieSceneSection
	{
	public:
		struct FRichCurve                                          Translation[0x3];                                        // 0x0038(0x0138)
		struct FRichCurve                                          Rotation[0x3];                                           // 0x0170(0x0138)
		struct FRichCurve                                          Scale[0x3];                                              // 0x02A8(0x0138)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCoreTypes.MovieScene3DTransformTrack
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCoreTypes.MovieSceneAnimationSection
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UMovieSceneAnimationSection : public UMovieSceneSection
	{
	public:
		class UAnimSequence*                                       AnimSequence;                                            // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AnimationStartTime;                                      // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AnimationDilationFactor;                                 // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCoreTypes.MovieSceneAnimationTrack
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UMovieSceneAnimationTrack : public UMovieSceneTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          AnimationSections;                                       // 0x0028(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCoreTypes.MovieSceneAudioSection
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UMovieSceneAudioSection : public UMovieSceneSection
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AudioStartTime;                                          // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AudioDilationFactor;                                     // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCoreTypes.MovieSceneAudioTrack
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UMovieSceneAudioTrack : public UMovieSceneTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          AudioSections;                                           // 0x0028(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCoreTypes.MovieSceneBoolSection
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	class UMovieSceneBoolSection : public UMovieSceneSection
	{
	public:
		struct FIntegralCurve                                      BoolCurve;                                               // 0x0038(0x0068)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCoreTypes.MovieSceneBoolTrack
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCoreTypes.MovieSceneColorSection
	 * Size -> 0x01A0 (FullSize[0x01D8] - InheritedSize[0x0038])
	 */
	class UMovieSceneColorSection : public UMovieSceneSection
	{
	public:
		struct FRichCurve                                          RedCurve;                                                // 0x0038(0x0068)
		struct FRichCurve                                          GreenCurve;                                              // 0x00A0(0x0068)
		struct FRichCurve                                          BlueCurve;                                               // 0x0108(0x0068)
		struct FRichCurve                                          AlphaCurve;                                              // 0x0170(0x0068)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCoreTypes.MovieSceneColorTrack
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UMovieSceneColorTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCoreTypes.MovieSceneDirectorTrack
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UMovieSceneDirectorTrack : public UMovieSceneTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          ShotSections;                                            // 0x0028(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCoreTypes.MovieSceneFloatSection
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	class UMovieSceneFloatSection : public UMovieSceneSection
	{
	public:
		struct FRichCurve                                          FloatCurve;                                              // 0x0038(0x0068)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCoreTypes.MovieSceneFloatTrack
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCoreTypes.MovieSceneParticleSection
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UMovieSceneParticleSection : public UMovieSceneSection
	{
	public:
		EParticleKey                                               KeyType;                                                 // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4E75[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCoreTypes.MovieSceneParticleTrack
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UMovieSceneParticleTrack : public UMovieSceneTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          ParticleSections;                                        // 0x0028(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCoreTypes.MovieSceneShotSection
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UMovieSceneShotSection : public UMovieSceneSection
	{
	public:
		struct FGuid                                               CameraGuid;                                              // 0x0038(0x0010) ZeroConstructor
		class FText                                                Title;                                                   // 0x0048(0x0018) ELEMENT_SIZE_MISMATCH
		unsigned char                                              UnknownData_6LK3[0x10];                                  // 0x0060(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCoreTypes.MovieSceneVectorSection
	 * Size -> 0x01A8 (FullSize[0x01E0] - InheritedSize[0x0038])
	 */
	class UMovieSceneVectorSection : public UMovieSceneSection
	{
	public:
		struct FRichCurve                                          Curves[0x4];                                             // 0x0038(0x01A0)
		int32_t                                                    ChannelsUsed;                                            // 0x01D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M05K[0x4];                                   // 0x01DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCoreTypes.MovieSceneVectorTrack
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
	{
	public:
		int32_t                                                    NumChannelsUsed;                                         // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PFUV[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCoreTypes.SubMovieSceneSection
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USubMovieSceneSection : public UMovieSceneSection
	{
	public:
		class UMovieScene*                                         MovieScene;                                              // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MovieSceneStartTime;                                     // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MovieSceneTimeEndTime;                                   // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCoreTypes.SubMovieSceneTrack
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USubMovieSceneTrack : public UMovieSceneTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          SubMovieSceneSections;                                   // 0x0028(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
