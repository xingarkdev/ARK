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
	 * BlueprintGeneratedClass PrimalItemConsumable_Mushroom_Auric.PrimalItemConsumable_Mushroom_Auric_C
	 * Size -> 0x002C (FullSize[0x0B14] - InheritedSize[0x0AE8])
	 */
	class UPrimalItemConsumable_Mushroom_Auric_C : public UPrimalItemConsumable_Berry_Base_C
	{
	public:
		TArray<class UClass*>                                      BuffTimeReductionClasses;                                // 0x0AE8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      BuffTimeReductionDuration;                               // 0x0AF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2E30[0x4];                                   // 0x0AFC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      ImmunityBuffClasses;                                     // 0x0B00(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      ImmunityBuffTimeExtension;                               // 0x0B10(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void AddImmunity();
		void BlueprintUsed();
		void ExecuteUbergraph_PrimalItemConsumable_Mushroom_Auric(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
