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
	 * BlueprintGeneratedClass WeapElectricProd.WeapElectricProd_C
	 * Size -> 0x0018 (FullSize[0x0DA8] - InheritedSize[0x0D90])
	 */
	class AWeapElectricProd_C : public AWeapBaseClub_C
	{
	public:
		class UAudioComponent*                                     Audio1;                                                  // 0x0D90(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            TaserFXFPV;                                              // 0x0D98(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            TaserFX;                                                 // 0x0DA0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void BPHandleMeleeAttack();
		void UserConstructionScript();
		void ReactivateParticles();
		void ExecuteUbergraph_WeapElectricProd(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
