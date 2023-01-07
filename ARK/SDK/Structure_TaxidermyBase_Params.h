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
	 * Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.UpdateDinoMatOverrides
	 */
	struct AStructure_TaxidermyBase_C_UpdateDinoMatOverrides_Params
	{	};

	/**
	 * Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.OnContainerRenamed
	 */
	struct AStructure_TaxidermyBase_C_OnContainerRenamed_Params
	{	};

	/**
	 * Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.Construct Name Renderer Component
	 */
	struct AStructure_TaxidermyBase_C_ConstructNameRendererComponent_Params
	{	};

	/**
	 * Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.RemoveHairMeshes
	 */
	struct AStructure_TaxidermyBase_C_RemoveHairMeshes_Params
	{	};

	/**
	 * Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.OnRep_SnapshotPoseIndex
	 */
	struct AStructure_TaxidermyBase_C_OnRep_SnapshotPoseIndex_Params
	{	};

	/**
	 * Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.CreateDefaultSnapshot
	 */
	struct AStructure_TaxidermyBase_C_CreateDefaultSnapshot_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPClientDoMultiUse
	 */
	struct AStructure_TaxidermyBase_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IG6Q[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.SetTextRendererColor
	 */
	struct AStructure_TaxidermyBase_C_SetTextRendererColor_Params
	{	};

	/**
	 * Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.CreateSnapshot
	 */
	struct AStructure_TaxidermyBase_C_CreateSnapshot_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseDefaultSnapshotMat;                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CaptureCharacter;                                        // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NonCaptureGenderIsMale;                                  // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       KeepPreviousSnapshot;                                    // 0x000B(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XYKM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPPlacedStructure
	 */
	struct AStructure_TaxidermyBase_C_BPPlacedStructure_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ApplyEquippedSnapshot
	 */
	struct AStructure_TaxidermyBase_C_ApplyEquippedSnapshot_Params
	{	};

	/**
	 * Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPTryMultiUse
	 */
	struct AStructure_TaxidermyBase_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPGetMultiUseEntries
	 */
	struct AStructure_TaxidermyBase_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.RemoveSnapshot
	 */
	struct AStructure_TaxidermyBase_C_RemoveSnapshot_Params
	{	};

	/**
	 * Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ApplySnapshot
	 */
	struct AStructure_TaxidermyBase_C_ApplySnapshot_Params
	{
	public:
		class UPrimalItem*                                         Snapshot;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPNotifyInventoryItemChange
	 */
	struct AStructure_TaxidermyBase_C_BPNotifyInventoryItemChange_Params
	{
	public:
		bool                                                       bIsItemAdd;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9IBB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalItem*                                         theItem;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipItem;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.UserConstructionScript
	 */
	struct AStructure_TaxidermyBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ReceiveBeginPlay
	 */
	struct AStructure_TaxidermyBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.SetRendererText
	 */
	struct AStructure_TaxidermyBase_C_SetRendererText_Params
	{	};

	/**
	 * Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.Multi_CreateSnapshot
	 */
	struct AStructure_TaxidermyBase_C_Multi_CreateSnapshot_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseDefaultSnapshotMaterial;                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CaptureCharacter;                                        // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NonCaptureGenderIsMale;                                  // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       KeepPreviousSnapshot;                                    // 0x000B(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ExecuteUbergraph_Structure_TaxidermyBase
	 */
	struct AStructure_TaxidermyBase_C_ExecuteUbergraph_Structure_TaxidermyBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
