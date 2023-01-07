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
	 * Function SeatedTurretHUD_Interface.SeatedTurretHUD_Interface_C.GetHudData
	 */
	struct USeatedTurretHUD_Interface_C_GetHudData_Params
	{
	public:
		class UPrimalInventoryComponent*                           InventoryComponent;                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              CurrentAmmoItemTemplate;                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class UClass*>                                      AmmoItemTemplates;                                       // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
		int32_t                                                    LowAmmoWarningAmount;                                    // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
