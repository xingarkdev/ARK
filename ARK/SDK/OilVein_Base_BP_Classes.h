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
	 * BlueprintGeneratedClass OilVein_Base_BP.OilVein_Base_BP_C
	 * Size -> 0x0000 (FullSize[0x0B10] - InheritedSize[0x0B10])
	 */
	class AOilVein_Base_BP_C : public AWaterPipe_Base_Straight_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_OilVein_Base_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
