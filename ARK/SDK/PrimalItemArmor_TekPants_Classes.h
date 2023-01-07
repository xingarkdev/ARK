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
	 * BlueprintGeneratedClass PrimalItemArmor_TekPants.PrimalItemArmor_TekPants_C
	 * Size -> 0x003F (FullSize[0x0C40] - InheritedSize[0x0C01])
	 */
	class UPrimalItemArmor_TekPants_C : public UPrimalItemArmor_Base_Tek_C
	{
	public:
		unsigned char                                              UnknownData_2GRK[0x7];                                   // 0x0C01(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          SoundOverrideProneStart;                                 // 0x0C08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          SoundOverrideProneEnd;                                   // 0x0C10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          SoundOverrideProneStep;                                  // 0x0C18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          SoundOverrideCrouchStart;                                // 0x0C20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          SoundOverrideCrouchEnd;                                  // 0x0C28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              CannotUseAbilityDescriptionaddon;                        // 0x0C30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		class USoundBase* OverrideCrouchingSound(class USoundBase* InSound, bool bIsProne, int32_t soundState);
		void ExecuteUbergraph_PrimalItemArmor_TekPants(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
