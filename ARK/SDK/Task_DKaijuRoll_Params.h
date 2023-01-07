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
	 * Function Task_DKaijuRoll.Task_DKaijuRoll_C.ReceiveExecute
	 */
	struct UTask_DKaijuRoll_C_ReceiveExecute_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Task_DKaijuRoll.Task_DKaijuRoll_C.ReceiveAbort
	 */
	struct UTask_DKaijuRoll_C_ReceiveAbort_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Task_DKaijuRoll.Task_DKaijuRoll_C.ExecuteUbergraph_Task_DKaijuRoll
	 */
	struct UTask_DKaijuRoll_C_ExecuteUbergraph_Task_DKaijuRoll_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
