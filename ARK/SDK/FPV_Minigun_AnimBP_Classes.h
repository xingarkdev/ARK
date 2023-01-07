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
	 * AnimBlueprintGeneratedClass FPV_Minigun_AnimBP.FPV_Minigun_AnimBP_C
	 * Size -> 0x096D (FullSize[0x0CAD] - InheritedSize[0x0340])
	 */
	class UFPV_Minigun_AnimBP_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_23A617A84739DB00AC88489FED204366;     // 0x0340(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_75DAE235474594EA7F7E3B86F8BD6171;     // 0x0388(0x0058)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_D2D244F0451B238DC00142A16B9DE3B8; // 0x03E0(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2E9A0C994FB8A4093493328D1EA0581A; // 0x0418(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_F4A0479D4DB19ACFEC64429C05794608; // 0x0450(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_9A8167C34EED6F5ACC870988E63670A6; // 0x04A0(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_0ED08FC3444BEB27DECF7480CD24CE61; // 0x04E8(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_B90CF6B247758AF169D6C8964D999508; // 0x0520(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_C696C9964E3E62B6E48470BEF63FD6BB; // 0x0558(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_0BA60DDA484455479D7208BA5572AF4D; // 0x0590(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_0366919B487B63498771FE859FDCE73B; // 0x05C8(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4B7150F5487DA6C1F96E02AF650C5C00; // 0x0600(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4C4F0C144A89F572863F4FA8CE124CC3; // 0x0638(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_EE53113844F122199924B2BD6F651277; // 0x0670(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_1AAB8AD74942238199967FBC2C8A7131; // 0x06C0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_D79860FD463821168DFDA9824A55CEF8; // 0x0708(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_4857FDDB490AB30974D04B82C9CEDB98; // 0x0758(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3BA683954F9C50AF793998BC842CF1CC; // 0x07A0(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_EFE24FB0494D17E81E1E6894FD0E296F; // 0x07F0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_BE469B1948DF0228FC3D6DA08205895C; // 0x0838(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_C1C322E94A9DE7F3A4C93CAEA9D34AA7; // 0x0888(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_D30034954453662522B7089E5BADF021; // 0x08D0(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_B12E45924DD70E8F4BB4EAA1118A6E66; // 0x0920(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3D98A8B54CB9FC7BA54709BBE51757BE; // 0x0968(0x0080)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_13AB69354B93470869D892B493A5EB63; // 0x09E8(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_B396CE27442581FA8041C9B5FC6AE751; // 0x0A30(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_8224E3644ACA007118F159861BC245F1; // 0x0AB0(0x0070)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5EC6A11F407E305AE96432AB07C368CA; // 0x0B20(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7177EB83450D3528C1D168983BF217A4; // 0x0B70(0x0050)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_F72FA200464CC53556B058908403FBDF; // 0x0BC0(0x0070)
		bool                                                       IsRunning;                                               // 0x0C30(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsTargeting;                                             // 0x0C31(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CAYU[0x6];                                   // 0x0C32(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AWeapMinigun_C*                                      WeapMinigun;                                             // 0x0C38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   Player;                                                  // 0x0C40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsActivated;                                             // 0x0C48(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsOverheated;                                            // 0x0C49(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsFiring;                                                // 0x0C4A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N69O[0x1];                                   // 0x0C4B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Heat;                                                    // 0x0C4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SpinRate;                                                // 0x0C50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ScreenAlpha;                                             // 0x0C54(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsActivationAnimPlaying;                                 // 0x0C58(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDeactivating;                                          // 0x0C59(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsSpinningUp;                                            // 0x0C5A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsUpToSpeed;                                             // 0x0C5B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VRR9[0x4];                                   // 0x0C5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetOwningActor_ReturnValue;                     // 0x0C60(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AWeapMinigun_C*                                      K2Node_DynamicCast_AsWeapMinigun_C;                      // 0x0C68(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0C70(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZAT4[0x3];                                   // 0x0C71(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x0C74(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue;      // 0x0C78(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue;                    // 0x0C7C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JF1W[0x3];                                   // 0x0C7D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue2;     // 0x0C80(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue2;                   // 0x0C84(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_36VH[0x3];                                   // 0x0C85(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Conv_BoolToFloat_ReturnValue;                   // 0x0C88(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue3;     // 0x0C8C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue3;                   // 0x0C90(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x0C91(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0C92(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WEEW[0x5];                                   // 0x0C93(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   CallFunc_GetPawnOwner_ReturnValue;                       // 0x0C98(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter;                   // 0x0CA0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0CA8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsFiring_ReturnValue;                           // 0x0CA9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsRunning_ReturnValue;                          // 0x0CAA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x0CAB(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x0CAC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_Minigun_AnimBP_AnimGraphNode_TransitionResult_0ED08FC3444BEB27DECF7480CD24CE61();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_Minigun_AnimBP_AnimGraphNode_TransitionResult_B90CF6B247758AF169D6C8964D999508();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_Minigun_AnimBP_AnimGraphNode_TransitionResult_0BA60DDA484455479D7208BA5572AF4D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_Minigun_AnimBP_AnimGraphNode_TransitionResult_0366919B487B63498771FE859FDCE73B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_Minigun_AnimBP_AnimGraphNode_ApplyAdditive_F72FA200464CC53556B058908403FBDF();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_FPV_Minigun_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
