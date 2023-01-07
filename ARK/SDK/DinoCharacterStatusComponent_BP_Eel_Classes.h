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
	 * BlueprintGeneratedClass DinoCharacterStatusComponent_BP_Eel.DinoCharacterStatusComponent_BP_Eel_C
	 * Size -> 0x0004 (FullSize[0x1094] - InheritedSize[0x1090])
	 */
	class UDinoCharacterStatusComponent_BP_Eel_C : public UDinoCharacterStatusComponent_BP_C
	{
	public:
		float                                                      HealthWhileInWaterRegenMultiplier;                       // 0x1090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		float BPAdjustStatusValueModification(EPrimalCharacterStatusValue ValueType, float amount, class UClass* DamageTypeClass, bool bManualModification);
		void ExecuteUbergraph_DinoCharacterStatusComponent_BP_Eel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
