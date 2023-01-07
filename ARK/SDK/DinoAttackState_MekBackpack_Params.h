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
	 * Function DinoAttackState_MekBackpack.DinoAttackState_MekBackpack_C.BPOnAttackTick
	 */
	struct UDinoAttackState_MekBackpack_C_BPOnAttackTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_MekBackpack.DinoAttackState_MekBackpack_C.BPOnAttackStart
	 */
	struct UDinoAttackState_MekBackpack_C_BPOnAttackStart_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_MekBackpack.DinoAttackState_MekBackpack_C.GetMuzzleInfo
	 */
	struct UDinoAttackState_MekBackpack_C_GetMuzzleInfo_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Direction;                                               // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_MekBackpack.DinoAttackState_MekBackpack_C.ExecuteUbergraph_DinoAttackState_MekBackpack
	 */
	struct UDinoAttackState_MekBackpack_C_ExecuteUbergraph_DinoAttackState_MekBackpack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
