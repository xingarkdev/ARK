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
	 * AnimBlueprintGeneratedClass FPV_GravGrenade_AnimBlueprint.FPV_GravGrenade_AnimBlueprint_C
	 * Size -> 0x0699 (FullSize[0x09D9] - InheritedSize[0x0340])
	 */
	class UFPV_GravGrenade_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_B6DF38784BB5C4A7860A279C3FCECDEA;     // 0x0340(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_A16035924EA271F3492BF28CEC72A14D;     // 0x0388(0x0058)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_1066597743FE70ADEF4AA19CCA67CA18; // 0x03E0(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_F7FC118340AF30D6BB2AB6B6BFF8DB17; // 0x0418(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7A9EEBA34FD2B9BDB88F1BB346C1C38B; // 0x0450(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_81432862469E943B3D9570BAA31652BF; // 0x0488(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_1E61C71D476C24BE1AC98DA1CA2F35A6; // 0x04C0(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_B15B14B14F55048F5B54C19254C95D89; // 0x04F8(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_AAD4A32C4A6F7F3F6F68C4A1D20DCF3E; // 0x0530(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_04B238C94D54388B29CE159392056402; // 0x0568(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_B2C0DC954B332212455D519DC2B37077; // 0x05A0(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_19731F2C42DE2006DD1CEBA7101FE42D; // 0x05D8(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_C34ADD234CA93FBFFC5B339FB648ADDD; // 0x0628(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2EEDF2CD423E21DB291347881DFC5FAA; // 0x0670(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_5E7CB3714F7D7DE6D792F9B75477C34C; // 0x06C0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_FC59A9AE4ADFA9B5D7F0BA98409C140C; // 0x0708(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_266E1E42472E6B801D1FEEBFF735246D; // 0x0758(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_1F2D764F4C2EBFFAA607A69762BA3787; // 0x07A0(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_393EACD44B5557D8FD9451A404C8EB9B; // 0x07F0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2113829B4956700EEB34D2AF2DD90FE6; // 0x0838(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_D9B7B83A4877D679A02F19BFD655D1D3; // 0x0888(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3B897A7D41284A0AD3CDD2B973B4B002; // 0x08D0(0x0080)
		bool                                                       IsRunning;                                               // 0x0950(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsMoving;                                                // 0x0951(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsCooking;                                               // 0x0952(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BCWQ[0x1];                                   // 0x0953(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CookingTime;                                             // 0x0954(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetAnimAssetPlayerTimeFromEndFraction_ReturnValue; // 0x0958(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue;                    // 0x095C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x095D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x095E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x095F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x0960(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x0961(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue3;                        // 0x0962(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue4;                        // 0x0963(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue3;                       // 0x0964(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x0965(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D3VD[0x2];                                   // 0x0966(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x0968(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R6W3[0x4];                                   // 0x096C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetOwningActor_ReturnValue;                     // 0x0970(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterWeapon*                                      K2Node_DynamicCast_AsShooterWeapon;                      // 0x0978(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0980(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P5DA[0x7];                                   // 0x0981(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalWeaponGrenade*                                K2Node_DynamicCast_AsPrimalWeaponGrenade;                // 0x0988(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0990(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QKJV[0x7];                                   // 0x0991(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   CallFunc_GetPawnOwner_ReturnValue;                       // 0x0998(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter;                   // 0x09A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast3_CastSuccess;                         // 0x09A8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0U56[0x3];                                   // 0x09A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_GetVelocity_ReturnValue;                        // 0x09AC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue4;                       // 0x09B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SIIH[0x3];                                   // 0x09B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_BreakVector_X;                                  // 0x09BC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y;                                  // 0x09C0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z;                                  // 0x09C4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector2D                                           CallFunc_MakeVector2D_ReturnValue;                       // 0x09C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsRunning_ReturnValue;                          // 0x09D0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SREE[0x3];                                   // 0x09D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_VSize2D_ReturnValue;                            // 0x09D4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue2;                // 0x09D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_GravGrenade_AnimBlueprint_AnimGraphNode_TransitionResult_1066597743FE70ADEF4AA19CCA67CA18();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_GravGrenade_AnimBlueprint_AnimGraphNode_TransitionResult_1E61C71D476C24BE1AC98DA1CA2F35A6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_GravGrenade_AnimBlueprint_AnimGraphNode_TransitionResult_AAD4A32C4A6F7F3F6F68C4A1D20DCF3E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPV_GravGrenade_AnimBlueprint_AnimGraphNode_TransitionResult_04B238C94D54388B29CE159392056402();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_FPV_GravGrenade_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
