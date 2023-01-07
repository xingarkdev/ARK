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
	 * Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPNotifyExperienceGained
	 */
	struct ABuff_NamelessPreggers_C_BPNotifyExperienceGained_Params
	{
	public:
		float                                                      ActualExpGained;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ExpectedExpGain;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EXPType                                                    ExpTypeGained;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPSetupForInstigator
	 */
	struct ABuff_NamelessPreggers_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPDeactivated
	 */
	struct ABuff_NamelessPreggers_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPModifyPlayerBoneModifiers
	 */
	struct ABuff_NamelessPreggers_C_BPModifyPlayerBoneModifiers_Params
	{
	public:
		TArray<struct FBoneModifier>                               InBoneModifiers;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FBoneModifier>                               ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.HandleBuffAnimNotify
	 */
	struct ABuff_NamelessPreggers_C_HandleBuffAnimNotify_Params
	{
	public:
		class FName                                                AnimNotifyName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              AnimNotifyStringData;                                    // 0x0008(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.UpdateBuffPersistentData
	 */
	struct ABuff_NamelessPreggers_C_UpdateBuffPersistentData_Params
	{	};

	/**
	 * Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.ReceiveBeginPlay
	 */
	struct ABuff_NamelessPreggers_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BuffTickClient
	 */
	struct ABuff_NamelessPreggers_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPDrawBuffStatusHUD
	 */
	struct ABuff_NamelessPreggers_C_BPDrawBuffStatusHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      XPos;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      YPos;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ScaleMult;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8BVO[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BuffTickServer
	 */
	struct ABuff_NamelessPreggers_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.UserConstructionScript
	 */
	struct ABuff_NamelessPreggers_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.Multi_SetupBaby
	 */
	struct ABuff_NamelessPreggers_C_Multi_SetupBaby_Params
	{	};

	/**
	 * Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.ExecuteUbergraph_Buff_NamelessPreggers
	 */
	struct ABuff_NamelessPreggers_C_ExecuteUbergraph_Buff_NamelessPreggers_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
