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
	 * AnimBlueprintGeneratedClass plantY_Tentacle_RIG_AnimBlueprint.plantY_Tentacle_RIG_AnimBlueprint_C
	 * Size -> 0x0704 (FullSize[0x0A44] - InheritedSize[0x0340])
	 */
	class UplantY_Tentacle_RIG_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_91A172924DE5F27F14E4B49ACE3B13C2;     // 0x0340(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_049E797E44F5CC3F9A7C67987C2247A4; // 0x0388(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_921FE977416ACAA12131FAA76FCD6DC1; // 0x03C0(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_232562DC4C711513B09F9289E93F756E; // 0x03F8(0x0038)
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
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_741A12BB4C80F8B16A4012A38D31928A; // 0x0798(0x0080)
		unsigned char                                              UnknownData_SZU4[0x8];                                   // 0x0818(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4154963C495B20ABDCBEC3BD02857FE5; // 0x0820(0x00D0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_96A121F34713E7F56C988DB0616763A2; // 0x08F0(0x0048)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_5263BA8444122A2EF10047A88E0EF700; // 0x0938(0x0048)
		bool                                                       ClosedTrap;                                              // 0x0980(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsPrepared;                                              // 0x0981(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U7KY[0x2];                                   // 0x0982(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TrapRotationAlpha;                                       // 0x0984(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            TrapRotation;                                            // 0x0988(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z2CW[0x4];                                   // 0x0994(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetOwningActor_ReturnValue;                     // 0x0998(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalStructureBearTrap*                            K2Node_DynamicCast_AsPrimalStructureBearTrap;            // 0x09A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x09A8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HV3K[0x3];                                   // 0x09A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_GetActorRightVector_ReturnValue;                // 0x09AC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsTrapPrepared_ReturnValue;                     // 0x09B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ECHA[0x3];                                   // 0x09B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x09BC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_X;                                  // 0x09C8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y;                                  // 0x09CC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z;                                  // 0x09D0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x09D4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DHMH[0x3];                                   // 0x09D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue2;               // 0x09D8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_X2;                                 // 0x09E4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y2;                                 // 0x09E8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z2;                                 // 0x09EC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_MakeVector_ReturnValue;                         // 0x09F0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetAnimAssetPlayerTimeFromEndFraction_ReturnValue; // 0x09FC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue;              // 0x0A00(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_FloatFloat_ReturnValue;               // 0x0A0C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WCG7[0x3];                                   // 0x0A0D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Normal_ReturnValue;                             // 0x0A10(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Dot_VectorVector_ReturnValue;                   // 0x0A1C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x0A20(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_MakeRot_ReturnValue;                            // 0x0A24(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue;      // 0x0A30(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_FloatFloat_ReturnValue2;              // 0x0A34(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2HTO[0x3];                                   // 0x0A35(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x0A38(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0A3C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x0A3D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7AR2[0x2];                                   // 0x0A3E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_FInterpTo_ReturnValue;                          // 0x0A40(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_plantY_Tentacle_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_049E797E44F5CC3F9A7C67987C2247A4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_plantY_Tentacle_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_232562DC4C711513B09F9289E93F756E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_plantY_Tentacle_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_7FF072794E14D35079D9BB859932C512();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_plantY_Tentacle_RIG_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
