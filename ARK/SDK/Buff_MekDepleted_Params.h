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
	 * Function Buff_MekDepleted.Buff_MekDepleted_C.BuffTickServer
	 */
	struct ABuff_MekDepleted_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KPD3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_MekDepleted.Buff_MekDepleted_C.BPCustomAllowAddBuff
	 */
	struct ABuff_MekDepleted_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekDepleted.Buff_MekDepleted_C.BPDeactivated
	 */
	struct ABuff_MekDepleted_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekDepleted.Buff_MekDepleted_C.BPSetupForInstigator
	 */
	struct ABuff_MekDepleted_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekDepleted.Buff_MekDepleted_C.UserConstructionScript
	 */
	struct ABuff_MekDepleted_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_MekDepleted.Buff_MekDepleted_C.DepleteMek__FinishedFunc
	 */
	struct ABuff_MekDepleted_C_DepleteMek__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_MekDepleted.Buff_MekDepleted_C.DepleteMek__UpdateFunc
	 */
	struct ABuff_MekDepleted_C_DepleteMek__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_MekDepleted.Buff_MekDepleted_C.MultiStartDepleteMek
	 */
	struct ABuff_MekDepleted_C_MultiStartDepleteMek_Params
	{	};

	/**
	 * Function Buff_MekDepleted.Buff_MekDepleted_C.AutoDepleteMek
	 */
	struct ABuff_MekDepleted_C_AutoDepleteMek_Params
	{	};

	/**
	 * Function Buff_MekDepleted.Buff_MekDepleted_C.ExecuteUbergraph_Buff_MekDepleted
	 */
	struct ABuff_MekDepleted_C_ExecuteUbergraph_Buff_MekDepleted_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
