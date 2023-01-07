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
	 * BlueprintGeneratedClass Attacking_dR.Attacking_DR_C
	 * Size -> 0x0051 (FullSize[0x00E1] - InheritedSize[0x0090])
	 */
	class UAttacking_DR_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              WithinAttackRangeKey;                                    // 0x0090(0x0028) Edit, BlueprintVisible
		class AActor*                                              K2Node_Event_OwnerActor3;                                // 0x00B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              K2Node_Event_OwnerActor2;                                // 0x00C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		EBTNodeResult                                              K2Node_Event_NodeResult;                                 // 0x00C8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C28T[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              K2Node_Event_OwnerActor;                                 // 0x00D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalDinoAIController*                             K2Node_DynamicCast_AsPrimalDinoAIController;             // 0x00D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x00E0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void ReceiveExecutionStart(class AActor* OwnerActor);
		void ReceiveExecutionFinish(class AActor* OwnerActor, EBTNodeResult NodeResult);
		void ReceiveConditionCheck(class AActor* OwnerActor);
		void ExecuteUbergraph_Attacking_DR(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
