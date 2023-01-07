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
	 * BlueprintGeneratedClass WeapClimbPick.WeapClimbPick_C
	 * Size -> 0x0064 (FullSize[0x14CC] - InheritedSize[0x1468])
	 */
	class AWeapClimbPick_C : public AShooterWeapon_Climb
	{
	public:
		class UStaticMeshComponent*                                ClimbingPickLeftTPV;                                     // 0x1468(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ClimbAnchorParticles;                                    // 0x1470(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     ClimbAnchor;                                             // 0x1478(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ClimbTargetParticles;                                    // 0x1480(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     ClimbTarget;                                             // 0x1488(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                ClimbingPickLeft;                                        // 0x1490(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                ClimbingPickTPV;                                         // 0x1498(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                ClimbingPick;                                            // 0x14A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ClimbAnchorInterpSpeed;                                  // 0x14A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ClimbTargetInterpSpeed;                                  // 0x14AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     ValidTemplate;                                           // 0x14B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     WalkableTemplate;                                        // 0x14B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     InvalidTemplate;                                         // 0x14C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ClimbingFOVMultiplier;                                   // 0x14C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPOnWeaponAnimPlayedNotify(struct FWeaponAnim* Animation, float InPlayRate, bool bPlayBothFirstAndThirdPerson, bool bReplicate, bool bReplicateToInstigator, bool bPauseOnFinish1P, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer);
		void StartUnequipEvent();
		float BPModifyFOV(float inFOV);
		void SetSourceLocation(class UParticleSystemComponent* ParticleSystem, const struct FVector& NewSourcePoint);
		void SetTemplateTo(class UParticleSystemComponent* ParticleSystem, class UParticleSystem* NewTemplate);
		void BPUpdateClimbTarget(float DeltaSeconds, bool bClimbing, struct FVector* AnchorPosition, struct FVector* AnchorNormal, bool bCanClimb, bool bCanLand, struct FVector* ClimbLocation, struct FVector* ClimbNormal, bool bHudVisible);
		void UserConstructionScript();
		void ExecuteUbergraph_WeapClimbPick(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
