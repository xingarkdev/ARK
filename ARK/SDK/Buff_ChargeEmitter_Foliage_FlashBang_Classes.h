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
	 * BlueprintGeneratedClass Buff_ChargeEmitter_Foliage_FlashBang.Buff_ChargeEmitter_Foliage_FlashBang_C
	 * Size -> 0x0000 (FullSize[0x0BA0] - InheritedSize[0x0BA0])
	 */
	class ABuff_ChargeEmitter_Foliage_FlashBang_C : public ABuff_ChargeEmitter_Foliage_C
	{
	public:
		void GetActorsToIgnoreOnRaycast(class AActor* emitterActor, TArray<class AActor*>* ActorsToIgnore);
		void CanEmitCharge(bool* canEmit);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_ChargeEmitter_Foliage_FlashBang(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
