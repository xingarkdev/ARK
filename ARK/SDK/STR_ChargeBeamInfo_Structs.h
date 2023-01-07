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
	 * UserDefinedStruct STR_ChargeBeamInfo.STR_ChargeBeamInfo
	 * Size -> 0x0018
	 */
	struct FSTR_ChargeBeamInfo
	{
	public:
		class UParticleSystemComponent*                            beamParticles_2_86E889F045468D781D6B408096FFC857;        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class APrimalCharacter*                                    targetCharacter_8_C35E68754619450BAD40379114C9934A;      // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            endParticles_24_5A5579A9448F44BD1822E7B3CC310E8B;        // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
