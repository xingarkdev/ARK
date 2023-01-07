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
	 * BlueprintGeneratedClass Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C
	 * Size -> 0x0000 (FullSize[0x0A50] - InheritedSize[0x0A50])
	 */
	class ABuff_ChargeManager_Xenomorph_C : public ABuff_ChargeManager_C
	{
	public:
		void AddChargeSource(class ABuff_ChargeEmitter_C* Source);
		void OnChargeEvent();
		void CanReceiveCharge(bool* canReceive);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_ChargeManager_Xenomorph(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
