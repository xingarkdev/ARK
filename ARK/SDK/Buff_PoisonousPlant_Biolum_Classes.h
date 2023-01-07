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
	 * BlueprintGeneratedClass Buff_PoisonousPlant_Biolum.Buff_PoisonousPlant_Biolum_C
	 * Size -> 0x0000 (FullSize[0x0994] - InheritedSize[0x0994])
	 */
	class ABuff_PoisonousPlant_Biolum_C : public ABuff_PoisonousTrap_Base_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_PoisonousPlant_Biolum(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
