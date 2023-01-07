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
	 * BlueprintGeneratedClass Xenomorph_Male_AIController_BP.Xenomorph_Male_AIController_BP_C
	 * Size -> 0x0000 (FullSize[0x0942] - InheritedSize[0x0942])
	 */
	class AXenomorph_Male_AIController_BP_C : public AXenomorph_AIController_BP_C
	{
	public:
		bool ShouldIgnoreAggression(class UObject* Target);
		void UserConstructionScript();
		void ExecuteUbergraph_Xenomorph_Male_AIController_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
