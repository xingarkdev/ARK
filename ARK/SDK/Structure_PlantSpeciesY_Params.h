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
	 * Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.BPAdjustDamage
	 */
	struct AStructure_PlantSpeciesY_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PO5N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_16NE[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.BPNotifyImmobilizedCharacterIsDeadOrInConscious
	 */
	struct AStructure_PlantSpeciesY_C_BPNotifyImmobilizedCharacterIsDeadOrInConscious_Params
	{
	public:
		bool                                                       IsDead;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsConscious;                                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.BPNotifyImmobilizedCharacterIsDead
	 */
	struct AStructure_PlantSpeciesY_C_BPNotifyImmobilizedCharacterIsDead_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.UserConstructionScript
	 */
	struct AStructure_PlantSpeciesY_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.ReceiveBeginPlay
	 */
	struct AStructure_PlantSpeciesY_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.PeriodicDamage
	 */
	struct AStructure_PlantSpeciesY_C_PeriodicDamage_Params
	{	};

	/**
	 * Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.ExecuteUbergraph_Structure_PlantSpeciesY
	 */
	struct AStructure_PlantSpeciesY_C_ExecuteUbergraph_Structure_PlantSpeciesY_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
