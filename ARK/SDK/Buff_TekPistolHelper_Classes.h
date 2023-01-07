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
	 * BlueprintGeneratedClass Buff_TekPistolHelper.Buff_TekPistolHelper_C
	 * Size -> 0x0750 (FullSize[0x10D0] - InheritedSize[0x0980])
	 */
	class ABuff_TekPistolHelper_C : public APrimalBuff
	{
	public:
		struct FHUDElement                                         ModeTextHUDElement;                                      // 0x0980(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     LastModeSwitchTime;                                      // 0x0AD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        KillModeTextColor;                                       // 0x0AD8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        StunModeTextColor;                                       // 0x0AE8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        HealModeTextColor;                                       // 0x0AF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FHUDElement                                         HealthBarHUDElementTemplate;                             // 0x0B08(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<EObjectTypeQuery>                                   HUDDetectObjectTypes;                                    // 0x0C58(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FHUDElement                                         HealthBarFrameHUDElementTemplate;                        // 0x0C68(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        HighHPColor;                                             // 0x0DB8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        LowHPColor;                                              // 0x0DC8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HUDIndicatorVisibilityRange;                             // 0x0DD8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2XZW[0x4];                                   // 0x0DDC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHUDElement                                         KillBarHUDElementTemplate;                               // 0x0DE0(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FHUDElement                                         StunBarHUDElementTemplate;                               // 0x0F30(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      HUDElementScaleClose;                                    // 0x1080(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HUDElementScaleFar;                                      // 0x1084(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             HealthBarWorldOffsetClose;                               // 0x1088(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             HealthBarWorldOffsetFar;                                 // 0x1094(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             KillBarWorldOffsetClose;                                 // 0x10A0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             KillBarWorldOffsetFar;                                   // 0x10AC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             StunBarWorldOffsetClose;                                 // 0x10B8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             StunBarWorldOffsetFar;                                   // 0x10C4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPReactivateWithDamageCauser(class AActor* ForInstigator, class AActor* ForDamageCauser);
		void SetHUDElementLocationandScalefromWorldProjection(class APlayerController* PlayerController, class AActor* TargetActor, struct FHUDElement* HUDElement, const struct FVector& WorldOffsetWhenClose, const struct FVector& WorldOffsetWhenFar, struct FHUDElement* OutElem, bool* IsTargetOnScreen);
		void BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_TekPistolHelper(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
