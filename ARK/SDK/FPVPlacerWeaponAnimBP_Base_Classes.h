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
	 * AnimBlueprintGeneratedClass FPVPlacerWeaponAnimBP_Base.FPVPlacerWeaponAnimBP_Base_C
	 * Size -> 0x0934 (FullSize[0x0C74] - InheritedSize[0x0340])
	 */
	class UFPVPlacerWeaponAnimBP_Base_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_90AACF0342A6265D845D75BB44A3523C;     // 0x0340(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_9D4227FB416D07B09F9DE99FE9B5285C;     // 0x0388(0x0058)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_30B8485D4CC74466C6A286B5EA515B4D; // 0x03E0(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_53130CC544A124EDF2B42FAFEAA7071E; // 0x0418(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_1532EA2249E980CB0D182783F5D4EA2F; // 0x0450(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_E978DC0C457E4F872B8E0A9B2D572F7E; // 0x0488(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9C8A13274BA50BF0510BD3A6124752E0; // 0x04C0(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_84A2CCD248CF948428C63D9B7134CD16; // 0x04F8(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_536C7C5849ACBE79D22DB8AD33221D96; // 0x0530(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_95BDCF2549540980558263B3A65702D3; // 0x0580(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_95EDA740497384E620F2AAA79F5B4B6C; // 0x05C8(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_9A159EB64BB258567F926098FAFFF903; // 0x0618(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_AE6FAB504B3D22B7C594779DE2D290F3; // 0x0660(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_2B5CB98047EF9514F5CA298813C035F1; // 0x06B0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_311B06C34EA76E07D9E9649BA0635FAB; // 0x06F8(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_10F318BF4D5CACB49DA8678E8DA5CE33; // 0x0748(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_395FCBF6465BDF0A4203FA9B9D20C96E; // 0x0790(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8BFD4B8849F87AE6ECA7249FBDD8FE57; // 0x0810(0x0050)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_F35F8FD24653A611C071C69153266B4B; // 0x0860(0x00A0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_9A6FBB264A2969DB2F8CF388DBE4DA9A; // 0x0900(0x0060)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6F2E733B4133CC193331C187C48AD658; // 0x0960(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_0775D2E6443C38E09B568EB999CDE9C4;     // 0x09A8(0x0058)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_E1EE5B914C86F042753C3F89344AF0ED; // 0x0A00(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_82C0B52F477007645409ABACB4B786BE; // 0x0A48(0x00A0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_7E7C9D3E41672C2A5105B6B73C1A0956; // 0x0AE8(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9700A89C4B5E537694003AA3CB4500EF; // 0x0B88(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_06A5678B4BA6669AC7A2FE86D1CA17D5;     // 0x0BD0(0x0058)
		bool                                                       IsRunning;                                               // 0x0C28(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsTargeting;                                             // 0x0C29(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MFL9[0x2];                                   // 0x0C2A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HideLeftArmWeight;                                       // 0x0C2C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HideLeftArm;                                             // 0x0C30(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0C31(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x0C32(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x0C33(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x0C34(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9KS8[0x3];                                   // 0x0C35(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x0C38(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue3;                        // 0x0C3C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_37EG[0x3];                                   // 0x0C3D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetOwningActor_ReturnValue;                     // 0x0C40(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterWeapon*                                      K2Node_DynamicCast_AsShooterWeapon;                      // 0x0C48(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0C50(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OZ32[0x7];                                   // 0x0C51(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   CallFunc_GetPawnOwner_ReturnValue;                       // 0x0C58(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter;                   // 0x0C60(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0C68(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsTargeting_ReturnValue;                        // 0x0C69(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsRunning_ReturnValue;                          // 0x0C6A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FPWJ[0x1];                                   // 0x0C6B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_FInterpTo_ReturnValue;                          // 0x0C6C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FInterpTo_ReturnValue2;                         // 0x0C70(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVPlacerWeaponAnimBP_Base_AnimGraphNode_TransitionResult_E978DC0C457E4F872B8E0A9B2D572F7E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVPlacerWeaponAnimBP_Base_AnimGraphNode_TransitionResult_9C8A13274BA50BF0510BD3A6124752E0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVPlacerWeaponAnimBP_Base_AnimGraphNode_TransitionResult_84A2CCD248CF948428C63D9B7134CD16();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_FPVPlacerWeaponAnimBP_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
