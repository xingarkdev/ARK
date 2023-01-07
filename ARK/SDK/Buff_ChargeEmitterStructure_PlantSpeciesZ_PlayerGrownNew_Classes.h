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
	 * BlueprintGeneratedClass Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew.Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C
	 * Size -> 0x0000 (FullSize[0x0C00] - InheritedSize[0x0C00])
	 */
	class ABuff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C : public ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C
	{
	public:
		void ShouldEnableTimers(bool* tickServer, bool* TickClient);
		void CanEmitCharge(bool* canEmit);
		void AttachBuffToPlant();
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
