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
	 * Function DinoAttackState_MekPistolShoot.DinoAttackState_MekPistolShoot_C.BPOnAttackTick
	 */
	struct UDinoAttackState_MekPistolShoot_C_BPOnAttackTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7DRN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackState_MekPistolShoot.DinoAttackState_MekPistolShoot_C.BPOnAttackStart
	 */
	struct UDinoAttackState_MekPistolShoot_C_BPOnAttackStart_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_MekPistolShoot.DinoAttackState_MekPistolShoot_C.GetMuzzleInfo
	 */
	struct UDinoAttackState_MekPistolShoot_C_GetMuzzleInfo_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Direction;                                               // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_MekPistolShoot.DinoAttackState_MekPistolShoot_C.ExecuteUbergraph_DinoAttackState_MekPistolShoot
	 */
	struct UDinoAttackState_MekPistolShoot_C_ExecuteUbergraph_DinoAttackState_MekPistolShoot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
