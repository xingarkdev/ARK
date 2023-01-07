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
	 * Function Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C.Get Random PointNoMin
	 */
	struct UTask_DKaijuFindMovePointWithinArena_C_GetRandomPointNoMin_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Return;                                                  // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C.Get Random PointMin
	 */
	struct UTask_DKaijuFindMovePointWithinArena_C_GetRandomPointMin_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Return;                                                  // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DidNotFindLoc;                                           // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CZPF[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C.ReceiveExecute
	 */
	struct UTask_DKaijuFindMovePointWithinArena_C_ReceiveExecute_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C.ExecuteUbergraph_Task_DKaijuFindMovePointWithinArena
	 */
	struct UTask_DKaijuFindMovePointWithinArena_C_ExecuteUbergraph_Task_DKaijuFindMovePointWithinArena_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
