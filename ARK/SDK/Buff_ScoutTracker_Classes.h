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
	 * BlueprintGeneratedClass Buff_ScoutTracker.Buff_ScoutTracker_C
	 * Size -> 0x0029 (FullSize[0x09A9] - InheritedSize[0x0980])
	 */
	class ABuff_ScoutTracker_C : public ABuff_Base_C
	{
	public:
		class UStaticMeshComponent*                                LaserTracker;                                            // 0x0980(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsPreviewTracker;                                        // 0x0988(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EScoutTrackerStates                                        TrackerState;                                            // 0x0989(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              TrackerStateReplicated;                                  // 0x098A(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_68IY[0x5];                                   // 0x098B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    DamageCauserReplicated;                                  // 0x0990(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TrackerTargetZOffset;                                    // 0x0998(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_IsPreviewTracker;                     // 0x099C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VSSG[0x3];                                   // 0x099D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              K2Node_CustomEvent_DamageCauser;                         // 0x09A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue;                // 0x09A8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		class FString BPGetDebugInfoString();
		void BuffTickClient(float DeltaTime);
		void UpdateTrackerState();
		void OnRep_TrackerStateReplicated();
		void DisableAllEmitters(EScoutTrackerStates ButEnableThis);
		void UpdateFX(class UParticleSystemComponent* ParticleSystemComp);
		void ReceiveBeginPlay();
		void BuffTickServer(float DeltaTime);
		void UserConstructionScript();
		void SetIsPreviewTracker(bool IsPreviewTracker, class AActor* DamageCauser);
		void ExecuteUbergraph_Buff_ScoutTracker(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
