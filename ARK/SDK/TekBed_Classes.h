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
	 * BlueprintGeneratedClass TekBed.TekBed_C
	 * Size -> 0x0018 (FullSize[0x0F70] - InheritedSize[0x0F58])
	 */
	class ATekBed_C : public ABedBaseBP_C
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMesh1;                                           // 0x0F58(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USoundBase*                                          OpenedSound;                                             // 0x0F60(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USoundBase*                                          ClosedSound;                                             // 0x0F68(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void BPReleasedPlayer(class AShooterCharacter* ReleasedChar, int32_t AtSeatNumber);
		bool BPAllowSeating(class AShooterPlayerController* ForPC);
		void BPSeatedPlayer(class AShooterCharacter* SeatedChar, int32_t AtSeatNumber);
		void UserConstructionScript();
		void ExecuteUbergraph_TekBed(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
