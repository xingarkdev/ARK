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
	 * BlueprintGeneratedClass ProjCatapultBoulder.ProjCatapultBoulder_C
	 * Size -> 0x0000 (FullSize[0x0690] - InheritedSize[0x0690])
	 */
	class AProjCatapultBoulder_C : public APrimalProjectileArrow
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_ProjCatapultBoulder(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
