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
	 * Function WeapHarpoon_Net.WeapHarpoon_Net_C.Remote Set Crosshair Size
	 */
	struct AWeapHarpoon_Net_C_RemoteSetCrosshairSize_Params
	{
	public:
		float                                                      InSize;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OutSize;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapHarpoon_Net.WeapHarpoon_Net_C.Remote Set Crosshair Color
	 */
	struct AWeapHarpoon_Net_C_RemoteSetCrosshairColor_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        outColor;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapHarpoon_Net.WeapHarpoon_Net_C.GetHudData
	 */
	struct AWeapHarpoon_Net_C_GetHudData_Params
	{
	public:
		class UClass*                                              ProjectileClass;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             SocketLocation;                                          // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             FireDirection;                                           // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      AimedTargetCheckRadius;                                  // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isFPV;                                                   // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapHarpoon_Net.WeapHarpoon_Net_C.BPGetCrosshairColor
	 */
	struct AWeapHarpoon_Net_C_BPGetCrosshairColor_Params
	{
	public:
		struct FColor                                              ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapHarpoon_Net.WeapHarpoon_Net_C.BPStartEquippedNotify
	 */
	struct AWeapHarpoon_Net_C_BPStartEquippedNotify_Params
	{	};

	/**
	 * Function WeapHarpoon_Net.WeapHarpoon_Net_C.StartUnequipEvent
	 */
	struct AWeapHarpoon_Net_C_StartUnequipEvent_Params
	{	};

	/**
	 * Function WeapHarpoon_Net.WeapHarpoon_Net_C.ReceiveDestroyed
	 */
	struct AWeapHarpoon_Net_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function WeapHarpoon_Net.WeapHarpoon_Net_C.GetCrosshairColor
	 */
	struct AWeapHarpoon_Net_C_GetCrosshairColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapHarpoon_Net.WeapHarpoon_Net_C.BPDrawHud
	 */
	struct AWeapHarpoon_Net_C_BPDrawHud_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapHarpoon_Net.WeapHarpoon_Net_C.UserConstructionScript
	 */
	struct AWeapHarpoon_Net_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapHarpoon_Net.WeapHarpoon_Net_C.ExecuteUbergraph_WeapHarpoon_Net
	 */
	struct AWeapHarpoon_Net_C_ExecuteUbergraph_WeapHarpoon_Net_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
