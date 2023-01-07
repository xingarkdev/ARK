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
	 * Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPPreventOnStartJump
	 */
	struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_BPPreventOnStartJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.Struggle
	 */
	struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_Struggle_Params
	{	};

	/**
	 * Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.Validate
	 */
	struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_Validate_Params
	{	};

	/**
	 * Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.SetIsHostileBuff
	 */
	struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_SetIsHostileBuff_Params
	{
	public:
		bool                                                       NewSetting;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.GetBuffDescription
	 */
	struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_GetBuffDescription_Params
	{
	public:
		struct FStatusValueModifierDescription                     ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.UpdateStruggle
	 */
	struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_UpdateStruggle_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPActivated
	 */
	struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPGetHUDElements
	 */
	struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BuffTickServer
	 */
	struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPHandleOnStartAltFire
	 */
	struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_BPHandleOnStartAltFire_Params
	{
	public:
		bool                                                       bFromGamepad;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.TryStruggle
	 */
	struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_TryStruggle_Params
	{	};

	/**
	 * Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.PreventJump
	 */
	struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_PreventJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPHandleOnStartFire
	 */
	struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_BPHandleOnStartFire_Params
	{
	public:
		bool                                                       bFromGamepad;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.GetBuffPostprocessIntensity
	 */
	struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_GetBuffPostprocessIntensity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPDeactivated
	 */
	struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPSetupForInstigator
	 */
	struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.UserConstructionScript
	 */
	struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.ServerRequestStruggle
	 */
	struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_ServerRequestStruggle_Params
	{	};

	/**
	 * Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.ClientOnStruggle
	 */
	struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_ClientOnStruggle_Params
	{	};

	/**
	 * Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.ExecuteUbergraph_Buff_TrappedTarget_VenusFlyTrap_BP
	 */
	struct ABuff_TrappedTarget_VenusFlyTrap_BP_C_ExecuteUbergraph_Buff_TrappedTarget_VenusFlyTrap_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
