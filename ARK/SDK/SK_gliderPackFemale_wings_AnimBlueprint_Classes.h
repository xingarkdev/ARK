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
	 * AnimBlueprintGeneratedClass SK_gliderPackFemale_wings_AnimBlueprint.SK_gliderPackFemale_wings_AnimBlueprint_C
	 * Size -> 0x0842 (FullSize[0x0B82] - InheritedSize[0x0340])
	 */
	class USK_gliderPackFemale_wings_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_777AC29A41D23F6AB9CA818B352DEBE8;     // 0x0340(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_EE736612443F8F2685CB3CA4EE460C2D; // 0x0388(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_ABFA5F6C4FFE3EB1320CBBA1339D9439; // 0x03C0(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_A9123CDD43B97DF35A89D9B5050AA15B; // 0x03F8(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_89520B7D49DBF8BDFB99C4AFB2937566; // 0x0430(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_C01CF0764D66E5360F03E382263EC85E; // 0x0468(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_AEB0C5C34423FA15455E3C8B134C54584; // 0x04B8(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_C84153B5498490AF8F7514A21CF770BA; // 0x0500(0x0100)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4A75747B40C6E07FF8D3EE8D957EFC8E; // 0x0600(0x00D0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_C69B5A784B95D7DC66A4B7B81F1A0F87; // 0x06D0(0x00D0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_1E3FEE1249CE34E103226D9D28B5C5B9; // 0x07A0(0x0048)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_1A87191741501BE0B47174A825255550; // 0x07E8(0x0048)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_CB77B3AD4B522D8CB6A4AEB29D04688C; // 0x0830(0x00D0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_AEB0C5C34423FA15455E3C8B134C54583; // 0x0900(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9CB5EF5942E0C2ED02DC9D87378682AD; // 0x0948(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_AEB0C5C34423FA15455E3C8B134C54582; // 0x0998(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_21656DF94E7B4D72414D7AB168DA846B; // 0x09E0(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_AEB0C5C34423FA15455E3C8B134C5458; // 0x0A30(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_A940A2E5413A5FA41FDA4CAD29055B6C; // 0x0A78(0x0080)
		bool                                                       bIsOpen;                                                 // 0x0AF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NYAE[0x3];                                   // 0x0AF9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WingExtension;                                           // 0x0AFC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            WingAimOffsetAdjustment;                                 // 0x0B00(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_52DL[0x4];                                   // 0x0B0C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   GlidingCharacter;                                        // 0x0B10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WingExtension2;                                          // 0x0B18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             WingsOffset_Location;                                    // 0x0B1C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             FirstPersonWingOffset;                                   // 0x0B28(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            WingsOffset_Rotation;                                    // 0x0B34(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WeaponEquippedPitchAdjustment;                           // 0x0B40(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetAnimAssetPlayerTimeFromEndFraction_ReturnValue; // 0x0B44(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue;                    // 0x0B48(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V8LP[0x3];                                   // 0x0B49(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetAnimAssetPlayerTimeFromEndFraction_ReturnValue2; // 0x0B4C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue2;                   // 0x0B50(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H9G3[0x3];                                   // 0x0B51(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x0B54(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_GetOwningActor_ReturnValue;                     // 0x0B58(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter;                   // 0x0B60(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0B68(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KDI0[0x7];                                   // 0x0B69(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalBuff*                                         CallFunc_GetBuff_ReturnValue;                            // 0x0B70(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class ABuff_Glider_C*                                      K2Node_DynamicCast_AsBuff_Glider_C;                      // 0x0B78(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0B80(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_ByteByte_ReturnValue;                   // 0x0B81(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void UpdateWingOffsets(class AShooterCharacter* ShooterCharacter);
		void UpdateVelocity(class AShooterCharacter* ShooterCharacter, float DeltaTime);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPackFemale_wings_AnimBlueprint_AnimGraphNode_TransitionResult_EE736612443F8F2685CB3CA4EE460C2D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPackFemale_wings_AnimBlueprint_AnimGraphNode_TransitionResult_A9123CDD43B97DF35A89D9B5050AA15B();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_SK_gliderPackFemale_wings_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
