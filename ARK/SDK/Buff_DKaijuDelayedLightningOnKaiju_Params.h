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
	 * Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.BPActivated
	 */
	struct ABuff_DKaijuDelayedLightningOnKaiju_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.BPDeactivated
	 */
	struct ABuff_DKaijuDelayedLightningOnKaiju_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.BuffTickServer
	 */
	struct ABuff_DKaijuDelayedLightningOnKaiju_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.BPSetupForInstigator
	 */
	struct ABuff_DKaijuDelayedLightningOnKaiju_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.MaybeRotate
	 */
	struct ABuff_DKaijuDelayedLightningOnKaiju_C_MaybeRotate_Params
	{	};

	/**
	 * Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.UserConstructionScript
	 */
	struct ABuff_DKaijuDelayedLightningOnKaiju_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.SetStructure
	 */
	struct ABuff_DKaijuDelayedLightningOnKaiju_C_SetStructure_Params
	{
	public:
		class APrimalStructure*                                    NewParam;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.Client_DeactivateParticle
	 */
	struct ABuff_DKaijuDelayedLightningOnKaiju_C_Client_DeactivateParticle_Params
	{	};

	/**
	 * Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.ReceiveBeginPlay
	 */
	struct ABuff_DKaijuDelayedLightningOnKaiju_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.ReceiveTick
	 */
	struct ABuff_DKaijuDelayedLightningOnKaiju_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.ExecuteUbergraph_Buff_DKaijuDelayedLightningOnKaiju
	 */
	struct ABuff_DKaijuDelayedLightningOnKaiju_C_ExecuteUbergraph_Buff_DKaijuDelayedLightningOnKaiju_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
