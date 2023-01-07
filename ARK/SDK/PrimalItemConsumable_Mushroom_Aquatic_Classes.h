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
	 * BlueprintGeneratedClass PrimalItemConsumable_Mushroom_Aquatic.PrimalItemConsumable_Mushroom_Aquatic_C
	 * Size -> 0x001C (FullSize[0x0B04] - InheritedSize[0x0AE8])
	 */
	class UPrimalItemConsumable_Mushroom_Aquatic_C : public UPrimalItemConsumable_Berry_Base_C
	{
	public:
		class UClass*                                              BuffTimeReductionClass;                                  // 0x0AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      BuffTimeReductionDuration;                               // 0x0AF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8TEC[0x4];                                   // 0x0AF4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ImmunityBuffClass;                                       // 0x0AF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ImmunityBuffTimeExtension;                               // 0x0B00(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void AddImmunity();
		void BlueprintUsed();
		void ExecuteUbergraph_PrimalItemConsumable_Mushroom_Aquatic(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
