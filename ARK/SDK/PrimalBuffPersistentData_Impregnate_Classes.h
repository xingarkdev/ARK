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
	 * BlueprintGeneratedClass PrimalBuffPersistentData_Impregnate.PrimalBuffPersistentData_Impregnate_C
	 * Size -> 0x0048 (FullSize[0x0094] - InheritedSize[0x004C])
	 */
	class UPrimalBuffPersistentData_Impregnate_C : public UPrimalBuffPersistentData_GenericTimeRemaining_C
	{
	public:
		unsigned char                                              UnknownData_C8S1[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FARKDinoData                                        QueenDinoData;                                           // 0x0050(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic
		float                                                      TotalExperienceGained;                                   // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		void ExecuteUbergraph_PrimalBuffPersistentData_Impregnate(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
