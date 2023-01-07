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
	 * AnimBlueprintGeneratedClass crossbow_TPV_AnimBlueprint.crossbow_TPV_AnimBlueprint_C
	 * Size -> 0x02FA (FullSize[0x063A] - InheritedSize[0x0340])
	 */
	class Ucrossbow_TPV_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_552647944FE47FC6C97202925667A53E;     // 0x0340(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_0E0D6482457C0809F877D398A74AD865; // 0x0388(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5B61D4B04E0B2DC15F4C73B96745E710; // 0x03C0(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_D19FE2714254D999A25F4F81ABF93FB0; // 0x03F8(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_8709CF144CEA848F88EE4CA66E570BD1; // 0x0448(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_F0AAB52449B0770D98B4AB89F5E8C4C6; // 0x0490(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_87B0AB2B4F188C582DAEBAAADD636482; // 0x04E0(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_38673D4C4F83ACCEE9D046A51100AE26; // 0x0528(0x0080)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_FECE4AB8448EB2D9355DD799E1895B17;     // 0x05A8(0x0058)
		bool                                                       bHasAmmoClip;                                            // 0x0600(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H5ZO[0x3];                                   // 0x0601(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x0604(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_GetOwningActor_ReturnValue;                     // 0x0608(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterWeapon*                                      K2Node_DynamicCast_AsShooterWeapon;                      // 0x0610(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0618(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5HHQ[0x7];                                   // 0x0619(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AWeapCrossbow_Flame_C*                               K2Node_DynamicCast_AsWeapCrossbow_Flame_C;               // 0x0620(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0628(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_IntInt_ReturnValue;                     // 0x0629(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VOZV[0x6];                                   // 0x062A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AWeapCrossbow_Flame_C*                               K2Node_DynamicCast_AsWeapCrossbow_Flame_C2;              // 0x0630(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast3_CastSuccess;                         // 0x0638(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x0639(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_HideFire();
		void AnimNotify_ShowFire();
		void ExecuteUbergraph_crossbow_TPV_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
