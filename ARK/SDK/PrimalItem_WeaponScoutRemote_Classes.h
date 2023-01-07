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
	 * BlueprintGeneratedClass PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C
	 * Size -> 0x0040 (FullSize[0x0B28] - InheritedSize[0x0AE8])
	 */
	class UPrimalItem_WeaponScoutRemote_C : public UPrimalItemWeaponGeneric_C
	{
	public:
		class AScout_Character_BP_C*                               FiredScout;                                              // 0x0AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<float>                                              DefaultScoutStats;                                       // 0x0AF0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic
		class FString                                              BlueprintDisplayName;                                    // 0x0B00(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UTexture2D*                                          BlueprintIcon;                                           // 0x0B10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              ScoutResource;                                           // 0x0B18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UCurveFloat*                                         ScoutLevelToItemRatingMultCurve;                         // 0x0B20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetScoutStats(TArray<float>* Stats);
		class UTexture2D* BPGetItemIcon(class AShooterPlayerController* ForPC);
		class FString BPGetItemName(const class FString& ItemNameIn, class AShooterPlayerController* ForPC);
		void SetScoutCharacterStatusValues(TArray<float>* Stats);
		void OnRep_ScoutStats();
		class FString BPGetItemDescription(const class FString& InDescription, bool bGetLongDescription, class AShooterPlayerController* ForPC);
		void ScoutPossessedBySurvivor();
		void ScoutReleasedPossessingSurvivor();
		void BlueprintUnequipped();
		void CanFireWeapon(bool* Result, EScoutRemoteReturnCode* FailReason);
		void BlueprintEquipped(bool bIsFromSaveGame);
		void ExecuteUbergraph_PrimalItem_WeaponScoutRemote(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
