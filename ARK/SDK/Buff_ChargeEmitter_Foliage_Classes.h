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
	 * BlueprintGeneratedClass Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C
	 * Size -> 0x0008 (FullSize[0x0BA0] - InheritedSize[0x0B98])
	 */
	class ABuff_ChargeEmitter_Foliage_C : public ABuff_ChargeEmitter_C
	{
	public:
		float                                                      chargeEmittedPerSecond;                                  // 0x0B98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      emitterRange;                                            // 0x0B9C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetActorsToIgnoreOnRaycast(class AActor* emitterActor, TArray<class AActor*>* ActorsToIgnore);
		void GetEmitterActor(class AActor** emitterActor);
		void GetChargeVariable(E_ChargeVariableNames VariableName, float* fValue, double* dValue, bool* bBValue, int32_t* ivalue);
		void CanEmitCharge(bool* canEmit);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Buff_ChargeEmitter_Foliage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
