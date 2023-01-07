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
	 * BlueprintGeneratedClass Service_ScoutStrafe.Service_ScoutStrafe_C
	 * Size -> 0x0001 (FullSize[0x0081] - InheritedSize[0x0080])
	 */
	class UService_ScoutStrafe_C : public UBTService_BlueprintBase
	{
	public:
		bool                                                       IsTargetAimingAtScoutPrev;                               // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
		void ReceiveDeactivation(class AActor* OwnerActor);
		void ReceiveActivation(class AActor* OwnerActor);
		void ExecuteUbergraph_Service_ScoutStrafe(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
