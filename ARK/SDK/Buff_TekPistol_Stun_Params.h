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
	 * Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.BuffTickClient
	 */
	struct ABuff_TekPistol_Stun_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B96J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.CanApplyToTarget
	 */
	struct ABuff_TekPistol_Stun_C_CanApplyToTarget_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Allowed;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QDO3[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.BPSetupForInstigator
	 */
	struct ABuff_TekPistol_Stun_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.CanBeViewed
	 */
	struct ABuff_TekPistol_Stun_C_CanBeViewed_Params
	{
	public:
		class AActor*                                              ByActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.GetPointCustomData
	 */
	struct ABuff_TekPistol_Stun_C_GetPointCustomData_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.GetPointOfInterestData
	 */
	struct ABuff_TekPistol_Stun_C_GetPointOfInterestData_Params
	{
	public:
		struct FPointOfInterestData                                ReturnValue;                                             // 0x0000(0x0140)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.BuffTickServer
	 */
	struct ABuff_TekPistol_Stun_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YL8H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.ApplyStunWeight
	 */
	struct ABuff_TekPistol_Stun_C_ApplyStunWeight_Params
	{
	public:
		class AActor*                                              DamageCauser;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.BPCustomAllowAddBuff
	 */
	struct ABuff_TekPistol_Stun_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.BPReactivateWithDamageCauser
	 */
	struct ABuff_TekPistol_Stun_C_BPReactivateWithDamageCauser_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              ForDamageCauser;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.BPActivated
	 */
	struct ABuff_TekPistol_Stun_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.UserConstructionScript
	 */
	struct ABuff_TekPistol_Stun_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.ExecuteUbergraph_Buff_TekPistol_Stun
	 */
	struct ABuff_TekPistol_Stun_C_ExecuteUbergraph_Buff_TekPistol_Stun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
