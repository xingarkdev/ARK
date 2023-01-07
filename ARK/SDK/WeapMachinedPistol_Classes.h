﻿#pragma once

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
	 * BlueprintGeneratedClass WeapMachinedPistol.WeapMachinedPistol_C
	 * Size -> 0x0000 (FullSize[0x0DC8] - InheritedSize[0x0DC8])
	 */
	class AWeapMachinedPistol_C : public AShooterWeapon_Instant
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapMachinedPistol(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
