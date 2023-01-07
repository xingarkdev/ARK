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
	 * BlueprintGeneratedClass IncubatorGestationEmitter.IncubatorGestationEmitter_C
	 * Size -> 0x0010 (FullSize[0x0530] - InheritedSize[0x0520])
	 */
	class AIncubatorGestationEmitter_C : public APrimalEmitterSpawnable
	{
	public:
		class USceneComponent*                                     CallFunc_GetAttachParent_ReturnValue;                    // 0x0520(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     CallFunc_PlaySoundAttached_ReturnValue;                  // 0x0528(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void ReceiveBeginPlay();
		void UserConstructionScript();
		void PlayBdayMusic();
		void ExecuteUbergraph_IncubatorGestationEmitter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
