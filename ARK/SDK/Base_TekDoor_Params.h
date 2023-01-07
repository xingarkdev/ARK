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
	 * Function Base_TekDoor.Base_TekDoor_C.ReceiveBeginPlay
	 */
	struct ABase_TekDoor_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Base_TekDoor.Base_TekDoor_C.GetCloseTraceLocation
	 */
	struct ABase_TekDoor_C_GetCloseTraceLocation_Params
	{
	public:
		struct FVector                                             TraceLocation;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6NOQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Base_TekDoor.Base_TekDoor_C.BPClientDoMultiUse
	 */
	struct ABase_TekDoor_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7FCE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Base_TekDoor.Base_TekDoor_C.BPTryMultiUse
	 */
	struct ABase_TekDoor_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_TekDoor.Base_TekDoor_C.BPGetMultiUseEntries
	 */
	struct ABase_TekDoor_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Base_TekDoor.Base_TekDoor_C.IsValidDoorOpener
	 */
	struct ABase_TekDoor_C_IsValidDoorOpener_Params
	{
	public:
		class APrimalCharacter*                                    DoorOpener;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsValid;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5ITI[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Base_TekDoor.Base_TekDoor_C.DoAutoCloseCheck
	 */
	struct ABase_TekDoor_C_DoAutoCloseCheck_Params
	{	};

	/**
	 * Function Base_TekDoor.Base_TekDoor_C.BPPostSetStructureCollisionChannels
	 */
	struct ABase_TekDoor_C_BPPostSetStructureCollisionChannels_Params
	{	};

	/**
	 * Function Base_TekDoor.Base_TekDoor_C.BPGotoDoorState
	 */
	struct ABase_TekDoor_C_BPGotoDoorState_Params
	{
	public:
		int32_t                                                    NewDoorState;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_TekDoor.Base_TekDoor_C.UserConstructionScript
	 */
	struct ABase_TekDoor_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Base_TekDoor.Base_TekDoor_C.StartDoorInterp
	 */
	struct ABase_TekDoor_C_StartDoorInterp_Params
	{
	public:
		float                                                      InterpDest;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_TekDoor.Base_TekDoor_C.UpdateDoorInterp
	 */
	struct ABase_TekDoor_C_UpdateDoorInterp_Params
	{	};

	/**
	 * Function Base_TekDoor.Base_TekDoor_C.CheckForDoorOpeners
	 */
	struct ABase_TekDoor_C_CheckForDoorOpeners_Params
	{	};

	/**
	 * Function Base_TekDoor.Base_TekDoor_C.OnComponentBeginOverlap_Event
	 */
	struct ABase_TekDoor_C_OnComponentBeginOverlap_Event_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromSweep;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NIDF[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0018(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Base_TekDoor.Base_TekDoor_C.SetCollisionEvent
	 */
	struct ABase_TekDoor_C_SetCollisionEvent_Params
	{	};

	/**
	 * Function Base_TekDoor.Base_TekDoor_C.ExecuteUbergraph_Base_TekDoor
	 */
	struct ABase_TekDoor_C_ExecuteUbergraph_Base_TekDoor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
