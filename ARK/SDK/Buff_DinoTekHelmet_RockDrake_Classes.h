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
	 * BlueprintGeneratedClass Buff_DinoTekHelmet_RockDrake.Buff_DinoTekHelmet_RockDrake_C
	 * Size -> 0x0004 (FullSize[0x0C6C] - InheritedSize[0x0C68])
	 */
	class ABuff_DinoTekHelmet_RockDrake_C : public ABuff_DinoTekHelmet_Base_C
	{
	public:
		float                                                      SocketClampDeltaClimbing;                                // 0x0C68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BuffTickClient(float DeltaTime);
		void GetSocketClampDelta(float* OutSocketClampDelta);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_DinoTekHelmet_RockDrake(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
