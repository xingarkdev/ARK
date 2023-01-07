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
	 * Function WeapHomingMissile.WeapHomingMissile_C.UpdateLEDs
	 */
	struct AWeapHomingMissile_C_UpdateLEDs_Params
	{	};

	/**
	 * Function WeapHomingMissile.WeapHomingMissile_C.Listener_LockOn_Stop
	 */
	struct AWeapHomingMissile_C_Listener_LockOn_Stop_Params
	{	};

	/**
	 * Function WeapHomingMissile.WeapHomingMissile_C.Listener_LockOn_Update
	 */
	struct AWeapHomingMissile_C_Listener_LockOn_Update_Params
	{
	public:
		bool                                                       Reset;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapHomingMissile.WeapHomingMissile_C.UserConstructionScript
	 */
	struct AWeapHomingMissile_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapHomingMissile.WeapHomingMissile_C.AnimNotify_Reload
	 */
	struct AWeapHomingMissile_C_AnimNotify_Reload_Params
	{	};

	/**
	 * Function WeapHomingMissile.WeapHomingMissile_C.ReceiveBeginPlay
	 */
	struct AWeapHomingMissile_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WeapHomingMissile.WeapHomingMissile_C.ExecuteUbergraph_WeapHomingMissile
	 */
	struct AWeapHomingMissile_C_ExecuteUbergraph_WeapHomingMissile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
