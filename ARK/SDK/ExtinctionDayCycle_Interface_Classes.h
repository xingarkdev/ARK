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
	 * BlueprintGeneratedClass ExtinctionDayCycle_Interface.ExtinctionDayCycle_Interface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UExtinctionDayCycle_Interface_C : public UInterface
	{
	public:
		void GetVar_KKArenaAscenscionLoc(class AActor** SSPoint);
		void GetVar_DKArenaLoc(class AActor** Value);
		void GetVar_IsBossElectricalStormActive(bool* Value);
		void GetVar_KKArenaLoc(class AActor** ServerPoint);
		void GetVar_FKArenaLoc(class AActor** ServerPoint);
		void GetVar_IKArenaLoc(class AActor** ServerPoint);
		void SetVar_Boss_ElectricalStormActive(bool Value);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
