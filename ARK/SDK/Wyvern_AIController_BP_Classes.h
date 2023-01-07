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
	 * BlueprintGeneratedClass Wyvern_AIController_BP.Wyvern_AIController_BP_C
	 * Size -> 0x0000 (FullSize[0x0921] - InheritedSize[0x0921])
	 */
	class AWyvern_AIController_BP_C : public ADino_AIController_BP_C
	{
	public:
		struct FVector2D BP_TamedOverrideHorizontalLandingRange();
		void UserConstructionScript();
		void ExecuteUbergraph_Wyvern_AIController_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
