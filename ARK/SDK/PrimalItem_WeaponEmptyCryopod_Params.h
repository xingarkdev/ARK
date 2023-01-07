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
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.GetContainedDinoClass
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_GetContainedDinoClass_Params
	{
	public:
		class UClass*                                              ResolvedClass;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HasData;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2C13[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCustomItemData                                     RawCustomItemData;                                       // 0x0010(0x0078)  (Parm, OutParm)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPPreventUpload
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BPPreventUpload_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_94VL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.Get Stat Value for Display
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_GetStatValueforDisplay_Params
	{
	public:
		float                                                      MaxValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EPrimalCharacterStatusValue                                Stat;                                                    // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KMIS[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5XN7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Result;                                                  // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.GetStatDisplayName
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_GetStatDisplayName_Params
	{
	public:
		EPrimalCharacterStatusValue                                Stat;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O0CO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                DisplayName;                                             // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetItemDescription
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BPGetItemDescription_Params
	{
	public:
		class FString                                              InDescription;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor)
		bool                                                       bGetLongDescription;                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6BNZ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterPlayerController*                            ForPC;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPInitIconMaterial
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BPInitIconMaterial_Params
	{	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetCustomIconMaterialParent
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BPGetCustomIconMaterialParent_Params
	{
	public:
		class UMaterialInterface*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPTributeItemUploaded
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BPTributeItemUploaded_Params
	{
	public:
		class UObject*                                             ContextObject;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPTributeItemDownloaded
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BPTributeItemDownloaded_Params
	{
	public:
		class UObject*                                             ContextObject;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPItemBelowDurabilityThreshold
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BPItemBelowDurabilityThreshold_Params
	{	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetCustomInventoryWidgetTextColor
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BPGetCustomInventoryWidgetTextColor_Params
	{
	public:
		struct FColor                                              ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetCustomDurabilityText
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BPGetCustomDurabilityText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetCustomAutoDecreaseDurabilityPerInterval
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BPGetCustomAutoDecreaseDurabilityPerInterval_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SR7R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetCustomInventoryWidgetText
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BPGetCustomInventoryWidgetText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPItemBroken
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BPItemBroken_Params
	{	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.TryDeploy
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_TryDeploy_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              SpawningActor;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              IgnoreActor;                                             // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Deployed;                                                // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JLC8[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             NewLocation;                                             // 0x002C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              FailureReason;                                           // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.CanFit
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_CanFit_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      VerticalOffset;                                          // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Angle;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      HorizontalOffset;                                        // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Radius;                                                  // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      HalfHeight;                                              // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              SpawningActor;                                           // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              IgnoreActor;                                             // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Can;                                                     // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_76I5[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             NewLocation;                                             // 0x0034(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.CanDeploy
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_CanDeploy_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QEB2[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              SpawningActor;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              IgnoreActor;                                             // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Can;                                                     // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MT8G[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             NewLocation;                                             // 0x002C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              FailureReason;                                           // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetItemName
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BPGetItemName_Params
	{
	public:
		class FString                                              ItemNameIn;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor)
		class AShooterPlayerController*                            ForPC;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BrokenDeploy
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BrokenDeploy_Params
	{	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.ExecuteUbergraph_PrimalItem_WeaponEmptyCryopod
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_ExecuteUbergraph_PrimalItem_WeaponEmptyCryopod_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.NewEventDispatcher__DelegateSignature
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_NewEventDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
