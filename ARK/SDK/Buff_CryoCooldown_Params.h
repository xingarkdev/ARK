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
	 * Function Buff_CryoCooldown.Buff_CryoCooldown_C.BPActivated
	 */
	struct ABuff_CryoCooldown_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_CryoCooldown.Buff_CryoCooldown_C.UpdateBuffPersistentData
	 */
	struct ABuff_CryoCooldown_C_UpdateBuffPersistentData_Params
	{	};

	/**
	 * Function Buff_CryoCooldown.Buff_CryoCooldown_C.ReceiveBeginPlay
	 */
	struct ABuff_CryoCooldown_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_CryoCooldown.Buff_CryoCooldown_C.BPDrawBuffStatusHUD
	 */
	struct ABuff_CryoCooldown_C_BPDrawBuffStatusHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      XPos;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      YPos;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ScaleMult;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_CryoCooldown.Buff_CryoCooldown_C.BuffTickServer
	 */
	struct ABuff_CryoCooldown_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_CryoCooldown.Buff_CryoCooldown_C.BuffTickClient
	 */
	struct ABuff_CryoCooldown_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_CryoCooldown.Buff_CryoCooldown_C.UserConstructionScript
	 */
	struct ABuff_CryoCooldown_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_CryoCooldown.Buff_CryoCooldown_C.ExecuteUbergraph_Buff_CryoCooldown
	 */
	struct ABuff_CryoCooldown_C_ExecuteUbergraph_Buff_CryoCooldown_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
