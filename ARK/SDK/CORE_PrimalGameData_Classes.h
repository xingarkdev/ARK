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
	 * BlueprintGeneratedClass CORE_PrimalGameData.CORE_PrimalGameData_C
	 * Size -> 0x0020 (FullSize[0x2100] - InheritedSize[0x20E0])
	 */
	class UCORE_PrimalGameData_C : public UPrimalGameData
	{
	public:
		TArray<struct FHairMetaData>                               FemaleHairStylesMetaDatas;                               // 0x20E0(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FHairMetaData>                               MaleHairStylesMetaDatas;                                 // 0x20F0(0x0010) Edit, BlueprintVisible, ZeroConstructor

	public:
		void ExecuteUbergraph_CORE_PrimalGameData(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
