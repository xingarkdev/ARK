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
	 * Function Buff_ScoutVision.Buff_ScoutVision_C.BPSetupForInstigator
	 */
	struct ABuff_ScoutVision_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ScoutVision.Buff_ScoutVision_C.BPGetDebugInfoString
	 */
	struct ABuff_ScoutVision_C_BPGetDebugInfoString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Buff_ScoutVision.Buff_ScoutVision_C.BPOverrideTalkerCharacter
	 */
	struct ABuff_ScoutVision_C_BPOverrideTalkerCharacter_Params
	{
	public:
		class APrimalCharacter*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ScoutVision.Buff_ScoutVision_C.ReceiveBeginPlay
	 */
	struct ABuff_ScoutVision_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_ScoutVision.Buff_ScoutVision_C.IsLocalScout
	 */
	struct ABuff_ScoutVision_C_IsLocalScout_Params
	{
	public:
		bool                                                       retVal;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ScoutVision.Buff_ScoutVision_C.BPIsValidUnStasisCaster
	 */
	struct ABuff_ScoutVision_C_BPIsValidUnStasisCaster_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ScoutVision.Buff_ScoutVision_C.BPOverrideIsNetRelevantFor
	 */
	struct ABuff_ScoutVision_C_BPOverrideIsNetRelevantFor_Params
	{
	public:
		class APlayerController*                                   RealViewer;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Viewer;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             SrcLocation;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ScoutVision.Buff_ScoutVision_C.Scout PossessionChange Pending
	 */
	struct ABuff_ScoutVision_C_ScoutPossessionChangePending_Params
	{
	public:
		class AScout_Character_BP_C*                               Scout;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ScoutVision.Buff_ScoutVision_C.BuffTickClient
	 */
	struct ABuff_ScoutVision_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I486[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ScoutVision.Buff_ScoutVision_C.BPDrawBuffStatusHUD
	 */
	struct ABuff_ScoutVision_C_BPDrawBuffStatusHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      XPos;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      YPos;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ScaleMult;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WZNN[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ScoutVision.Buff_ScoutVision_C.AllowPostProcessEffect
	 */
	struct ABuff_ScoutVision_C_AllowPostProcessEffect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ScoutVision.Buff_ScoutVision_C.UserConstructionScript
	 */
	struct ABuff_ScoutVision_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_ScoutVision.Buff_ScoutVision_C.ReceiveTick
	 */
	struct ABuff_ScoutVision_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ScoutVision.Buff_ScoutVision_C.ExecuteUbergraph_Buff_ScoutVision
	 */
	struct ABuff_ScoutVision_C_ExecuteUbergraph_Buff_ScoutVision_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
