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
	 * AnimBlueprintGeneratedClass FPVMeleeWeaponAnimBP_Base.FPVMeleeWeaponAnimBP_Base_C
	 * Size -> 0x09E8 (FullSize[0x0D28] - InheritedSize[0x0340])
	 */
	class UFPVMeleeWeaponAnimBP_Base_C : public UAnimInstance
	{
	public:
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_94614EED4F7B763410C62FA7BBBEA782; // 0x0340(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9B8B44C1401EFC2B1B2F658D08A3CC15; // 0x0378(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9633ECD64E8DF2D6CD850D9698570423; // 0x03B0(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_C77181A64754BA48F9C040B829F0425E; // 0x0400(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_DBEDD2224D957858A1474AADD2F8F09E; // 0x0448(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_678EA47D4BACAD7D44DE28A97F7843F3; // 0x0498(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_ABD4C747415ABAB5779DB4AFF32F42F9; // 0x04E0(0x0080)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_A5CCBFCE475451428EA0F5B41B93979E; // 0x0560(0x00D0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_530F22FA4C5E4828E63319B914C9248C; // 0x0630(0x0048)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_87FB25AC44ADE68779E1A7AC15A57318; // 0x0678(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_4BA8FB52422889CF8211F5B70DD56242;     // 0x06C0(0x0058)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_6570DA6D450A44843B12F5BA908E8B21;     // 0x0718(0x0058)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_F1ADBF664735466838311DB23F22B6B1; // 0x0770(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_065DA2A041298EF4FD5D34AA3C346BF7; // 0x07A8(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_E14EDB7448C30AA5D0B32291CC6FCE6F; // 0x07E0(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16405A754BFCE6E36AEA429B6FA50896; // 0x0818(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_0C83561D4F4E1E66F2C341BC14232DA7; // 0x0850(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_1B92AF4B4507F3B10E1CB6837DDD7F01; // 0x0888(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_53B3CCB04425AC6F59554DB7438EACB8; // 0x08D8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6ECFFD224138CD117C1947A32585D62D; // 0x0920(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_2F1A974242CE4767995F579A0DD32AE8; // 0x0970(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7C1820B544FC6E0E86CF0FB3523F2B4C; // 0x09B8(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_1C78BE3146D93321494858A5E171E7CF; // 0x0A08(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_188407B045D52CC4D68D0B8B554849AD; // 0x0A50(0x0080)
		struct FAnimNode_Root                                      AnimGraphNode_Root_E8590A10420A6342A7984D927900AB51;     // 0x0AD0(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_C9249F6147932E42C664BFA4CF51443F; // 0x0B18(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_F881A60646FA36C16A214C83094FDB9C; // 0x0BB8(0x0050)
		struct FAnimationNode_TwoWayBlend                          AnimGraphNode_TwoWayBlend_13734E0145516A9FCF69059BCD55F07A; // 0x0C08(0x0070)
		bool                                                       IsRunning;                                               // 0x0C78(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsMoving;                                                // 0x0C79(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsUsingShield;                                          // 0x0C7A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CMIV[0x1];                                   // 0x0C7B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UsingShieldWeight;                                       // 0x0C7C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsBlockingWithShield;                                   // 0x0C80(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O1WS[0x3];                                   // 0x0C81(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             BlockingShieldTranslation;                               // 0x0C84(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BlockingShieldWeight;                                    // 0x0C90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            BlockingShieldRotation;                                  // 0x0C94(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_GetOwningActor_ReturnValue;                     // 0x0CA0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterWeapon*                                      K2Node_DynamicCast_AsShooterWeapon;                      // 0x0CA8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0CB0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZHDH[0x7];                                   // 0x0CB1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   CallFunc_GetPawnOwner_ReturnValue;                       // 0x0CB8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter;                   // 0x0CC0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0CC8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PF86[0x3];                                   // 0x0CC9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation; // 0x0CCC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation; // 0x0CD8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_GetBlockingShieldOffsets_ReturnValue;           // 0x0CE4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsBlockingWithShield_ReturnValue;               // 0x0CE5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsUsingShield_ReturnValue;                      // 0x0CE6(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0CE7(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetVelocity_ReturnValue;                        // 0x0CE8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_X;                                  // 0x0CF4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y;                                  // 0x0CF8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z;                                  // 0x0CFC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsRunning_ReturnValue;                          // 0x0D00(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_47GM[0x3];                                   // 0x0D01(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           CallFunc_MakeVector2D_ReturnValue;                       // 0x0D04(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize2D_ReturnValue;                            // 0x0D0C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x0D10(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NYSG[0x3];                                   // 0x0D11(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x0D14(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FInterpTo_ReturnValue;                          // 0x0D18(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FInterpTo_ReturnValue2;                         // 0x0D1C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FInterpTo_ReturnValue3;                         // 0x0D20(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FInterpTo_ReturnValue4;                         // 0x0D24(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
