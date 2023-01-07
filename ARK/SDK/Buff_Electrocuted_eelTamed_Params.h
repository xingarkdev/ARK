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
	 * Function Buff_Electrocuted_eelTamed.Buff_Electrocuted_eelTamed_C.BPPreSetupForInstigator
	 */
	struct ABuff_Electrocuted_eelTamed_C_BPPreSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Electrocuted_eelTamed.Buff_Electrocuted_eelTamed_C.BPSetupForInstigator
	 */
	struct ABuff_Electrocuted_eelTamed_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Electrocuted_eelTamed.Buff_Electrocuted_eelTamed_C.BPActivated
	 */
	struct ABuff_Electrocuted_eelTamed_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Electrocuted_eelTamed.Buff_Electrocuted_eelTamed_C.BPCustomAllowAddBuff
	 */
	struct ABuff_Electrocuted_eelTamed_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GQKQ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Electrocuted_eelTamed.Buff_Electrocuted_eelTamed_C.BPPreventAddingOtherBuff
	 */
	struct ABuff_Electrocuted_eelTamed_C_BPPreventAddingOtherBuff_Params
	{
	public:
		class UClass*                                              anotherBuffClass;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AD6G[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Electrocuted_eelTamed.Buff_Electrocuted_eelTamed_C.BPDeactivated
	 */
	struct ABuff_Electrocuted_eelTamed_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Electrocuted_eelTamed.Buff_Electrocuted_eelTamed_C.UserConstructionScript
	 */
	struct ABuff_Electrocuted_eelTamed_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Electrocuted_eelTamed.Buff_Electrocuted_eelTamed_C.ExecuteUbergraph_Buff_Electrocuted_eelTamed
	 */
	struct ABuff_Electrocuted_eelTamed_C_ExecuteUbergraph_Buff_Electrocuted_eelTamed_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
