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
	 * AnimBlueprintGeneratedClass TPV_MinigunTurret_AnimBP.TPV_MinigunTurret_AnimBP_C
	 * Size -> 0x0298 (FullSize[0x05D8] - InheritedSize[0x0340])
	 */
	class UTPV_MinigunTurret_AnimBP_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_B13FFF7F40EE5B6BD6D3C2AC7EC295E5;     // 0x0340(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_FC097BE44E2D7A0369301F890207D41A; // 0x0388(0x0050)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_680B724A420F91C0EC1887A94C19EDF6; // 0x03D8(0x0118)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_C05379504FF407CD2D380699E83A3FC6; // 0x04F0(0x0070)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_B5C5D01547408927FBDC2BBC738C21F1; // 0x0560(0x0050)
		float                                                      YawRotation;                                             // 0x05B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PitchRotation;                                           // 0x05B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SpinRate;                                                // 0x05B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NJ6O[0x4];                                   // 0x05BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetOwningActor_ReturnValue;                     // 0x05C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AWeapMinigun_C*                                      K2Node_DynamicCast_AsWeapMinigun_C;                      // 0x05C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x05D0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_972X[0x3];                                   // 0x05D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x05D4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_TPV_MinigunTurret_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
