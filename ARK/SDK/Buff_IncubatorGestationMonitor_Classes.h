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
	 * BlueprintGeneratedClass Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C
	 * Size -> 0x0014 (FullSize[0x0994] - InheritedSize[0x0980])
	 */
	class ABuff_IncubatorGestationMonitor_C : public APrimalBuff
	{
	public:
		TArray<class APrimalDinoCharacter*>                        GestationMonitoringTargets;                              // 0x0980(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      ResetTargetRange;                                        // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BuffTickServer(float DeltaTime);
		TArray<class APrimalDinoCharacter*> GetEnabledGestationMonitoringTargets();
		void SetGestationMonitoringTarget(class APrimalDinoCharacter* forTarget, bool bEnable);
		void ReplicateGestationData(const struct FUnreplicatedEggData& GestationData, class APrimalDinoCharacter* forTarget);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_IncubatorGestationMonitor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
