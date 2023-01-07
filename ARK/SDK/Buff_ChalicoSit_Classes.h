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
	 * BlueprintGeneratedClass Buff_ChalicoSit.Buff_ChalicoSit_C
	 * Size -> 0x0008 (FullSize[0x0988] - InheritedSize[0x0980])
	 */
	class ABuff_ChalicoSit_C : public ABuff_Base_Stew_C
	{
	public:
		float                                                      percentHealthPerSecond;                                  // 0x0980(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      healthRecoveryThreshold;                                 // 0x0984(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BuffTickServer(float DeltaTime);
		bool BPPreventCharacterStatusValueModifiers(class APrimalCharacter* ForInstigator);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_ChalicoSit(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
