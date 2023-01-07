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
	 * Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.OnRep_guy
	 */
	struct ABuff_DKaijuLightningNoTarget_C_OnRep_guy_Params
	{	};

	/**
	 * Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.BPDeactivated
	 */
	struct ABuff_DKaijuLightningNoTarget_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XV81[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.BuffTickServer
	 */
	struct ABuff_DKaijuLightningNoTarget_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.BPSetupForInstigator
	 */
	struct ABuff_DKaijuLightningNoTarget_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.MaybeRotate
	 */
	struct ABuff_DKaijuLightningNoTarget_C_MaybeRotate_Params
	{	};

	/**
	 * Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.UserConstructionScript
	 */
	struct ABuff_DKaijuLightningNoTarget_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.SetStructure
	 */
	struct ABuff_DKaijuLightningNoTarget_C_SetStructure_Params
	{
	public:
		class APrimalStructure*                                    NewParam;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.Client_DeactivateParticle
	 */
	struct ABuff_DKaijuLightningNoTarget_C_Client_DeactivateParticle_Params
	{	};

	/**
	 * Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.ReceiveBeginPlay
	 */
	struct ABuff_DKaijuLightningNoTarget_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.ExecuteUbergraph_Buff_DKaijuLightningNoTarget
	 */
	struct ABuff_DKaijuLightningNoTarget_C_ExecuteUbergraph_Buff_DKaijuLightningNoTarget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
