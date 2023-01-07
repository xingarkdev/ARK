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
	 * Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.UpdateBuffPersistentData
	 */
	struct ABuff_Lamprey_Poison_C_UpdateBuffPersistentData_Params
	{	};

	/**
	 * Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.ReceiveBeginPlay
	 */
	struct ABuff_Lamprey_Poison_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.BuffTickClient
	 */
	struct ABuff_Lamprey_Poison_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OQ1O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.BPDrawBuffStatusHUD
	 */
	struct ABuff_Lamprey_Poison_C_BPDrawBuffStatusHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      XPos;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      YPos;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ScaleMult;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.BuffTickServer
	 */
	struct ABuff_Lamprey_Poison_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZW3X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.UserConstructionScript
	 */
	struct ABuff_Lamprey_Poison_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.ExecuteUbergraph_Buff_Lamprey_Poison
	 */
	struct ABuff_Lamprey_Poison_C_ExecuteUbergraph_Buff_Lamprey_Poison_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
