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
	 * Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.UpdateFX
	 */
	struct ABuff_Zipline_Motorized_C_UpdateFX_Params
	{	};

	/**
	 * Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.BPOverrideWeaponBob
	 */
	struct ABuff_Zipline_Motorized_C_BPOverrideWeaponBob_Params
	{
	public:
		struct FVector                                             InWeaponBob;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.BuffTickClient
	 */
	struct ABuff_Zipline_Motorized_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.Try Refill Gas
	 */
	struct ABuff_Zipline_Motorized_C_TryRefillGas_Params
	{	};

	/**
	 * Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.BPDrawBuffStatusHUD
	 */
	struct ABuff_Zipline_Motorized_C_BPDrawBuffStatusHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      XPos;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      YPos;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ScaleMult;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.GetMotorAndParentItem
	 */
	struct ABuff_Zipline_Motorized_C_GetMotorAndParentItem_Params
	{
	public:
		class UObject*                                             Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalItem*                                         ParentItem;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalItem*                                         MyItemSkin;                                              // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.TickMoveAlongZipline
	 */
	struct ABuff_Zipline_Motorized_C_TickMoveAlongZipline_Params
	{	};

	/**
	 * Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.BPDeactivated
	 */
	struct ABuff_Zipline_Motorized_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.BPSetupForInstigator
	 */
	struct ABuff_Zipline_Motorized_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.UserConstructionScript
	 */
	struct ABuff_Zipline_Motorized_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.ConsumeGasoline
	 */
	struct ABuff_Zipline_Motorized_C_ConsumeGasoline_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.ExecuteUbergraph_Buff_Zipline_Motorized
	 */
	struct ABuff_Zipline_Motorized_C_ExecuteUbergraph_Buff_Zipline_Motorized_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
