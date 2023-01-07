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
	 * Function StructureTurretMinigun.StructureTurretMinigun_C.GetHudData
	 */
	struct AStructureTurretMinigun_C_GetHudData_Params
	{
	public:
		class UPrimalInventoryComponent*                           InventoryComponent;                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              CurrentAmmoItemTemplate;                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class UClass*>                                      AmmoItemTemplates;                                       // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
		int32_t                                                    LowAmmoWarningAmount;                                    // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KMC0[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StructureTurretMinigun.StructureTurretMinigun_C.BPReleasedPlayer
	 */
	struct AStructureTurretMinigun_C_BPReleasedPlayer_Params
	{
	public:
		class AShooterCharacter*                                   ReleasedChar;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    AtSeatNumber;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4G3N[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StructureTurretMinigun.StructureTurretMinigun_C.UserConstructionScript
	 */
	struct AStructureTurretMinigun_C_UserConstructionScript_Params
	{	};

	/**
	 * Function StructureTurretMinigun.StructureTurretMinigun_C.ExecuteUbergraph_StructureTurretMinigun
	 */
	struct AStructureTurretMinigun_C_ExecuteUbergraph_StructureTurretMinigun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
