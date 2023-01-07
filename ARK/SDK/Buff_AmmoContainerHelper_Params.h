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
	 * Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.GetAmmoContainerIcon
	 */
	struct ABuff_AmmoContainerHelper_C_GetAmmoContainerIcon_Params
	{
	public:
		class UTexture2D*                                          Icon;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.ProvidedAmmoQuantity
	 */
	struct ABuff_AmmoContainerHelper_C_ProvidedAmmoQuantity_Params
	{
	public:
		class APrimalStructureItemContainer*                       TurretStructureItemContainer;                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              AmmoItemTemplate;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Quantity;                                                // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AnyAmmoContainersInRange;                                // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V008[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.GetAllAmmoNearby
	 */
	struct ABuff_AmmoContainerHelper_C_GetAllAmmoNearby_Params
	{
	public:
		float                                                      Range;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    InitialQuantity;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             StartingLocation;                                        // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3ROB[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              AmmoClass;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalStructure*                                    TurretToCheck;                                           // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    FinalQuantity;                                           // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AnyAmmoContainersInRange;                                // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ACFF[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.DrawBuffFloatingHUD
	 */
	struct ABuff_AmmoContainerHelper_C_DrawBuffFloatingHUD_Params
	{
	public:
		int32_t                                                    BuffIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T61D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterHUD*                                         HUD;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.CalculateWidgetLocation
	 */
	struct ABuff_AmmoContainerHelper_C_CalculateWidgetLocation_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    NumSlots;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           NewLocation;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.GetAmmoInfo
	 */
	struct ABuff_AmmoContainerHelper_C_GetAmmoInfo_Params
	{
	public:
		TArray<class UClass*>                                      AmmoTypeList;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		TArray<int32_t>                                            AmmoCountList;                                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
		TArray<struct FAmmoCount>                                  AmmoCounts;                                              // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.SyncHUDElements
	 */
	struct ABuff_AmmoContainerHelper_C_SyncHUDElements_Params
	{	};

	/**
	 * Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.BPGetHUDElements
	 */
	struct ABuff_AmmoContainerHelper_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.ReceiveBeginPlay
	 */
	struct ABuff_AmmoContainerHelper_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.UserConstructionScript
	 */
	struct ABuff_AmmoContainerHelper_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.BuffTickClient
	 */
	struct ABuff_AmmoContainerHelper_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.ExecuteUbergraph_Buff_AmmoContainerHelper
	 */
	struct ABuff_AmmoContainerHelper_C_ExecuteUbergraph_Buff_AmmoContainerHelper_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
