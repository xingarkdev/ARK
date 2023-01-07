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
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.GetConsoleData
	 */
	struct AStructureTekSecurityConsole_C_GetConsoleData_Params
	{
	public:
		float                                                      ID;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PCH4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       CanAddCamera;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.CanAddCamera
	 */
	struct AStructureTekSecurityConsole_C_CanAddCamera_Params
	{
	public:
		bool                                                       Allowed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.GetConsoleID
	 */
	struct AStructureTekSecurityConsole_C_GetConsoleID_Params
	{
	public:
		float                                                      ID;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.GetCameraData
	 */
	struct AStructureTekSecurityConsole_C_GetCameraData_Params
	{
	public:
		TArray<class APrimalStructure*>                            Cameras;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		int32_t                                                    index;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.GetCameraLocation
	 */
	struct AStructureTekSecurityConsole_C_GetCameraLocation_Params
	{
	public:
		struct FVector                                             CameraViewPoint;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            CameraRotation;                                          // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.GetCameraName
	 */
	struct AStructureTekSecurityConsole_C_GetCameraName_Params
	{
	public:
		struct FRemoteCameraData                                   RemoteCameraData;                                        // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4DC9[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.OnContainerRenamed
	 */
	struct AStructureTekSecurityConsole_C_OnContainerRenamed_Params
	{	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPContainerActivated
	 */
	struct AStructureTekSecurityConsole_C_BPContainerActivated_Params
	{	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.CanCameraBeAdded
	 */
	struct AStructureTekSecurityConsole_C_CanCameraBeAdded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YGB4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.VerifyCameraList
	 */
	struct AStructureTekSecurityConsole_C_VerifyCameraList_Params
	{	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPPlacedStructure
	 */
	struct AStructureTekSecurityConsole_C_BPPlacedStructure_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.OnStructurePlacementRefreshed
	 */
	struct AStructureTekSecurityConsole_C_OnStructurePlacementRefreshed_Params
	{	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.VerifyActiveCamera
	 */
	struct AStructureTekSecurityConsole_C_VerifyActiveCamera_Params
	{	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.ReceiveDestroyed
	 */
	struct AStructureTekSecurityConsole_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPUnstasis
	 */
	struct AStructureTekSecurityConsole_C_BPUnstasis_Params
	{	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.RemoveLinkedCamera
	 */
	struct AStructureTekSecurityConsole_C_RemoveLinkedCamera_Params
	{
	public:
		class APrimalStructure*                                    Camera;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.ReceiveBeginPlay
	 */
	struct AStructureTekSecurityConsole_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.AddCamera
	 */
	struct AStructureTekSecurityConsole_C_AddCamera_Params
	{
	public:
		class APrimalStructure*                                    NewCamera;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPPreventStasis
	 */
	struct AStructureTekSecurityConsole_C_BPPreventStasis_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPContainerDeactivated
	 */
	struct AStructureTekSecurityConsole_C_BPContainerDeactivated_Params
	{	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPClientDoMultiUse
	 */
	struct AStructureTekSecurityConsole_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPGetMultiUseEntries
	 */
	struct AStructureTekSecurityConsole_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPTryMultiUse
	 */
	struct AStructureTekSecurityConsole_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LLYJ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.UserConstructionScript
	 */
	struct AStructureTekSecurityConsole_C_UserConstructionScript_Params
	{	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.SetCurrentCamera
	 */
	struct AStructureTekSecurityConsole_C_SetCurrentCamera_Params
	{
	public:
		int32_t                                                    CameraIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.UpdateCameraRotation
	 */
	struct AStructureTekSecurityConsole_C_UpdateCameraRotation_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.UpdateConsoleName
	 */
	struct AStructureTekSecurityConsole_C_UpdateConsoleName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.ActivateCamera
	 */
	struct AStructureTekSecurityConsole_C_ActivateCamera_Params
	{	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.AddNewCamera
	 */
	struct AStructureTekSecurityConsole_C_AddNewCamera_Params
	{
	public:
		class APrimalStructure*                                    NewStructure;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.RemoveCamera
	 */
	struct AStructureTekSecurityConsole_C_RemoveCamera_Params
	{
	public:
		class APrimalStructure*                                    CameraToRemove;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.ClientAddCamera
	 */
	struct AStructureTekSecurityConsole_C_ClientAddCamera_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ELPB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor)
		struct FVector                                             Position;                                                // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.ClientRemoveCamera
	 */
	struct AStructureTekSecurityConsole_C_ClientRemoveCamera_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.ExecuteUbergraph_StructureTekSecurityConsole
	 */
	struct AStructureTekSecurityConsole_C_ExecuteUbergraph_StructureTekSecurityConsole_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
