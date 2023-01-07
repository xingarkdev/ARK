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
	 * BlueprintGeneratedClass Diplo_AI_Blueprint.Diplo_AI_Blueprint_C
	 * Size -> 0x0000 (FullSize[0x0921] - InheritedSize[0x0921])
	 */
	class ADiplo_AI_Blueprint_C : public ADino_AIController_BP_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Diplo_AI_Blueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
