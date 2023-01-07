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
	 * BlueprintGeneratedClass Structure_PlantSpeciesY.Structure_PlantSpeciesY_C
	 * Size -> 0x0009 (FullSize[0x0BA1] - InheritedSize[0x0B98])
	 */
	class AStructure_PlantSpeciesY_C : public ABaseBearTrap_C
	{
	public:
		float                                                      DecayRate;                                               // 0x0B98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AmountOfDecay;                                           // 0x0B9C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0BA0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		float BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo);
		void BPNotifyImmobilizedCharacterIsDeadOrInConscious(bool IsDead, bool IsConscious);
		void BPNotifyImmobilizedCharacterIsDead();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void PeriodicDamage();
		void ExecuteUbergraph_Structure_PlantSpeciesY(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
