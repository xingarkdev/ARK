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
	 * AnimBlueprintGeneratedClass DesertKaiju_AnimBlueprint.DesertKaiju_AnimBlueprint_C
	 * Size -> 0x0B37 (FullSize[0x0E77] - InheritedSize[0x0340])
	 */
	class UDesertKaiju_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_D8EE666E451B3B50EA1D88A1F98F2AB3;     // 0x0340(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_803C97CA4DE1F8EBFCBC739B91C2977F;     // 0x0388(0x0058)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_76B0D15D4EB5E84E6DBF9BAEC94E1B47;     // 0x03E0(0x0058)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_30C0FF964029E1926AC2F0BC4B36CE8E;     // 0x0438(0x0058)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_895A670C415C55C01EAE6DBE4489BF2C; // 0x0490(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_716B29834D11F0E9D047E28C96669B88; // 0x0510(0x0050)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_FC0FEEA04B21039D00D8B1BAF68DE5DE; // 0x0560(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_F66CFA2F4E6A0A5433A492B66622393D; // 0x05E0(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_534476554EBA20F2B689D5A2DAF190F7; // 0x0630(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_A305FBA44D7761FE9473ACA9127A04BC; // 0x0680(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_BE6DEF1740F6149F813BAA8588FA2AD3; // 0x06D0(0x0050)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5E193A2649431F3B7779AB811E9E88D5; // 0x0720(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_8BC93DE643446C46A59F47A4B111653C; // 0x07A0(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_29BB58A445DF0090695F6C900A018C33; // 0x0820(0x0080)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_A355F11142213377B6B773B7E4ADD2F3;     // 0x08A0(0x0058)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9D3B2BF344C0FDCEF31801B357AFD5C1; // 0x08F8(0x0080)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_09C2DEED49344F8B7D863ABD22181F38;     // 0x0978(0x0058)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_612D5E004558952198533EAC6067AACF;     // 0x09D0(0x0058)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_29A47B1240A3C123BE8C17BCAB66F6C8;     // 0x0A28(0x0058)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7FB2B2A24CA1ED48B0A3EC85D1C905CE; // 0x0A80(0x00D0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_915DE1A94586630C2C53069E33C1277C; // 0x0B50(0x0048)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_C64AD10F413072C9A0B8EB9DB7E67D59; // 0x0B98(0x0048)
		struct FAnimationNode_TwoWayBlend                          AnimGraphNode_TwoWayBlend_75CB687E439D044646173E9B064C6E36; // 0x0BE0(0x0070)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_66259483403C5952A3E8189F0DE31CBA; // 0x0C50(0x0050)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_7EA40F884574C19549492B991AF6B116; // 0x0CA0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_20F338C1419732B234397597C24ED70A; // 0x0D20(0x0050)
		bool                                                       UseMontageOnly;                                          // 0x0D70(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bSkipAnimGraph;                                          // 0x0D71(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KBJ0[0x2];                                   // 0x0D72(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RootLocationOffset;                                      // 0x0D74(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            RootRotationOffset;                                      // 0x0D80(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsFlying;                                               // 0x0D8C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsFalling;                                              // 0x0D8D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsSleeping;                                             // 0x0D8E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bTurningRight;                                           // 0x0D8F(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsTurning;                                              // 0x0D90(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ICD8[0x3];                                   // 0x0D91(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinTurnRateForTurnAnimation;                             // 0x0D94(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsMoving;                                               // 0x0D98(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ABVG[0x3];                                   // 0x0D99(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumMovementSpeedFlying;                              // 0x0D9C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MovementAnimRate;                                        // 0x0DA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FullbodyBlendStrength;                                   // 0x0DA4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHasNoMontage;                                           // 0x0DA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SMS5[0x3];                                   // 0x0DA9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x0DAC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x0DB0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QF44[0x7];                                   // 0x0DB1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               CallFunc_TryGetPawnOwner_ReturnValue;                    // 0x0DB8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalDinoCharacter*                                K2Node_DynamicCast_AsPrimalDinoCharacter;                // 0x0DC0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0DC8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UG78[0x3];                                   // 0x0DC9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetWorldDeltaSeconds_ReturnValue;               // 0x0DCC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FTransform                                          CallFunc_GetAimOffsetsTransform_RootRotOffsetTransform;  // 0x0DD0(0x0030) Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetAimOffsetsTransform_TheRootYawSpeed;         // 0x0E00(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetAimOffsetsTransform_RootLocOffset;           // 0x0E04(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_GetAimOffsetsTransform_ReturnValue;             // 0x0E10(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize_ReturnValue;                              // 0x0E1C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Abs_ReturnValue;                                // 0x0E20(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x0E24(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue2;                // 0x0E25(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue3;                // 0x0E26(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D672[0x1];                                   // 0x0E27(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_BreakTransform_Location;                        // 0x0E28(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_BreakTransform_Rotation;                        // 0x0E34(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_BreakTransform_Scale;                           // 0x0E40(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetDefaultMovementSpeed_ReturnValue;            // 0x0E4C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue;                  // 0x0E50(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_62RJ[0x4];                                   // 0x0E54(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPawnMovementComponent*                              CallFunc_GetMovementComponent_ReturnValue;               // 0x0E58(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsMeshGameplayRelevant_ReturnValue;             // 0x0E60(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0TH2[0x7];                                   // 0x0E61(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterMovementComponent*                         K2Node_DynamicCast_AsCharacterMovementComponent;         // 0x0E68(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0E70(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0E71(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x0E72(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue;                // 0x0E73(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue2;               // 0x0E74(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x0E75(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue3;               // 0x0E76(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_DesertKaiju_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
