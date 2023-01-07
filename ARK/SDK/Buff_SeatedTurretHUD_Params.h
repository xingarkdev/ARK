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
	 * Function Buff_SeatedTurretHUD.Buff_SeatedTurretHUD_C.NotifyDismount
	 */
	struct ABuff_SeatedTurretHUD_C_NotifyDismount_Params
	{	};

	/**
	 * Function Buff_SeatedTurretHUD.Buff_SeatedTurretHUD_C.BPGetHUDElements
	 */
	struct ABuff_SeatedTurretHUD_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_SeatedTurretHUD.Buff_SeatedTurretHUD_C.UserConstructionScript
	 */
	struct ABuff_SeatedTurretHUD_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_SeatedTurretHUD.Buff_SeatedTurretHUD_C.ExecuteUbergraph_Buff_SeatedTurretHUD
	 */
	struct ABuff_SeatedTurretHUD_C_ExecuteUbergraph_Buff_SeatedTurretHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
