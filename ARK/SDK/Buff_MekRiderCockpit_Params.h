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
	 * Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.BPCustomAllowAddBuff
	 */
	struct ABuff_MekRiderCockpit_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.UserConstructionScript
	 */
	struct ABuff_MekRiderCockpit_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.BuffTickServer
	 */
	struct ABuff_MekRiderCockpit_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.DeactivateIfNotRidingMek
	 */
	struct ABuff_MekRiderCockpit_C_DeactivateIfNotRidingMek_Params
	{	};

	/**
	 * Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.BPDeactivated
	 */
	struct ABuff_MekRiderCockpit_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.ReceiveBeginPlay
	 */
	struct ABuff_MekRiderCockpit_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.NotifyMekOutOfFuel
	 */
	struct ABuff_MekRiderCockpit_C_NotifyMekOutOfFuel_Params
	{	};

	/**
	 * Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.NotifyMekHasFuel
	 */
	struct ABuff_MekRiderCockpit_C_NotifyMekHasFuel_Params
	{	};

	/**
	 * Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.ClientSetUnderwaterBreathing
	 */
	struct ABuff_MekRiderCockpit_C_ClientSetUnderwaterBreathing_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.SetUnderwaterBreathing
	 */
	struct ABuff_MekRiderCockpit_C_SetUnderwaterBreathing_Params
	{
	public:
		bool                                                       Allowed;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.ExecuteUbergraph_Buff_MekRiderCockpit
	 */
	struct ABuff_MekRiderCockpit_C_ExecuteUbergraph_Buff_MekRiderCockpit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
