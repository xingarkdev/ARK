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
	 * Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.BPCheckPreventInput
	 */
	struct ABuff_RemoteCameraVision_C_BPCheckPreventInput_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.ResetInterference
	 */
	struct ABuff_RemoteCameraVision_C_ResetInterference_Params
	{	};

	/**
	 * Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.StartFade
	 */
	struct ABuff_RemoteCameraVision_C_StartFade_Params
	{
	public:
		bool                                                       FadeIn;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.BPDeactivated
	 */
	struct ABuff_RemoteCameraVision_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.BPForceCameraStyle
	 */
	struct ABuff_RemoteCameraVision_C_BPForceCameraStyle_Params
	{
	public:
		class APrimalCharacter*                                    ForViewTarget;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ECameraStyle                                               ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.BPOverrideTalkerCharacter
	 */
	struct ABuff_RemoteCameraVision_C_BPOverrideTalkerCharacter_Params
	{
	public:
		class APrimalCharacter*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.IsLocalCamera
	 */
	struct ABuff_RemoteCameraVision_C_IsLocalCamera_Params
	{
	public:
		bool                                                       retVal;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.PossessionChangePending
	 */
	struct ABuff_RemoteCameraVision_C_PossessionChangePending_Params
	{
	public:
		class ARemoteCamera_Character_BP_C*                        NewCamera;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.BPOverrideIsNetRelevantFor
	 */
	struct ABuff_RemoteCameraVision_C_BPOverrideIsNetRelevantFor_Params
	{
	public:
		class APlayerController*                                   RealViewer;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Viewer;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             SrcLocation;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.BuffTickClient
	 */
	struct ABuff_RemoteCameraVision_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5OEE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.UserConstructionScript
	 */
	struct ABuff_RemoteCameraVision_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.ExecuteUbergraph_Buff_RemoteCameraVision
	 */
	struct ABuff_RemoteCameraVision_C_ExecuteUbergraph_Buff_RemoteCameraVision_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
