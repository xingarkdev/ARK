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
	 * Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.GetCameraLocation
	 */
	struct UPrimalItemStructure_SecurityCamera_C_GetCameraLocation_Params
	{
	public:
		struct FVector                                             CameraViewPoint;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            CameraRotation;                                          // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.GetCameraData
	 */
	struct UPrimalItemStructure_SecurityCamera_C_GetCameraData_Params
	{
	public:
		TArray<class APrimalStructure*>                            Cameras;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		int32_t                                                    index;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YJ1M[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.GetConsoleID
	 */
	struct UPrimalItemStructure_SecurityCamera_C_GetConsoleID_Params
	{
	public:
		float                                                      ID;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.CanAddCamera
	 */
	struct UPrimalItemStructure_SecurityCamera_C_CanAddCamera_Params
	{
	public:
		bool                                                       Allowed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.GetConsoleData
	 */
	struct UPrimalItemStructure_SecurityCamera_C_GetConsoleData_Params
	{
	public:
		float                                                      ID;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W1KB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       CanAddCamera;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.SetConsoleDataByID
	 */
	struct UPrimalItemStructure_SecurityCamera_C_SetConsoleDataByID_Params
	{
	public:
		float                                                      ConsoleID;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FJUB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.SetCameraName
	 */
	struct UPrimalItemStructure_SecurityCamera_C_SetCameraName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.RetrieveConsoleData
	 */
	struct UPrimalItemStructure_SecurityCamera_C_RetrieveConsoleData_Params
	{
	public:
		float                                                      outConsoleID;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OutLocation;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       outAllowedToAdd;                                         // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W9WS[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              outCameraName;                                           // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor)
		class FString                                              outConsoleName;                                          // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.Set Console Data
	 */
	struct UPrimalItemStructure_SecurityCamera_C_SetConsoleData_Params
	{
	public:
		class APrimalStructure*                                    Console;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Changed;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FMV9[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.GetConsoleFromID
	 */
	struct UPrimalItemStructure_SecurityCamera_C_GetConsoleFromID_Params
	{
	public:
		float                                                      ID;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8VR9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalStructure*                                    LinkedConsole;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.BPServerVerifyStructurePlacementData
	 */
	struct UPrimalItemStructure_SecurityCamera_C_BPServerVerifyStructurePlacementData_Params
	{	};

	/**
	 * Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.VerifyConsoleData
	 */
	struct UPrimalItemStructure_SecurityCamera_C_VerifyConsoleData_Params
	{	};

	/**
	 * Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.BPGetItemName
	 */
	struct UPrimalItemStructure_SecurityCamera_C_BPGetItemName_Params
	{
	public:
		class FString                                              ItemNameIn;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor)
		class AShooterPlayerController*                            ForPC;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.BPGetItemIcon
	 */
	struct UPrimalItemStructure_SecurityCamera_C_BPGetItemIcon_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UTexture2D*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.BPGetItemDescription
	 */
	struct UPrimalItemStructure_SecurityCamera_C_BPGetItemDescription_Params
	{
	public:
		class FString                                              InDescription;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor)
		bool                                                       bGetLongDescription;                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_33G1[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterPlayerController*                            ForPC;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C.ExecuteUbergraph_PrimalItemStructure_SecurityCamera
	 */
	struct UPrimalItemStructure_SecurityCamera_C_ExecuteUbergraph_PrimalItemStructure_SecurityCamera_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
