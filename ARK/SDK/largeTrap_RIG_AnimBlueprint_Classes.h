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
	 * AnimBlueprintGeneratedClass largeTrap_RIG_AnimBlueprint.largeTrap_RIG_AnimBlueprint_C
	 * Size -> 0x070C (FullSize[0x0A4C] - InheritedSize[0x0340])
	 */
	class UlargeTrap_RIG_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_C2D97A914ABBCB895555B9A77E92251D;     // 0x0340(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_31137D7C4145898379EBE6A65F28B792; // 0x0388(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_CFD8396C4A4F8D234AD9CCA9754BE7B7; // 0x03C0(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_E4EC78914068FEC0071573A3A5CC44ED; // 0x03F8(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_352A8F534F73EA75FC0B68BDC1285924; // 0x0430(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_CCE7EB8B40483C20321C6B8C42518F2C; // 0x0468(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_C00DCD384787BD60D69C0D851C6C2A97; // 0x04A0(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_19D0958C40602042E119DE8F4B20B760; // 0x04F0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_F347971244F864ADE21987B8BFDC5F6A; // 0x0538(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_B95AECF3444EA05BC9F71AAD7FDD763A; // 0x0588(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_FD8E03B34FE608182ECD8F92A65E1F62; // 0x05D0(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_382AB5294BA2F211C3624CA0CEA39E84; // 0x0620(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_AAC202234C277F81E68A82A5D764B3C6; // 0x0668(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_51016EAB47454630DD2B0D83C757459A; // 0x06B8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_EAD25F8A4F174EC4B1921D8B1BC04D22; // 0x0700(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_9B6D54C74EA8781309B46BA0F6C1B66A; // 0x0750(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_15BAC6DD4CDA5FBFA909DEA4B44450CA; // 0x0798(0x0080)
		unsigned char                                              UnknownData_UV9M[0x8];                                   // 0x0818(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2C6943B747E75891AFAEEF8A8EF0FC56; // 0x0820(0x00D0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_90E1D6644C9244A4238E29B62D9AE36A; // 0x08F0(0x0048)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_5A04B79F474D14B64695DB8314CDE43F; // 0x0938(0x0048)
		bool                                                       ClosedTrap;                                              // 0x0980(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PBSB[0x3];                                   // 0x0981(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            WorldRotation;                                           // 0x0984(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WorldRotationAlpha;                                      // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsPrepared;                                              // 0x0994(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsOld;                                                  // 0x0995(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R4E6[0x2];                                   // 0x0996(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue;      // 0x0998(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_FloatFloat_ReturnValue;               // 0x099C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I3TH[0x3];                                   // 0x099D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue2;     // 0x09A0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_FloatFloat_ReturnValue2;              // 0x09A4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x09A5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x09A6(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x09A7(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x09A8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_17L2[0x4];                                   // 0x09AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetOwningActor_ReturnValue;                     // 0x09B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalStructureBearTrap*                            K2Node_DynamicCast_AsPrimalStructureBearTrap;            // 0x09B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x09C0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6IKO[0x3];                                   // 0x09C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_FInterpTo_ReturnValue;                          // 0x09C4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue;                        // 0x09C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_TimeSince_ReturnValue;                          // 0x09D0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x09D4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x09D5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsTrapPrepared_ReturnValue;                     // 0x09D6(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x09D7(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x09D8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_X;                                  // 0x09E4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y;                                  // 0x09E8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z;                                  // 0x09EC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x09F0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GWZ5[0x3];                                   // 0x09F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Add_FloatFloat_ReturnValue;                     // 0x09F4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue2;               // 0x09F8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_X2;                                 // 0x0A04(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y2;                                 // 0x0A08(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z2;                                 // 0x0A0C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_MakeVector_ReturnValue;                         // 0x0A10(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue;              // 0x0A1C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue;                             // 0x0A28(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue;               // 0x0A34(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_MakeRotFromY_ReturnValue;                       // 0x0A40(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_largeTrap_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_31137D7C4145898379EBE6A65F28B792();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_largeTrap_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_CFD8396C4A4F8D234AD9CCA9754BE7B7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_largeTrap_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_352A8F534F73EA75FC0B68BDC1285924();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_largeTrap_RIG_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
