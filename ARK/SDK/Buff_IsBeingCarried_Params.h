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
	 * Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.BPSetupForInstigator
	 */
	struct ABuff_IsBeingCarried_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.CanGrabWaterDino
	 */
	struct ABuff_IsBeingCarried_C_CanGrabWaterDino_Params
	{
	public:
		class APrimalDinoCharacter*                                DinoRef;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I8JA[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.CheckAttachmentAndEvaluate
	 */
	struct ABuff_IsBeingCarried_C_CheckAttachmentAndEvaluate_Params
	{	};

	/**
	 * Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.BuffTickClient
	 */
	struct ABuff_IsBeingCarried_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.BuffTickServer
	 */
	struct ABuff_IsBeingCarried_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.BPCustomAllowAddBuff
	 */
	struct ABuff_IsBeingCarried_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_75X5[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.BPPreventAddingOtherBuff
	 */
	struct ABuff_IsBeingCarried_C_BPPreventAddingOtherBuff_Params
	{
	public:
		class UClass*                                              anotherBuffClass;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JKVF[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.ReceiveBeginPlay
	 */
	struct ABuff_IsBeingCarried_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.ReceiveEndPlay
	 */
	struct ABuff_IsBeingCarried_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HJBA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.UserConstructionScript
	 */
	struct ABuff_IsBeingCarried_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.ExecuteUbergraph_Buff_IsBeingCarried
	 */
	struct ABuff_IsBeingCarried_C_ExecuteUbergraph_Buff_IsBeingCarried_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
