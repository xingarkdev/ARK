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
	 * BlueprintGeneratedClass C4Charge.C4Charge_C
	 * Size -> 0x0008 (FullSize[0x0B90] - InheritedSize[0x0B88])
	 */
	class AC4Charge_C : public APrimalStructureExplosive
	{
	public:
		class USphereComponent*                                    StasisComponent;                                         // 0x0B88(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		bool BPPreventPlacementOnPawn(class APlayerController* PC, class APrimalCharacter* forCharacter, const class FName& ForBone);
		void UserConstructionScript();
		void ExecuteUbergraph_C4Charge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
