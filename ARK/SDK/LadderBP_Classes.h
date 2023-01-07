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
	 * BlueprintGeneratedClass LadderBP.LadderBP_C
	 * Size -> 0x0000 (FullSize[0x0B50] - InheritedSize[0x0B50])
	 */
	class ALadderBP_C : public ALadderBaseBP_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_LadderBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
