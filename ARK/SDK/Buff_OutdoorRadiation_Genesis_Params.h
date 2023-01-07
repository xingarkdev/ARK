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
	 * Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.BPPreventAddingOtherBuff
	 */
	struct ABuff_OutdoorRadiation_Genesis_C_BPPreventAddingOtherBuff_Params
	{
	public:
		class UClass*                                              anotherBuffClass;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0PN6[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.Get Max Health
	 */
	struct ABuff_OutdoorRadiation_Genesis_C_GetMaxHealth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WVHA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.GetDamageMitigationArmorEquippedCount
	 */
	struct ABuff_OutdoorRadiation_Genesis_C_GetDamageMitigationArmorEquippedCount_Params
	{
	public:
		int32_t                                                    NumItemsEquipped;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.DamageDurability
	 */
	struct ABuff_OutdoorRadiation_Genesis_C_DamageDurability_Params
	{
	public:
		class UPrimalItem*                                         Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.RemoveBuffs
	 */
	struct ABuff_OutdoorRadiation_Genesis_C_RemoveBuffs_Params
	{	};

	/**
	 * Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.BPActivated
	 */
	struct ABuff_OutdoorRadiation_Genesis_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.BuffTickServer
	 */
	struct ABuff_OutdoorRadiation_Genesis_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.UserConstructionScript
	 */
	struct ABuff_OutdoorRadiation_Genesis_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.LocalParticleFadeout__FinishedFunc
	 */
	struct ABuff_OutdoorRadiation_Genesis_C_LocalParticleFadeout__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.LocalParticleFadeout__UpdateFunc
	 */
	struct ABuff_OutdoorRadiation_Genesis_C_LocalParticleFadeout__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.ReceiveBeginPlay
	 */
	struct ABuff_OutdoorRadiation_Genesis_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.BPDeactivated
	 */
	struct ABuff_OutdoorRadiation_Genesis_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.ExecuteUbergraph_Buff_OutdoorRadiation_Genesis
	 */
	struct ABuff_OutdoorRadiation_Genesis_C_ExecuteUbergraph_Buff_OutdoorRadiation_Genesis_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
