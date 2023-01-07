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
	 * BlueprintGeneratedClass TekTrough.TekTrough_C
	 * Size -> 0x000A (FullSize[0x0E68] - InheritedSize[0x0E5E])
	 */
	class ATekTrough_C : public AFeedingTroughBaseBP_C
	{
	public:
		unsigned char                                              UnknownData_SLM7[0x2];                                   // 0x0E5E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimalInventoryBP_TekTrough_C*                      PrimalInventoryBP_TekTrough_C1;                          // 0x0E60(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_TekTrough(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
