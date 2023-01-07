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
	 * Function Task_IceKaijuTurnToFace.Task_IceKaijuTurnToFace_C.ReceiveExecute
	 */
	struct UTask_IceKaijuTurnToFace_C_ReceiveExecute_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Task_IceKaijuTurnToFace.Task_IceKaijuTurnToFace_C.ReceiveTick
	 */
	struct UTask_IceKaijuTurnToFace_C_ReceiveTick_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Task_IceKaijuTurnToFace.Task_IceKaijuTurnToFace_C.ReceiveAbort
	 */
	struct UTask_IceKaijuTurnToFace_C_ReceiveAbort_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Task_IceKaijuTurnToFace.Task_IceKaijuTurnToFace_C.ExecuteUbergraph_Task_IceKaijuTurnToFace
	 */
	struct UTask_IceKaijuTurnToFace_C_ExecuteUbergraph_Task_IceKaijuTurnToFace_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
