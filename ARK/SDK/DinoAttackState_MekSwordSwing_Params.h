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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.ShouldDoDamageTo
	 */
	struct UDinoAttackState_MekSwordSwing_C_ShouldDoDamageTo_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AllowDamage;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.BPOnAttackEnd
	 */
	struct UDinoAttackState_MekSwordSwing_C_BPOnAttackEnd_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.BPOnAnimNotifyCustomEvent
	 */
	struct UDinoAttackState_MekSwordSwing_C_BPOnAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ENetRole                                                   Role;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.DoSwordDamage
	 */
	struct UDinoAttackState_MekSwordSwing_C_DoSwordDamage_Params
	{	};

	/**
	 * Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.GetSwordCapsule
	 */
	struct UDinoAttackState_MekSwordSwing_C_GetSwordCapsule_Params
	{
	public:
		struct FTransform                                          WorldTransform;                                          // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
		float                                                      CapsuleRadius;                                           // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CapsuleHalfHeight;                                       // 0x0034(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3WWJ[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.GetSwordDamagePoint
	 */
	struct UDinoAttackState_MekSwordSwing_C_GetSwordDamagePoint_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rot;                                                     // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.BPOnAttackStart
	 */
	struct UDinoAttackState_MekSwordSwing_C_BPOnAttackStart_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.ExecuteUbergraph_DinoAttackState_MekSwordSwing
	 */
	struct UDinoAttackState_MekSwordSwing_C_ExecuteUbergraph_DinoAttackState_MekSwordSwing_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
