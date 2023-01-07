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
	 * Function Buff_Freeze.Buff_Freeze_C.BPServerHandleNetExecCommand
	 */
	struct ABuff_Freeze_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Freeze.Buff_Freeze_C.BPPreventFirstPerson
	 */
	struct ABuff_Freeze_C_BPPreventFirstPerson_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Freeze.Buff_Freeze_C.GetBuffPostprocessIntensity
	 */
	struct ABuff_Freeze_C_GetBuffPostprocessIntensity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Freeze.Buff_Freeze_C.BPAdjustStatusValueModification
	 */
	struct ABuff_Freeze_C_BPAdjustStatusValueModification_Params
	{
	public:
		class UPrimalCharacterStatusComponent*                     ForComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EPrimalCharacterStatusValue                                ValueType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I6GS[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InAmount;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              DamageTypeClass;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bManualModification;                                     // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P35E[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Freeze.Buff_Freeze_C.BPCustomAllowAddBuff
	 */
	struct ABuff_Freeze_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Freeze.Buff_Freeze_C.BuffTickClient
	 */
	struct ABuff_Freeze_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Freeze.Buff_Freeze_C.Initialize
	 */
	struct ABuff_Freeze_C_Initialize_Params
	{	};

	/**
	 * Function Buff_Freeze.Buff_Freeze_C.CreateMIC
	 */
	struct ABuff_Freeze_C_CreateMIC_Params
	{	};

	/**
	 * Function Buff_Freeze.Buff_Freeze_C.BuffTickServer
	 */
	struct ABuff_Freeze_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Freeze.Buff_Freeze_C.ApplyFrozenDebuff
	 */
	struct ABuff_Freeze_C_ApplyFrozenDebuff_Params
	{	};

	/**
	 * Function Buff_Freeze.Buff_Freeze_C.AddFreeze
	 */
	struct ABuff_Freeze_C_AddFreeze_Params
	{
	public:
		float                                                      amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Time;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Freeze.Buff_Freeze_C.CheckDeactivateCondition
	 */
	struct ABuff_Freeze_C_CheckDeactivateCondition_Params
	{	};

	/**
	 * Function Buff_Freeze.Buff_Freeze_C.BPActivated
	 */
	struct ABuff_Freeze_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Freeze.Buff_Freeze_C.BPDeactivated
	 */
	struct ABuff_Freeze_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Freeze.Buff_Freeze_C.UserConstructionScript
	 */
	struct ABuff_Freeze_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Freeze.Buff_Freeze_C.ChangeFreezingFX
	 */
	struct ABuff_Freeze_C_ChangeFreezingFX_Params
	{	};

	/**
	 * Function Buff_Freeze.Buff_Freeze_C.MultiExtendBuffTime
	 */
	struct ABuff_Freeze_C_MultiExtendBuffTime_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Freeze.Buff_Freeze_C.MultiCreateFrozenMIC
	 */
	struct ABuff_Freeze_C_MultiCreateFrozenMIC_Params
	{	};

	/**
	 * Function Buff_Freeze.Buff_Freeze_C.MultiAddFreeze
	 */
	struct ABuff_Freeze_C_MultiAddFreeze_Params
	{
	public:
		float                                                      amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Time;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Freeze.Buff_Freeze_C.ReceiveBeginPlay
	 */
	struct ABuff_Freeze_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_Freeze.Buff_Freeze_C.ApplyFrozen
	 */
	struct ABuff_Freeze_C_ApplyFrozen_Params
	{	};

	/**
	 * Function Buff_Freeze.Buff_Freeze_C.ExecuteUbergraph_Buff_Freeze
	 */
	struct ABuff_Freeze_C_ExecuteUbergraph_Buff_Freeze_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
