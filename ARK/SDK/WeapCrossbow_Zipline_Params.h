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
	 * Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ZiplineObstructionTrace
	 */
	struct AWeapCrossbow_Zipline_C_ZiplineObstructionTrace_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Hit;                                                     // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YC03[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.BPHandleMeleeAttack
	 */
	struct AWeapCrossbow_Zipline_C_BPHandleMeleeAttack_Params
	{	};

	/**
	 * Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.IsValidHitLocationForAttachment
	 */
	struct AWeapCrossbow_Zipline_C_IsValidHitLocationForAttachment_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		bool                                                       IsValidHit;                                              // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LB3I[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.BPWeaponCanFire
	 */
	struct AWeapCrossbow_Zipline_C_BPWeaponCanFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.Get ZipProjectile Default Object
	 */
	struct AWeapCrossbow_Zipline_C_GetZipProjectileDefaultObject_Params
	{
	public:
		class AProjZiplineAnchor_C*                                AsProjArrow_Zipline_Bolt_C;                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.Update Preview Cable
	 */
	struct AWeapCrossbow_Zipline_C_UpdatePreviewCable_Params
	{	};

	/**
	 * Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ReceiveTick
	 */
	struct AWeapCrossbow_Zipline_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ReceiveDestroyed
	 */
	struct AWeapCrossbow_Zipline_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.UserConstructionScript
	 */
	struct AWeapCrossbow_Zipline_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ReloadNow
	 */
	struct AWeapCrossbow_Zipline_C_ReloadNow_Params
	{	};

	/**
	 * Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ResetReload
	 */
	struct AWeapCrossbow_Zipline_C_ResetReload_Params
	{	};

	/**
	 * Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.NoPlacementNoti
	 */
	struct AWeapCrossbow_Zipline_C_NoPlacementNoti_Params
	{	};

	/**
	 * Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.BPFiredWeapon
	 */
	struct AWeapCrossbow_Zipline_C_BPFiredWeapon_Params
	{	};

	/**
	 * Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ExecuteUbergraph_WeapCrossbow_Zipline
	 */
	struct AWeapCrossbow_Zipline_C_ExecuteUbergraph_WeapCrossbow_Zipline_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
