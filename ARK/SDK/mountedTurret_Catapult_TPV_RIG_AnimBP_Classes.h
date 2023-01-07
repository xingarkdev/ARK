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
	 * AnimBlueprintGeneratedClass mountedTurret_Catapult_TPV_RIG_AnimBP.mountedTurret_Catapult_TPV_RIG_AnimBP_C
	 * Size -> 0x00F4 (FullSize[0x0434] - InheritedSize[0x0340])
	 */
	class UmountedTurret_Catapult_TPV_RIG_AnimBP_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_EEF1AA724AB64E9D92586D96226E2969;     // 0x0340(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_A7189BE14FB76D5F25439388F447123E;     // 0x0388(0x0058)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_F337634643C0FDC8582F44B28E0D45B3; // 0x03E0(0x0050)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x0430(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_mountedTurret_Catapult_TPV_RIG_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
