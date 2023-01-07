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
	 * Function AmmoContainerHUD_Interface.AmmoContainerHUD_Interface_C.GetAmmoContainerIcon
	 */
	struct UAmmoContainerHUD_Interface_C_GetAmmoContainerIcon_Params
	{
	public:
		class UTexture2D*                                          Icon;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AmmoContainerHUD_Interface.AmmoContainerHUD_Interface_C.ProvidedAmmoQuantity
	 */
	struct UAmmoContainerHUD_Interface_C_ProvidedAmmoQuantity_Params
	{
	public:
		class APrimalStructureItemContainer*                       TurretStructureItemContainer;                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              AmmoItemTemplate;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Quantity;                                                // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AnyAmmoContainersInRange;                                // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
