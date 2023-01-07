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
	 * Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.AllowedToChangePublicUse
	 */
	struct AWoodElevatorTopSwitch_C_AllowedToChangePublicUse_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Allow;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.Make Multi Use Entry
	 */
	struct AWoodElevatorTopSwitch_C_MakeMultiUseEntry_Params
	{
	public:
		EPrimalStructureElevatorState                              Direction;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WV6N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Priority;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FMultiUseEntry                                      Entry;                                                   // 0x0008(0x0048)  (Parm, OutParm)
	};

	/**
	 * Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.Get Elevator Platform
	 */
	struct AWoodElevatorTopSwitch_C_GetElevatorPlatform_Params
	{
	public:
		class AWoodElevatorPlatform_Base_C*                        Elevator;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.Move Elevator
	 */
	struct AWoodElevatorTopSwitch_C_MoveElevator_Params
	{
	public:
		class APrimalStructureElevatorPlatform*                    Elevator;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APlayerController*                                   PC;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EPrimalStructureElevatorState                              Direction;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.BPTryMultiUse
	 */
	struct AWoodElevatorTopSwitch_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.BPGetMultiUseEntries
	 */
	struct AWoodElevatorTopSwitch_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.UserConstructionScript
	 */
	struct AWoodElevatorTopSwitch_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.ReceiveBeginPlay
	 */
	struct AWoodElevatorTopSwitch_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.OnElevatorStartMove
	 */
	struct AWoodElevatorTopSwitch_C_OnElevatorStartMove_Params
	{
	public:
		EPrimalStructureElevatorState                              Direction;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.OnElevatorStop
	 */
	struct AWoodElevatorTopSwitch_C_OnElevatorStop_Params
	{
	public:
		bool                                                       SwitchedDirection;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EPrimalStructureElevatorState                              NewDirection;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.ExecuteUbergraph_WoodElevatorTopSwitch
	 */
	struct AWoodElevatorTopSwitch_C_ExecuteUbergraph_WoodElevatorTopSwitch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
