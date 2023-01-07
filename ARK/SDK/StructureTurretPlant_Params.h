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
	 * Function StructureTurretPlant.StructureTurretPlant_C.BPOnDemolish
	 */
	struct AStructureTurretPlant_C_BPOnDemolish_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureTurretPlant.StructureTurretPlant_C.BPPostLoadedFromSaveGame
	 */
	struct AStructureTurretPlant_C_BPPostLoadedFromSaveGame_Params
	{	};

	/**
	 * Function StructureTurretPlant.StructureTurretPlant_C.BPCanBeActivated
	 */
	struct AStructureTurretPlant_C_BPCanBeActivated_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureTurretPlant.StructureTurretPlant_C.Turret Check Hard Limit
	 */
	struct AStructureTurretPlant_C_TurretCheckHardLimit_Params
	{	};

	/**
	 * Function StructureTurretPlant.StructureTurretPlant_C.BlueprintDrawHUD
	 */
	struct AStructureTurretPlant_C_BlueprintDrawHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StructureTurretPlant.StructureTurretPlant_C.UserConstructionScript
	 */
	struct AStructureTurretPlant_C_UserConstructionScript_Params
	{	};

	/**
	 * Function StructureTurretPlant.StructureTurretPlant_C.ExecuteUbergraph_StructureTurretPlant
	 */
	struct AStructureTurretPlant_C_ExecuteUbergraph_StructureTurretPlant_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
