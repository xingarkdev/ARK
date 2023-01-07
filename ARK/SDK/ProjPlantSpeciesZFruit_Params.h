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
	 * Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.IsActorValidForPVEorIsPVP
	 */
	struct AProjPlantSpeciesZFruit_C_IsActorValidForPVEorIsPVP_Params
	{
	public:
		class AActor*                                              HitCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsValid;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0AXK[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.IsShielded
	 */
	struct AProjPlantSpeciesZFruit_C_IsShielded_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsShielded;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F94C[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.IsWearingProtection
	 */
	struct AProjPlantSpeciesZFruit_C_IsWearingProtection_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsWearingProtection;                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TMH9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.IsNearbyStructure
	 */
	struct AProjPlantSpeciesZFruit_C_IsNearbyStructure_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      IndexOffset;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       StructureInBetween;                                      // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1YY0[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.GetAngleBetween
	 */
	struct AProjPlantSpeciesZFruit_C_GetAngleBetween_Params
	{
	public:
		struct FVector                                             v1;                                                      // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             v2;                                                      // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      retVal;                                                  // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.UserConstructionScript
	 */
	struct AProjPlantSpeciesZFruit_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.OnExplode
	 */
	struct AProjPlantSpeciesZFruit_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.BPProjectileBounced
	 */
	struct AProjPlantSpeciesZFruit_C_BPProjectileBounced_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		struct FVector                                             ImpactVelocity;                                          // 0x0088(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.ReceiveBeginPlay
	 */
	struct AProjPlantSpeciesZFruit_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.ROC_DisableProjectile
	 */
	struct AProjPlantSpeciesZFruit_C_ROC_DisableProjectile_Params
	{	};

	/**
	 * Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.SpawnCharge_Emitter
	 */
	struct AProjPlantSpeciesZFruit_C_SpawnCharge_Emitter_Params
	{	};

	/**
	 * Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.ExecuteUbergraph_ProjPlantSpeciesZFruit
	 */
	struct AProjPlantSpeciesZFruit_C_ExecuteUbergraph_ProjPlantSpeciesZFruit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
