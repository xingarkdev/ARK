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
	 * AnimBlueprintGeneratedClass FPVGrenadeWeaponAnimBP_NoCooking.FPVGrenadeWeaponAnimBP_NoCooking_C
	 * Size -> 0x0589 (FullSize[0x08C9] - InheritedSize[0x0340])
	 */
	class UFPVGrenadeWeaponAnimBP_NoCooking_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_2293BAB74B83ADD9725630BED84119E6;     // 0x0340(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_169A7A4141173289FD83BAB56CD44284;     // 0x0388(0x0058)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_43EC1ADC45E034D54662E1A6892CCA3C; // 0x03E0(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_DE917CEE4C089B38906E9AB0DF0BD630; // 0x0418(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_B6CF99E94971576EC66F2096F03DBFBE; // 0x0450(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_BE962A4247D2B472B9044BA82CD002F9; // 0x0488(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2CCA0E224001897E1748839D783D4EAD; // 0x04C0(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_C14C86844FFCF2254E034E8CC2F614E7; // 0x04F8(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_067D42194AF1CE9503C8B3850918BDE5; // 0x0530(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_07D749274956F91B2B92B6B9593CDF98; // 0x0568(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_70BCB3654674E10686F94787944D4A25; // 0x05B8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9DAC02774E39CAA2F5B0FA842EBBF671; // 0x0600(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_2BE3204E4E78B02CF065B6BF02616075; // 0x0650(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_B4CD2EA34BAF0DFD1BD7E6914419B40F; // 0x0698(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_AD1D985E4AB45A07F9A628ACD1D71499; // 0x06E8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_F3C004264726B0AA3FE0BC91E38E9C24; // 0x0730(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_529631DC4FA1A89012D2CA9C2AFD3162; // 0x0780(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_F098B94640C1009EF499EFA1E558820C; // 0x07C8(0x0080)
		bool                                                       IsRunning;                                               // 0x0848(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsMoving;                                                // 0x0849(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsCooking;                                               // 0x084A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JZKI[0x1];                                   // 0x084B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CookingTime;                                             // 0x084C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x0850(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x0851(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0852(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x0853(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x0854(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue3;                        // 0x0855(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue3;                       // 0x0856(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x0857(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x0858(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QVP1[0x4];                                   // 0x085C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetOwningActor_ReturnValue;                     // 0x0860(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterWeapon*                                      K2Node_DynamicCast_AsShooterWeapon;                      // 0x0868(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0870(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PEZ6[0x7];                                   // 0x0871(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalWeaponGrenade*                                K2Node_DynamicCast_AsPrimalWeaponGrenade;                // 0x0878(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0880(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LDBB[0x7];                                   // 0x0881(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   CallFunc_GetPawnOwner_ReturnValue;                       // 0x0888(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter;                   // 0x0890(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast3_CastSuccess;                         // 0x0898(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VYLO[0x3];                                   // 0x0899(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_GetVelocity_ReturnValue;                        // 0x089C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue4;                       // 0x08A8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HWF6[0x3];                                   // 0x08A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_BreakVector_X;                                  // 0x08AC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y;                                  // 0x08B0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z;                                  // 0x08B4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector2D                                           CallFunc_MakeVector2D_ReturnValue;                       // 0x08B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsRunning_ReturnValue;                          // 0x08C0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NR8R[0x3];                                   // 0x08C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_VSize2D_ReturnValue;                            // 0x08C4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue2;                // 0x08C8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_NoCooking_AnimGraphNode_TransitionResult_43EC1ADC45E034D54662E1A6892CCA3C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_NoCooking_AnimGraphNode_TransitionResult_C14C86844FFCF2254E034E8CC2F614E7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_NoCooking_AnimGraphNode_TransitionResult_067D42194AF1CE9503C8B3850918BDE5();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_FPVGrenadeWeaponAnimBP_NoCooking(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
