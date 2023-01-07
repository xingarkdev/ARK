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
	 * AnimBlueprintGeneratedClass FPVLassoWeaponAnimBP_Base.FPVLassoWeaponAnimBP_Base_C
	 * Size -> 0x05C7 (FullSize[0x0907] - InheritedSize[0x0340])
	 */
	class UFPVLassoWeaponAnimBP_Base_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_816895B54865C5621CC1F6807E3311DE;     // 0x0340(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_6523FD0442D4B5DDA2BD8AB7E17CE6F9;     // 0x0388(0x0058)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_CA0BF081430D60556C53028901FBE4EE; // 0x03E0(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_B2AA18764DE0CCFC70D5619C7EADEF5D; // 0x0418(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_81CAC8524F543CE549B5F5B555060862; // 0x0450(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_E62D932544E5C625F1CE9C8C6486203E; // 0x0488(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_DD85E00F4CB0AE3B851F78897AA936B0; // 0x04C0(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_82397C0248F6AE2F3CD4CFB7D1922204; // 0x04F8(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8E73AC02452792AEB956CEA5FFA652F1; // 0x0530(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9017E1C14DB129530531E0866A0478E4; // 0x0568(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_C2D8E38D40D10095678597B5E62C2106; // 0x05A0(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_AF286E8742B3A9328F69F0A6C4E91DB92; // 0x05D8(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_A6E68DC3474632F16592AEA99053E49E2; // 0x0628(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_0069C117491F8C6F58E863A42A9E7DD5; // 0x0670(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_A76C014D46E26C75AC413885A3C11B85; // 0x06C0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_AF286E8742B3A9328F69F0A6C4E91DB9; // 0x0708(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_A6E68DC3474632F16592AEA99053E49E; // 0x0758(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_546A38EE4F45EE355F9F6881445921C7; // 0x07A0(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_39CBF3FE4D75ED25A6A86FAFA8E91E6F; // 0x07F0(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_EB25521C469F75591E329EBFA4A8F9F4; // 0x0838(0x0080)
		bool                                                       bIsSpinning;                                             // 0x08B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsPulling;                                              // 0x08B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsThrowing;                                             // 0x08BA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x08BB(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue2;                         // 0x08BC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x08BD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x08BE(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue3;                       // 0x08BF(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x08C0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T40V[0x3];                                   // 0x08C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x08C4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_GetOwningActor_ReturnValue;                     // 0x08C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterWeapon*                                      K2Node_DynamicCast_AsShooterWeapon;                      // 0x08D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x08D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RTGP[0x7];                                   // 0x08D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AWeapLasso_C*                                        K2Node_DynamicCast_AsWeapLasso_C;                        // 0x08E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x08E8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O9Y9[0x7];                                   // 0x08E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   CallFunc_GetPawnOwner_ReturnValue;                       // 0x08F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter;                   // 0x08F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast3_CastSuccess;                         // 0x0900(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_IntInt_ReturnValue;                     // 0x0901(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x0902(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue4;                       // 0x0903(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue3;                         // 0x0904(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue5;                       // 0x0905(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x0906(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVLassoWeaponAnimBP_Base_AnimGraphNode_TransitionResult_CA0BF081430D60556C53028901FBE4EE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVLassoWeaponAnimBP_Base_AnimGraphNode_TransitionResult_82397C0248F6AE2F3CD4CFB7D1922204();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_FPVLassoWeaponAnimBP_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
