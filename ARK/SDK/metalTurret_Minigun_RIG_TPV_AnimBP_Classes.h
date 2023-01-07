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
	 * AnimBlueprintGeneratedClass metalTurret_Minigun_RIG_TPV_AnimBP.metalTurret_Minigun_RIG_TPV_AnimBP_C
	 * Size -> 0x00F4 (FullSize[0x0434] - InheritedSize[0x0340])
	 */
	class UmetalTurret_Minigun_RIG_TPV_AnimBP_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_D0FC80324447B712D562BDB8A4CDECFD;     // 0x0340(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_48B2ACCC48870D0F694CDD942D9044D6; // 0x0388(0x0050)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_EC2EF3DC4BFCE6E1ED4275B93A2B359F;     // 0x03D8(0x0058)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x0430(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_metalTurret_Minigun_RIG_TPV_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
