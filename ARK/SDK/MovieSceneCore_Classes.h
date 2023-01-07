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
	 * Class MovieSceneCore.MovieScene
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UMovieScene : public UObject
	{
	public:
		TArray<struct FMovieSceneSpawnable>                        Spawnables;                                              // 0x0028(0x0010) ZeroConstructor
		TArray<struct FMovieScenePossessable>                      Possessables;                                            // 0x0038(0x0010) ZeroConstructor
		TArray<struct FMovieSceneObjectBinding>                    ObjectBindings;                                          // 0x0048(0x0010) ZeroConstructor
		TArray<class UMovieSceneTrack*>                            MasterTracks;                                            // 0x0058(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCore.MovieSceneBindings
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UMovieSceneBindings : public UObject
	{
	public:
		class UMovieScene*                                         RootMovieScene;                                          // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FMovieSceneBoundObject>                      BoundObjects;                                            // 0x0030(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCore.MovieSceneSection
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UMovieSceneSection : public UObject
	{
	public:
		float                                                      StartTime;                                               // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      EndTime;                                                 // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    RowIndex;                                                // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZO9N[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCore.MovieSceneTrack
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneTrack : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCore.MovieScenePropertyTrack
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UMovieScenePropertyTrack : public UMovieSceneTrack
	{
	public:
		class FName                                                PropertyName;                                            // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		class FString                                              PropertyPath;                                            // 0x0030(0x0010) ZeroConstructor, Protected
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0040(0x0010) ZeroConstructor, Protected
		bool                                                       bSectionsAreShowable;                                    // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_TOAQ[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCore.RuntimeMovieScenePlayer
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	class URuntimeMovieScenePlayer : public UObject
	{
	public:
		unsigned char                                              UnknownData_3R9T[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMovieSceneBindings*                                 MovieSceneBindings;                                      // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     TimeCursorPosition;                                      // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsPlaying;                                              // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V2E5[0x67];                                  // 0x0051(0x0067) MISSED OFFSET (PADDING)

	public:
		void Play();
		void Pause();
		class URuntimeMovieScenePlayer* STATIC_CreateRuntimeMovieScenePlayer(class ULevel* Level, class UMovieSceneBindings* InMovieSceneBindings);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
