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
	 * Function Doed_Character_BP.Doed_Character_BP_C.BPChargingModifyInputAcceleration
	 */
	struct ADoed_Character_BP_C_BPChargingModifyInputAcceleration_Params
	{
	public:
		struct FVector                                             inputAcceleration;                                       // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Doed_Character_BP.Doed_Character_BP_C.BlueprintCanAttack
	 */
	struct ADoed_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D1J9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Doed_Character_BP.Doed_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct ADoed_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Doed_Character_BP.Doed_Character_BP_C.UserConstructionScript
	 */
	struct ADoed_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Doed_Character_BP.Doed_Character_BP_C.AnimNotify_EndCharge
	 */
	struct ADoed_Character_BP_C_AnimNotify_EndCharge_Params
	{	};

	/**
	 * Function Doed_Character_BP.Doed_Character_BP_C.ExecuteUbergraph_Doed_Character_BP
	 */
	struct ADoed_Character_BP_C_ExecuteUbergraph_Doed_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
