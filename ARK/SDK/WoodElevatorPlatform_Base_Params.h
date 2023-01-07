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
	 * Function WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C.GetTopSwitch
	 */
	struct AWoodElevatorPlatform_Base_C_GetTopSwitch_Params
	{
	public:
		class AWoodElevatorTopSwitch_C*                            Switch;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C.BPElevatorStopped
	 */
	struct AWoodElevatorPlatform_Base_C_BPElevatorStopped_Params
	{
	public:
		bool                                                       bSwitchedDirection;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EPrimalStructureElevatorState                              NewDirection;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C.UserConstructionScript
	 */
	struct AWoodElevatorPlatform_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C.ExecuteUbergraph_WoodElevatorPlatform_Base
	 */
	struct AWoodElevatorPlatform_Base_C_ExecuteUbergraph_WoodElevatorPlatform_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
