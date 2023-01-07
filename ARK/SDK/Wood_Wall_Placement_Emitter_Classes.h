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
	 * BlueprintGeneratedClass Wood_Wall_Placement_Emitter.Wood_Wall_Placement_Emitter_C
	 * Size -> 0x0000 (FullSize[0x0520] - InheritedSize[0x0520])
	 */
	class AWood_Wall_Placement_Emitter_C : public APrimalEmitterSpawnable
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Wood_Wall_Placement_Emitter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
