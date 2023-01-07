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
	 * BlueprintGeneratedClass Megalania_AIController_BP.Megalania_AIController_BP_C
	 * Size -> 0x0000 (FullSize[0x0921] - InheritedSize[0x0921])
	 */
	class AMegalania_AIController_BP_C : public ADino_AIController_BP_Climber_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Megalania_AIController_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
