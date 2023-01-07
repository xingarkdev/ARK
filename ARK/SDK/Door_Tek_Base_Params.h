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
	 * Function Door_Tek_Base.Door_Tek_Base_C.BPClientDoMultiUse
	 */
	struct ADoor_Tek_Base_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NP2X[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Door_Tek_Base.Door_Tek_Base_C.BPTryMultiUse
	 */
	struct ADoor_Tek_Base_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Door_Tek_Base.Door_Tek_Base_C.BPGetMultiUseEntries
	 */
	struct ADoor_Tek_Base_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Door_Tek_Base.Door_Tek_Base_C.IsValidSnapPointFrom
	 */
	struct ADoor_Tek_Base_C_IsValidSnapPointFrom_Params
	{
	public:
		class APrimalStructure*                                    ParentStructure;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    MySnapPointFromIndex;                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Door_Tek_Base.Door_Tek_Base_C.IsValidDoorOpener
	 */
	struct ADoor_Tek_Base_C_IsValidDoorOpener_Params
	{
	public:
		class APrimalCharacter*                                    DoorOpener;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsValid;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MRZ3[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Door_Tek_Base.Door_Tek_Base_C.DoAutoCloseCheck
	 */
	struct ADoor_Tek_Base_C_DoAutoCloseCheck_Params
	{	};

	/**
	 * Function Door_Tek_Base.Door_Tek_Base_C.BPPostSetStructureCollisionChannels
	 */
	struct ADoor_Tek_Base_C_BPPostSetStructureCollisionChannels_Params
	{	};

	/**
	 * Function Door_Tek_Base.Door_Tek_Base_C.BPGotoDoorState
	 */
	struct ADoor_Tek_Base_C_BPGotoDoorState_Params
	{
	public:
		int32_t                                                    NewDoorState;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Door_Tek_Base.Door_Tek_Base_C.UserConstructionScript
	 */
	struct ADoor_Tek_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Door_Tek_Base.Door_Tek_Base_C.StartDoorInterp
	 */
	struct ADoor_Tek_Base_C_StartDoorInterp_Params
	{
	public:
		float                                                      InterpDest;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Door_Tek_Base.Door_Tek_Base_C.UpdateDoorInterp
	 */
	struct ADoor_Tek_Base_C_UpdateDoorInterp_Params
	{	};

	/**
	 * Function Door_Tek_Base.Door_Tek_Base_C.CheckForDoorOpeners
	 */
	struct ADoor_Tek_Base_C_CheckForDoorOpeners_Params
	{	};

	/**
	 * Function Door_Tek_Base.Door_Tek_Base_C.OnComponentBeginOverlap_Event
	 */
	struct ADoor_Tek_Base_C_OnComponentBeginOverlap_Event_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromSweep;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4AZX[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0018(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Door_Tek_Base.Door_Tek_Base_C.ReceiveBeginPlay
	 */
	struct ADoor_Tek_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Door_Tek_Base.Door_Tek_Base_C.ExecuteUbergraph_Door_Tek_Base
	 */
	struct ADoor_Tek_Base_C_ExecuteUbergraph_Door_Tek_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
