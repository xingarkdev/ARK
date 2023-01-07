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
	 * BlueprintGeneratedClass TransGPSCharge.TransGPSCharge_C
	 * Size -> 0x0038 (FullSize[0x0BE0] - InheritedSize[0x0BA8])
	 */
	class ATransGPSCharge_C : public APrimalStructureExplosiveTransGPS
	{
	public:
		class USphereComponent*                                    StasisComponent;                                         // 0x0BA8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FTransform                                          RelativeTransform;                                       // 0x0BB0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		void BPPostLoadedFromSaveGame();
		void BPPlacedStructure(class APlayerController* ForPC);
		void UserConstructionScript();
		void ExecuteUbergraph_TransGPSCharge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
