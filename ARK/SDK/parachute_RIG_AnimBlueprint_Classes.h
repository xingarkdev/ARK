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
	 * AnimBlueprintGeneratedClass parachute_RIG_AnimBlueprint.parachute_RIG_AnimBlueprint_C
	 * Size -> 0x03C8 (FullSize[0x0708] - InheritedSize[0x0340])
	 */
	class Uparachute_RIG_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_244E4895445B406BA0AA85A2286DC443;     // 0x0340(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_F4D1CB92414E3E64D65AAFB76DDD2067; // 0x0388(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6F013A774929084F4793DBBA92E5AA4F; // 0x03C0(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_CF98243C467C53213112EA80F854FC82; // 0x0410(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_A1A8493D4423E399A783FB83A6006CB1; // 0x0458(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_152B0E3B4957A3568079D997B726D71C; // 0x04A8(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_B1909469432C1665E2F5C98E9FF1D64F; // 0x04F0(0x0080)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_56D065BE4B56D2876D71E6AC03E7C454; // 0x0570(0x00D0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_E3543F1448BB357F732FC8A633A57375; // 0x0640(0x0048)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_A832DFAC450290FABAE603A7BBACD0F1; // 0x0688(0x0048)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x06D0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue;      // 0x06D4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class USkeletalMeshComponent*                              CallFunc_GetOwningComponent_ReturnValue;                 // 0x06D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_FloatFloat_ReturnValue;               // 0x06E0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MJNG[0x3];                                   // 0x06E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CallFunc_K2_GetComponentRotation_ReturnValue;            // 0x06E4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Pitch;                                 // 0x06F0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Yaw;                                   // 0x06F4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Roll;                                  // 0x06F8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_MakeRot_ReturnValue;                            // 0x06FC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_parachute_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_F4D1CB92414E3E64D65AAFB76DDD2067();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_parachute_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_56D065BE4B56D2876D71E6AC03E7C454();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_parachute_RIG_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
