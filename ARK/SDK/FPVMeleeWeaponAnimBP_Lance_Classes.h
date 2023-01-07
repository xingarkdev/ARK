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
	 * AnimBlueprintGeneratedClass FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C
	 * Size -> 0x0AC8 (FullSize[0x0E08] - InheritedSize[0x0340])
	 */
	class UFPVMeleeWeaponAnimBP_Lance_C : public UAnimInstance
	{
	public:
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_54D2160549C42758A2AF319CC9F3060A; // 0x0340(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_647618C54A656DE19E08A88797CD2DFC; // 0x0378(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_519400C5487408815D8A8CA178914CB4; // 0x03B0(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_8D5A504D49F33717BAD7BB961BA01B2B; // 0x0400(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_F30A6E244318153443C20FB32974CBD6; // 0x0448(0x0050)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_177AE0EC48FFC9A4E65E42B2D3F98AD9; // 0x0498(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_11F6F5E5418C1088705C3F8720B59813; // 0x0518(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_312202F644F6F0FC8B772E94D25CFF0D; // 0x0598(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5B18C3F64DF71B6EAAB26BADFFCCC800; // 0x05E8(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_3DE4BCB74D1E917B61525FAE204D037F; // 0x0638(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_6C130A46416DD81C7300FD82B2D9E427; // 0x0680(0x0080)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8EB9944E4EAB783FBA658AB029E3BE2F; // 0x0700(0x00D0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_A60016864178233E961ABD93A651C402; // 0x07D0(0x0048)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_90EE580942676BC2C94F7CBF2157C48D; // 0x0818(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_D633C8424371EBE7F7222693EF07A878;     // 0x0860(0x0058)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_D91E538E4678BEF4CC38019322F15FE1;     // 0x08B8(0x0058)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_0D80B83348D6EBC76490ADBA4024292A; // 0x0910(0x0050)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_599768C24198688C81B41583994EB22F; // 0x0960(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4EDC622142C3A0000B9340A32349AF2F; // 0x09E0(0x0050)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_7322FDDE4F18FDAA89F2D69BFDE7737F; // 0x0A30(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_57B5AC4643ABA42FD4773FB8E1B877DD; // 0x0AB0(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_0C61B80E44DC12EFC5D72AAAE1719D41; // 0x0B00(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_BA20CA2044B7CBB3B7ED50A68CE6E6BC; // 0x0B48(0x0080)
		struct FAnimNode_Root                                      AnimGraphNode_Root_3A2275C0458B7C85E7374086ED646D4E;     // 0x0BC8(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2FE248B044108E27A0C8F58C61228639; // 0x0C10(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_52D0D9594393415A23F3BABC247C0975; // 0x0CB0(0x0050)
		struct FAnimationNode_TwoWayBlend                          AnimGraphNode_TwoWayBlend_A1339CE14FA0C6CD7E40FEA9A8030229; // 0x0D00(0x0070)
		bool                                                       IsRunning;                                               // 0x0D70(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsMoving;                                                // 0x0D71(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsUsingShield;                                          // 0x0D72(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9LKU[0x1];                                   // 0x0D73(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UsingShieldWeight;                                       // 0x0D74(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsBlockingWithShield;                                   // 0x0D78(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_415N[0x3];                                   // 0x0D79(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             BlockingShieldTranslation;                               // 0x0D7C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BlockingShieldWeight;                                    // 0x0D88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            BlockingShieldRotation;                                  // 0x0D8C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsAttacking;                                            // 0x0D98(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bWantsAttacking;                                         // 0x0D99(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NPV6[0x6];                                   // 0x0D9A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetOwningActor_ReturnValue;                     // 0x0DA0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterWeapon*                                      K2Node_DynamicCast_AsShooterWeapon;                      // 0x0DA8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0DB0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4MEJ[0x7];                                   // 0x0DB1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   CallFunc_GetPawnOwner_ReturnValue;                       // 0x0DB8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter;                   // 0x0DC0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0DC8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EPJB[0x3];                                   // 0x0DC9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation; // 0x0DCC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation; // 0x0DD8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_GetBlockingShieldOffsets_ReturnValue;           // 0x0DE4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsBlockingWithShield_ReturnValue;               // 0x0DE5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsUsingShield_ReturnValue;                      // 0x0DE6(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X5QC[0x1];                                   // 0x0DE7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AWeapLance_C*                                        K2Node_DynamicCast_AsWeapLance_C;                        // 0x0DE8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast3_CastSuccess;                         // 0x0DF0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KYXF[0x3];                                   // 0x0DF1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x0DF4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FInterpTo_ReturnValue;                          // 0x0DF8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FInterpTo_ReturnValue2;                         // 0x0DFC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FInterpTo_ReturnValue3;                         // 0x0E00(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FInterpTo_ReturnValue4;                         // 0x0E04(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
