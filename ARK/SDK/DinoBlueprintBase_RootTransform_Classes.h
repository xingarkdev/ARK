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
	 * AnimBlueprintGeneratedClass DinoBlueprintBase_RootTransform.DinoBlueprintBase_RootTransform_C
	 * Size -> 0x13B8 (FullSize[0x16F8] - InheritedSize[0x0340])
	 */
	class UDinoBlueprintBase_RootTransform_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_F7C8672C4B2767A91A8089BF239526FD;     // 0x0340(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8225C22C4AB2A0BF0B962FBC678E7E2A; // 0x0388(0x0050)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_7609070D49D3630D094BFC907F28FF57; // 0x03D8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_FEE35952402ABBFE9CE85A99A388F910; // 0x0458(0x0050)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_E657770546B332F62D5C9DB600A9914B; // 0x04A8(0x0048)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_B39B299B4EDFB2D9B0408FAECB206CE1; // 0x04F0(0x00D0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_A33FA7EF4F83ABFB82F2EAB1196C5B3D; // 0x05C0(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_F49A8E724B47BF411849DABD2D12C5D5;     // 0x0608(0x0058)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_C6BE06354590AD93F720ABAE5D668E47;     // 0x0660(0x0058)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_B0FDE5FA4106756377E5A1A2DE97AAAC;     // 0x06B8(0x0058)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_E4E657444A3581FF7A362F8AAF322BB6; // 0x0710(0x0080)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_E879148B4E481983FFB7DAA2D87071D4; // 0x0790(0x0118)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_221E74374B05D30B90D4AE8D5DE23231; // 0x08A8(0x0060)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_61328AF241474752101277BCFB8F3B7F; // 0x0908(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_B98E771248AA44F4AC889DA2A75B0933; // 0x0950(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6FBB1B724BD9344CF9357F8A0CC27EA5; // 0x0998(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_D7560E4B457083CFB7E1B5BE70AEC7C3; // 0x0A18(0x0050)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_CA5FE8164D69CA7209F17088EC516656; // 0x0A68(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5DBD02164BDD592D8BEEF7B2A44CA940; // 0x0AE8(0x0050)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_013D3D474B2EC5849DB8ED8C6CF19F7E; // 0x0B38(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_C34D7C054BFEA9EC8D3EAAA807F01249; // 0x0BB8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_65F8A6B64B54CBBE6C5B15AA8AAFED89; // 0x0C38(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_C7D3B1D94CA9F2AEBF2FD3B56E593815; // 0x0C88(0x0050)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_0DAED0994C190F4635146C8B9CFCFA93; // 0x0CD8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9169343F4CA73A7D23A32591FA464321; // 0x0D58(0x0050)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_32F9469F40F315D0EDE47B8BE166CC85; // 0x0DA8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_89A9B61E4E01B153C3A69EBD4841CB59; // 0x0E28(0x0050)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_7EB380AC4A9866EE819B49936874D010; // 0x0E78(0x0080)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_39F9ECDA4002C8BBFF19C984B5BF0064;     // 0x0EF8(0x0058)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_067070A243BC6F9E114C7CBB1CCF8D08;     // 0x0F50(0x0058)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_28E165664D04DE5E7A437DBC7CBD3D3E;     // 0x0FA8(0x0058)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_A36CA6B6479CCC77403137AED63AA786; // 0x1000(0x0070)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_70757B7148763435145151BD994A4BF3; // 0x1070(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6FF4CC79481A78E1446C6CB1FDCF7C6B; // 0x10C0(0x0050)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_1E94A8CB4BE1BDAC787E7283DEC8D38A; // 0x1110(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_B38631204D79DECFB452D0B098C1F1C7; // 0x1190(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_65DA25B64CCFE2C69FDAB9A67C0608BF; // 0x1210(0x0050)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_01A6FED4410F42913F4057949B3BCFEF; // 0x1260(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_83E19B244C6167A474419E8F863728A9; // 0x12E0(0x0050)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_F4B41D734CE9BB57CF0AA9979695D55C; // 0x1330(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_76F4071747D50F5421A5969F7060FDDC; // 0x13B0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10826EE74182D1A646A7C3994027434A; // 0x1430(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_C0F5C15A4DDD9816962D15AF655670D0; // 0x1480(0x0050)
		bool                                                       bIsMoving;                                               // 0x14D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_177C[0x3];                                   // 0x14D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            RootRotationOffset;                                      // 0x14D4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AimPitch;                                                // 0x14E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AimYaw;                                                  // 0x14E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             RootLocationOffset;                                      // 0x14E8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseAimOffset;                                           // 0x14F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UTUT[0x3];                                   // 0x14F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MovementAnimRate;                                        // 0x14F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsFlying;                                               // 0x14FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4DZH[0x3];                                   // 0x14FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RootOffsetTransform;                                     // 0x1500(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinimumMovementSpeed;                                    // 0x1530(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FallingAnimPlayRate;                                     // 0x1534(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FallingBlendInTime;                                      // 0x1538(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FallingBlendOutTime;                                     // 0x153C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MovingBlendInTime;                                       // 0x1540(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MovingBlendOutTime;                                      // 0x1544(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseFalling;                                             // 0x1548(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsFalling;                                              // 0x1549(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UYJJ[0x2];                                   // 0x154A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumMovementSpeedFlying;                              // 0x154C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseTurning;                                             // 0x1550(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsTurning;                                              // 0x1551(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bTurningRight;                                           // 0x1552(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RJ3B[0x1];                                   // 0x1553(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinTurnRateForTurnAnimation;                             // 0x1554(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TurningEnabledBlendTime;                                 // 0x1558(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TurningDisabledBlendTime;                                // 0x155C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TurningDirectionBlendTime;                               // 0x1560(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FlyingMoveBlendIn;                                       // 0x1564(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FlyingMoveBlendOut;                                      // 0x1568(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MovementAnimRatePower;                                   // 0x156C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseSleepingAnim;                                        // 0x1570(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsSleeping;                                             // 0x1571(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bSkipAnimGraph;                                          // 0x1572(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseFlyingOffset;                                        // 0x1573(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             FlyingOffset;                                            // 0x1574(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             CurrentFlyingOffset;                                     // 0x1580(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             LandedOffset;                                            // 0x158C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BlinkBlend;                                              // 0x1598(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseBlinking;                                            // 0x159C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsMounted;                                              // 0x159D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseMounted;                                             // 0x159E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3K6M[0x1];                                   // 0x159F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AimOffsetYawScale;                                       // 0x15A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AimOffsetPitchScale;                                     // 0x15A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsRunning;                                              // 0x15A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseRunning;                                             // 0x15A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J8L9[0x2];                                   // 0x15AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x15AC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue2;               // 0x15B0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x15B4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APawn*                                               CallFunc_TryGetPawnOwner_ReturnValue;                    // 0x15B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalDinoCharacter*                                K2Node_DynamicCast_AsPrimalDinoCharacter;                // 0x15C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x15C8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x15C9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x15CA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x15CB(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x15CC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z5DK[0x3];                                   // 0x15CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Lerp_ReturnValue;                               // 0x15D0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsRunning_ReturnValue;                          // 0x15D4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsMeshGameplayRelevant_ReturnValue;             // 0x15D5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x15D6(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CWXU[0x9];                                   // 0x15D7(0x0009) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          CallFunc_GetAimOffsetsTransform_RootRotOffsetTransform;  // 0x15E0(0x0030) Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetAimOffsetsTransform_TheRootYawSpeed;         // 0x1610(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetAimOffsetsTransform_RootLocOffset;           // 0x1614(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_GetAimOffsetsTransform_ReturnValue;             // 0x1620(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LQRT[0x4];                                   // 0x162C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPawnMovementComponent*                              CallFunc_GetMovementComponent_ReturnValue;               // 0x1630(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Pitch;                                 // 0x1638(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Yaw;                                   // 0x163C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Roll;                                  // 0x1640(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U9DI[0x4];                                   // 0x1644(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterMovementComponent*                         K2Node_DynamicCast_AsCharacterMovementComponent;         // 0x1648(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x1650(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3CFY[0x3];                                   // 0x1651(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue;                  // 0x1654(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue;                // 0x1658(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue2;               // 0x1659(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue3;               // 0x165A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue2;                         // 0x165B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue2;                 // 0x165C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Abs_ReturnValue;                                // 0x1660(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x1664(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QDG4[0x3];                                   // 0x1665(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetDefaultMovementSpeed_ReturnValue;            // 0x1668(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue3;               // 0x166C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector2D                                           CallFunc_Conv_VectorToVector2D_ReturnValue;              // 0x1670(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize_ReturnValue;                              // 0x1678(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize2D_ReturnValue;                            // 0x167C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_Select_ReturnValue;                               // 0x1680(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Select_CmpSuccess;                                // 0x1684(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue2;                // 0x1685(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue3;                // 0x1686(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P0HO[0x1];                                   // 0x1687(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue3;                 // 0x1688(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue4;                // 0x168C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue5;                // 0x168D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U1I6[0x2];                                   // 0x168E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;        // 0x1690(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x1694(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue3;                        // 0x1695(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue2;                 // 0x1696(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M8R2[0x1];                                   // 0x1697(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue;                   // 0x1698(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue2;                  // 0x16A4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetWorldDeltaSeconds_ReturnValue;               // 0x16B0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_VInterpTo_ReturnValue;                          // 0x16B4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_VInterpTo_ReturnValue2;                         // 0x16C0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue3;                 // 0x16CC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x16CD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QWST[0x2];                                   // 0x16CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_FClamp_ReturnValue;                             // 0x16D0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue4;                        // 0x16D4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1OSU[0x3];                                   // 0x16D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetWorldDeltaSeconds_ReturnValue2;              // 0x16D8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue4;               // 0x16DC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Subtract_FloatFloat_ReturnValue;                // 0x16E0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue;                     // 0x16E4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue5;               // 0x16E8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue2;                    // 0x16EC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue6;               // 0x16F0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue3;                    // 0x16F4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, float* playedAnimLength);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_AnimGraphNode_BlendListByBool_F4B41D734CE9BB57CF0AA9979695D55C();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_DinoBlueprintBase_RootTransform(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
