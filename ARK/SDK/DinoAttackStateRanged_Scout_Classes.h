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
	 * BlueprintGeneratedClass DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C
	 * Size -> 0x0028 (FullSize[0x00C8] - InheritedSize[0x00A0])
	 */
	class UDinoAttackStateRanged_Scout_C : public UPrimalAIStateBPBase
	{
	public:
		float                                                      ProjectileRange;                                         // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RotationAtSpawnTime;                                     // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ProjectileVFXLifeTime;                                   // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ValidBeamTarget;                                         // 0x00AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LCRM[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BeamDistanceCurrent;                                     // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5XKG[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              ValidBeamTargetActor;                                    // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              PrevValidBeamTargetActor;                                // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetScout(class AScout_Character_BP_C** Result);
		void OnTickEvent(float DeltaSeconds);
		void OnEndEvent();
		void BPRangedAttackOnBegin(struct FVector* TargetLocation, struct FVector* TargetVelocity);
		void TrackerImpactPawnorTerrain(class AActor* Target, const struct FVector& ImpactLocation, bool* IsValidTarget);
		void CalculateProjectileImpacts(const struct FVector& Origin, const struct FVector& Direction);
		void OnBeginEvent(class UPrimalAIState* InParentState);
		void ExecuteUbergraph_DinoAttackStateRanged_Scout(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
