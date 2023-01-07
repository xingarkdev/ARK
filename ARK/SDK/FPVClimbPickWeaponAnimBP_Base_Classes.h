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
	 * AnimBlueprintGeneratedClass FPVClimbPickWeaponAnimBP_Base.FPVClimbPickWeaponAnimBP_Base_C
	 * Size -> 0x0B60 (FullSize[0x0EA0] - InheritedSize[0x0340])
	 */
	class UFPVClimbPickWeaponAnimBP_Base_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_A2A1A92E47F69576DCE939926573A1D4;     // 0x0340(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6A5AB6294D3C9C804F8F46B60E768832; // 0x0388(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6B22BD384A50B5DEF10CF7B17B112C46; // 0x03C0(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_F40697414FF630EF6047618B927A41BC; // 0x03F8(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_A6496D6D46A4286643EEE99D35AEC55E; // 0x0430(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_46E9520F4E046855C37267846C41FF1B; // 0x0468(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_FB9B0C3C4D925455ED1D2886BD05A07B; // 0x04A0(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_F12F955D4435D38E2617CEBC0A6D0FE9; // 0x04F0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_C83AD37A4490E4B3FAAB18988CFD9C55; // 0x0538(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_DF9220054F153EDCD726C99064891686; // 0x0588(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_BA7ADF124824F076F3412CBD16D222AB; // 0x05D0(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_1C9B526E40ED8959571F71A669C7EDAC; // 0x0650(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_DD8E564341C0083D63F07E9C98BDBA52; // 0x06D0(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5B7AFE644398F16F4C49469258C2C495; // 0x0720(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_09B5493B47549F75EE77038B40C60C25; // 0x0770(0x0050)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3B5699DB4CCDC7F490CA1B8E5B9B9203; // 0x07C0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2A80907F4FF8AE0618B0298694CB8F63; // 0x0840(0x0050)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_44DAF64745BBA5E6404739973839A153; // 0x0890(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_70A0534D45967B58FA893A8662699C59; // 0x0910(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_9F0F6FCF41CE2CBBCAD592B0A1ED999E; // 0x0960(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_9DC3BA764FE3B9A7D243E3BEA2EAFFBB; // 0x09A8(0x0080)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_B1B91740405DDD8E2D6C0A98A0D681F8;     // 0x0A28(0x0058)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_14BA7FC34C87107147CB00ACF072AD06; // 0x0A80(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_21FAB2184A08438AA94D02A2394241B3; // 0x0B00(0x0070)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_288108A64FD24ECBEE62019FEC9307FA; // 0x0B70(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_75794E7A474DA7D37947CA9072FFC051; // 0x0BC0(0x0050)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3DE4BFF340F0FB0AA29320AF578C8451; // 0x0C10(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_7334FC8B4FC2948E5B3BDDB0F02C48A2; // 0x0C90(0x0060)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_26651B2C4BD531F51F2FA1BADC464D47; // 0x0CF0(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_F5441C0D49E2AD54FDC26AA63B22D17E; // 0x0D38(0x0048)
		bool                                                       IsRunning;                                               // 0x0D80(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsMoving;                                                // 0x0D81(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsUsingShield;                                          // 0x0D82(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_83VT[0x1];                                   // 0x0D83(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UsingShieldWeight;                                       // 0x0D84(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsBlockingWithShield;                                   // 0x0D88(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XQXH[0x3];                                   // 0x0D89(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             BlockingShieldTranslation;                               // 0x0D8C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BlockingShieldWeight;                                    // 0x0D98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            BlockingShieldRotation;                                  // 0x0D9C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsAttachedToClimb;                                      // 0x0DA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bClimbingLeftArm;                                        // 0x0DA9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8IH1[0x2];                                   // 0x0DAA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LeftArmTranslation;                                      // 0x0DAC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             RightArmTranslation;                                     // 0x0DB8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ClimbingLookingToSide;                                   // 0x0DC4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsHanging;                                               // 0x0DC8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W7FK[0x3];                                   // 0x0DC9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            NewVar;                                                  // 0x0DCC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             NewVar0;                                                 // 0x0DD8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x0DE4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x0DE8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FNFL[0x7];                                   // 0x0DE9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetOwningActor_ReturnValue;                     // 0x0DF0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterWeapon_Climb*                                K2Node_DynamicCast_AsShooterWeapon_Climb;                // 0x0DF8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0E00(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0E01(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x0E02(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsClimbingHanging_ReturnValue;                  // 0x0E03(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_ByteByte_ReturnValue;                  // 0x0E04(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1X1F[0x3];                                   // 0x0E05(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   CallFunc_GetPawnOwner_ReturnValue;                       // 0x0E08(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter;                   // 0x0E10(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0E18(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_608X[0x3];                                   // 0x0E19(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_VInterpTo_ReturnValue;                          // 0x0E1C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetVelocity_ReturnValue;                        // 0x0E28(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsRunning_ReturnValue;                          // 0x0E34(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YBD4[0x3];                                   // 0x0E35(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_BreakVector_X;                                  // 0x0E38(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y;                                  // 0x0E3C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z;                                  // 0x0E40(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector2D                                           CallFunc_MakeVector2D_ReturnValue;                       // 0x0E44(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize2D_ReturnValue;                            // 0x0E4C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue2;                // 0x0E50(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AZ4O[0x3];                                   // 0x0E51(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_VInterpTo_ReturnValue2;                         // 0x0E54(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Abs_ReturnValue;                                // 0x0E60(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue;                             // 0x0E64(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_SelectVector_ReturnValue;                       // 0x0E68(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_SelectVector_ReturnValue2;                      // 0x0E74(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_SelectFloat_ReturnValue;                        // 0x0E80(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_SelectFloat_ReturnValue2;                       // 0x0E84(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_VInterpTo_ReturnValue3;                         // 0x0E88(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_VInterpTo_ReturnValue4;                         // 0x0E94(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base_AnimGraphNode_BlendListByBool_14BA7FC34C87107147CB00ACF072AD06();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base_AnimGraphNode_ApplyAdditive_21FAB2184A08438AA94D02A2394241B3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base_AnimGraphNode_BlendListByBool_3DE4BFF340F0FB0AA29320AF578C8451();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
