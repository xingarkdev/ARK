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
	 * BlueprintGeneratedClass BaseFuelBurner_GasOnly.BaseFuelBurner_GasOnly_C
	 * Size -> 0x0000 (FullSize[0x0E18] - InheritedSize[0x0E18])
	 */
	class ABaseFuelBurner_GasOnly_C : public ABaseFuelBurner_C
	{
	public:
		void NotifyCraftingFinished();
		void UserConstructionScript();
		void ExecuteUbergraph_BaseFuelBurner_GasOnly(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
