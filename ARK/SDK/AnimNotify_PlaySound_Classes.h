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
	 * BlueprintGeneratedClass AnimNotify_PlaySound.AnimNotify_PlaySound_C
	 * Size -> 0x0029 (FullSize[0x0061] - InheritedSize[0x0038])
	 */
	class UAnimNotify_PlaySound_C : public UAnimNotify
	{
	public:
		float                                                      VolumeMultiplier;                                        // 0x0038(0x0004) Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PitchMultiplier;                                         // 0x003C(0x0004) Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              AttachName;                                              // 0x0040(0x0010) Edit, ConstParm, BlueprintVisible, ZeroConstructor
		class USoundBase*                                          Sound;                                                   // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		float                                                      PercentChanceToPlay;                                     // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bPawnIgnoreInFPV;                                        // 0x005C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bPawnIgnoreInTPV;                                        // 0x005D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIgnoreForLocallyControlled;                             // 0x005E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDoFollow;                                               // 0x005F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIgnoreIfMeshHidden;                                     // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		class FString GetNotifyName();
		bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
