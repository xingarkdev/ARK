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
	 * Function Service_SetFlockAttackFormation.Service_SetFlockAttackFormation_C.ReceiveDeactivation
	 */
	struct UService_SetFlockAttackFormation_C_ReceiveDeactivation_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Service_SetFlockAttackFormation.Service_SetFlockAttackFormation_C.ReceiveActivation
	 */
	struct UService_SetFlockAttackFormation_C_ReceiveActivation_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Service_SetFlockAttackFormation.Service_SetFlockAttackFormation_C.ExecuteUbergraph_Service_SetFlockAttackFormation
	 */
	struct UService_SetFlockAttackFormation_C_ExecuteUbergraph_Service_SetFlockAttackFormation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
