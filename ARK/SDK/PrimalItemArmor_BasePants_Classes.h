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
	 * BlueprintGeneratedClass PrimalItemArmor_BasePants.PrimalItemArmor_BasePants_C
	 * Size -> 0x0028 (FullSize[0x0B10] - InheritedSize[0x0AE8])
	 */
	class UPrimalItemArmor_BasePants_C : public UPrimalItemArmorGeneric_C
	{
	public:
		class USoundBase*                                          SoundOverrideProneStart;                                 // 0x0AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          SoundOverrideProneEnd;                                   // 0x0AF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          SoundOverrideProneStep;                                  // 0x0AF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          SoundOverrideCrouchStart;                                // 0x0B00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          SoundOverrideCrouchEnd;                                  // 0x0B08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		class USoundBase* OverrideCrouchingSound(class USoundBase* InSound, bool bIsProne, int32_t soundState);
		void ExecuteUbergraph_PrimalItemArmor_BasePants(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
