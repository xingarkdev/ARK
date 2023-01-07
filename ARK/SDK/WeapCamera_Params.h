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
	 * Function WeapCamera.WeapCamera_C.BP_OnReloadNotify
	 */
	struct AWeapCamera_C_BP_OnReloadNotify_Params
	{	};

	/**
	 * Function WeapCamera.WeapCamera_C.BPWeaponZoom
	 */
	struct AWeapCamera_C_BPWeaponZoom_Params
	{
	public:
		bool                                                       bZoomingIn;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2E6Z[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapCamera.WeapCamera_C.ReceiveTick
	 */
	struct AWeapCamera_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapCamera.WeapCamera_C.ReceiveBeginPlay
	 */
	struct AWeapCamera_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WeapCamera.WeapCamera_C.BPConstrainAspectRatio
	 */
	struct AWeapCamera_C_BPConstrainAspectRatio_Params
	{
	public:
		float                                                      OutAspectRatio;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapCamera.WeapCamera_C.BPTryFireWeapon
	 */
	struct AWeapCamera_C_BPTryFireWeapon_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HUD9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapCamera.WeapCamera_C.BPAllowNativeFireWeapon
	 */
	struct AWeapCamera_C_BPAllowNativeFireWeapon_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapCamera.WeapCamera_C.UserConstructionScript
	 */
	struct AWeapCamera_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapCamera.WeapCamera_C.ServerTookScreenshot
	 */
	struct AWeapCamera_C_ServerTookScreenshot_Params
	{
	public:
		bool                                                       bUsingFlash;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapCamera.WeapCamera_C.NetTookScreenshot
	 */
	struct AWeapCamera_C_NetTookScreenshot_Params
	{
	public:
		bool                                                       bUsingFlash;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapCamera.WeapCamera_C.ExecuteUbergraph_WeapCamera
	 */
	struct AWeapCamera_C_ExecuteUbergraph_WeapCamera_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
