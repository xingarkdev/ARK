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
	 * Function Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C.ReceiveBeginPlay
	 */
	struct ADino_AIController_BP_Climber_Enforcer_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C.BPSetupFindTarget
	 */
	struct ADino_AIController_BP_Climber_Enforcer_C_BPSetupFindTarget_Params
	{	};

	/**
	 * Function Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C.BPGetTargetingDesire
	 */
	struct ADino_AIController_BP_Climber_Enforcer_C_BPGetTargetingDesire_Params
	{
	public:
		class AActor*                                              forTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ForTargetingDesireValue;                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C.UserConstructionScript
	 */
	struct ADino_AIController_BP_Climber_Enforcer_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C.ExecuteUbergraph_Dino_AIController_BP_Climber_Enforcer
	 */
	struct ADino_AIController_BP_Climber_Enforcer_C_ExecuteUbergraph_Dino_AIController_BP_Climber_Enforcer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
