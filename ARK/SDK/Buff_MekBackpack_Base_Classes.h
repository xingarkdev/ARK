﻿#pragma once

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
	 * BlueprintGeneratedClass Buff_MekBackpack_Base.Buff_MekBackpack_Base_C
	 * Size -> 0x0002 (FullSize[0x0982] - InheritedSize[0x0980])
	 */
	class ABuff_MekBackpack_Base_C : public APrimalBuff
	{
	public:
		bool                                                       InterceptMekAttacks;                                     // 0x0980(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseOverrideTurnInPlaceSpeed;                             // 0x0981(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void OnSyncColorization();
		void NotifySetRider(class AShooterCharacter* Rider);
		void RestoreBackpackSaveData(const struct FMekBackpackData& SaveData);
		void GetBackpackSaveData(struct FMekBackpackData* Data);
		void NotifyInventoryChange(class UPrimalItem* Item, bool ItemAdded, bool ItemEquipped);
		void BPActivated(class AActor* ForInstigator);
		void SetBackpackMalfunctioned(bool IsBackpackDisabled);
		void NotifyActivateBackpack();
		void OverrideTurnInPlaceSpeed(float DefaultSpeed, float* NewSpeed);
		void NotifyStopAttack();
		void NotifyStartAttack(int32_t AttackIndex);
		void AllowHurtAnim(bool* Allow);
		void AllowTargeting(bool* Allow);
		void NotifyStopHover();
		void NotifyStartHover();
		void AllowMekHover(bool* CanHover);
		void NotifyStopTargeting();
		void NotifyStartTargeting();
		void OnAnimNotifyEvent(const class FName& EventName);
		void AllowMekPistol(bool* Allowed);
		void AllowMekSword(bool* Allowed);
		void OnBackpackAttack();
		void BPDeactivated(class AActor* ForInstigator);
		void GetMek(bool* IsValid, class AMek_Character_BP_C** MekChar);
		void IsBackpackActive(bool* IsActive);
		void CanDeactivateBackpack(bool* CanDeactivate);
		void CanActivateBackpack(bool* CanActivate, class FString* FailureMessage);
		void OnBackpackDeactivated();
		void OnBackpackActivated();
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_MekBackpack_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
