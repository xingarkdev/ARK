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
	 * BlueprintGeneratedClass Buff_HazardSuitShirt.Buff_HazardSuitShirt_C
	 * Size -> 0x0000 (FullSize[0x09A0] - InheritedSize[0x09A0])
	 */
	class ABuff_HazardSuitShirt_C : public ABuff_HazardSuit_Base_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_HazardSuitShirt(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
