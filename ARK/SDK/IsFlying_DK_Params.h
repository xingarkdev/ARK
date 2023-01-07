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
	 * Function IsFlying_DK.IsFlying_DK_C.ReceiveConditionCheck
	 */
	struct UIsFlying_DK_C_ReceiveConditionCheck_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IsFlying_DK.IsFlying_DK_C.ReceiveExecutionStart
	 */
	struct UIsFlying_DK_C_ReceiveExecutionStart_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IsFlying_DK.IsFlying_DK_C.ReceiveExecutionFinish
	 */
	struct UIsFlying_DK_C_ReceiveExecutionFinish_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EBTNodeResult                                              NodeResult;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IsFlying_DK.IsFlying_DK_C.ExecuteUbergraph_IsFlying_DK
	 */
	struct UIsFlying_DK_C_ExecuteUbergraph_IsFlying_DK_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
