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
	 * BlueprintGeneratedClass DmgType_Projectile_IceBreath_IceJumper.DmgType_Projectile_IceBreath_IceJumper_C
	 * Size -> 0x0010 (FullSize[0x0150] - InheritedSize[0x0140])
	 */
	class UDmgType_Projectile_IceBreath_IceJumper_C : public UDmgType_Projectile_IceBreath_C
	{
	public:
		class UCurveFloat*                                         TargetDistanceToFreezeMultiplier;                        // 0x0140(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DinoArmorRatingDivisorForFreezeAmountMult;               // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxPossibleFreezeReductionFromDinoArmorAsPercent;        // 0x014C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetFreezeBuffAmountPerHit(class APrimalCharacter* Target, class AActor* DamageCauser, float* Result);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
