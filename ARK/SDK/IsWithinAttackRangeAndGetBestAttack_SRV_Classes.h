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
	 * BlueprintGeneratedClass IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C
	 * Size -> 0x00F0 (FullSize[0x0170] - InheritedSize[0x0080])
	 */
	class UIsWithinAttackRangeAndGetBestAttack_SRV_C : public UBTService_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              IsWithinAttackRangeKey;                                  // 0x0080(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              LastCheckAttackRangeClosestPointKey;                     // 0x00A8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              UseAltenateMovePoint;                                    // 0x00D0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              BestAttackIndexKey;                                      // 0x00F8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              AttackIntervalKey;                                       // 0x0120(0x0028) Edit, BlueprintVisible
		class AActor*                                              K2Node_Event_OwnerActor;                                 // 0x0148(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_Event_DeltaSeconds;                               // 0x0150(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EK59[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalDinoAIController*                             K2Node_DynamicCast_AsPrimalDinoAIController;             // 0x0158(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0160(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LGMV[0x3];                                   // 0x0161(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetAttackInterval_ReturnValue;                  // 0x0164(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsWithinAttackRangeAndCalculateBestAttack_bAttackChanged; // 0x0168(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsWithinAttackRangeAndCalculateBestAttack_ReturnValue; // 0x0169(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              CallFunc_GetCurrentAttackIndex_ReturnValue;              // 0x016A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_ByteByte_ReturnValue;                  // 0x016B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Conv_ByteToInt_ReturnValue;                     // 0x016C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void UpdateBlackboardKeys(class APrimalDinoAIController* OwnerController);
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
		void ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
