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
	 * AnimBlueprintGeneratedClass oilPump_RIG_AnimBlueprint.oilPump_RIG_AnimBlueprint_C
	 * Size -> 0x009C (FullSize[0x03DC] - InheritedSize[0x0340])
	 */
	class UoilPump_RIG_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_219B7613409DBF155856E38EEE127209;     // 0x0340(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9DBAFB9042B60EA50ADB1BA8AB46CFDB; // 0x0388(0x0050)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x03D8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_oilPump_RIG_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
