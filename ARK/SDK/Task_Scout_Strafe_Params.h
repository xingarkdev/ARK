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
	 * Function Task_Scout_Strafe.Task_Scout_Strafe_C.UpdateStrafeState
	 */
	struct UTask_Scout_Strafe_C_UpdateStrafeState_Params
	{
	public:
		class AActor*                                              Scout;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalCharacter*                                    Target;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Task_Scout_Strafe.Task_Scout_Strafe_C.GetStrafeZChange
	 */
	struct UTask_Scout_Strafe_C_GetStrafeZChange_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Task_Scout_Strafe.Task_Scout_Strafe_C.Get Strafe Max HeightMult
	 */
	struct UTask_Scout_Strafe_C_GetStrafeMaxHeightMult_Params
	{
	public:
		float                                                      Height;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Task_Scout_Strafe.Task_Scout_Strafe_C.Get Strafe Min HeightMult
	 */
	struct UTask_Scout_Strafe_C_GetStrafeMinHeightMult_Params
	{
	public:
		float                                                      Height;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Task_Scout_Strafe.Task_Scout_Strafe_C.Initialize
	 */
	struct UTask_Scout_Strafe_C_Initialize_Params
	{
	public:
		class AScout_AIController_BP_C*                            Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Task_Scout_Strafe.Task_Scout_Strafe_C.ReceiveTick
	 */
	struct UTask_Scout_Strafe_C_ReceiveTick_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Task_Scout_Strafe.Task_Scout_Strafe_C.ExecuteUbergraph_Task_Scout_Strafe
	 */
	struct UTask_Scout_Strafe_C_ExecuteUbergraph_Task_Scout_Strafe_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
