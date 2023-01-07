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
	 * BlueprintGeneratedClass BP_TriRoof_Greenhouse.BP_TriRoof_Greenhouse_C
	 * Size -> 0x0000 (FullSize[0x0AF1] - InheritedSize[0x0AF1])
	 */
	class ABP_TriRoof_Greenhouse_C : public ABase_Roof_Tri_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_BP_TriRoof_Greenhouse(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
