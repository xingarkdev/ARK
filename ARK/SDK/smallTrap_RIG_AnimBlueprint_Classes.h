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
	 * AnimBlueprintGeneratedClass smallTrap_RIG_AnimBlueprint.smallTrap_RIG_AnimBlueprint_C
	 * Size -> 0x07E4 (FullSize[0x0B24] - InheritedSize[0x0340])
	 */
	class UsmallTrap_RIG_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_33A9AB6E4899780F481B9BB288F46AC8;     // 0x0340(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_049E797E44F5CC3F9A7C67987C2247A4; // 0x0388(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_921FE977416ACAA12131FAA76FCD6DC1; // 0x03C0(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_0669F2584053DD79A7C46FB173DDA84A; // 0x03F8(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7FF072794E14D35079D9BB859932C512; // 0x0430(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7E5902C5467007E7815DC9A2013C6DE1; // 0x0468(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_47C5078B4E09AB96F5AEE7B6CB41CC50; // 0x04A0(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_1D20D4A24BB71C53A42C9DB185F32322; // 0x04F0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8C874B024FDEA769455282B0AB96886D; // 0x0538(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_C7555534408E1282E4E5BBAC35EEC970; // 0x0588(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_EFD5AC9944123B27DB36B1B272A31E39; // 0x05D0(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_CDD0BB6A4634EE9809301D9DC70F7735; // 0x0620(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_BE1C2A6F46B8E0CEC2AC64AE64FEDF08; // 0x0668(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_3B7D575A42B309BD0EA294B625A62AE9; // 0x06B8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_B81F2A6D49C9DF9AC7793AA0E2BA5CC2; // 0x0700(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_9FA7685C4CBAE6EA065C17B7EBE48AF1; // 0x0750(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_A35992FC46F45482C77F2FA17D522CCF; // 0x0798(0x0080)
		unsigned char                                              UnknownData_80B7[0x8];                                   // 0x0818(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_145F23DF4757AA89292BAE96916F60D3; // 0x0820(0x00D0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_F6BCFFBE4A962FB95784BE95E5E13A98; // 0x08F0(0x0048)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_947F2CD94C89A14EBEDC4F974443D839; // 0x0938(0x0048)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_030D7134412D8B7508D2A4B25A86A1EF; // 0x0980(0x00D0)
		bool                                                       ClosedTrap;                                              // 0x0A50(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9IRC[0x3];                                   // 0x0A51(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            TrapRotation;                                            // 0x0A54(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TrapRotationAlpha;                                       // 0x0A60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsPrepared;                                              // 0x0A64(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsOld;                                                  // 0x0A65(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UMYZ[0x2];                                   // 0x0A66(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetOwningActor_ReturnValue;                     // 0x0A68(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalStructureBearTrap*                            K2Node_DynamicCast_AsPrimalStructureBearTrap;            // 0x0A70(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0A78(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V7DI[0x7];                                   // 0x0A79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue;                        // 0x0A80(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0A88(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2GYM[0x3];                                   // 0x0A89(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_TimeSince_ReturnValue;                          // 0x0A8C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetActorRightVector_ReturnValue;                // 0x0A90(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x0A9C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsTrapPrepared_ReturnValue;                     // 0x0A9D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x0A9E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TP4E[0x1];                                   // 0x0A9F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x0AA0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_X;                                  // 0x0AAC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y;                                  // 0x0AB0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z;                                  // 0x0AB4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x0AB8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PKAM[0x3];                                   // 0x0AB9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue2;               // 0x0ABC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_X2;                                 // 0x0AC8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y2;                                 // 0x0ACC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z2;                                 // 0x0AD0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_MakeVector_ReturnValue;                         // 0x0AD4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue;              // 0x0AE0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue;                             // 0x0AEC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Dot_VectorVector_ReturnValue;                   // 0x0AF8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x0AFC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue;      // 0x0B00(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_MakeRot_ReturnValue;                            // 0x0B04(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_FloatFloat_ReturnValue;               // 0x0B10(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x0B11(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UBLH[0x2];                                   // 0x0B12(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue2;     // 0x0B14(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x0B18(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_FloatFloat_ReturnValue2;              // 0x0B19(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x0B1A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PB3N[0x1];                                   // 0x0B1B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x0B1C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FInterpTo_ReturnValue;                          // 0x0B20(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_smallTrap_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_049E797E44F5CC3F9A7C67987C2247A4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_smallTrap_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_0669F2584053DD79A7C46FB173DDA84A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_smallTrap_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_7FF072794E14D35079D9BB859932C512();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_smallTrap_RIG_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
