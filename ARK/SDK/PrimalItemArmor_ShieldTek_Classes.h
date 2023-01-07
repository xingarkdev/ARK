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
	 * BlueprintGeneratedClass PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C
	 * Size -> 0x001F (FullSize[0x0C20] - InheritedSize[0x0C01])
	 */
	class UPrimalItemArmor_ShieldTek_C : public UPrimalItemArmor_Base_Tek_C
	{
	public:
		unsigned char                                              UnknownData_Z9N4[0x3];                                   // 0x0C01(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DurabilityCostPerReflection;                             // 0x0C04(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              MjolnirProjectileClass;                                  // 0x0C08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              MjolnirProjectileSoftRef;                                // 0x0C10(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void BPClientHandleItemNetExecCommand(const class FName& CommandName, struct FBPNetExecParams* ExecParams, class AShooterPlayerController* ForPC);
		void PlayHitShieldEffect(bool bLocalOnly);
		bool BPConsumeProjectileImpact(class AShooterProjectile* theProjectile, struct FHitResult* HitResult);
		void BPAddedAttachments();
		void RefreshAmmoMaterial();
		void ClientUpdatedWeaponClipAmmo();
		float HandleShieldDamageBlocking(class AShooterCharacter* ForShooterCharacter, float DamageIn, struct FDamageEvent* DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
		void ExecuteUbergraph_PrimalItemArmor_ShieldTek(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
