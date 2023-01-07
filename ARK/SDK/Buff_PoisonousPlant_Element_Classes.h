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
	 * BlueprintGeneratedClass Buff_PoisonousPlant_Element.Buff_PoisonousPlant_Element_C
	 * Size -> 0x0010 (FullSize[0x09A4] - InheritedSize[0x0994])
	 */
	class ABuff_PoisonousPlant_Element_C : public ABuff_PoisonousTrap_Base_C
	{
	public:
		unsigned char                                              UnknownData_TNNA[0x4];                                   // 0x0994(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              chargeBuff;                                              // 0x0998(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      StaminaValueOnSetup;                                     // 0x09A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void BPSetupForInstigator(class AActor* ForInstigator);
		void BPActivated(class AActor* ForInstigator);
		float BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent* ForComponent, EPrimalCharacterStatusValue ValueType, float InAmount, class UClass* DamageTypeClass, bool bManualModification);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_PoisonousPlant_Element(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
