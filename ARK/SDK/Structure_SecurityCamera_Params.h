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
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetConsoleData
	 */
	struct AStructure_SecurityCamera_C_GetConsoleData_Params
	{
	public:
		float                                                      ID;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L1FW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       CanAddCamera;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.CanAddCamera
	 */
	struct AStructure_SecurityCamera_C_CanAddCamera_Params
	{
	public:
		bool                                                       Allowed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetConsoleID
	 */
	struct AStructure_SecurityCamera_C_GetConsoleID_Params
	{
	public:
		float                                                      ID;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetCameraData
	 */
	struct AStructure_SecurityCamera_C_GetCameraData_Params
	{
	public:
		TArray<class APrimalStructure*>                            Cameras;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		int32_t                                                    index;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetCameraLocation
	 */
	struct AStructure_SecurityCamera_C_GetCameraLocation_Params
	{
	public:
		struct FVector                                             CameraViewPoint;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            CameraRotation;                                          // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.UpdateEffects
	 */
	struct AStructure_SecurityCamera_C_UpdateEffects_Params
	{	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPOverrideDescriptiveName
	 */
	struct AStructure_SecurityCamera_C_BPOverrideDescriptiveName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.ClientUpdatePosition
	 */
	struct AStructure_SecurityCamera_C_ClientUpdatePosition_Params
	{	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.BlueprintDrawHUD
	 */
	struct AStructure_SecurityCamera_C_BlueprintDrawHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetConsoleFromID
	 */
	struct AStructure_SecurityCamera_C_GetConsoleFromID_Params
	{
	public:
		float                                                      ID;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6Q1U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalStructure*                                    LinkedConsole;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPIsAllowedToBuild
	 */
	struct AStructure_SecurityCamera_C_BPIsAllowedToBuild_Params
	{
	public:
		struct FPlacementData                                      OutPlacementData;                                        // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		int32_t                                                    CurrentAllowedReason;                                    // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0064(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetAdditionalComponentForDyePreview
	 */
	struct AStructure_SecurityCamera_C_GetAdditionalComponentForDyePreview_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetCorrectedRotation
	 */
	struct AStructure_SecurityCamera_C_GetCorrectedRotation_Params
	{
	public:
		struct FRotator                                            CameraRotation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.PlacementTick
	 */
	struct AStructure_SecurityCamera_C_PlacementTick_Params
	{	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.ReceiveBeginPlay
	 */
	struct AStructure_SecurityCamera_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPUnstasis
	 */
	struct AStructure_SecurityCamera_C_BPUnstasis_Params
	{	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.UpdateCameraPosition
	 */
	struct AStructure_SecurityCamera_C_UpdateCameraPosition_Params
	{
	public:
		bool                                                       Animated;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E7YI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPPostInitializeComponents
	 */
	struct AStructure_SecurityCamera_C_BPPostInitializeComponents_Params
	{	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.InitializeRotation
	 */
	struct AStructure_SecurityCamera_C_InitializeRotation_Params
	{	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPPlacedStructure
	 */
	struct AStructure_SecurityCamera_C_BPPlacedStructure_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.PerformanceThrottledTick
	 */
	struct AStructure_SecurityCamera_C_PerformanceThrottledTick_Params
	{	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.OnRep_CameraActive
	 */
	struct AStructure_SecurityCamera_C_OnRep_CameraActive_Params
	{	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPHandleStructureEnabled
	 */
	struct AStructure_SecurityCamera_C_BPHandleStructureEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPPreventStasis
	 */
	struct AStructure_SecurityCamera_C_BPPreventStasis_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.OnContainerRenamed
	 */
	struct AStructure_SecurityCamera_C_OnContainerRenamed_Params
	{	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.ReceiveDestroyed
	 */
	struct AStructure_SecurityCamera_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPOnStructurePickup
	 */
	struct AStructure_SecurityCamera_C_BPOnStructurePickup_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              ItemType;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalItem*                                         NewlyPickedUpItem;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsQuickPickup;                                          // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WIIU[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.RetrieveLinkedConsoleFromItem
	 */
	struct AStructure_SecurityCamera_C_RetrieveLinkedConsoleFromItem_Params
	{
	public:
		class UPrimalItem*                                         Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      LinkedConsole;                                           // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Location;                                                // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              CameraName;                                              // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       CanAdd;                                                  // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JO8O[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ConsoleName;                                             // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPGetInfoFromConsumedItemForPlacedStructure
	 */
	struct AStructure_SecurityCamera_C_BPGetInfoFromConsumedItemForPlacedStructure_Params
	{
	public:
		class UPrimalItem*                                         ItemToConsumed;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPOverrideCantBuildReasonString
	 */
	struct AStructure_SecurityCamera_C_BPOverrideCantBuildReasonString_Params
	{
	public:
		int32_t                                                    CantBuildReason;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4GXV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPCheckItemRequiementsToBuild
	 */
	struct AStructure_SecurityCamera_C_BPCheckItemRequiementsToBuild_Params
	{
	public:
		class UPrimalItem*                                         ItemToConsumed;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.UserConstructionScript
	 */
	struct AStructure_SecurityCamera_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.AddNewCamera
	 */
	struct AStructure_SecurityCamera_C_AddNewCamera_Params
	{
	public:
		class APrimalStructure*                                    NewStructure;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.SetCurrentCamera
	 */
	struct AStructure_SecurityCamera_C_SetCurrentCamera_Params
	{
	public:
		int32_t                                                    CameraIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.UpdateCameraRotation
	 */
	struct AStructure_SecurityCamera_C_UpdateCameraRotation_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.ClientSetRotation
	 */
	struct AStructure_SecurityCamera_C_ClientSetRotation_Params
	{
	public:
		struct FRotator                                            NewParam;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.ServerInitializeRotation
	 */
	struct AStructure_SecurityCamera_C_ServerInitializeRotation_Params
	{	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.VerifyConsoleData
	 */
	struct AStructure_SecurityCamera_C_VerifyConsoleData_Params
	{	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.UpdateConsoleName
	 */
	struct AStructure_SecurityCamera_C_UpdateConsoleName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.ActivateCamera
	 */
	struct AStructure_SecurityCamera_C_ActivateCamera_Params
	{	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.ClientCameraActivated
	 */
	struct AStructure_SecurityCamera_C_ClientCameraActivated_Params
	{	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.RemoveCamera
	 */
	struct AStructure_SecurityCamera_C_RemoveCamera_Params
	{
	public:
		class APrimalStructure*                                    CameraToRemove;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.ClientCameraUnlinked
	 */
	struct AStructure_SecurityCamera_C_ClientCameraUnlinked_Params
	{	};

	/**
	 * Function Structure_SecurityCamera.Structure_SecurityCamera_C.ExecuteUbergraph_Structure_SecurityCamera
	 */
	struct AStructure_SecurityCamera_C_ExecuteUbergraph_Structure_SecurityCamera_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
