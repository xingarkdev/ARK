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
	 * AnimBlueprintGeneratedClass turret_rig_AnimBlueprint.turret_rig_AnimBlueprint_C
	 * Size -> 0x0259 (FullSize[0x0599] - InheritedSize[0x0340])
	 */
	class Uturret_rig_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_97ADCB9A41ED48AA62925F936A28B534;     // 0x0340(0x0048)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_0971199F4C45A79156D6C6BEBFA5CDC5; // 0x0388(0x0048)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_D7DF9AD84F4A7E0E6AC42C84513AA951; // 0x03D0(0x00D0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6336BE7E4627EBDA59DC77B2EFC754F3; // 0x04A0(0x00D0)
		struct FRotator                                            TurretAimRotOffset;                                      // 0x0570(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R2A7[0x4];                                   // 0x057C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetOwningActor_ReturnValue;                     // 0x0580(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x0588(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X10H[0x4];                                   // 0x058C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalStructureTurret*                              K2Node_DynamicCast_AsPrimalStructureTurret;              // 0x0590(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0598(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_turret_rig_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
