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
	 * AnimBlueprintGeneratedClass compoundBow_TPV_AnimBlueprint.compoundBow_TPV_AnimBlueprint_C
	 * Size -> 0x0400 (FullSize[0x0740] - InheritedSize[0x0340])
	 */
	class UcompoundBow_TPV_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_C3C0D6AD4F7303EB60C69F8D09A9F5C4;     // 0x0340(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_443B71C84C86601ECFEB21AB10B0E85D; // 0x0388(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_F2F53E764A3F2C241F66ABA5198D1BD1; // 0x03C0(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_AA08BC0244042421C6DDE18BB9667F0C; // 0x03F8(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_315D9E3A411092D0265E0EB3ED1771CB; // 0x0430(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_FCFF8BCD4185A3EC68EB7CA5B271A0FD; // 0x0468(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_430DD7FE4247F693810B31BC7B2B2170; // 0x04B8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_E905746546C261E649FA1DBCD36244E9; // 0x0500(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_232E8A264E1DD53A6C10D2A3A012A062; // 0x0550(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_DF81805A4178A6B48F8DC8855F1A288A; // 0x0598(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_915A80264BDB1AAF5DB574A994FA5033; // 0x05E8(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_D5C6316448248D04ABB44783940CF852; // 0x0630(0x0080)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_86C19447476D849315D53CB0D35187CA;     // 0x06B0(0x0058)
		bool                                                       IsPullingString;                                         // 0x0708(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YWVH[0x7];                                   // 0x0709(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetOwningActor_ReturnValue;                     // 0x0710(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterWeapon*                                      K2Node_DynamicCast_AsShooterWeapon;                      // 0x0718(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0720(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KOAM[0x7];                                   // 0x0721(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalWeaponBow*                                    K2Node_DynamicCast_AsPrimalWeaponBow;                    // 0x0728(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0730(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q65D[0x3];                                   // 0x0731(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue;      // 0x0734(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_FloatFloat_ReturnValue;               // 0x0738(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x0739(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9GP9[0x2];                                   // 0x073A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x073C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_compoundBow_TPV_AnimBlueprint_AnimGraphNode_TransitionResult_F2F53E764A3F2C241F66ABA5198D1BD1();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_compoundBow_TPV_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
