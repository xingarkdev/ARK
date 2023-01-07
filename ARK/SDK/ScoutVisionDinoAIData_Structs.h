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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct ScoutVisionDinoAIData.ScoutVisionDinoAIData
	 * Size -> 0x0011
	 */
	struct FScoutVisionDinoAIData
	{
	public:
		class APrimalDinoCharacter*                                Dino_5_3494A8514B761533D8CD4A907BDD7994;                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     LastQueryTime_12_6D5D68BD49EA9166FED6B384D863C9FC;       // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsFleeing_11_25C1975F442E47BAE2CAEA813FA0057E;           // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
