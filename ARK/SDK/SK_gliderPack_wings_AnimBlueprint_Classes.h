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
	 * AnimBlueprintGeneratedClass SK_gliderPack_wings_AnimBlueprint.SK_gliderPack_wings_AnimBlueprint_C
	 * Size -> 0x0846 (FullSize[0x0B86] - InheritedSize[0x0340])
	 */
	class USK_gliderPack_wings_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_4E075C5F40C8FCBFD553CB8124DC0452;     // 0x0340(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_39F5091F4B1ACC2793D1439328F94B59; // 0x0388(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_30D1A4954621213CF693E1A3C2C1747D; // 0x03C0(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_45BCAA304FAFD876B51609B0919C39DA; // 0x03F8(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2B9C573643CE41B7B0FC749BB7CF7C4E; // 0x0430(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_A3AB732F49A3BA2F8430A595682A696D; // 0x0468(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_BD9BBA7348FAFE88C763CD84F424EB48; // 0x04B8(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3A72434644C35A6F27D88C88CE8306E5; // 0x0500(0x0100)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4C5CFA91477028AE7061B3A3B808F177; // 0x0600(0x00D0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_EA9DD78945C14AFD4541B9BF3C535547; // 0x06D0(0x00D0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_FD0446D5440D4D2E210383ABA6D35519; // 0x07A0(0x0048)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_34E7F56545F37630418A4AACE97C2EFA; // 0x07E8(0x0048)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8B3D7792445A2164B785E8A212499C11; // 0x0830(0x00D0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_D6799EE845D5B2ACF01C31BB969888DF; // 0x0900(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8CCEBF6B45A69A1996294FAB6C497717; // 0x0948(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_13B6F64848B21B10A7A0B38DA1CD0D86; // 0x0998(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_A5F3B0814D06FA6EA58E95BDBA4A66EC; // 0x09E0(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_445548A94787B6CF2ADD5E837BD79401; // 0x0A30(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_D5736E7C45235729B4E3D9A560EF9A70; // 0x0A78(0x0080)
		bool                                                       bIsClosing;                                              // 0x0AF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsOpen;                                                 // 0x0AF9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LGOY[0x2];                                   // 0x0AFA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WingExtension;                                           // 0x0AFC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            WingAimOffsetAdjustment;                                 // 0x0B00(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             WingsOffset_Location;                                    // 0x0B0C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   GlidingCharacter;                                        // 0x0B18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             FirstPersonWingOffset;                                   // 0x0B20(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            WingsOffset_Rotation;                                    // 0x0B2C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WingCloseAnim_Duration;                                  // 0x0B38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WeaponEquippedPitchAdjustment;                           // 0x0B3C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetAnimAssetPlayerTimeFromEndFraction_ReturnValue; // 0x0B40(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue;                    // 0x0B44(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TEV0[0x3];                                   // 0x0B45(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetAnimAssetPlayerTimeFromEndFraction_ReturnValue2; // 0x0B48(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue2;                   // 0x0B4C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RO1I[0x3];                                   // 0x0B4D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x0B50(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2SM8[0x4];                                   // 0x0B54(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetOwningActor_ReturnValue;                     // 0x0B58(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter;                   // 0x0B60(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0B68(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TQSP[0x7];                                   // 0x0B69(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalBuff*                                         CallFunc_GetBuff_ReturnValue;                            // 0x0B70(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class ABuff_Glider_C*                                      K2Node_DynamicCast_AsBuff_Glider_C;                      // 0x0B78(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0B80(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_ByteByte_ReturnValue;                   // 0x0B81(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0B82(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x0B83(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x0B84(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x0B85(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void UpdateWingOffsets(class AShooterCharacter* ShooterCharacter);
		void UpdateVelocity(class AShooterCharacter* ShooterCharacter, float DeltaTime);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_AnimGraphNode_TransitionResult_39F5091F4B1ACC2793D1439328F94B59();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint_AnimGraphNode_TransitionResult_45BCAA304FAFD876B51609B0919C39DA();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_SK_gliderPack_wings_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
