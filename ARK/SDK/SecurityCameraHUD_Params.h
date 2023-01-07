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
	 * Function SecurityCameraHUD.SecurityCameraHUD_C.OnControllerButtonPressed
	 */
	struct USecurityCameraHUD_C_OnControllerButtonPressed_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_46CZ[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FControllerEvent                                    ControllerEvent;                                         // 0x0038(0x0040)  (Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SecurityCameraHUD.SecurityCameraHUD_C.SetInputControlsRichText
	 */
	struct USecurityCameraHUD_C_SetInputControlsRichText_Params
	{
	public:
		bool                                                       IsCameraListShowing;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QMRP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SecurityCameraHUD.SecurityCameraHUD_C.SelectItemAtIndex
	 */
	struct USecurityCameraHUD_C_SelectItemAtIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SecurityCameraHUD.SecurityCameraHUD_C.Update Camera HUD Info
	 */
	struct USecurityCameraHUD_C_UpdateCameraHUDInfo_Params
	{	};

	/**
	 * Function SecurityCameraHUD.SecurityCameraHUD_C.SwitchToCameraAtIndex
	 */
	struct USecurityCameraHUD_C_SwitchToCameraAtIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z4GV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SecurityCameraHUD.SecurityCameraHUD_C.HideListPanel
	 */
	struct USecurityCameraHUD_C_HideListPanel_Params
	{	};

	/**
	 * Function SecurityCameraHUD.SecurityCameraHUD_C.OnKeyUp
	 */
	struct USecurityCameraHUD_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2UAQ[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKeyboardEvent                                      InKeyboardEvent;                                         // 0x0038(0x0040)  (Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SecurityCameraHUD.SecurityCameraHUD_C.ShowListPanel
	 */
	struct USecurityCameraHUD_C_ShowListPanel_Params
	{	};

	/**
	 * Function SecurityCameraHUD.SecurityCameraHUD_C.InitFromCamera
	 */
	struct USecurityCameraHUD_C_InitFromCamera_Params
	{
	public:
		class ARemoteCamera_Character_BP_C*                        FromCamera;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              CameraName;                                              // 0x0008(0x0010)  (Parm, ZeroConstructor)
		struct FVector                                             CameraLocation;                                          // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    CameraIndex;                                             // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SecurityCameraHUD.SecurityCameraHUD_C.DestroyCameraHUDWidget
	 */
	struct USecurityCameraHUD_C_DestroyCameraHUDWidget_Params
	{	};

	/**
	 * Function SecurityCameraHUD.SecurityCameraHUD_C.ResetCameraHUDWidget
	 */
	struct USecurityCameraHUD_C_ResetCameraHUDWidget_Params
	{	};

	/**
	 * Function SecurityCameraHUD.SecurityCameraHUD_C.Tick
	 */
	struct USecurityCameraHUD_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SecurityCameraHUD.SecurityCameraHUD_C.ResetHUDWidgetAlreadyInViewport
	 */
	struct USecurityCameraHUD_C_ResetHUDWidgetAlreadyInViewport_Params
	{	};

	/**
	 * Function SecurityCameraHUD.SecurityCameraHUD_C.ExecuteUbergraph_SecurityCameraHUD
	 */
	struct USecurityCameraHUD_C_ExecuteUbergraph_SecurityCameraHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
