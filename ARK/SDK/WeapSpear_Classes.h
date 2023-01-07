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
	 * BlueprintGeneratedClass WeapSpear.WeapSpear_C
	 * Size -> 0x0000 (FullSize[0x0EB8] - InheritedSize[0x0EB8])
	 */
	class AWeapSpear_C : public APrimalWeaponBow
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapSpear(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
