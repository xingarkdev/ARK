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
	 * Function TekBow_Interface.TekBow_Interface_C.GetAmmoMultiuseEntries
	 */
	struct UTekBow_Interface_C_GetAmmoMultiuseEntries_Params
	{
	public:
		TArray<struct FMultiUseEntry>                              AmmoWheelEntries;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function TekBow_Interface.TekBow_Interface_C.GetHudData
	 */
	struct UTekBow_Interface_C_GetHudData_Params
	{
	public:
		class FString                                              AmmoName;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		class UTexture2D*                                          AmmoIcon;                                                // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    CurrentAmmoCount;                                        // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    CurrentAmmoCost;                                         // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    AmmoPerClip;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    AmmoTypeIndex;                                           // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        CurrentAmmoTypeColor;                                    // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsAccessoryActive;                                       // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
