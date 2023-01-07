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
	 * Function CaveWolf_ZiplineMoveTowardsTarget_TK.CaveWolf_ZiplineMoveTowardsTarget_TK_C.ReceiveTick
	 */
	struct UCaveWolf_ZiplineMoveTowardsTarget_TK_C_ReceiveTick_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NVO1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CaveWolf_ZiplineMoveTowardsTarget_TK.CaveWolf_ZiplineMoveTowardsTarget_TK_C.ReceiveAbort
	 */
	struct UCaveWolf_ZiplineMoveTowardsTarget_TK_C_ReceiveAbort_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_ZiplineMoveTowardsTarget_TK.CaveWolf_ZiplineMoveTowardsTarget_TK_C.ReceiveExecute
	 */
	struct UCaveWolf_ZiplineMoveTowardsTarget_TK_C_ReceiveExecute_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CaveWolf_ZiplineMoveTowardsTarget_TK.CaveWolf_ZiplineMoveTowardsTarget_TK_C.TryToUnblock
	 */
	struct UCaveWolf_ZiplineMoveTowardsTarget_TK_C_TryToUnblock_Params
	{	};

	/**
	 * Function CaveWolf_ZiplineMoveTowardsTarget_TK.CaveWolf_ZiplineMoveTowardsTarget_TK_C.ExecuteUbergraph_CaveWolf_ZiplineMoveTowardsTarget_TK
	 */
	struct UCaveWolf_ZiplineMoveTowardsTarget_TK_C_ExecuteUbergraph_CaveWolf_ZiplineMoveTowardsTarget_TK_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
