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
	 * BlueprintGeneratedClass DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C
	 * Size -> 0x0018 (FullSize[0x00B8] - InheritedSize[0x00A0])
	 */
	class UDinoAttackState_IceJumper_Dash_C : public UPrimalAIStateBPBase
	{
	public:
		bool                                                       InDashPreventionVolume;                                  // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MF5H[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x00A8(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		bool OnCanUseStateEvent();
		bool BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget);
		void OnEndEvent();
		void OnTickEvent(float DeltaSeconds);
		void OnBeginEvent(class UPrimalAIState* InParentState);
		void IsAIControlled(bool* NewParam);
		void ExecuteUbergraph_DinoAttackState_IceJumper_Dash(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
