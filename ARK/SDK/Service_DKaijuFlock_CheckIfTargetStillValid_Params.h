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
	 * Function Service_DKaijuFlock_CheckIfTargetStillValid.Service_DKaijuFlock_CheckIfTargetStillValid_C.ReceiveTick
	 */
	struct UService_DKaijuFlock_CheckIfTargetStillValid_C_ReceiveTick_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Service_DKaijuFlock_CheckIfTargetStillValid.Service_DKaijuFlock_CheckIfTargetStillValid_C.ReceiveActivation
	 */
	struct UService_DKaijuFlock_CheckIfTargetStillValid_C_ReceiveActivation_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Service_DKaijuFlock_CheckIfTargetStillValid.Service_DKaijuFlock_CheckIfTargetStillValid_C.ExecuteUbergraph_Service_DKaijuFlock_CheckIfTargetStillValid
	 */
	struct UService_DKaijuFlock_CheckIfTargetStillValid_C_ExecuteUbergraph_Service_DKaijuFlock_CheckIfTargetStillValid_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
