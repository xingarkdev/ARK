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
	 * BlueprintGeneratedClass Service_SetFlockAttackFormation.Service_SetFlockAttackFormation_C
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UService_SetFlockAttackFormation_C : public UBTService_BlueprintBase
	{
	public:
		void ReceiveDeactivation(class AActor* OwnerActor);
		void ReceiveActivation(class AActor* OwnerActor);
		void ExecuteUbergraph_Service_SetFlockAttackFormation(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
