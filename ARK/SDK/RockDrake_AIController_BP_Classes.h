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
	 * BlueprintGeneratedClass RockDrake_AIController_BP.RockDrake_AIController_BP_C
	 * Size -> 0x0001 (FullSize[0x0922] - InheritedSize[0x0921])
	 */
	class ARockDrake_AIController_BP_C : public ADino_AIController_BP_Climber_C
	{
	public:
		bool                                                       bWasDrakeUsingCamo;                                      // 0x0921(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPNotifyTargetSet();
		void UserConstructionScript();
		void ExecuteUbergraph_RockDrake_AIController_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
