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
	 * UserDefinedStruct Struct_ClimberSimulatedMoveData.Struct_ClimberSimulatedMoveData
	 * Size -> 0x0024
	 */
	struct FStruct_ClimberSimulatedMoveData
	{
	public:
		struct FVector                                             ClimberLocation_2_7F62C91949CB933B8245DFA0FF75EC9E;      // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            ClimberRotation_7_42053DF944C85A07281585932FD27C64;      // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             ClimberVelocity_20_DFB3A2FF40B31D10C25794BEA3475451;     // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
