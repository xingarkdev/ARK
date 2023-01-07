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
	 * AnimBlueprintGeneratedClass mountedTurret_TPV_RIG_AnimBlueprint.mountedTurret_TPV_RIG_AnimBlueprint_C
	 * Size -> 0x0724 (FullSize[0x0A64] - InheritedSize[0x0340])
	 */
	class UmountedTurret_TPV_RIG_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_81E6A3E14B4A726AFA16B5B30B81A850;     // 0x0340(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_B21A7F13456636E29BBDD9AAECC20311; // 0x0388(0x0050)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_D19D9FDF4A2A7FB3AC18839F7A6B5C95; // 0x03D8(0x0118)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_54861DC4472A176E9717D1A2E2625E13;     // 0x04F0(0x0058)
		unsigned char                                              UnknownData_VZHF[0x8];                                   // 0x0548(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_C734550C4A35A0C4047B41913800C3FF; // 0x0550(0x00D0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_05648DF7449C35DFC5279AA255E72D02; // 0x0620(0x0048)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_409FA96246A538095F9B0595E1BB09D3; // 0x0668(0x0048)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_0D16651946EF059C33BE85B53102D8BA; // 0x06B0(0x00D0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_398032094CCB53767E3E0D9CA0A492BA; // 0x0780(0x00D0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2346945F40ACE3449D0A7FAED98D204C; // 0x0850(0x00D0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_24532E0E4365207989CA2CAD0CA3D3FA; // 0x0920(0x00D0)
		float                                                      TurretYaw;                                               // 0x09F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TurretPitch;                                             // 0x09F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_GetOwningActor_ReturnValue;                     // 0x09F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalStructureTurretBallista*                      K2Node_DynamicCast_AsPrimalStructureTurretBallista;      // 0x0A00(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0A08(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JWJ1[0x3];                                   // 0x0A09(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Subtract_FloatFloat_ReturnValue;                // 0x0A0C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x0A10(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue2;               // 0x0A14(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_MakeRot_ReturnValue;                            // 0x0A18(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_MakeRot_ReturnValue2;                           // 0x0A24(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x0A30(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue3;               // 0x0A34(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_MakeRot_ReturnValue3;                           // 0x0A38(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue4;               // 0x0A44(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue;                     // 0x0A48(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_MakeRot_ReturnValue4;                           // 0x0A4C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_MakeRot_ReturnValue5;                           // 0x0A58(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_mountedTurret_TPV_RIG_AnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_D19D9FDF4A2A7FB3AC18839F7A6B5C95();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_mountedTurret_TPV_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_C734550C4A35A0C4047B41913800C3FF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_mountedTurret_TPV_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_0D16651946EF059C33BE85B53102D8BA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_mountedTurret_TPV_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_398032094CCB53767E3E0D9CA0A492BA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_mountedTurret_TPV_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_2346945F40ACE3449D0A7FAED98D204C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_mountedTurret_TPV_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_24532E0E4365207989CA2CAD0CA3D3FA();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_mountedTurret_TPV_RIG_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
