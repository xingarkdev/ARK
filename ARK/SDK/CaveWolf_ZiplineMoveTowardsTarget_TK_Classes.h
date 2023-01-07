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
	 * BlueprintGeneratedClass CaveWolf_ZiplineMoveTowardsTarget_TK.CaveWolf_ZiplineMoveTowardsTarget_TK_C
	 * Size -> 0x009F (FullSize[0x0117] - InheritedSize[0x0078])
	 */
	class UCaveWolf_ZiplineMoveTowardsTarget_TK_C : public UBTTask_BlueprintBase
	{
	public:
		float                                                      AcceptanceRange;                                         // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7NRZ[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              RangeKey;                                                // 0x0080(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              LocationOverride;                                        // 0x00A8(0x0028) Edit, BlueprintVisible
		bool                                                       UseLocationOverride;                                     // 0x00D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseRangeOverride;                                        // 0x00D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PH2H[0x6];                                   // 0x00D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABuff_Zipline_CaveWolf_C*                            ZiplineBuff;                                             // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FBlackboardKeySelector                              TargetKey;                                               // 0x00E0(0x0028) Edit, BlueprintVisible
		double                                                     LastBlockedTime;                                         // 0x0108(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CallFunc_RandomFloatInRange_ReturnValue;                 // 0x0110(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue;                // 0x0114(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ZiplineMotorState                                        K2Node_Select_ReturnValue;                               // 0x0115(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Select_CmpSuccess;                                // 0x0116(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
		void ReceiveAbort(class AActor* OwnerActor);
		void ReceiveExecute(class AActor* OwnerActor);
		void TryToUnblock();
		void ExecuteUbergraph_CaveWolf_ZiplineMoveTowardsTarget_TK(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
