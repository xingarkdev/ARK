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
	 * Function Buff_InsideMekShield.Buff_InsideMekShield_C.BPOverrideBuffToGiveOnDeactivation
	 */
	struct ABuff_InsideMekShield_C_BPOverrideBuffToGiveOnDeactivation_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_InsideMekShield.Buff_InsideMekShield_C.BuffTickClient
	 */
	struct ABuff_InsideMekShield_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_81D7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_InsideMekShield.Buff_InsideMekShield_C.BPDeactivated
	 */
	struct ABuff_InsideMekShield_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_InsideMekShield.Buff_InsideMekShield_C.BPActivated
	 */
	struct ABuff_InsideMekShield_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_InsideMekShield.Buff_InsideMekShield_C.BuffTickServer
	 */
	struct ABuff_InsideMekShield_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2ULP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_InsideMekShield.Buff_InsideMekShield_C.GetBuffDescription
	 */
	struct ABuff_InsideMekShield_C_GetBuffDescription_Params
	{
	public:
		struct FStatusValueModifierDescription                     ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Buff_InsideMekShield.Buff_InsideMekShield_C.GetOwnerMek
	 */
	struct ABuff_InsideMekShield_C_GetOwnerMek_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsFriendly;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_67F8[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AMek_Character_BP_C*                                 Mek;                                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_InsideMekShield.Buff_InsideMekShield_C.IsOwnerMek
	 */
	struct ABuff_InsideMekShield_C_IsOwnerMek_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_InsideMekShield.Buff_InsideMekShield_C.HideBuffFromHUD
	 */
	struct ABuff_InsideMekShield_C_HideBuffFromHUD_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_InsideMekShield.Buff_InsideMekShield_C.UserConstructionScript
	 */
	struct ABuff_InsideMekShield_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_InsideMekShield.Buff_InsideMekShield_C.ExecuteUbergraph_Buff_InsideMekShield
	 */
	struct ABuff_InsideMekShield_C_ExecuteUbergraph_Buff_InsideMekShield_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
