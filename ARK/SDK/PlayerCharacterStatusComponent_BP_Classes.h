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
	 * BlueprintGeneratedClass PlayerCharacterStatusComponent_BP.PlayerCharacterStatusComponent_BP_C
	 * Size -> 0x0020 (FullSize[0x10B0] - InheritedSize[0x1090])
	 */
	class UPlayerCharacterStatusComponent_BP_C : public UPrimalPlayerStatusComponent
	{
	public:
		TArray<class FName>                                        GeneralizedAchievementTags_GrantedExtraPlayerLevels_Fname; // 0x1090(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            GeneralizedAchievementTags_GrantedExtraPlayerLevels_Value; // 0x10A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		float BPModifyMaxExperiencePoints(float InMaxExperiencePoints);
		int32_t BPModifyMaxLevel(int32_t InMaxLevel);
		void ExecuteUbergraph_PlayerCharacterStatusComponent_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
