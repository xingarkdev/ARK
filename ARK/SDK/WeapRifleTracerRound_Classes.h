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
	 * BlueprintGeneratedClass WeapRifleTracerRound.WeapRifleTracerRound_C
	 * Size -> 0x0004 (FullSize[0x0DCC] - InheritedSize[0x0DC8])
	 */
	class AWeapRifleTracerRound_C : public AShooterWeapon_Instant
	{
	public:
		int32_t                                                    RoundsFiredFromClip;                                     // 0x0DC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapRifleTracerRound(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
