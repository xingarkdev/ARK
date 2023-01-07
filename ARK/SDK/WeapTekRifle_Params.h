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
	 * Function WeapTekRifle.WeapTekRifle_C.ForceDisableCameraOverrides
	 */
	struct AWeapTekRifle_C_ForceDisableCameraOverrides_Params
	{	};

	/**
	 * Function WeapTekRifle.WeapTekRifle_C.BPAppliedPrimalItemToWeapon
	 */
	struct AWeapTekRifle_C_BPAppliedPrimalItemToWeapon_Params
	{	};

	/**
	 * Function WeapTekRifle.WeapTekRifle_C.ReceiveDestroyed
	 */
	struct AWeapTekRifle_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function WeapTekRifle.WeapTekRifle_C.BPPreventSwitchingWeapon
	 */
	struct AWeapTekRifle_C_BPPreventSwitchingWeapon_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekRifle.WeapTekRifle_C.BPWeaponZoom
	 */
	struct AWeapTekRifle_C_BPWeaponZoom_Params
	{
	public:
		bool                                                       bZoomingIn;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8HL2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapTekRifle.WeapTekRifle_C.BPGlobalFireWeapon
	 */
	struct AWeapTekRifle_C_BPGlobalFireWeapon_Params
	{	};

	/**
	 * Function WeapTekRifle.WeapTekRifle_C.AllowTargeting
	 */
	struct AWeapTekRifle_C_AllowTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekRifle.WeapTekRifle_C.BPWeaponCanFire
	 */
	struct AWeapTekRifle_C_BPWeaponCanFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G2CO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapTekRifle.WeapTekRifle_C.BPFireWeapon
	 */
	struct AWeapTekRifle_C_BPFireWeapon_Params
	{	};

	/**
	 * Function WeapTekRifle.WeapTekRifle_C.ReceiveTick
	 */
	struct AWeapTekRifle_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekRifle.WeapTekRifle_C.GetIs Overheated
	 */
	struct AWeapTekRifle_C_GetIsOverheated_Params
	{
	public:
		bool                                                       bRetOverheated;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekRifle.WeapTekRifle_C.UserConstructionScript
	 */
	struct AWeapTekRifle_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapTekRifle.WeapTekRifle_C.Overheated
	 */
	struct AWeapTekRifle_C_Overheated_Params
	{	};

	/**
	 * Function WeapTekRifle.WeapTekRifle_C.AddHeat
	 */
	struct AWeapTekRifle_C_AddHeat_Params
	{	};

	/**
	 * Function WeapTekRifle.WeapTekRifle_C.NotOverheated
	 */
	struct AWeapTekRifle_C_NotOverheated_Params
	{	};

	/**
	 * Function WeapTekRifle.WeapTekRifle_C.ExecuteUbergraph_WeapTekRifle
	 */
	struct AWeapTekRifle_C_ExecuteUbergraph_WeapTekRifle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
