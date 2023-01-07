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
	 * Function SecurityConsoleInterface.SecurityConsoleInterface_C.ActivateCamera
	 */
	struct USecurityConsoleInterface_C_ActivateCamera_Params
	{	};

	/**
	 * Function SecurityConsoleInterface.SecurityConsoleInterface_C.UpdateConsoleName
	 */
	struct USecurityConsoleInterface_C_UpdateConsoleName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function SecurityConsoleInterface.SecurityConsoleInterface_C.GetConsoleData
	 */
	struct USecurityConsoleInterface_C_GetConsoleData_Params
	{
	public:
		float                                                      ID;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NC3B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       CanAddCamera;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SecurityConsoleInterface.SecurityConsoleInterface_C.CanAddCamera
	 */
	struct USecurityConsoleInterface_C_CanAddCamera_Params
	{
	public:
		bool                                                       Allowed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SecurityConsoleInterface.SecurityConsoleInterface_C.GetConsoleID
	 */
	struct USecurityConsoleInterface_C_GetConsoleID_Params
	{
	public:
		float                                                      ID;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SecurityConsoleInterface.SecurityConsoleInterface_C.UpdateCameraRotation
	 */
	struct USecurityConsoleInterface_C_UpdateCameraRotation_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SecurityConsoleInterface.SecurityConsoleInterface_C.GetCameraData
	 */
	struct USecurityConsoleInterface_C_GetCameraData_Params
	{
	public:
		TArray<class APrimalStructure*>                            Cameras;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		int32_t                                                    index;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SecurityConsoleInterface.SecurityConsoleInterface_C.SetCurrentCamera
	 */
	struct USecurityConsoleInterface_C_SetCurrentCamera_Params
	{
	public:
		int32_t                                                    CameraIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SecurityConsoleInterface.SecurityConsoleInterface_C.GetCameraLocation
	 */
	struct USecurityConsoleInterface_C_GetCameraLocation_Params
	{
	public:
		struct FVector                                             CameraViewPoint;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            CameraRotation;                                          // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SecurityConsoleInterface.SecurityConsoleInterface_C.RemoveCamera
	 */
	struct USecurityConsoleInterface_C_RemoveCamera_Params
	{
	public:
		class APrimalStructure*                                    CameraToRemove;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SecurityConsoleInterface.SecurityConsoleInterface_C.AddNewCamera
	 */
	struct USecurityConsoleInterface_C_AddNewCamera_Params
	{
	public:
		class APrimalStructure*                                    NewStructure;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
