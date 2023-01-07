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
	 * Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.RefreshIdleAudio
	 */
	struct AStructure_PlantSpeciesR_C_RefreshIdleAudio_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.BPOnDemolish
	 */
	struct AStructure_PlantSpeciesR_C_BPOnDemolish_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.ClearLastHitRot
	 */
	struct AStructure_PlantSpeciesR_C_ClearLastHitRot_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.FillHarvestHealth
	 */
	struct AStructure_PlantSpeciesR_C_FillHarvestHealth_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.OnRep_HarvestHealth
	 */
	struct AStructure_PlantSpeciesR_C_OnRep_HarvestHealth_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.PlayHarvestVFX
	 */
	struct AStructure_PlantSpeciesR_C_PlayHarvestVFX_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.SetPlantEmissivePercent
	 */
	struct AStructure_PlantSpeciesR_C_SetPlantEmissivePercent_Params
	{
	public:
		float                                                      NewEmissiveVal;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.ReceiveBeginPlay
	 */
	struct AStructure_PlantSpeciesR_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.SetHarvestClassColor
	 */
	struct AStructure_PlantSpeciesR_C_SetHarvestClassColor_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.BPUpdatedHealth
	 */
	struct AStructure_PlantSpeciesR_C_BPUpdatedHealth_Params
	{
	public:
		bool                                                       bDoReplication;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KE9E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.FindOrCreateDynamicMaterials
	 */
	struct AStructure_PlantSpeciesR_C_FindOrCreateDynamicMaterials_Params
	{
	public:
		TArray<class UMaterialInstanceDynamic*>                    DynamicMaterials;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.BPAdjustDamage
	 */
	struct AStructure_PlantSpeciesR_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WHWO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7LI1[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.BlueprintDrawHUD
	 */
	struct AStructure_PlantSpeciesR_C_BlueprintDrawHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.UserConstructionScript
	 */
	struct AStructure_PlantSpeciesR_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.Timeline_UpdateMatZHeight__FinishedFunc
	 */
	struct AStructure_PlantSpeciesR_C_Timeline_UpdateMatZHeight__FinishedFunc_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.Timeline_UpdateMatZHeight__UpdateFunc
	 */
	struct AStructure_PlantSpeciesR_C_Timeline_UpdateMatZHeight__UpdateFunc_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.Multi_UpdateHarvestVFX
	 */
	struct AStructure_PlantSpeciesR_C_Multi_UpdateHarvestVFX_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
		int32_t                                                    AnimIndex;                                               // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.UpdateMatZHeight
	 */
	struct AStructure_PlantSpeciesR_C_UpdateMatZHeight_Params
	{
	public:
		bool                                                       Retracted;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Instant;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.ExecuteUbergraph_Structure_PlantSpeciesR
	 */
	struct AStructure_PlantSpeciesR_C_ExecuteUbergraph_Structure_PlantSpeciesR_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
